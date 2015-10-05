OFILES = main.o parser.o grammar.o scanner.o 
LEX = flex
BISON = bison
CPATH=
CC = $(CPATH)clang++-3.6
LD = $(CPATH)clang++-3.6
CXXFLAGS=`$(CPATH)llvm-config-3.6 --cppflags`  -std=c++11 -Wno-deprecated-register
LDFLAGS=`$(CPATH)llvm-config-3.6 --ldflags --libs --system-libs engine`

all: parse scan nightfury

scan: scanner.c

parse: grammar.c grammar.h

grammar.c grammar.h: grammar.y 
	$(BISON) --debug -d $< -o grammar.c

scanner.c: scanner.lex grammar.h
	$(LEX) --bison-bridge -o $@ $<

nightfury: $(OFILES)
	$(LD) -g $(OFILES) $(LDFLAGS) -o $@

%.o %.d : %.C
	$(CC) -g -c -x c++ $(CXXFLAGS) $< -MD 

%.o %.d : %.c
	$(CC) -g -c -x c++ $(CXXFLAGS) $< -MD

clean: 
	rm -rf *.o *~ grammar.c grammar.h scanner.c *.d nightfury

include $(addsuffix .d ,$(basename $(OFILES)))
