
#ifndef target
#(error Target is not set)
#endif

#include ../targets/$(target)

DISTRIBUTION_DIR = ../../../../distribution
VERIFICATION_DIR = ../../../../verification

ifndef target
    target = $(shell uname -m)
    $(info No target was set, defaulting to $(target).)
endif

include $(DISTRIBUTION_DIR)/etc/targets/$(target)

CFLAGS   += -Wall -Wno-unused-variable
CFLAGS   += -I $(DISTRIBUTION_DIR)/inc/ 
LDFLAGS  += -L /usr/lib/

PWD = pwd

LIB_NAME = monogfx
LIBFILE = $(DISTRIBUTION_DIR)/lib/$(target)/lib$(LIB_NAME).a

srcs := $(wildcard *.c)
objs = $(patsubst %.c,objs/$(target)/%.o,$(srcs))
deps = $(patsubst %.c,objs/$(target)/%.d,$(srcs))

ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

#.PHONY: clean tests coverage
all: ${LIBFILE} tests

tests:
	$(MAKE) -C $(VERIFICATION_DIR)/proprietary/utils/ tests
#make -f $(VERIFICATION_DIR)/proprietary/utils/Makefile tests

${LIBFILE}: ${objs} 
	rm -f $@
	echo "Creating Lib: $(notdir ${LIBFILE})"
	@mkdir -p $(@D)
	$(AR) qc $@ ${objs}

clean:
	$(RM) -r objs/$(target)

distclean: clean
	$(RM) -f $(LIBFILE) 

objs/$(target)/%.o : %.c
	@mkdir -p $(@D)
	$(COMPILE.c) $< -o $@
	$(COMPILE.c) -MM $< | sed 's,^.*\.o,$(basename $@).o,g' > $(basename $@).d
