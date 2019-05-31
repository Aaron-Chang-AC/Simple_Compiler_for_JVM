/*	Definition section */
%{
void yyerror(char *s);
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>
extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex

extern char buff[256];  // Get current code line from lex

/* Symbol table function - you can add new function if needed. */
typedef struct _table_element {
	char	name[100];
	int	kind;
	int	type;
	int	scope;
	int	attri[20];
	struct _table_element *next;
	
}table_element;

typedef struct _ins_set{
	char	ins[100];//name od the instruction
}ins_set;

FILE *file; // To generate .j file for Jasmin
ins_set INS_SET[200];//instruction set

table_element *table_head; //the head of the table
int binary_yyline[1000];
int para_array[20];
int lookup_symbol();
void create_symbol(int flag,char* name,int kind,int type,int scope);
void insert_symbol(table_element* temp);
int semantic_error(int flag,int mode,char *s);
void dump_symbol(int scope);
void insert_para(int para);
void para_init();
void attri_cpy(table_element* temp);
int syntax_error_flag=0;
int current_scope=0;

int initializer_flag=0;
int print_or_not=0;
int un_f=0;
int check_scope=0;
void check_scope_t();
void ins_init();
void insert_ins(char *s);
void print_ins();
int get_index(char *name);
int check_static(char *name);
int check_type(char *name);
int check_return_type();
void return_type_error();
/* Use variable or self-defined structure to represent
 * nonterminal and token type*/

%}

%union {
    	int i_val;
    	double f_val;
	bool b_val;
    	char string[150];
}

/* Token without return --> terminal*/
%token PRINT RET CONT BREAK
%token FOR WHILE
%token SEMICOLON COMMA ASGN LB RB ADD SUB MUL DIV MOD INC DEC ADDASGN DECASGN MULASGN DIVASGN MODASGN
%token LCB RCB LSB RSB MT LT MTE LTE EQ NE AND OR
%token <i_val>INT FLOAT BOOL STRING VOID

/* Token with return, which need to sepcify type --> terminal*/
%token <string> ID
%token <i_val> I_CONST
%token <f_val> F_CONST
%token <string> STR_CONST
%token <b_val> _TRUE _FALSE
/* Nonterminal with return, which need to sepcify type */
%type <i_val> type type_str 
%type <string> initializer_str
%type <f_val> initializer
%nonassoc IF ELSE
%left ADD SUB MUL DIV MOD
/* Yacc will start at this nonterminal */
%start program

/* Grammar section */
%%

program
    : stats	{if(table_head){
			check_scope_t();
			if(buff[0]!='\0' && check_scope==0){
				print_or_not=1;
				if(binary_yyline[yylineno+1]!=1){
					binary_yyline[yylineno+1]=1;
					printf("%d: %s\n",yylineno+1,buff);
				}
			}
		}
		check_scope=0;
		dump_symbol(current_scope);
		print_ins();//////////////////print .j
		}
    | 
;
stats
    : stat stats
    | stat
;
stat
    : declaration 
    | declaration_scope_add
    | compound_stat	
    | expression_stat	
    | print_func	
    | jump_stat	
    | use_function	
