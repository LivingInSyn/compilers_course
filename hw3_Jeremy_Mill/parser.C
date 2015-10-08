#include "parser.H"
#include <iostream>
#include <iomanip>

Parser::Parser() {
  _isGood = false;
}
Parser::~Parser() {}

void Parser::run(const char* fn)
{
   extern int yyparse(Parser*);
   extern FILE* yyin;
   extern int yydebug;
   yydebug = 1;
   if (fn!=0) 
      yyin = fopen(fn,"r");
   yyparse(this);
}

extern "C" int yywrap()
{  /* This is to _chain_ scanning several files */
   return 1;
}

int yyerror(Parser* p,const char* s)
{
   std::cerr << s << std::endl;
   return 0;
}

