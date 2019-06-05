/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINT = 258,
    RET = 259,
    CONT = 260,
    BREAK = 261,
    FOR = 262,
    WHILE = 263,
    SEMICOLON = 264,
    COMMA = 265,
    ASGN = 266,
    LB = 267,
    RB = 268,
    ADD = 269,
    SUB = 270,
    MUL = 271,
    DIV = 272,
    MOD = 273,
    INC = 274,
    DEC = 275,
    ADDASGN = 276,
    DECASGN = 277,
    MULASGN = 278,
    DIVASGN = 279,
    MODASGN = 280,
    LCB = 281,
    RCB = 282,
    LSB = 283,
    RSB = 284,
    MT = 285,
    LT = 286,
    MTE = 287,
    LTE = 288,
    EQ = 289,
    NE = 290,
    AND = 291,
    OR = 292,
    INT = 293,
    FLOAT = 294,
    BOOL = 295,
    STRING = 296,
    VOID = 297,
    IF = 298,
    ELSE = 299,
    ID = 300,
    I_CONST = 301,
    F_CONST = 302,
    STR_CONST = 303,
    _TRUE = 304,
    _FALSE = 305
  };
#endif
/* Tokens.  */
#define PRINT 258
#define RET 259
#define CONT 260
#define BREAK 261
#define FOR 262
#define WHILE 263
#define SEMICOLON 264
#define COMMA 265
#define ASGN 266
#define LB 267
#define RB 268
#define ADD 269
#define SUB 270
#define MUL 271
#define DIV 272
#define MOD 273
#define INC 274
#define DEC 275
#define ADDASGN 276
#define DECASGN 277
#define MULASGN 278
#define DIVASGN 279
#define MODASGN 280
#define LCB 281
#define RCB 282
#define LSB 283
#define RSB 284
#define MT 285
#define LT 286
#define MTE 287
#define LTE 288
#define EQ 289
#define NE 290
#define AND 291
#define OR 292
#define INT 293
#define FLOAT 294
#define BOOL 295
#define STRING 296
#define VOID 297
#define IF 298
#define ELSE 299
#define ID 300
#define I_CONST 301
#define F_CONST 302
#define STR_CONST 303
#define _TRUE 304
#define _FALSE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 88 "compiler_hw3.y" /* yacc.c:1909  */

    	int i_val;
    	double f_val;
	bool b_val;
    	char string[150];

#line 161 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