;
use_function
    : ID LB RB SEMICOLON 		{un_f=1;int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | ID LB argument RB SEMICOLON 	{un_f=1;int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | ID LB argument RB		 	{un_f=1;int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
;
jump_stat
    : RET SEMICOLON			{int i=check_return_type();char temp[100];
					if(i==3){sprintf(temp,"\treturn\n");}
					else{return_type_error();}//raise error msg
					insert_ins(temp);print_ins();
					}
    | RET initializer SEMICOLON		{int i=check_return_type();char temp[100];
					if(i==initializer_flag){
						if(i==0 || i==2){
							sprintf(temp,"\tldc %d\n",(int)$2);
							insert_ins(temp);
							memset(temp,'\0',100);
							sprintf(temp,"\tireturn\n");
							insert_ins(temp);
						}
						else {
							sprintf(temp,"\tldc %lf\n",$2);
							insert_ins(temp);
							memset(temp,'\0',100);
							sprintf(temp,"\tfreturn\n");
							insert_ins(temp);
						}
					}
					else{return_type_error();}//raise error msg
					print_ins();initializer_flag=0;//initializer_flag init

					}
    | RET ID SEMICOLON			{int i=check_return_type();char temp[100];
					int f=lookup_symbol($2); int flag=semantic_error(f,0,$2);
					int ch = check_static($2); int ty = check_type($2);
					if(ty != i){return_type_error();}//raise error msg

					if(ch==1){//if static-->store static
						if(ty==0 || ty==2){
							sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",$2);
							insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tireturn\n");insert_ins(temp);
						}
						else if(ty==1){
							sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",$2);
							insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tfreturn\n");insert_ins(temp);
						}
						else{
						return_type_error();
						}
						
					}
					else {
						int i1 = get_index($2);
						if(ty==0 || ty==2){
							sprintf(temp,"\tiload %d\n",i1);
							insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tireturn\n");insert_ins(temp);
						}
						else if(ty==1){
							sprintf(temp,"\tfload %d\n",i1);
							insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tfreturn\n");insert_ins(temp);
						}
						else{
						return_type_error();
						}
					}
					print_ins();
					}
    | RET basic_op SEMICOLON		{char temp[100];int i=check_return_type();
					if(i==0){sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tireturn\n");insert_ins(temp);}
					else {sprintf(temp,"\tfreturn\n");insert_ins(temp);}
					print_ins();
					}
    | CONT SEMICOLON
    | BREAK SEMICOLON
;
compound_stat
    : if_stat
    | for_stat
    | while_stat
;
if_stat
    : IF LB bool_expression RB LCB program RCB			
    | IF LB bool_expression RB LCB program RCB else_stat
;
else_stat
    : ELSE LCB program RCB	
    | ELSE if_stat
;
for_stat
    : FOR LB assignment_expression SEMICOLON bool_expression SEMICOLON assignment_expression RB LCB program RCB 
    | FOR LB SEMICOLON bool_expression SEMICOLON assignment_expression RB LCB program RCB			
    | FOR LB assignment_expression SEMICOLON SEMICOLON assignment_expression RB LCB program RCB			
    | FOR LB assignment_expression SEMICOLON bool_expression SEMICOLON RB LCB program RCB			
    | FOR LB SEMICOLON SEMICOLON assignment_expression RB LCB program RCB	
    | FOR LB assignment_expression SEMICOLON SEMICOLON RB LCB program RCB	
    | FOR LB SEMICOLON bool_expression SEMICOLON RB LCB program RCB
    | FOR LB SEMICOLON SEMICOLON RB LCB program RCB
;
while_stat
    : WHILE LB bool_expression RB LCB program RCB
;
declaration
    : type ID ASGN initializer SEMICOLON 		{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,1,$1,current_scope);
								if(current_scope==0){
									char temp[100];
									if($1==0)	{sprintf(temp,".field public static %s I = %d\n",$2,(int)$4);insert_ins(temp);print_ins();}
									else if($1==1)	{sprintf(temp,".field public static %s F = %lf\n",$2,$4);insert_ins(temp);print_ins();}
									else if($1==2)	{sprintf(temp,".field public static %s Z = %d\n",$2,(int)$4);insert_ins(temp);print_ins();}
								}
								else {
									int i=get_index($2);
									char temp[100];
									if($1==0)	{int ini=(int)$4;sprintf(temp,"\t\tldc %d\n",(int)$4);insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i);insert_ins(temp);print_ins();
											}
									else if($1==1)	{double ini=$4;sprintf(temp,"\t\tldc %lf\n",$4);insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);print_ins();
											}
									else if($1==2)	{int ini=(int)$4;sprintf(temp,"\t\tldc %d\n",(int)$4);insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i);insert_ins(temp);print_ins();
											}
								}
							}	
    | type ID SEMICOLON					{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,1,$1,current_scope);
								if(current_scope==0){
									char temp[100];
									if($1==0)	{sprintf(temp,".field public static %s I\n",$2);insert_ins(temp);print_ins();}
									else if($1==1)	{sprintf(temp,".field public static %s F\n",$2);insert_ins(temp);print_ins();}
									else if($1==2)	{sprintf(temp,".field public static %s Z\n",$2);insert_ins(temp);print_ins();}
								}
								else {
									int i=get_index($2);
									char temp[100];
									if($1==0)	{sprintf(temp,"\tldc 0\n");insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i);insert_ins(temp);print_ins();
											}
									else if($1==1)	{sprintf(temp,"\tldc 0\n");insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);print_ins();
											}
									else if($1==2)	{sprintf(temp,"\tldc 0\n");insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i);insert_ins(temp);print_ins();
											}
								}
							}		
    | type ID LSB I_CONST RSB SEMICOLON			{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,0,$1,current_scope);}//array
    | type_str ID ASGN initializer_str SEMICOLON 	{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,1,$1,current_scope);
								if(current_scope==0){
									char temp[100];
									sprintf(temp,".field public static %s Ljava/lang/String; = %s\n",$2,$4);
									insert_ins(temp);
									print_ins();
								}
								else{
									int i=get_index($2);
									char temp[100];
									sprintf(temp,"\tldc %s\n",$4);insert_ins(temp);memset(temp,'\0',100);
									sprintf(temp,"\tastore %d\n",i);insert_ins(temp);print_ins();
								}
							} 	
    | type_str ID SEMICOLON 				{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,1,$1,current_scope);
								if(current_scope==0){
									char temp[100];
									sprintf(temp,".field public static %s Ljava/lang/String;\n",$2);
									insert_ins(temp);
									print_ins();
								}
							}			
    | type ID LB RB SEMICOLON				{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,0,$1,current_scope);}//function
    | type ID LB parameter RB SEMICOLON			{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,0,$1,current_scope);}//function
