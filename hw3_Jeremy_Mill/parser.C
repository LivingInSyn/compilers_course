#include "parser.H"
#include "grammar.h"
#include <iostream>
#include <iomanip>

Parser::Parser() {}
Parser::~Parser() {}

using namespace std;
void Parser::run(const char* fn)
{
   extern int yyparse(Parser*);
   extern int yylex(YYSTYPE* yylv);
   extern FILE* yyin;
   extern int yydebug;
   //yydebug = 1;
   
   YYSTYPE val;
   int tok;
   // Write your driver here!
   // We expect you to call yylex to get tokens.
   // Recall that yylex expects, as input, a pointer to a value
   // of type YYSTYPE that would contain the lexeme.
   // YYSTYPE is the type of the union declared in the grammar file. 
   // For instance, val.val would be of type int while val.id would be
   // of type char*.
   
   do
   {
       tok = yylex(&val);
       //printf("%d\n",tok);
       if(tok != 0) {
        if(tok == INTEGER) {
                printf("INTEGER(%d)\n",val.val);
        }
        else if(tok == TID) {
                printf("ID(%s)\n",val.id);
        }
        else {
                               
                switch(tok)
                {
                        case TWHILE:
                                printf("WHILE\n");
                                break;
                        case TIF:
                                printf("IF\n");
                                break;
                        case TRUE:
                                printf("TRUE\n");
                                break;
                        case FALSE:
                                printf("FALSE\n");
                                break;
                        case TELSE:
                                printf("ELSE\n");
                                break;
                        case TTHIS:
                                printf("THIS\n");
                                break;
                        case TCLAS:
                                printf("CLASS\n");
                                break;
                        case TEXTDS:
                                printf("EXTENDS\n");
                                break;
                        case TNEW:
                                printf("NEW\n");
                                break;
                        case TRETURN:
                                printf("RETURN\n");
                                break;
                        case TBOOL:
                                printf("BOOL\n");
                                break;
                        case TVOID:
                                printf("VOID\n");
                                break;
                        case TTRUE:
                                printf("TRUE\n");
                                break;
                        case TFALSE:
                                printf("FALSE\n");
                                break;
                        case TASN:
                                printf("=\n");
                                break;
                        case TSEP:
                                printf(";\n");
                                break;
                        case TCOM:
                                printf(",\n");
                                break;
                        case TNOT:
                                printf("!\n");
                                break;
                        case TCALL:
                                printf(".\n");
                                break;
                        case TBRAKPAIR:
                                printf("[]\n");
                                break;
                        case TOBRAK:
                                printf("[\n");
                                break;
                        case TCBRAK:
                                printf("]\n");
                                break;
                        case TOPAREN:
                                printf("(\n");
                                break;
                        case TCPAREN:
                                printf(")\n");
                                break;
                        case TOCURLY:
                                printf("{\n");
                                break;
                        case TCCURLY:
                                printf("}\n");
                                break;
                        case TOR:
                                printf("||\n");
                                break;
                        case TAND:
                                printf("&&\n");
                                break;
                        case TLTH:
                                printf("<\n");
                                break;
                        case TMTH:
                                printf(">\n");
                                break;
                        case TEQV:
                                printf("==\n");
                                break;
                        case TNEQ:
                                printf("!=\n");
                                break;
                        case TLEQ:
                                printf("<=\n");
                                break;
                        case TGEQ:
                                printf(">=\n");
                                break;
                        case TADD:
                                printf("+\n");
                                break;
                        case TSUB:
                                printf("-\n");
                                break;
                        case TTIMES:
                                printf("*\n");
                                break;
                        case TDIV:
                                printf("/\n");
                                break;
                        case TINT:
                                printf("int\n");
                                break;
                        case TBAD:
                                printf("bad token\n");
                                break;
                        default:
                                printf("OTHER\n");
                }
        }
       }
       //
       //printf("\n");
   }
   while (tok != 0);
   
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

