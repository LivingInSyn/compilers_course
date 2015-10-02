%{
#include <math.h>
#include <stdlib.h>
#include <list>
#include "parser.H"
#include <string.h>
#define YYERROR_VERBOSE   
%}

%union {
   int        val;
   char*      id;
}

%code{
   int yyerror(Parser* p,const char* s);
   int yylex(YYSTYPE*);
}

%pure-parser
%parse-param { Parser* parser }

%token <val> INTEGER TRUE FALSE 
%token <id>  TID
%token TIF TELSE TTHIS TCLAS TEXTDS TNEW TRETURN TINT TBOOL TVOID TWHILE TTRUE TFALSE TASN TSEP TCOM TNOT TCALL TBRAKPAIR TOBRAK TCBRAK TOPAREN TCPAREN TOCURLY TCCURLY
%left TOR
%left TAND
%left TLTH TMTH TEQV TNEQ TLEQ TGEQ 
%left TADD TSUB
%left TTIMES TDIV
%token TBAD
%%

Top:
;
%%