;
declaration_scope_add
    : type ID LB RB 	{	if(strcmp($2,"main")==0){
					char temp[100];
					if($1==0)	{sprintf(temp,".method public static main([Ljava/lang/String;)I\n");insert_ins(temp);}
					else if($1==1)	{sprintf(temp,".method public static main([Ljava/lang/String;)F\n");insert_ins(temp);}
					else if($1==2)	{sprintf(temp,".method public static main([Ljava/lang/String;)Z\n");insert_ins(temp);}
					else if($1==3)	{sprintf(temp,".method public static main([Ljava/lang/String;)V\n");insert_ins(temp);}
					insert_ins(".limit stack 50\n");
					insert_ins(".limit locals 50\n");
					print_ins();				
				}
			} LCB program RCB	{insert_ins(".end method\n");print_ins();int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,0,$1,current_scope);}//function
    | type ID LB parameter RB LCB program RCB		{int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,0,$1,current_scope);}//function
;
/* actions can be taken when meet the token or rule */
initializer
    : I_CONST 		{$$ = $1;initializer_flag=0;}//initializer_flag=0;
    | F_CONST 		{$$ = $1;initializer_flag=1;}//initializer_flag=1;
    | _TRUE		{$$ = $1;initializer_flag=2;}//initializer_flag=2;
    | _FALSE		{$$ = $1;initializer_flag=2;}//initializer_flag=2;
;
initializer_str
    : STR_CONST 	{sprintf($$,"%s",$1);}
;
parameter
    : parameter COMMA type ID		{insert_para($3);int f=lookup_symbol($4); int flag=semantic_error(f,1,$4); create_symbol(flag,$4,2,$3,current_scope+1);}
    | parameter COMMA type_str ID	{insert_para($3);int f=lookup_symbol($4); int flag=semantic_error(f,1,$4); create_symbol(flag,$4,2,$3,current_scope+1);}
    | type ID				{insert_para($1);int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,2,$1,current_scope+1);}
    | type_str ID			{insert_para($1);int f=lookup_symbol($2); int flag=semantic_error(f,1,$2); create_symbol(flag,$2,2,$1,current_scope+1);}
;
argument
    : argument COMMA ID	{int f=lookup_symbol($3); int flag=semantic_error(f,0,$3);}
    | assignment_expression
    | bool_expression
;
type
    : INT 	{$$=0;}
    | FLOAT	{$$=1;}
    | BOOL 	{$$=2;}
    | VOID	{$$=3;}
;
type_str
    : STRING 	{$$=4;}
;
expression_stat
    : SEMICOLON 		
    | expression SEMICOLON

;
expression
    : assignment_expression
;
/*********assigment**************/
assignment_expression
    : ID ASGN assignment_expression_iter	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);
						int ch = check_static($1); int ty = check_type($1);
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",$1);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",$1);insert_ins(temp);	
							}	
						
						}
						else {
							char temp[100];int i=get_index($1);
							if(ty==0){
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
							}
							
							
						}
						print_ins();//print instructions
						}
    | post_operation				
    | op_assignment							
;
assignment_expression_iter
    : ID ASGN assignment_expression_iter	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}	
    | basic_op 								
