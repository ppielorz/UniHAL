CPPUTEST_HOME = /usr/local/include/cpputest

CFLAGS   += -Wall -Wextra
CFLAGS   += -DUNIT_TESTS
CFLAGS   += -g
CFLAGS   += -I ..
CFLAGS   += -I$(CPPUTEST_HOME)/include
LDFLAGS  += -L $(CPPUTEST_HOME)/lib

LDLIBS    += -lCppUTest
LDLIBS    += -lCppUTestExt

FONTS_OBJS = $(patsubst ../fonts/%.c, objs/%.o, $(wildcard ../fonts/*.c))

all: prepare bin/monogfx_printer

bin/monogfx_printer: $(FONTS_OBJS) objs/libbmp.o objs/monogfx_printer.o objs/monogfx.o
	@echo "Linking $@"
	@g++ $(CFLAGS) $^ $(LDFLAGS) $(LDLIBS) -o $@

$(FONTS_OBJS): objs/%.o: ../fonts/%.c
	@echo "Building $@"
	@gcc $(CFLAGS) -c $< -o $@

objs/monogfx.o: ../monogfx.c
	@echo "Building $@"
	@gcc $(CFLAGS) -c $< -o $@

objs/libbmp.o: libbmp.c
	@echo "Building $@"
	@gcc $(CFLAGS) -c $< -o $@

objs/monogfx_printer.o: monogfx_printer.c
	@echo "Building $@"
	@gcc $(CFLAGS) -c $< -o $@


prepare:
	@mkdir -p bin
	@mkdir -p objs

clean:
	@echo "Clean"
	@$(RM) -r bin
	@$(RM) -r objs
	@$(RM) *.gcno
	@$(RM) *.gcda
	@$(RM) *.bmp
