OFILES= bins.o
OFILES1= bSort.o misc.o
CPATH=
LLVMASY=$(CPATH)llvm-as-3.6
LLVMOPT=$(CPATH)opt-3.6
LLVMLC=$(CPATH)llc-3.6
AS=$(CPATH)clang-3.6
LD=ld
CC=$(CPATH)clang++-3.6
C=$(CPATH)clang-3.6
LD=$(CPATH)clang++-3.6
CXXFLAGS=`$(CPATH)llvm-config-3.6 --cppflags`
LDFLAGS=`$(CPATH)llvm-config-3.6 --ldflags --libs --system-libs engine`

LIBS=

all: bins bSort

bins: $(OFILES)
	$(LD) $(OFILES) $(LIBS) -o $@

bSort: $(OFILES1)
	$(LD) $(OFILES1) $(LIBS) -o $@


%.o : %.s
	$(AS) -c $< -o $@

%.s : %.bc
	$(LLVMLC) $< -o $@

%.bc : %.llvm
	$(LLVMASY) $< -o $@

%.o %.d : %.C
	$(CC) -g -c -x c++ $(CXXFLAGS) $< -MD 

%.o %.d : %.c
	$(C) -g -c $(CXXFLAGS) $< -MD

clean:
	rm -rf *.o *.s *.bc bins bSort *~