;
basic_op
    : basic_op ADD multiplication	{char temp[100];sprintf(temp,"\tfadd\n");insert_ins(temp);print_ins();}
    | basic_op SUB multiplication	{char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);print_ins();}
    | multiplication			
;

multiplication
    : multiplication MUL factor	{char temp[100];sprintf(temp,"\tfmul\n");insert_ins(temp);print_ins();}
    | multiplication DIV factor	{char temp[100];sprintf(temp,"\tfdiv\n");insert_ins(temp);print_ins();}
    | multiplication MOD factor	{char temp[100];sprintf(temp,"\tfrem\n");insert_ins(temp);print_ins();}
    | factor			
;
factor
    : LB basic_op RB	
    | ID		{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);
			int ch = check_static($1); int ty = check_type($1);
			if(ch==1){//if static-->store static
				char temp[100];
				if(ty==0){
					sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",$1);insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else {
					sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",$1);insert_ins(temp);	
				}	
						
			}
			else {
				char temp[100];int i=get_index($1);
				if(ty==0){
					sprintf(temp,"\tiload %d\n",i);insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else {
					sprintf(temp,"\tfload %d\n",i);insert_ins(temp);	
				}
							
							
			}
			print_ins();
			}
    | initializer	{char temp[100];sprintf(temp,"\tldc %lf\n",$1);insert_ins(temp);print_ins();}
;
post_operation
    : ID INC	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | ID DEC	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
;
op_assignment
    : ID ADDASGN assignment_expression_iter	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | ID DECASGN assignment_expression_iter	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | ID MULASGN assignment_expression_iter	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | ID DIVASGN assignment_expression_iter	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | ID MODASGN assignment_expression_iter	{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
;
bool_expression
    : bool_op
;
bool_op
    : bool_op MT bool_fi	
    | bool_op LT bool_fi	
    | bool_op MTE bool_fi
    | bool_op LTE bool_fi	
    | bool_op EQ bool_fi	
    | bool_op NE bool_fi	
    | bool_op AND bool_fi	
    | bool_op OR bool_fi
    | bool_fi
;
bool_fi
    : LB bool_op RB	
    | ID		{int f=lookup_symbol($1); int flag=semantic_error(f,0,$1);}
    | initializer	
;
print_func
    : PRINT LB ID RB SEMICOLON		{int f=lookup_symbol($3); int flag=semantic_error(f,0,$3);
					int ch = check_static($3); int ty = check_type($3);
					if(ch==1){//if static-->store static
						char temp[100];
						if(ty==0 || ty==2){
							sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",$3);insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(I)V\n");insert_ins(temp);
						}
						else if(ty==1){
							sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",$3);insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(F)V\n");insert_ins(temp);
						}
						else {
							sprintf(temp,"\tgetstatic compiler_hw3/%s Ljava/lang/String;\n",$3);insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");insert_ins(temp);
						}	
						
					}
					else {
						char temp[100];int i=get_index($3);
						if(ty==0 || ty==2){
							sprintf(temp,"\tiload %d\n",i);insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(I)V\n");insert_ins(temp);
						}
						else if(ty==1){
							sprintf(temp,"\tfload %d\n",i);insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(F)V\n");insert_ins(temp);
						}
						else {
							sprintf(temp,"\taload %d\n",i);insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");insert_ins(temp);
						}
							
							
					}
					print_ins();
					}
    | PRINT LB STR_CONST RB SEMICOLON	{
					char temp[100];
					sprintf(temp,"\tldc %s\n",$3);insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");insert_ins(temp);
					print_ins();
					}
    | PRINT LB initializer RB SEMICOLON	{
					char temp[100];
					sprintf(temp,"\tldc %lf\n",$3);insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(F)V\n");insert_ins(temp);
					print_ins();
					}
;

%%

