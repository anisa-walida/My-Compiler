digit [0-9]
special [$_@]
int [+|-]?{digit}+
float [+|-]?{digit}*[.]{digit}{1,2}
double [+|-]?{digit}*[.]{digit}{1,8}
char   ['][a-zA-Z][']
str ["][a-zA-Z\n0-9]*["]
letter [a-z|A-Z]
op "+"|"-"|"*"|"/"|"%"|"^"
relop ">"|"<"|"<="|">="|"&&"|"||"|"!="|"="
datatype "int"|"point"|"char"|"Dpoint"|"empty"|"const"|"logic"|"line"
header [a-z|A-Z]+.h["|"]
var [a-zA-Z][_a-zA-Z0-9]*
condition ({var}|{digit}*)[ ]*({relop})({var}|{digit}*)
mulcondition {condition}[ ]*([ ]*("&&"|"||")[ ]*{condition})*
pattern {int}|{float}|{double}|{char}|{str}
initial {datatype}?[ ]*{var}[ ]*("=")[ ]*{pattern}|{var}
key "if"|"elif"|"else"|"do"|"while"|"for"|{datatype}|"add"|"in__"|"out__"

%{
	#include <stdio.h>
	#include <string.h>
        int c_var = 0;
	int c_key = 0;
        int c_loop= 0;
	
%}


%%

"add "{letter}*".h;" {printf("Header\n");c_key++;}
"^.^".*  { printf("Single line comment:%s\n",yytext+3);}
"^<"(.*|\n)*">^" {printf("Multi line comment\n");}
{op}|{relop} {printf("Operator: %s",yytext);}
{datatype}[ ]{var}?[ ]*([,][ ]*{var})*[;]   {
    printf("Variable declared\n");
    char* ptr = yytext;
    while (*ptr != '\0') {
	if(*ptr==',')
        {
        c_var++;
	}
        ptr++; // Move to the next variable
    }
    c_var++; // Increment for the last variable
    c_key++;
}
"if"[ ]*"<<"[ ]*{mulcondition}[ ]*">>"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}"  {printf("if statement\n");c_key++;}
"if"[ ]*"<<"[ ]*{mulcondition}[ ]*">>"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}"[ \n]*"else"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}" {printf("if-else statement\n");c_key=c_key+2;}
"if"[ ]*"<<"[ ]*{mulcondition}[ ]*">>"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}"[ \n]*("elif"[ ]*"<<"[ ]*{mulcondition}[ ]*">>"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}"[ \n]*)+"else"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}" {printf("elif ladder\n");c_key=c_key+3;}
"for"[ ]*("("[ ]*{initial}?[ ]*[;][ ]*{condition}[ ]*[;][ ]*({var}("++"|"--")|{var}{op}({var}|{digit}*)|[ ]*)[ ]*")")[ ;\n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}"  {printf("for loop\n");c_key++;c_loop++;}
"while"[ ]*"<<"[ ]*{mulcondition}[ ]*">>"[ \n]*"do"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}" {printf("while do loop\n");c_key=c_key+2;c_loop++;}
"do"[ \n]*"{"[ \n]*(.*[;]|\n)*[ \n]*"}"[ \n]*"while"[ ]*"<<"[ ]*{mulcondition}[ ]*">>"[ \n]* {printf("do while loop\n");c_key=c_key+2;c_loop++;}
"in__"{var}  {printf("Taking input of a variable\n");c_key++;}
"out__"{var}  {printf("Printing value of a variable\n");c_key++;}



%%

int yywrap()
{
    return 1;
}

int main()
{
	yyin=freopen("newinput.txt","r",stdin);
  

    yylex();
    printf("Number of Keywords:  %d\n ",c_key); 
    printf("Number of variables: %d\n ",c_var);
    printf("Number of Loops: %d\n ",c_loop);	
    return 0;
}