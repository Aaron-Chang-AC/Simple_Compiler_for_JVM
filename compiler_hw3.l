/* Definition section */
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdbool.h>
	#include "y.tab.h"
	extern YYSTYPE yylval;
	extern int current_scope;
	extern int print_or_not;
	extern int binary_yyline[1000];
	char buff[256];
	void CONCAT(void);
	void buff_init(void);
%}

/* Define regular expression label */

letter [a-zA-Z_]
digit [0-9]
id {letter}+({letter}|{digit})*
number {digit}+
%option yylineno
%x COMMENT

/* Rules section */
%%
\/\/.*	{CONCAT();} //C++ comment
"/*"	{CONCAT(); BEGIN COMMENT;}
<COMMENT>[^*\n]+	{CONCAT();}
<COMMENT>\n	{CONCAT(); printf("%d: %s",yylineno,buff);buff_init();}
<COMMENT>"*"	{CONCAT(); }
<COMMENT>"*/"	{CONCAT(); BEGIN INITIAL;}
"+"	{CONCAT();return(ADD);}
"-"	{CONCAT();return(SUB);}
"*"	{CONCAT();return(MUL);}
"/"	{CONCAT();return(DIV);}
"%"	{CONCAT();return(MOD);}
"="	{CONCAT();return(ASGN);}
";"     {CONCAT();return(SEMICOLON);}
","	{CONCAT();return(COMMA);}
"("	{CONCAT();return(LB);}
")"	{CONCAT();return(RB);}
"{"	{CONCAT();current_scope++;return(LCB);}
"}"	{CONCAT();current_scope--;return(RCB);}
"["	{CONCAT();return(LSB);}
"]"	{CONCAT();return(RSB);}
"++"	{CONCAT();return(INC);}
"--"	{CONCAT();return(DEC);}
"+="	{CONCAT();return(ADDASGN);}
"-="	{CONCAT();return(DECASGN);}
"*="	{CONCAT();return(MULASGN);}
"/="	{CONCAT();return(DIVASGN);}
"%="	{CONCAT();return(MODASGN);}
">"	{CONCAT();return(MT);}
"<"	{CONCAT();return(LT);}
">="	{CONCAT();return(MTE);}
"<="	{CONCAT();return(LTE);}
"=="	{CONCAT();return(EQ);}
"!="	{CONCAT();return(NE);}
"&&"	{CONCAT();return(AND);}
"||"	{CONCAT();return(OR);}
\"(\\.|[^"\\])*\" { CONCAT();sprintf(yylval.string,"%s",yytext); return(STR_CONST);}

"print"		{ CONCAT();return(PRINT);}
"if"		{ CONCAT();return(IF);}
"else"		{ CONCAT();return(ELSE);}
"for"		{ CONCAT();return(FOR);}
"while"		{ CONCAT();return(WHILE);}
"return"	{ CONCAT();return(RET);}
"continue"	{ CONCAT();return(CONT);}
"break"		{ CONCAT();return(BREAK);}

"string"	{ CONCAT(); sprintf(yylval.string,"%s",yytext); return(STRING);}
"int"		{ CONCAT(); sprintf(yylval.string,"%s",yytext); return(INT);}
"float"		{ CONCAT(); sprintf(yylval.string,"%s",yytext); return(FLOAT);}
"void"		{ CONCAT(); sprintf(yylval.string,"%s",yytext); return(VOID);}
"bool"		{ CONCAT(); sprintf(yylval.string,"%s",yytext); return(BOOL);}
"true"		{ CONCAT(); yylval.b_val=1; return(_TRUE);}
"false"		{ CONCAT(); yylval.b_val=0; return(_FALSE);}
{number}	{ CONCAT(); yylval.i_val=atoi(yytext); return(I_CONST);}
{number}+\.{number}+	{ CONCAT(); yylval.f_val=atof(yytext); return(F_CONST);}



{id}	{ CONCAT(); sprintf(yylval.string,"%s",yytext); return(ID); }
[ \t\f\v]			{CONCAT();}
[\n]	{ CONCAT(); if(print_or_not==1){print_or_not=0;buff_init();} else {if(buff[0]!='\n'){binary_yyline[yylineno]=1; printf("%d: %s",yylineno,buff);} else {binary_yyline[yylineno]=1; printf("%d:\n",yylineno);}buff_init();} }

%%

/*	C Code section */
int yywrap(void)
{
    return 1;
}
void CONCAT(){
	strncat(buff,yytext,256-strlen(buff)-1);
	
}
void buff_init(){
	memset(buff,'\0',256);
}
/*int main(int argc,char *argv[])
{
	yyin = fopen(argv[1],"r");
	yylex();
	printf("\nParse over, the line number is %d.\n\n",count);
	printf("comment: %d lines\n\n",comment_count);

	return 0;
}*/