/* C code section */
int main(int argc, char** argv)
{
	file = fopen("compiler_hw3.j","w");
	fprintf(file,".class public compiler_hw3\n");
	fprintf(file,".super java/lang/Object\n");

	

	/*************************dump table*****************************/
	memset(binary_yyline,0,1000);
	table_head=NULL; 
	yylineno = 0;
	para_init();
	yyparse(); //start parsing
	if(syntax_error_flag==0){
		table_element* T=table_head;
		table_element* T3=table_head;
		int ff=0;
		int i=0;
		if(T){
			printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n","Index", "Name", "Kind", "Type", "Scope", "Attribute");
			ff=1;
		}
		while(T){
			printf("\n%-10d%-10s",i,T->name);
			if(T->kind==0){printf("%-12s","function");}
			else if(T->kind==1){printf("%-12s","variable");}
			else {printf("%-12s","parameter");}

			if(T->type==0){printf("%-10s","int");}
			else if(T->type==1){printf("%-10s","float");}
			else if(T->type==2){printf("%-10s","bool");}
			else if(T->type==3){printf("%-10s","void");}
			else 	{printf("%-10s","string");}

			printf("%-10d",T->scope);
			if(T->kind==0){
				int j=0;
				int t=T->attri[j];
				while(t>-1){
					if(t==0){printf("int");}
					else if(t==1){printf("float");}
					else if(t==2){printf("bool");}
					else if(t==3){printf("void");}
					else if(t==4){printf("string");}
					j++;
					t=T->attri[j];
					if(t>-1){printf(", ");}
				}
			}
			i++;
			T=T->next;			
		}
		if(ff==1)
			printf("\n\n");

		printf("\nTotal lines: %d \n",yylineno);
	}

	/****************************************************/

   	fclose(file);

	return 0;
}

void yyerror(char *s)
{
	if(binary_yyline[yylineno+1]!=1){
		binary_yyline[yylineno+1]=1;
		printf("%d: %s\n",yylineno+1,buff);
	}
	printf("\n|-----------------------------------------------|\n");
	printf("| Error found in line %d: %s\n", yylineno+1, buff);
	printf("| %s", s);
	printf("\n|-----------------------------------------------|\n\n");
	syntax_error_flag=1;
}

