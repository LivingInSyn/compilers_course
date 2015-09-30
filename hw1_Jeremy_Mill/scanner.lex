%{
   #include <iostream>
   #include <iomanip>
   #include "parser.H"
   #include "grammar.h"
%}

INTEGER     [1-9]+[0-9]*|0
ID  [a-zA-Z_][a-zA-Z0-9]*

%%

0[0-9]+ { return TBAD;}

{INTEGER} {
   yylval->val = atof(yytext);
   return INTEGER;
}



while { return TWHILE;}
if  { return TIF;}
else    { return TELSE;}
this    { return TTHIS;}
class   { return TCLAS;}
extends { return TEXTDS;}
new { return TNEW;}
return  { return TRETURN;}
int { return TINT;}
bool    { return TBOOL;}
void    { return TVOID;}
true    { return TTRUE;}
false   { return TFALSE;}

\+  { return TADD;}
\-  { return TSUB;}
\*  { return TTIMES;}
\/  { return TDIV;}
\<=  { return TLEQ;}
>=  { return TGEQ;}
==  { return TEQV;}
!=  { return TNEQ;}
\<   { return TLTH;}
>   { return TMTH;}
&&  { return TAND;}
\|\|  { return TOR;}
=   { return TASN;}
;   { return TSEP;}
,   { return TCOM;}
!   { return TNOT;}
\.   { return TCALL;}
\[  { return TOBRAK;}
\]  { return TCBRAK;}
\[\]    { return TBRAKPAIR;}
\(  { return TOPAREN;}
\)  { return TCPAREN;}
\{  { return TOCURLY;}
\}  { return TCCURLY;}

\/\/.*\n    /*ignore comments*/;

{ID} {
    yylval->id = strdup(yytext); // must copy the string. Can't use the constant.
    return TID;
}



[ \t\n]*  /* ignore ws */;

%%
