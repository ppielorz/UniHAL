CPPUTEST_HOME = /usr/local/include/cpputest

CFLAGS   += -Wall -Wextra
CFLAGS   += -DUNIT_TESTS
CFLAGS   += -g
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

all: prepare $(TESTS)

$(TESTS): %: bin/%_tests
	@echo "Running $@_tests"
	@bin/$@_tests -c

$(TESTS_BINS): bin/%_tests: objs/%.o objs/%_tests.o
	@echo "Linking $@"
	@g++ $(CFLAGS_COV) $? $(LDFLAGS) $(LDLIBS) -o $@

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
