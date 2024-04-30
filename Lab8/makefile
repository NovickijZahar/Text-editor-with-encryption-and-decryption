# List all object files here:
OBJECTS      = Lab8.o

# List all compiler options here:
# For maximum debug capacities no optimalisation is used:
GCC_OPTIONS  = -mshort 
# e.g. optimize for minimal memory usage:
#GCC_OPTIONS = -mshort -Os -fomit-frame-pointer
# e.g. optimize for maximum speed:
#GCC_OPTIONS = -mshort -O3 -fomit-frame-pointer

LDSCRIPT     = 'C:/Program Files (x86)/THRSim11/examples/7SegmentsDisplay/evb.ld'
LD_OPTIONS   = -mshort 
AS_OPTIONS   = 

GCCBINDIR    = C:/Program Files (x86)/THRSim11/gcc/bin
UTILSDIR     = C:/Program Files (x86)/THRSim11/utils
OBJCOPY      = $(GCCBINDIR)/m6811-elf-objcopy.exe
GCC          = $(GCCBINDIR)/m6811-elf-gcc.exe
AS           = $(GCCBINDIR)/m6811-elf-as.exe
RM           = $(UTILSDIR)/rm.exe
MAKE         = $(UTILSDIR)/make.exe

.PHONY : all
all : a.s19 a.out

.PHONY : clean
clean :
	$(RM) -f $(OBJECTS) a.s19 a.out

.PHONY : build
build :
	$(MAKE) clean
	$(MAKE)

a.s19 : a.out
	$(OBJCOPY) -O srec a.out a.s19

a.out : $(SCRIPT) $(OBJECTS)
	$(GCC) -m68hc11 $(LD_OPTIONS) -T $(LDSCRIPT) $(OBJECTS)

%.o : %.c
	$(GCC) -g -c -m68hc11 -Wall $(GCC_OPTIONS) $<

%.o : %.cpp
	$(GCC) -g -c -m68hc11 -Wall $(GCC_OPTIONS) $<

%.o : %.s
	$(AS) --gdwarf2 -m68hc11 $(AS_OPTIONS) -o $*.o $<


