%{
   #include "parser.H"
   #include "grammar.h"
   #include <iostream>
   #include <iomanip>
%}
DIGIT    [0-9]
ID       [a-zA-Z_][a-zA-Z0-9_]*
NUMBER   {DIGIT}+

%%

{NUMBER}  {
   yylval->val = atoi(yytext);
   return NUMBER;
}

==                    { return TEQ;}
\<                    { return '<';}
\>                    { return '>';}
\<=                   { return LEQ;}
\>=                   { return GEQ;}
!=                    { return NEQ;}
&&                    { return TAND;}
\|\|                  { return TOR;}
\[\]                  { return TDB;}
(\[|\]|\(|\)|\+|\-|\*|\/|;|\{|\}|=|\.|,|!) { return yytext[0];}
if                    { return TIF;}
else                  { return TELSE;}
class                 { return TCLASS;}
extends               { return TEXTENDS;}
while                 { return TWHILE;}
return                { return TRETURN;}
this                  { return THIS;}
true                  { return TRUE;}
false                 { return FALSE;}
int                   { return TINT;}
bool                  { return TBOOL;}
void                  { return TVOID;}
new                   { return TNEW;}
{ID} {
   yylval->id = strdup(yytext); // must copy the string. Can't use the constant.
   return TID;
}
                  
[ \t\n]*  /* ignore ws */;

\/\/.*\n {}

