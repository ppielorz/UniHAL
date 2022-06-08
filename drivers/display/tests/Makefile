UNIHAL_DIR = ../../..
UNIHAL_UTILS_DIR = ../../../utils
CPPUTEST_HOME = /usr/local/include/cpputest

CFLAGS   += -Wall -Wextra
CFLAGS   += -DUNIT_TESTS
CFLAGS   += -g
CFLAGS   += -I $(UNIHAL_DIR)
CFLAGS   += -I $(UNIHAL_UTILS_DIR)
CFLAGS   += -I $(UNIHAL_UTILS_DIR)/tools
CFLAGS   += -I $(UNIHAL_DIR)/gfx/monogfx
CFLAGS   += -I ..
CFLAGS   += -I$(CPPUTEST_HOME)/include
CFLAGS_COV = $(CFLAGS) -fprofile-arcs -ftest-coverage
LDFLAGS  += -L $(CPPUTEST_HOME)/lib

LDLIBS    += -lCppUTest
LDLIBS    += -lCppUTestExt

TESTS = $(patsubst %_tests.cpp, %, $(wildcard *_tests.cpp))
TESTS_BINS = $(patsubst %_tests.cpp, bin/%_tests, $(wildcard *_tests.cpp))
TESTS_OBJS = $(patsubst %.cpp, objs/%.o, $(wildcard *_tests.cpp))
TESTED_OBJS = $(patsubst ../%.c, objs/%.o, $(wildcard ../*.c))
UTILS_OBJS = $(patsubst $(UNIHAL_UTILS_DIR)/%.c, objs/%.o, $(wildcard $(UNIHAL_UTILS_DIR)/*.c))
UTILS_TOOLS_OBJS = $(patsubst $(UNIHAL_UTILS_DIR)/tools/%.cpp, objs/%.o, $(wildcard $(UNIHAL_UTILS_DIR)/tools/*.cpp))


all: prepare $(TESTS)

$(TESTS): %: bin/%_tests
	@echo "Running $@_tests"
	@bin/$@_tests -c

$(TESTS_BINS): bin/%_tests: objs/%.o objs/%_tests.o objs/unihal_mocks.o $(UTILS_OBJS) $(UTILS_TOOLS_OBJS) 
	@echo "Linking $@"
	@g++ $(CFLAGS_COV) $? $(LDFLAGS) $(LDLIBS) -o $@

objs/unihal_mocks.o: $(UNIHAL_DIR)/implementations/unihal_mocks.cpp
	@echo "Building $@"
	@g++ $(CFLAGS) -c $^ -o $@

$(UTILS_TOOLS_OBJS): objs/%.o: $(UNIHAL_UTILS_DIR)/tools/%.cpp
	@echo "Building $@"
	@g++ $(CFLAGS) -c $< -o $@

$(UTILS_OBJS): objs/%.o: $(UNIHAL_UTILS_DIR)/%.c
	@echo "Building $@"
	@g++ $(CFLAGS) -c $< -o $@

$(TESTS_OBJS): objs/%.o : %.cpp
	@echo "Building $@"
	@g++ $(CFLAGS) -c $< -o $@

$(TESTED_OBJS): objs/%.o : ../%.c
	@echo "Building $@"
	@g++ $(CFLAGS_COV) -c $< -o $@

prepare:
	@mkdir -p bin
	@mkdir -p objs

clean:
	@echo "Clean"
	@$(RM) -r bin
	@$(RM) -r objs
	@$(RM) *.gcno
	@$(RM) *.gcda