void create_symbol(int flag,char* name,int kind,int type,int scope) {
	if(flag==0){
		table_element* temp=(table_element*)malloc(sizeof(table_element));
		sprintf(temp->name,"%s",name);
		temp->kind=kind;
		temp->type=type;
		temp->scope=scope;
		temp->next=NULL;
		if(kind==0){
			attri_cpy(temp);
		}
		else{
			temp->attri[0]=-1;
		}
		insert_symbol(temp);
	}
	return;
}
void insert_symbol(table_element* temp) {
	if(!table_head){
		table_head=temp;
		//printf("AAA:%s\n",table_head->name);
		return;
	}
	table_element *T=table_head;
	while(T){
		if(T->next==NULL){T->next=temp;break;}
		else {T=T->next;}
	}
	//printf("AAA:%s\n",T->name);
	return;
}
int lookup_symbol(char* name) {
	int flag=0;
	table_element* T=table_head;
	while(T){
		if(strcmp(name,T->name)==0){
			flag=1; //if the name was used
			break;
		}
		T=T->next;
	}
	return flag;
}
int semantic_error(int flag,int mode,char* s){
	if(flag==0){
		if(un_f==1 && mode==0){
			if(binary_yyline[yylineno+1]!=1){
				binary_yyline[yylineno+1]=1;
				printf("%d: %s\n",yylineno+1,buff);
			}
			printf("\n|-----------------------------------------------|\n");
			printf("| Error found in line %d: %s\n", yylineno+1, buff);
			printf("| Undeclared function %s", s);
			printf("\n|-----------------------------------------------|\n\n");
			print_or_not=1;
			un_f=0;
			return 1;
		}
		else if(mode==0){ //undeclared variable
			if(binary_yyline[yylineno+1]!=1){
				binary_yyline[yylineno+1]=1;				
				printf("%d: %s\n",yylineno+1,buff);
			}
			printf("\n|-----------------------------------------------|\n");
			printf("| Error found in line %d: %s\n", yylineno+1, buff);
			printf("| Undeclared variable %s", s);
			printf("\n|-----------------------------------------------|\n\n");
			print_or_not=1;
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(mode==1){ //redeclared variable
			if(binary_yyline[yylineno+1]!=1){
				binary_yyline[yylineno+1]=1;				
				printf("%d: %s\n",yylineno+1,buff);
			}
			printf("\n|-----------------------------------------------|\n");
			printf("| Error found in line %d: %s\n", yylineno+1, buff);
			printf("| Redeclared variable %s", s);
			printf("\n|-----------------------------------------------|\n\n");
			print_or_not=1;
			return 1;
		}
		else{
			return 0;
		}
	}
	
}
void dump_symbol(int scope) {
	table_element* T=table_head;
	table_element* T2=table_head;
	table_element* T3=table_head;
	if(!T){
		return;
	}
	int i=0,max=0;
	max=T2->scope;
	while(T2){
		if(max < T2->scope){
			max=T2->scope;
		}
		T2 = T2 -> next;
	}
	if(max==0 || (max!=scope+1)){return;}
	printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n","Index", "Name", "Kind", "Type", "Scope", "Attribute");
	while(T){
		if(T->scope < max){
			T3=T;
			T=T->next;
			continue;
		}
		printf("\n%-10d%-10s",i,T->name);
		if(T->kind==0){printf("%-12s","function");}
		else if(T->kind==1){printf("%-12s","variable");}
		else {printf("%-12s","parameter");}

		if(T->type==0){printf("%-10s","int");}
		else if(T->type==1){printf("%-10s","float");}
		else if(T->type==2){printf("%-10s","bool");}
		else if(T->type==3){printf("%-10s","void");}
		else 	{printf("%-10s","string");}

		printf("%-10d",T->scope);
		if(T->kind==0){
			int j=0;
			int t=T->attri[j];
			while(t>-1){
				if(t==0){printf("int");}
				else if(t==1){printf("float");}
				else if(t==2){printf("bool");}
				else if(t==3){printf("void");}
				else if(t==4){printf("string");}
				j++;
				t=T->attri[j];
				if(t>-1){printf(",");printf(" ");}
			}
		}
		i++;
		T=T->next;			
	}
	printf("\n\n");
	free(T3->next);
	T3->next=NULL;
}
void insert_para(int para){
	int i;
	for(i=0;i<20;i++){
		if(para_array[i]==-1){
			para_array[i]=para;
			break;
		}
	}
	return;
}
void para_init(){
	int i;
	for(i=0;i<20;i++){
		para_array[i]=-1;
	}
	return;
}
void attri_cpy(table_element* temp){
	int i;
	for(i=0;i<20;i++){
		temp->attri[i]=para_array[i];
	}
	para_init();
	return;
}
void check_scope_t(){
	table_element* T=table_head;
	if(!T){
		check_scope=1;
		return;
	}
	int i=0,max=0;
	max=T->scope;
	while(T){
		if(max < T->scope){
			max=T->scope;
		}
		T = T -> next;
	}
	if(max==current_scope){
		check_scope=1;
		return;
	}
	else{
		check_scope=0;
		return;
	}
	
}
void ins_init(){ //instruction set init
	int i;
	for(i=0;i<200;i++)
		memset(INS_SET[i].ins,'\0',100);
	return;

}
void insert_ins(char *s){ //insert the instruction s into INS_SET
	int i=0;
	while(INS_SET[i].ins[0]!='\0'){
		i++;
	}
	sprintf(INS_SET[i].ins,"%s",s);
	return;
}
void print_ins(){
	int i=0;
	while(i<200){
		if(INS_SET[i].ins[0]!='\0'){
			fprintf(file,"%s",INS_SET[i].ins);
		}
		i++;
	}
	ins_init();
	return;
}
int get_index(char *name){
	table_element* T=table_head;
	int i=0,now=current_scope;
	while(T){
		if(T->scope==now){
			if(strcmp(T->name,name)==0){
				break;
			}
			i++;
			T=T->next;
		}
		else{
			T=T->next;
		}
	}
	return i;
}
int check_static(char *name){
	table_element* T=table_head;
	while(T){
		if(strcmp(T->name,name)==0){
			if(T->scope==0){
				return 1;//variable is static
			}
			else{
				return 0;
			}
		}
		T=T->next;
	}
	return 0;//default
}
int check_type(char *name){
	table_element* T=table_head;
	while(T){
		if(strcmp(T->name,name)==0){
			return T->type;
		}
		T=T->next;
	}
	return 0;//default
}
int check_return_type(){
	table_element* T=table_head;
	while(T){
		if(T->kind==0){
			if(T->scope==current_scope-1){
				return T->type;
			}
		}
		T=T->next;
	}
	return 3; //default type is void
}
void return_type_error(){
	if(binary_yyline[yylineno+1]!=1){
		binary_yyline[yylineno+1]=1;				
		printf("%d: %s\n",yylineno+1,buff);
	}
	printf("\n|-----------------------------------------------|\n");
	printf("| Error found in line %d: %s\n", yylineno+1, buff);
	printf("| function return type is not the same");
	printf("\n|-----------------------------------------------|\n\n");
	print_or_not=1;
	return;
}
