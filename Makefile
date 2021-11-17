##
# Project Title
#
# @file
# @version 0.1
#
# Imperas Stuff
ifndef IMPERAS_HOME
  IMPERAS_ERROR := $(error "IMPERAS_HOME not defined, please setup Imperas/OVP environment")
endif
IMPERAS_HOME := $(shell getpath.exe "$(IMPERAS_HOME)")
include $(IMPERAS_HOME)/bin/Makefile.include

CROSS?=RISCV32

-include $(IMPERAS_HOME)/lib/$(IMPERAS_ARCH)/CrossCompiler/$(CROSS).makefile.include
ifeq ($($(CROSS)_CC),)
    IMPERAS_ERROR := $(error "Please install the toolchain to support $(CROSS) ")
endif

# Source files
APP 		= app
MAIN_OBJ	= app.o
APP0_OBJ	= fibonacci.o
APP1_OBJ	= factorial.o
APP2_OBJ	= bubble_sort.o
APP3_OBJ	= prime.o

EXE = $(APP).$(CROSS).elf
DUMP = $(patsubst %.elf, %.dump, $(EXE))

# Compilation variables
$(MAIN_OBJ)	: OPTIMIZATION := -O0
$(APP0_OBJ) : OPTIMIZATION := -O0 #fibonacci
$(APP1_OBJ) : OPTIMIZATION := -O0 #factorial
$(APP2_OBJ)	: OPTIMIZATION := -O0 #bubble_sort
$(APP3_OBJ)	: OPTIMIZATION := -O2 #prime

#OBJ_FILES= $(wildcard *.o)
OBJ_FILES = $(MAIN_OBJ) $(APP0_OBJ) $(APP1_OBJ) $(APP2_OBJ) $(APP3_OBJ)
SRC_FILES = $(patsubst %.o, %.c, $(OBJ_FILES))

all: $(EXE) $(DUMP)

%.dump: %.elf
	$(V)  echo "# Dump $<"
	$(V)  $(IMPERAS_OBJDUMP) -d $< > $@

%.$(CROSS).elf: $(OBJ_FILES)
	$(V)  echo "# Linking $@"
	$(V)  $(IMPERAS_LINK) -o $@ $^ $(IMPERAS_LDFLAGS) -lm

%.o: %.c
	$(V)  echo "# Compiling $< $(OPTIMIZATION)"
	$(V)  $(IMPERAS_CC) -Wall -g -c -o $@ $< $(OPTIMIZATION)

clean:
	-rm -f *.elf *.o *.dump

realclean: clean
	-rm -f *.log



# end
