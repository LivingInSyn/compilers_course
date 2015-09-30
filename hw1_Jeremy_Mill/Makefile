OFILES= main.o scanner.o grammar.o parser.o
CPATH=
LEX = flex
BISON = bison
LLVMASY=$(CPATH)llvm-as-3.6
LLVMOPT=$(CPATH)opt-3.6
LLVMLC=$(CPATH)llc-3.6
CC=$(CPATH)clang++-3.6
LD = $(CPATH)clang++-3.6
CXXFLAGS=`$(CPATH)llvm-config-3.6 --cppflags` -std=c++11 -Wno-deprecated-register
LDFLAGS=`$(CPATH)llvm-config-3.6 --ldflags --system-libs --libs engine`

AS=as

all: grammar.c nightfury 

grammar.c grammar.h: grammar.y 
	$(BISON) --debug -d $< -o grammar.c

scanner.c: scanner.lex grammar.h
	$(LEX) --bison-bridge -o $@ $<

%.o : %.s
	$(AS) $< -o $@

%.s : %.bc
	$(LLVMLC) $< -o $@

%.bc : %.llvm
	$(LLVMASY) $< -o $@

nightfury: grammar.c grammar.h scanner.c $(OFILES) 
	$(LD) -g $(OFILES) $(LDFLAGS) -o $@

%.o %.d : %.C
	$(CC) -g -c -x c++ $(CXXFLAGS) $< -MD 

%.o %.d : %.c
	$(CC) -g -c -x c++ $(CXXFLAGS) $< -MD

clean: 
	rm -rf *.o *~ scanner.c *.d nightfury grammar.c grammar.h

#include $(addsuffix .d ,$(basename $(OFILES)))
