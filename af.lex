%{
#include <stdio.h>
#include "y.tab.h"
int line_number = 1;
void yyerror(char *message);
%}

digits                 [0-9]

%%
while  	                 return WHILE;
for  	                 return FOR;
in  	                 return IN;
break    	             return BREAK;
def  	                 return DEF;
type  	                 return TYPE;
list 	                 return LIST;
dict                     return DICT;
if  	                 return IF;
elif  	                 return ELIF;
else  	                 return ELSE;
nil 	                 return NIL;
True                     return TRUE;
False                    return FALSE;
main                     return MAIN;
int                      return DECINT;
real                     return DECREAL;
str                      return DECSTR;
return                   return RETURN;
end                      return END;
print                    return PRINT;
println                  return PRINTLN;
input                    return INPUT;

"\\"                     return CONTSTMT;
"\n"                     line_number++;return ENDLINE;
","	                     return COMMA;
":"	                     return COLON;
";"	                     return SEMICOLON;
"("	                     return LPAREN;
")"	                     return RPAREN;
"["	                     return LBRACK;
"]"	                     return RBRACK;
"{"	                     return LBRACE;
"}"	                     return RBRACE;
"."	                     return DOT;
"+"	                     return PLUS;
"-"	                     return MINUS;
"*"	                     return TIMES;
"/"	                     return DIVIDE;
"%"                      return DIVM;
"%="                     return DIVMEQ;
"%%"                     return PERC;
"+%"                     return ADDPERC;
"-%"                     return SUBPERC;
"+="                     return ADDEQ;
"-="                     return SUBEQ;
"/="                     return DIVEQ;
"*="                     return MULTEQ;
"=="	                 return EQ;
"!="	                 return NEQ;
"<"	                     return LT;
"<="	                 return LE;
">"	                     return GT;
">="	                 return GE;
"&&"	                     return AND;
"||"	                     return OR;
"!"                      return NOT;
"="	                     return ASSIGN;

" "                         ;

"(*"([^*]|\*+[^*/])*\*+")"  ;

{digits}+	                {yylval.iValor = atoi(yytext);return INT;}

{digits}+\.{digits}+        {sscanf(yytext, "%lf", &yylval.rValor); return REAL;}

[a-zA-Z][a-zA-Z0-9]*        {yylval.sValor = strdup(yytext); return ID;}

\"(\\.|[^\\"'])*\"	        {yylval.sValor = strdup(yytext); return STR;}
.	                        yyerror("Illegal input");

%%

int yywrap(void)
{
	return 1;
}
