char [a-zA-Z]
digit [0-9]
special [$_@]
space " "
newline "\n"
Datatype "Integer"|"Double"|"Type_Char"|"Type_Void"
Operator "Op_Equ"|"Op_Plus"|"Op_Minus"|"Op_Divide"|"Op_Multiply"|"Op_And"|"Op_Or"|"Op_Mod"
Relational_Operator "Ro_GT"|"Ro_LT"|"Ro_GE"|"Ro_LE"|"Ro_And"|"Ro_Or"|"Ro_Equ"|"Ro_Equ"|"Ro_NEqu"

%{
	#include "bison.tab.h"
	#include <string.h>
%}



%%
{space}|{newline} {}
"#".*"#" {/*This is comment*/}
";" {return DOT;}
"," {return CM;}
{digit}+ 	{
				yylval.val = atoi(yytext);
				return NUM;
			}

"main" { return MAIN;}
"out_Var" { return PRINTVAR;}
"out_str" {return PRINTSTR;}
"out_Line" {return PRINTLN;}

"function_"({char}|{digit}|{special})+ {return FUNCTION;}

"Var_"({char}|{digit}|{special})+ { strcpy(yylval.text,yytext);return ID;}

"int" {  return INT;}
"point" { return DOUBLE;}
"char" { return CHAR;}

"in__" {return SCAN;}

"(" { return PB;}
")" { return PE;}

"{" { return BB;}
"}" { return BE;}

"=" {return ASGN;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MULT;}
"/" {return DIV;}
"<" {return LT;}
">" {return GT;}
"<=" {return LE;}
">=" {return GE;}


"If" { return IF;}
"ElseIf" {return ELSEIF;}
"Else" {return ELSE;}
"factorial" {return FACT;}

"for" {return FOR;}
"++" {return INC;}
"--" {return DEC;}
"To" {return TO;}
"While" {return WHILE;}
"Less"  {return LESS;}
"Great" {return GREAT;}

"Switch" {return SWITCH;}
"default" {return DEFAULT;}
":" {return COL;}
. {}


"\""(.)*"\"" {strcpy(yylval.text,yytext);return STR;}




%%


int yywrap()
{
	return 1;
}


int main(){
	yyin = fopen("input.txt","r");
	yyout = fopen("output.txt","w");
	yyparse();
}