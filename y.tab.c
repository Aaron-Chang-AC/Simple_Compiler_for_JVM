/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "compiler_hw3.y" /* yacc.c:339  */

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

int else_shift=0;
int error_flag=0;
int para_cnt=0;
int para_attri[100];//the type of each parameter

int if_type=-1;
int if_cnt[10];
int ex_cnt[10];
int wh_cnt[10];
int start_cnt[10];
int argu[50];
int argu_cnt=0;

int hold_on=0;
int op_assignment_check_static=0;
int op_assignment_check_type=0;
char op_assignment_name[50];
int func_cnt=0;
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
void para_attri_insert();
void print_all();
void check_return_type_use(char *name);
void check_argu(char *name);
void argu_type_error();
void divide_invalid();
void rem_invalid();

/* Use variable or self-defined structure to represent
 * nonterminal and token type*/


#line 155 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 91 "compiler_hw3.y" /* yacc.c:355  */

    	int i_val;
    	double f_val;
	bool b_val;
    	char string[150];

#line 302 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 319 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   311

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  251

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   138,   141,   142,   145,   146,   147,   148,
     149,   150,   151,   154,   158,   164,   167,   173,   178,   199,
     234,   239,   240,   243,   244,   245,   248,   248,   257,   248,
     261,   261,   262,   263,   271,   272,   273,   274,   275,   276,
     277,   278,   281,   281,   281,   290,   311,   332,   333,   347,
     355,   356,   359,   359,   381,   381,   407,   408,   409,   410,
     413,   416,   417,   418,   422,   425,   463,   473,   474,   477,
     478,   479,   480,   483,   486,   487,   491,   495,   522,   523,
     524,   553,   554,   557,   558,   559,   563,   564,   565,   574,
     577,   578,   605,   608,   646,   686,   686,   744,   744,   802,
     802,   860,   860,   918,   918,   978,   981,   984,   987,   990,
     993,   996,   999,  1000,  1001,  1004,  1005,  1044,  1053,  1091,
    1102,  1151,  1159
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "RET", "CONT", "BREAK", "FOR",
  "WHILE", "SEMICOLON", "COMMA", "ASGN", "LB", "RB", "ADD", "SUB", "MUL",
  "DIV", "MOD", "INC", "DEC", "ADDASGN", "DECASGN", "MULASGN", "DIVASGN",
  "MODASGN", "LCB", "RCB", "LSB", "RSB", "MT", "LT", "MTE", "LTE", "EQ",
  "NE", "AND", "OR", "INT", "FLOAT", "BOOL", "STRING", "VOID", "IF",
  "ELSE", "ID", "I_CONST", "F_CONST", "STR_CONST", "_TRUE", "_FALSE",
  "$accept", "program", "stats", "stat", "use_function",
  "asgn_use_function", "jump_stat", "compound_stat", "if_stat", "$@1",
  "$@2", "$@3", "else_stat", "$@4", "for_stat", "while_stat", "$@5", "$@6",
  "declaration", "declaration_scope_add", "$@7", "$@8", "initializer",
  "initializer_str", "parameter", "argument", "type", "type_str",
  "expression_stat", "expression", "assignment_expression",
  "assignment_expression_iter", "basic_op", "multiplication", "factor",
  "post_operation", "op_assignment", "$@9", "$@10", "$@11", "$@12", "$@13",
  "bool_expression", "bool_op", "bool_fi", "argu_fi", "print_func", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -176

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-176)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      48,    -4,    15,    59,    62,    22,    63,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,   201,    85,  -176,    48,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,    34,    47,  -176,    99,
    -176,  -176,  -176,  -176,   205,  -176,    71,   113,  -176,  -176,
    -176,  -176,   117,    28,    79,  -176,  -176,  -176,    -6,  -176,
     132,    82,   124,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,   187,    73,  -176,   123,   143,   147,  -176,  -176,
     120,  -176,  -176,  -176,    71,    71,    71,    71,    71,    54,
     208,   163,   112,   112,   103,  -176,  -176,    -3,   169,   208,
    -176,    10,  -176,  -176,   118,   118,   118,   118,   118,  -176,
     210,   153,    66,  -176,   142,   188,   191,   192,  -176,    79,
      79,  -176,  -176,  -176,     0,   112,  -176,  -176,   193,   204,
    -176,    60,  -176,   203,   118,   130,  -176,   -31,   209,   206,
    -176,  -176,  -176,  -176,  -176,   249,   252,    12,   217,   218,
     185,  -176,   255,  -176,  -176,  -176,   239,   253,   173,     4,
     112,   112,   112,   112,   112,   112,   112,   112,    13,   258,
     256,  -176,  -176,  -176,    20,  -176,  -176,  -176,  -176,  -176,
     242,   100,   261,  -176,  -176,   262,  -176,    48,   246,  -176,
     247,   263,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
     248,   264,    25,   254,   257,  -176,    48,   230,   233,  -176,
     259,  -176,   260,    48,    48,   265,    48,   266,   267,   268,
      48,    48,   269,  -176,  -176,    48,  -176,   270,   271,    48,
     272,    48,    48,   274,   275,   276,  -176,   277,  -176,  -176,
     278,  -176,   279,   280,    48,  -176,  -176,  -176,  -176,  -176,
    -176,   281,   235,  -176,   241,  -176,  -176,   283,    48,   284,
    -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,    74,    69,    70,
      71,    73,    72,    26,     0,     0,     2,     5,    12,    11,
       8,    23,    24,    25,     6,     7,     0,     0,     9,     0,
      76,    78,    79,    10,     0,    17,     0,    91,    56,    57,
      58,    59,    92,     0,    85,    89,    21,    22,     0,    42,
       0,     0,     0,    93,    94,    95,    97,    99,   101,   103,
       1,     4,     0,     0,    75,     0,     0,     0,    91,    92,
       0,    19,    18,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    80,    77,    82,     0,   118,
     119,     0,    67,    68,     0,     0,     0,     0,     0,    46,
       0,     0,     0,    49,     0,     0,     0,     0,    90,    83,
      84,    86,    87,    88,     0,     0,   116,   117,     0,   105,
     114,     0,    43,     0,     0,     0,    13,     0,     0,    91,
      96,    98,   100,   102,   104,     0,    52,     0,     0,     0,
       0,    60,     0,   120,   121,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    81,    15,     0,    65,    66,    14,    45,    50,
       0,     0,    54,    63,    64,     0,    48,     3,     0,   115,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
       0,     0,     0,     0,     0,    16,     3,     0,     0,    51,
       0,    47,     0,     3,     3,     0,     3,     0,     0,     0,
       3,     3,     0,    61,    62,     3,    41,     0,     0,     3,
       0,     3,     3,     0,     0,     0,    53,     0,    38,    40,
       0,    39,     0,     0,     3,    44,    28,    55,    35,    36,
      37,     0,    33,    34,    30,    29,    32,     0,     3,     0,
      31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -175,   273,  -176,  -176,  -176,  -176,  -176,    38,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,    -2,  -176,  -176,   161,   -97,   -95,  -176,  -176,
     -47,    87,     5,    72,   111,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,   -73,   174,    92,  -176,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    85,    19,    20,    21,    50,
     194,   242,   245,   247,    22,    23,    82,   160,    24,    25,
     170,   200,    69,   142,   137,    91,    26,    27,    28,    29,
      30,    86,    87,    44,    45,    31,    32,    94,    95,    96,
      97,    98,   118,   119,   120,    93,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      42,    81,   202,    79,   138,    92,   139,    43,    34,   122,
     123,    74,    75,   146,   165,    38,    39,   180,    40,    41,
     127,   212,   171,   128,    35,   172,   190,    36,   217,   218,
     127,   220,    67,   195,    48,   224,   225,    73,   208,    80,
     227,    70,    74,    75,   230,    80,   232,   233,   159,    80,
      90,     1,     2,     3,     4,     5,     6,     7,    80,   241,
      37,    38,    39,   114,    40,    41,   115,   147,    46,   158,
      80,    47,   115,   249,   197,    49,   198,   117,    92,    62,
     117,   117,   103,    36,   104,    60,     8,     9,    10,    11,
      12,    13,    63,    14,    36,    76,    77,    78,   135,   116,
      38,    39,   181,    40,    41,   116,    38,    39,    64,    40,
      41,   191,   140,   117,   124,   125,    68,    38,    39,   117,
      40,    41,    71,    90,   115,   166,    72,    84,    38,    39,
      36,    40,    41,   108,    74,    75,   105,    88,     8,     9,
      10,    11,    12,   163,    83,   209,   109,   110,   117,   117,
     117,   117,   117,   117,   117,   117,   106,   116,    38,    39,
     107,    40,    41,   129,    38,    39,   136,    40,    41,    89,
      38,    39,   121,    40,    41,    89,    38,    39,   126,    40,
      41,   130,   131,   132,   133,   134,   179,   111,   112,   113,
     141,     8,     9,    10,    11,    12,    99,   143,   100,   101,
     144,   145,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   162,    51,    52,   175,   102,   161,   124,   167,    51,
      53,    54,    55,    56,    57,    58,    59,    53,    54,    55,
      56,    57,    58,    59,   150,   151,   152,   153,   154,   155,
     156,   157,   182,   183,   184,   185,   186,   187,   188,   189,
      65,    38,    39,    66,    40,    41,    38,    39,   168,    40,
      41,   169,   173,   174,   176,   177,   178,   192,   196,   193,
     199,   201,   203,   204,   206,   213,   205,   207,   214,   244,
     210,   223,   246,   211,    13,   215,   164,   216,     0,   148,
      61,   219,   221,   222,     0,     0,   226,   228,   229,   231,
     234,     0,   235,   236,   237,   238,   239,   240,   243,   248,
       0,   250
};

static const yytype_int16 yycheck[] =
{
       2,    48,   177,     9,   101,    52,   101,     2,    12,    82,
      83,    14,    15,    13,    45,    46,    47,    13,    49,    50,
      10,   196,    10,    13,     9,    13,    13,    12,   203,   204,
      10,   206,    34,    13,    12,   210,   211,     9,    13,    45,
     215,    36,    14,    15,   219,    45,   221,   222,   121,    45,
      52,     3,     4,     5,     6,     7,     8,     9,    45,   234,
      45,    46,    47,     9,    49,    50,    12,   114,     9,     9,
      45,     9,    12,   248,   171,    12,   171,    79,   125,    45,
      82,    83,     9,    12,    11,     0,    38,    39,    40,    41,
      42,    43,    45,    45,    12,    16,    17,    18,   100,    45,
      46,    47,   149,    49,    50,    45,    46,    47,     9,    49,
      50,   158,    46,   115,    11,    12,    45,    46,    47,   121,
      49,    50,     9,   125,    12,   127,     9,    45,    46,    47,
      12,    49,    50,    13,    14,    15,    13,    13,    38,    39,
      40,    41,    42,    13,    12,   192,    74,    75,   150,   151,
     152,   153,   154,   155,   156,   157,    13,    45,    46,    47,
      13,    49,    50,    45,    46,    47,    13,    49,    50,    45,
      46,    47,     9,    49,    50,    45,    46,    47,     9,    49,
      50,    94,    95,    96,    97,    98,    13,    76,    77,    78,
      48,    38,    39,    40,    41,    42,     9,     9,    11,    12,
       9,     9,     9,    30,    31,    32,    33,    34,    35,    36,
      37,   124,    11,    12,    29,    28,    13,    11,     9,    11,
      19,    20,    21,    22,    23,    24,    25,    19,    20,    21,
      22,    23,    24,    25,    30,    31,    32,    33,    34,    35,
      36,    37,   150,   151,   152,   153,   154,   155,   156,   157,
      45,    46,    47,    48,    49,    50,    46,    47,     9,    49,
      50,     9,    45,    45,     9,    26,    13,     9,    26,    13,
       9,     9,    26,    26,    26,    45,    13,    13,    45,    44,
      26,    13,   244,    26,    43,    26,   125,    27,    -1,   115,
      17,    26,    26,    26,    -1,    -1,    27,    27,    27,    27,
      26,    -1,    27,    27,    27,    27,    27,    27,    27,    26,
      -1,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    38,    39,
      40,    41,    42,    43,    45,    52,    53,    54,    55,    57,
      58,    59,    65,    66,    69,    70,    77,    78,    79,    80,
      81,    86,    87,    97,    12,     9,    12,    45,    46,    47,
      49,    50,    73,    83,    84,    85,     9,     9,    12,    12,
      60,    11,    12,    19,    20,    21,    22,    23,    24,    25,
       0,    53,    45,    45,     9,    45,    48,    73,    45,    73,
      83,     9,     9,     9,    14,    15,    16,    17,    18,     9,
      45,    81,    67,    12,    45,    56,    82,    83,    13,    45,
      73,    76,    81,    96,    88,    89,    90,    91,    92,     9,
      11,    12,    28,     9,    11,    13,    13,    13,    13,    84,
      84,    85,    85,    85,     9,    12,    45,    73,    93,    94,
      95,     9,    93,    93,    11,    12,     9,    10,    13,    45,
      82,    82,    82,    82,    82,    73,    13,    75,    77,    78,
      46,    48,    74,     9,     9,     9,    13,    81,    94,     9,
      30,    31,    32,    33,    34,    35,    36,    37,     9,    93,
      68,    13,    82,    13,    76,    45,    73,     9,     9,     9,
      71,    10,    13,    45,    45,    29,     9,    26,    13,    13,
      13,    81,    95,    95,    95,    95,    95,    95,    95,    95,
      13,    81,     9,    13,    61,    13,    26,    77,    78,     9,
      72,     9,    52,    26,    26,    13,    26,    13,    13,    81,
      26,    26,    52,    45,    45,    26,    27,    52,    52,    26,
      52,    26,    26,    13,    52,    52,    27,    52,    27,    27,
      52,    27,    52,    52,    26,    27,    27,    27,    27,    27,
      27,    52,    62,    27,    44,    63,    59,    64,    26,    52,
      27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    60,    61,    62,    59,
      64,    63,    63,    63,    65,    65,    65,    65,    65,    65,
      65,    65,    67,    68,    66,    69,    69,    69,    69,    69,
      69,    69,    71,    70,    72,    70,    73,    73,    73,    73,
      74,    75,    75,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    79,    79,    80,    81,    81,    81,
      81,    82,    82,    83,    83,    83,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    88,    87,    89,    87,    90,
      87,    91,    87,    92,    87,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     3,     4,     2,     3,     3,
       3,     2,     2,     1,     1,     1,     0,     0,     0,    11,
       0,     5,     2,     0,    11,    10,    10,    10,     9,     9,
       9,     8,     0,     0,     9,     5,     3,     6,     5,     3,
       5,     6,     0,     8,     0,     9,     1,     1,     1,     1,
       1,     4,     4,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     1,     1,     2,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     1,     1,     1,     1,
       5,     5,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 124 "compiler_hw3.y" /* yacc.c:1646  */
    {if(table_head){
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
		dump_symbol(current_scope+1); //print_all();//print all for testing
		print_ins();//////////////////print .j
		}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 154 "compiler_hw3.y" /* yacc.c:1646  */
    {un_f=1;int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,0,(yyvsp[-3].string));
					check_return_type_use((yyvsp[-3].string));//invoke function
					memset(argu,0,50);
					}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 158 "compiler_hw3.y" /* yacc.c:1646  */
    {un_f=1;int f=lookup_symbol((yyvsp[-4].string)); int flag=semantic_error(f,0,(yyvsp[-4].string));
					check_return_type_use((yyvsp[-4].string)); check_argu((yyvsp[-4].string));argu_cnt=0;memset(argu,0,50);
		
					}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 164 "compiler_hw3.y" /* yacc.c:1646  */
    {un_f=1;int f=lookup_symbol((yyvsp[-2].string)); int flag=semantic_error(f,0,(yyvsp[-2].string));
					check_return_type_use((yyvsp[-2].string));memset(argu,0,50);memset(argu,0,50);
					}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 167 "compiler_hw3.y" /* yacc.c:1646  */
    {un_f=1;int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,0,(yyvsp[-3].string));
					check_return_type_use((yyvsp[-3].string)); check_argu((yyvsp[-3].string));argu_cnt=0;memset(argu,0,50);

					}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 173 "compiler_hw3.y" /* yacc.c:1646  */
    {int i=check_return_type();char temp[100];
					if(i==3){sprintf(temp,"\treturn\n");}
					else{return_type_error();}//raise error msg
					insert_ins(temp);print_ins();
					}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 178 "compiler_hw3.y" /* yacc.c:1646  */
    {int i=check_return_type();char temp[100];
					if(i==initializer_flag){
						if(i==0 || i==2){
							sprintf(temp,"\tldc %d\n",(int)(yyvsp[-1].f_val));
							insert_ins(temp);
							memset(temp,'\0',100);
							sprintf(temp,"\tireturn\n");
							insert_ins(temp);
						}
						else {
							sprintf(temp,"\tldc %lf\n",(yyvsp[-1].f_val));
							insert_ins(temp);
							memset(temp,'\0',100);
							sprintf(temp,"\tfreturn\n");
							insert_ins(temp);
						}
					}
					else{return_type_error();}//raise error msg
					print_ins();initializer_flag=0;//initializer_flag init

					}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 199 "compiler_hw3.y" /* yacc.c:1646  */
    {int i=check_return_type();char temp[100];
					int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
					int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
					if(ty != i){return_type_error();/*printf("%d %d\n",ty,i);*/}//raise error msg

					if(ch==1){//if static-->store static
						if(ty==0 || ty==2){
							sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));
							insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tireturn\n");insert_ins(temp);
						}
						else if(ty==1){
							sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));
							insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tfreturn\n");insert_ins(temp);
						}
						else{
						return_type_error();
						}
						
					}
					else {
						int i1 = get_index((yyvsp[-1].string));
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
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 234 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];int i=check_return_type();
					if(i==0){sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tireturn\n");insert_ins(temp);}
					else {sprintf(temp,"\tfreturn\n");insert_ins(temp);}
					print_ins();
					}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 248 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"START%d%d:\n",current_scope,start_cnt[current_scope]);insert_ins(temp);print_ins();start_cnt[current_scope]++;}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 248 "compiler_hw3.y" /* yacc.c:1646  */
    {
				char temp[100];
				if(if_type==0)		{sprintf(temp,"\tgoto START%d%d\n",current_scope,start_cnt[current_scope]);insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"LABEL%d%d:\n",current_scope,if_cnt[current_scope]-1);insert_ins(temp);print_ins();}
				else if(if_type==1)	{sprintf(temp,"\tgoto START%d%d\n",current_scope,start_cnt[current_scope]);insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"LABEL%d%d:\n",current_scope,if_cnt[current_scope]-1);insert_ins(temp);print_ins();}
				else if(if_type==2)	{sprintf(temp,"\tgoto START%d%d\n",current_scope,start_cnt[current_scope]);insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"LABEL%d%d:\n",current_scope,if_cnt[current_scope]-1);insert_ins(temp);print_ins();}
				else if(if_type==3)	{sprintf(temp,"\tgoto START%d%d\n",current_scope,start_cnt[current_scope]);insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"LABEL%d%d:\n",current_scope,if_cnt[current_scope]-1);insert_ins(temp);print_ins();}
				else if(if_type==4)	{sprintf(temp,"\tgoto START%d%d\n",current_scope,start_cnt[current_scope]);insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"LABEL%d%d:\n",current_scope,if_cnt[current_scope]-1);insert_ins(temp);print_ins();}
				else			{sprintf(temp,"\tgoto START%d%d\n",current_scope,start_cnt[current_scope]);insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"LABEL%d%d:\n",current_scope,if_cnt[current_scope]-1);insert_ins(temp);print_ins();}

				}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 257 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tgoto EXIT%d%d\n",current_scope,ex_cnt[current_scope]);insert_ins(temp);print_ins(); else_shift=current_scope;
						}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 261 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"START%d%d:\n",current_scope-1,start_cnt[current_scope-1]);insert_ins(temp);print_ins();start_cnt[current_scope-1]++;}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 261 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"EXIT%d%d:\n",current_scope,ex_cnt[current_scope]);insert_ins(temp);print_ins();ex_cnt[current_scope]++;}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 263 "compiler_hw3.y" /* yacc.c:1646  */
    {
	char temp[100];sprintf(temp,"START%d%d:\n",else_shift,start_cnt[else_shift]);
	insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"EXIT%d%d:\n",else_shift,ex_cnt[else_shift]);
	insert_ins(temp);print_ins();ex_cnt[else_shift]++;start_cnt[else_shift]++;
   }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 281 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"LABEL_BEGIN%d%d:\n",current_scope,wh_cnt[current_scope]);insert_ins(temp);print_ins();}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 281 "compiler_hw3.y" /* yacc.c:1646  */
    {
	char temp[100];sprintf(temp,"\tgoto LABEL_FALSE%d%d\n",current_scope,wh_cnt[current_scope]);
	insert_ins(temp);print_ins();
	sprintf(temp,"LABEL%d%d:\n",current_scope,if_cnt[current_scope]-1);insert_ins(temp);print_ins();
	}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 285 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tgoto LABEL_BEGIN%d%d\n",current_scope,wh_cnt[current_scope]);insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"LABEL_FALSE%d%d:\n",current_scope,wh_cnt[current_scope]);insert_ins(temp);print_ins();wh_cnt[current_scope]++;
				}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 290 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,1,(yyvsp[-3].string)); create_symbol(flag,(yyvsp[-3].string),1,(yyvsp[-4].i_val),current_scope);
								if(current_scope==0){
									char temp[100];
									if((yyvsp[-4].i_val)==0)	{sprintf(temp,".field public static %s I = %d\n",(yyvsp[-3].string),(int)(yyvsp[-1].f_val));insert_ins(temp);print_ins();}
									else if((yyvsp[-4].i_val)==1)	{sprintf(temp,".field public static %s F = %lf\n",(yyvsp[-3].string),(yyvsp[-1].f_val));insert_ins(temp);print_ins();}
									else if((yyvsp[-4].i_val)==2)	{sprintf(temp,".field public static %s Z = %d\n",(yyvsp[-3].string),(int)(yyvsp[-1].f_val));insert_ins(temp);print_ins();}
								}
								else {
									int i=get_index((yyvsp[-3].string));
									char temp[100];
									if((yyvsp[-4].i_val)==0)	{int ini=(int)(yyvsp[-1].f_val);sprintf(temp,"\tldc %d\n",(int)(yyvsp[-1].f_val));insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i);insert_ins(temp);print_ins();
											}
									else if((yyvsp[-4].i_val)==1)	{double ini=(yyvsp[-1].f_val);sprintf(temp,"\tldc %lf\n",(yyvsp[-1].f_val));insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);print_ins();
											}
									else if((yyvsp[-4].i_val)==2)	{int ini=(int)(yyvsp[-1].f_val);sprintf(temp,"\tldc %d\n",(int)(yyvsp[-1].f_val));insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i);insert_ins(temp);print_ins();
											}
								}
							}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 311 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,1,(yyvsp[-1].string)); create_symbol(flag,(yyvsp[-1].string),1,(yyvsp[-2].i_val),current_scope);
								if(current_scope==0){
									char temp[100];
									if((yyvsp[-2].i_val)==0)	{sprintf(temp,".field public static %s I\n",(yyvsp[-1].string));insert_ins(temp);print_ins();}
									else if((yyvsp[-2].i_val)==1)	{sprintf(temp,".field public static %s F\n",(yyvsp[-1].string));insert_ins(temp);print_ins();}
									else if((yyvsp[-2].i_val)==2)	{sprintf(temp,".field public static %s Z\n",(yyvsp[-1].string));insert_ins(temp);print_ins();}
								}
								else {
									int i=get_index((yyvsp[-1].string));
									char temp[100];
									if((yyvsp[-2].i_val)==0)	{sprintf(temp,"\tldc 0\n");insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i );insert_ins(temp);print_ins();
											}
									else if((yyvsp[-2].i_val)==1)	{int v=0;sprintf(temp,"\tldc %lf\n",(double)v);insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tfstore %d\n",i );insert_ins(temp);print_ins();
											}
									else if((yyvsp[-2].i_val)==2)	{sprintf(temp,"\tldc 0\n");insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i );insert_ins(temp);print_ins();
											}
								}
							}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 332 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-4].string)); int flag=semantic_error(f,1,(yyvsp[-4].string)); create_symbol(flag,(yyvsp[-4].string),0,(yyvsp[-5].i_val),current_scope);}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 333 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,1,(yyvsp[-3].string)); create_symbol(flag,(yyvsp[-3].string),1,(yyvsp[-4].i_val),current_scope);
								if(current_scope==0){
									char temp[100];
									sprintf(temp,".field public static %s Ljava/lang/String; = %s\n",(yyvsp[-3].string),(yyvsp[-1].string));
									insert_ins(temp);
									print_ins();
								}
								else{
									int i=get_index((yyvsp[-3].string));
									char temp[100];
									sprintf(temp,"\tldc %s\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
									sprintf(temp,"\tastore %d\n",i );insert_ins(temp);print_ins();
								}
							}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 347 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,1,(yyvsp[-1].string)); create_symbol(flag,(yyvsp[-1].string),1,(yyvsp[-2].i_val),current_scope);
								if(current_scope==0){
									char temp[100];
									sprintf(temp,".field public static %s Ljava/lang/String;\n",(yyvsp[-1].string));
									insert_ins(temp);
									print_ins();
								}
							}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 355 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,1,(yyvsp[-3].string)); create_symbol(flag,(yyvsp[-3].string),0,(yyvsp[-4].i_val),current_scope);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 356 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-4].string)); int flag=semantic_error(f,1,(yyvsp[-4].string)); create_symbol(flag,(yyvsp[-4].string),0,(yyvsp[-5].i_val),current_scope);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 359 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-2].string)); int flag=semantic_error(f,1,(yyvsp[-2].string)); create_symbol(flag,(yyvsp[-2].string),0,(yyvsp[-3].i_val),current_scope-1);func_cnt++;//func_cnt is function count
				if(strcmp((yyvsp[-2].string),"main")==0){
					char temp[100];
					if((yyvsp[-3].i_val)==0)	{sprintf(temp,".method public static main([Ljava/lang/String;)I\n");insert_ins(temp);memset(temp,'\0',100);}
					else if((yyvsp[-3].i_val)==1)	{sprintf(temp,".method public static main([Ljava/lang/String;)F\n");insert_ins(temp);memset(temp,'\0',100);}
					else if((yyvsp[-3].i_val)==2)	{sprintf(temp,".method public static main([Ljava/lang/String;)Z\n");insert_ins(temp);memset(temp,'\0',100);}
					else if((yyvsp[-3].i_val)==3)	{sprintf(temp,".method public static main([Ljava/lang/String;)V\n");insert_ins(temp);memset(temp,'\0',100);}
					insert_ins(".limit stack 50\n");memset(temp,'\0',100);
					insert_ins(".limit locals 50\n");
					print_ins();				
				}
				else{
					char temp[100];
					if((yyvsp[-3].i_val)==0)	{sprintf(temp,".method public static %s()I\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);}
					else if((yyvsp[-3].i_val)==1)	{sprintf(temp,".method public static %s()F\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);}
					else if((yyvsp[-3].i_val)==2)	{sprintf(temp,".method public static %s()Z\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);}
					else if((yyvsp[-3].i_val)==3)	{sprintf(temp,".method public static %s()V\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);}
					insert_ins(".limit stack 50\n");memset(temp,'\0',100);
					insert_ins(".limit locals 50\n");
					print_ins();
				}
			}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 380 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_ins(".end method\n");print_ins();}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 381 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,1,(yyvsp[-3].string)); create_symbol(flag,(yyvsp[-3].string),0,(yyvsp[-4].i_val),current_scope-1);
				char temp[100];
				sprintf(temp,".method public static %s(",(yyvsp[-3].string));
				int i;
				for(i=0;i<para_cnt;i++){
					if(para_attri[i]==0){strcat(temp,"I");}
					else if(para_attri[i]==1){strcat(temp,"F");}
					else if(para_attri[i]==2){strcat(temp,"Z");}
					else if(para_attri[i]==4){strcat(temp,"Ljava/lang/String;");}
				}
				func_cnt++;//func_cnt +1
				
				memset(para_attri,0,100);
				strcat(temp,")");
				if((yyvsp[-4].i_val)==0)	{strcat(temp,"I\n");insert_ins(temp);memset(temp,'\0',100);}
				if((yyvsp[-4].i_val)==1)	{strcat(temp,"F\n");insert_ins(temp);memset(temp,'\0',100);}
				if((yyvsp[-4].i_val)==2)	{strcat(temp,"Z\n");insert_ins(temp);memset(temp,'\0',100);}
				if((yyvsp[-4].i_val)==3)	{strcat(temp,"V\n");insert_ins(temp);memset(temp,'\0',100);}
				insert_ins(".limit stack 50\n");memset(temp,'\0',100);
				insert_ins(".limit locals 50\n");
				print_ins();

				}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 403 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_ins(".end method\n");print_ins();para_cnt=0;}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 407 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].i_val);initializer_flag=0;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 408 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].f_val);initializer_flag=1;}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 409 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].b_val);initializer_flag=2;}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 410 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].b_val);initializer_flag=2;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 413 "compiler_hw3.y" /* yacc.c:1646  */
    {sprintf((yyval.string),"%s",(yyvsp[0].string));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 416 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);para_attri[para_cnt]=(yyvsp[-1].i_val);para_cnt++;}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 417 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);para_attri[para_cnt]=4;para_cnt++;}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 418 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);
					para_attri[para_cnt]=(yyvsp[-1].i_val);//store the type
					para_cnt++;
					}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 422 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);para_attri[para_cnt]=4;para_cnt++;}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 425 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,0,(yyvsp[0].string));
			int ch = check_static((yyvsp[0].string)); int ty = check_type((yyvsp[0].string));
			if(ch==1){//if static-->store static
				char temp[100];
				if(ty==0){
					sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[0].string));insert_ins(temp);memset(temp,'\0',100);
					argu[argu_cnt]=0;
				}
				else if (ty == 1){
					sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[0].string));insert_ins(temp);argu[argu_cnt]=1;
				}	
				else if (ty == 2){
					sprintf(temp,"\tgetstatic compiler_hw3/%s Z\n",(yyvsp[0].string));insert_ins(temp);argu[argu_cnt]=2;
				}
				else  {
					sprintf(temp,"\tgetstatic compiler_hw3/%s Ljava/lang/String;\n",(yyvsp[0].string));insert_ins(temp);argu[argu_cnt]=4;
				}
				argu_cnt++;	
			}
			else {
				char temp[100];int i=get_index((yyvsp[0].string));
				if(ty==0){
					sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
					argu[argu_cnt]=0;
				}
				else if(ty == 1){
					sprintf(temp,"\tfload %d\n",i );insert_ins(temp);argu[argu_cnt]=1;	
				}
				else if (ty == 2){
					sprintf(temp,"\tiload %d\n",i );insert_ins(temp);argu[argu_cnt]=2;
				}
				else  {
					sprintf(temp,"\taload %d\n",i );insert_ins(temp);argu[argu_cnt]=4;
				}
				argu_cnt++;					
			}
			print_ins();
			}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 463 "compiler_hw3.y" /* yacc.c:1646  */
    {
					char temp[100];
					if(initializer_flag==0)		{argu[argu_cnt]=0;sprintf(temp,"\tldc %d\n",(int)(yyvsp[0].f_val));}
					else if(initializer_flag==1)	{argu[argu_cnt]=1;sprintf(temp,"\tldc %f\n",(yyvsp[0].f_val));}
					else 				{argu[argu_cnt]=2;sprintf(temp,"\tldc %d\n",(int)(yyvsp[0].f_val));}
					insert_ins(temp);
					print_ins();
					argu_cnt++;
					initializer_flag=0;
					}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 477 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=0;}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 478 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=1;}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 479 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=2;}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 480 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=3;}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 483 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=4;}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 495 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-2].string)); int flag=semantic_error(f,0,(yyvsp[-2].string));
						int ch = check_static((yyvsp[-2].string)); int ty = check_type((yyvsp[-2].string));
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",(yyvsp[-2].string));insert_ins(temp);
							}
							else {
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",(yyvsp[-2].string));insert_ins(temp);	
							}	
						
						}
						else {
							char temp[100];int i=get_index((yyvsp[-2].string));
							if(ty==0){
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i );insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfstore %d\n",i );insert_ins(temp);	
							}
							
							
						}
						print_ins();//print instructions
						}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 524 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-2].string)); int flag=semantic_error(f,0,(yyvsp[-2].string));
				int ch = check_static((yyvsp[-2].string)); int ty = check_type((yyvsp[-2].string));
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",(yyvsp[-2].string));insert_ins(temp);
							}
							else {
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",(yyvsp[-2].string));insert_ins(temp);	
							}	
						
						}
						else {
							char temp[100];int i=get_index((yyvsp[-2].string));
							if(ty==0){
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i );insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfstore %d\n",i );insert_ins(temp);	
							}
							
							
						}
						print_ins();//print instructions
				}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 553 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-2].string)); int flag=semantic_error(f,0,(yyvsp[-2].string));}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 557 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=(yyvsp[-2].f_val)+(yyvsp[0].f_val);char temp[100];sprintf(temp,"\tfadd\n");insert_ins(temp);print_ins();}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 558 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=(yyvsp[-2].f_val)-(yyvsp[0].f_val);char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);print_ins();}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 559 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=(yyvsp[0].f_val);}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 563 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=(yyvsp[-2].f_val)*(yyvsp[0].f_val);char temp[100];sprintf(temp,"\tfmul\n");insert_ins(temp);print_ins();}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 564 "compiler_hw3.y" /* yacc.c:1646  */
    {if((yyvsp[0].f_val)==0){divide_invalid();} else {(yyval.f_val)=(yyvsp[-2].f_val)/(yyvsp[0].f_val);char temp[100];sprintf(temp,"\tfdiv\n");insert_ins(temp);print_ins();}}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 565 "compiler_hw3.y" /* yacc.c:1646  */
    {double i=(yyvsp[-2].f_val)-((int)(yyvsp[-2].f_val)); double j=(yyvsp[0].f_val)-((int)(yyvsp[0].f_val));
				if (i>0 || j>0){
					rem_invalid();
				}
				 else {
					(yyval.f_val)=((int)(yyvsp[-2].f_val)) % ((int)(yyvsp[0].f_val));
					char temp[100];sprintf(temp,"\tfrem\n");insert_ins(temp);print_ins();
				}
				}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 574 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=(yyvsp[0].f_val);}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 577 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=(yyvsp[-1].f_val);}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 578 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=1;int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,0,(yyvsp[0].string));
			int ch = check_static((yyvsp[0].string)); int ty = check_type((yyvsp[0].string));
			if(ch==1){//if static-->store static
				char temp[100];
				if(ty==0){
					sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[0].string));insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else {
					sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[0].string));insert_ins(temp);	
				}	
						
			}
			else {
				char temp[100];int i=get_index((yyvsp[0].string));
				if(ty==0){
					sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else {
					sprintf(temp,"\tfload %d\n",i );insert_ins(temp);	
				}
							
							
			}
			print_ins();
			}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 605 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val)=(yyvsp[0].f_val);char temp[100];sprintf(temp,"\tldc %lf\n",(yyvsp[0].f_val));insert_ins(temp);print_ins();initializer_flag=0;}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 608 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
		char temp[100];int i=get_index((yyvsp[-1].string));
		int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
		if(ch==1){//if static-->store static
			char temp[100];
			if(ty==0){
				sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tiadd\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tputstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);
			}
			else {
				sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1.0\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tfadd\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tputstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);
			}	
						
		}
		else {
			char temp[100];int i=get_index((yyvsp[-1].string));
			if(ty==0){
				sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tiadd\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
			}
			else {
				sprintf(temp,"\tfload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1.0\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tfadd\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
			}
							
							
		}
		print_ins();
		}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 646 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
		char temp[100];int i=get_index((yyvsp[-1].string));
		int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
		if(ch==1){//if static-->store static
			char temp[100];
			if(ty==0){
				sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tisub\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tputstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);
			}
			else {
				sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1.0\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tputstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);
			}	
						
		}
		else {
			char temp[100];int i=get_index((yyvsp[-1].string));
			if(ty==0){
				sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tisub\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
			}
			else {
				sprintf(temp,"\tfload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tldc 1.0\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);
				sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
			}
							
							
		}
		print_ins();
		}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 686 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
						int i=get_index((yyvsp[-1].string));
						int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
						op_assignment_check_static = ch;//for checking static
						op_assignment_check_type = ty; //for checking int or float
						strcpy(op_assignment_name,(yyvsp[-1].string)); //for copying ID
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
							}	
						
						}
						else {
							char temp[100];int i=get_index((yyvsp[-1].string));
							if(ty==0){
								sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tfload %d\n",i );insert_ins(temp);memset(temp,'\0',100);	
							}
							
							
						}print_ins();
			}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 715 "compiler_hw3.y" /* yacc.c:1646  */
    {
						if(op_assignment_check_static==1){//if static-->store static
							char temp[100];
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfadd\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",op_assignment_name);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfadd\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",op_assignment_name);insert_ins(temp);
							}	
						
						}
						else {
							char temp[100];int i=get_index(op_assignment_name);
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfadd\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfadd\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
							}
							
							
						}memset(op_assignment_name,'\0',50);print_ins();
							}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 744 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
						int i=get_index((yyvsp[-1].string));
						int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
						op_assignment_check_static = ch;//for checking static
						op_assignment_check_type = ty; //for checking int or float
						strcpy(op_assignment_name,(yyvsp[-1].string)); //for copying ID
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
							}	
						
						}
						else {
							char temp[100];int i=get_index((yyvsp[-1].string));
							if(ty==0){
								sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tfload %d\n",i );insert_ins(temp);memset(temp,'\0',100);	
							}
							
							
						}print_ins();
			}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 773 "compiler_hw3.y" /* yacc.c:1646  */
    {
						if(op_assignment_check_static==1){//if static-->store static
							char temp[100];
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",op_assignment_name);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",op_assignment_name);insert_ins(temp);
							}	
						
						}
						else {
							char temp[100];int i=get_index(op_assignment_name);
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
							}
							
							
						}memset(op_assignment_name,'\0',50);print_ins();
							}
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 802 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
						int i=get_index((yyvsp[-1].string));
						int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
						op_assignment_check_static = ch;//for checking static
						op_assignment_check_type = ty; //for checking int or float
						strcpy(op_assignment_name,(yyvsp[-1].string)); //for copying ID
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
							}	
						
						}
						else {
							char temp[100];int i=get_index((yyvsp[-1].string));
							if(ty==0){
								sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tfload %d\n",i );insert_ins(temp);memset(temp,'\0',100);	
							}
							
							
						}print_ins();
			}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 831 "compiler_hw3.y" /* yacc.c:1646  */
    {
						if(op_assignment_check_static==1){//if static-->store static
							char temp[100];
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfmul\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",op_assignment_name);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfmul\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",op_assignment_name);insert_ins(temp);
							}	
						
						}
						else {
							char temp[100];int i=get_index(op_assignment_name);
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfmul\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfmul\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
							}
							
							
						}memset(op_assignment_name,'\0',50);print_ins();
							}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 860 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
						int i=get_index((yyvsp[-1].string));
						int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
						op_assignment_check_static = ch;//for checking static
						op_assignment_check_type = ty; //for checking int or float
						strcpy(op_assignment_name,(yyvsp[-1].string)); //for copying ID
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
							}	
						
						}
						else {
							char temp[100];int i=get_index((yyvsp[-1].string));
							if(ty==0){
								sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tfload %d\n",i );insert_ins(temp);memset(temp,'\0',100);	
							}
							
							
						}print_ins();
			}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 889 "compiler_hw3.y" /* yacc.c:1646  */
    {
						if(op_assignment_check_static==1){//if static-->store static
							char temp[100];
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfdiv\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",op_assignment_name);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfdiv\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",op_assignment_name);insert_ins(temp);
							}	
						
						}
						else {
							char temp[100];int i=get_index(op_assignment_name);
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfdiv\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfdiv\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
							}
							
							
						}memset(op_assignment_name,'\0',50);print_ins();
							}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 918 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,0,(yyvsp[-1].string));
						int i=get_index((yyvsp[-1].string));
						int ch = check_static((yyvsp[-1].string)); int ty = check_type((yyvsp[-1].string));
						op_assignment_check_static = ch;//for checking static
						op_assignment_check_type = ty; //for checking int or float
						strcpy(op_assignment_name,(yyvsp[-1].string)); //for copying ID
						if(ch==1){//if static-->store static
							char temp[100];
							if(ty==0){
								sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-1].string));insert_ins(temp);memset(temp,'\0',100);
							}	
						
						}
						else {
							char temp[100];int i=get_index((yyvsp[-1].string));
							if(ty==0){
								sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\ti2f\n");insert_ins(temp);memset(temp,'\0',100);
							}
							else {
								sprintf(temp,"\tfload %d\n",i );insert_ins(temp);memset(temp,'\0',100);	
							}
							
							
						}print_ins();
			}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 947 "compiler_hw3.y" /* yacc.c:1646  */
    {
						if(op_assignment_check_static==1){//if static-->store static
							char temp[100];
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfrem\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s I\n",op_assignment_name);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfrem\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tputstatic compiler_hw3/%s F\n",op_assignment_name);insert_ins(temp);
							}	
						
						}
						else {
							char temp[100];int i=get_index(op_assignment_name);
							if(op_assignment_check_type==0){
								sprintf(temp,"\tfrem\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tistore %d\n",i);insert_ins(temp);
							}
							else {
								sprintf(temp,"\tfrem\n");insert_ins(temp);memset(temp,'\0',100);
								sprintf(temp,"\tfstore %d\n",i);insert_ins(temp);	
							}
							
							
						}memset(op_assignment_name,'\0',50);print_ins();
							}
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 981 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);insert_ins("\tf2i\n");
				sprintf(temp,"\tifgt LABEL%d%d\n",current_scope,if_cnt[current_scope]);insert_ins(temp);print_ins();if_type=0;if_cnt[current_scope]++;
				}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 984 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);insert_ins("\tf2i\n");
				sprintf(temp,"\tiflt LABEL%d%d\n",current_scope,if_cnt[current_scope]);insert_ins(temp);print_ins();if_type=1;if_cnt[current_scope]++;
				}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 987 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);insert_ins("\tf2i\n");
				sprintf(temp,"\tifge LABEL%d%d\n",current_scope,if_cnt[current_scope]);insert_ins(temp);print_ins();if_type=2;if_cnt[current_scope]++;
				}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 990 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);insert_ins("\tf2i\n");
				sprintf(temp,"\tifle LABEL%d%d\n",current_scope,if_cnt[current_scope]);insert_ins(temp);print_ins();if_type=3;if_cnt[current_scope]++;
				}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 993 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);insert_ins("\tf2i\n");
				sprintf(temp,"\tifeq LABEL%d%d\n",current_scope,if_cnt[current_scope]);insert_ins(temp);print_ins();if_type=4;if_cnt[current_scope]++;
				}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 996 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);memset(temp,'\0',100);insert_ins("\tf2i\n");
				sprintf(temp,"\tifne LABEL%d%d\n",current_scope,if_cnt[current_scope]);insert_ins(temp);print_ins();if_type=5;if_cnt[current_scope]++;
				}
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1005 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,0,(yyvsp[0].string));
			int ch = check_static((yyvsp[0].string)); int ty = check_type((yyvsp[0].string));
			if(ch==1){//if static-->store static
				char temp[100];
				if(ty==0){
					sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[0].string));insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else if (ty == 1){
					sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[0].string));insert_ins(temp);
				}	
				else if (ty == 2){
					sprintf(temp,"\tgetstatic compiler_hw3/%s Z\n",(yyvsp[0].string));insert_ins(temp);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else  {
					sprintf(temp,"\tgetstatic compiler_hw3/%s Ljava/lang/String;\n",(yyvsp[0].string));insert_ins(temp);
				}
				argu_cnt++;	
			}
			else {
				char temp[100];int i=get_index((yyvsp[0].string));
				if(ty==0){
					sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else if(ty == 1){
					sprintf(temp,"\tfload %d\n",i );insert_ins(temp);	
				}
				else if (ty == 2){
					sprintf(temp,"\tiload %d\n",i );insert_ins(temp);
					sprintf(temp,"\ti2f\n");insert_ins(temp);
				}
				else  {
					sprintf(temp,"\taload %d\n",i );insert_ins(temp);
				}					
			}
			print_ins();
			}
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1044 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];
			if(initializer_flag==0)		{sprintf(temp,"\tldc %d\n",(int)(yyvsp[0].f_val));insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\ti2f\n");insert_ins(temp);}
			else if(initializer_flag==1)	{sprintf(temp,"\tldc %lf\n",(yyvsp[0].f_val));insert_ins(temp);}
			else 				{sprintf(temp,"\tldc %d\n",(int)(yyvsp[0].f_val));insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\ti2f\n");insert_ins(temp);}
			print_ins();
			initializer_flag=0;
			}
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1053 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,0,(yyvsp[0].string));
			int ch = check_static((yyvsp[0].string)); int ty = check_type((yyvsp[0].string));
			if(ch==1){//if static-->store static
				char temp[100];
				if(ty==0){
					sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[0].string));insert_ins(temp);memset(temp,'\0',100);
					argu[argu_cnt]=0;
				}
				else if (ty == 1){
					sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[0].string));insert_ins(temp);argu[argu_cnt]=1;
				}	
				else if (ty == 2){
					sprintf(temp,"\tgetstatic compiler_hw3/%s Z\n",(yyvsp[0].string));insert_ins(temp);argu[argu_cnt]=2;
				}
				else  {
					sprintf(temp,"\tgetstatic compiler_hw3/%s Ljava/lang/String;\n",(yyvsp[0].string));insert_ins(temp);argu[argu_cnt]=4;
				}
				argu_cnt++;	
			}
			else {
				char temp[100];int i=get_index((yyvsp[0].string));
				if(ty==0){
					sprintf(temp,"\tiload %d\n",i );insert_ins(temp);memset(temp,'\0',100);
					argu[argu_cnt]=0;
				}
				else if(ty == 1){
					sprintf(temp,"\tfload %d\n",i );insert_ins(temp);argu[argu_cnt]=1;	
				}
				else if (ty == 2){
					sprintf(temp,"\tiload %d\n",i );insert_ins(temp);argu[argu_cnt]=2;
				}
				else  {
					sprintf(temp,"\taload %d\n",i );insert_ins(temp);argu[argu_cnt]=4;
				}
				argu_cnt++;					
			}
			print_ins();
			}
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1091 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];
			if(initializer_flag==0)		{argu[argu_cnt]=0;sprintf(temp,"\tldc %d\n",(int)(yyvsp[0].f_val));}
			else if(initializer_flag==1)	{argu[argu_cnt]=1;sprintf(temp,"\tldc %f\n",(yyvsp[0].f_val));}
			else 				{argu[argu_cnt]=2;sprintf(temp,"\tldc %d\n",(int)(yyvsp[0].f_val));}
			insert_ins(temp);
			print_ins();
			argu_cnt++;
			initializer_flag=0;
			}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1102 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-2].string)); int flag=semantic_error(f,0,(yyvsp[-2].string));
					int ch = check_static((yyvsp[-2].string)); int ty = check_type((yyvsp[-2].string));
					if(ch==1){ //if static-->store static
						char temp[100];
						if(ty==0 || ty==2){
							sprintf(temp,"\tgetstatic compiler_hw3/%s I\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(I)V\n");insert_ins(temp);
						}
						else if(ty==1){
							sprintf(temp,"\tgetstatic compiler_hw3/%s F\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(F)V\n");insert_ins(temp);
						}
						else {
							sprintf(temp,"\tgetstatic compiler_hw3/%s Ljava/lang/String;\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
							sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");insert_ins(temp);
						}	
						
					}
					else {
						char temp[100];int i=get_index((yyvsp[-2].string));
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
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1151 "compiler_hw3.y" /* yacc.c:1646  */
    {
					char temp[100];
					sprintf(temp,"\tldc %s\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");insert_ins(temp);
					print_ins();
					}
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1159 "compiler_hw3.y" /* yacc.c:1646  */
    {
					char temp[100];
					if(initializer_flag==0){
					sprintf(temp,"\tldc %d\n",(int)(yyvsp[-2].f_val));insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(I)V\n");insert_ins(temp);
					print_ins();
					}
					else{
					sprintf(temp,"\tldc %lf\n",(yyvsp[-2].f_val));insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(F)V\n");insert_ins(temp);
					print_ins();
					}initializer_flag=0;
					}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2959 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1178 "compiler_hw3.y" /* yacc.c:1906  */


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
	if(error_flag==1){
		int ret=remove("compiler_hw3.j");
	}
	return 0;
}

void yyerror(char *s)
{
	error_flag=1;
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
	int i=0;
	if(!table_head){
		table_head=temp;
		//printf("AAA:%s\n",table_head->name);
		return;
	}
	table_element *T=table_head;
	table_element *T3=table_head;
	while(T){
		if((temp->scope) >= (T->scope)){
			T3=T;
			T=T->next;
			i=1;
		}
		else{break;}
		/*if(T->next==NULL){T->next=temp;break;}
		else {T=T->next;}*/
	}
	if(i==1){//add
		T3->next=temp;
		if(T){temp->next=T;}
	}
	else{
		temp->next=T;
		table_head=temp;
	}
	//printf("SSS\n");
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
			error_flag=1;
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
			error_flag=1;
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
			error_flag=1;
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
	table_element* T5=table_head;
	if(!T){
		return;
	}
	int i=0,max=0;
	max=T5->scope;
	while(T5){if(max<T5->scope){max=T5->scope;}T5=T5->next;}
	if(max < scope){return;}

	printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n","Index", "Name", "Kind", "Type", "Scope", "Attribute");
	while(T){
		if(T->scope < scope){
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
		table_element* T4 =T;
		T=T->next;
		free(T4);	
	}
	printf("\n\n");
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
	if(hold_on==0){//for if_stat
		while(i<200){
			if(INS_SET[i].ins[0]!='\0'){
				fprintf(file,"%s",INS_SET[i].ins);
			}
			i++;
		}
		ins_init();
		return;
	}
	return;
}
int get_index(char *name){
	table_element* T=table_head;
	int i=0,now=current_scope;
	while(T){
		if(T->scope<=now && T->kind!=0 && T->scope!=0){
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
	int i=0;
	while(T){
		if(T->kind==0){
			i++;
			//printf("A: %d\n",i);
			if(i==func_cnt){
				//printf("A: %d\n",func_cnt);
				return T->type;
			}
		}
		T=T->next;
	}
	return 3; //default type is void
}
void return_type_error(){
	error_flag=1;
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
void para_attri_insert(){
	int i;
	for(i=0;i<para_cnt;i++){
	}
}
void print_all(){
	table_element* T=table_head;
	while(T){printf("XX: %s\n",T->name);T=T->next;}
	return;
}
void check_return_type_use(char *name){
	table_element* T=table_head;
	int t=0,j=0;
	char temp[100];
	while(T){
		if(strcmp(T->name,name)==0){
			if(T->kind==0){
				sprintf(temp,"\tinvokestatic compiler_hw3/%s(",T->name);
				t=T->attri[j];
				while(t>-1){
					j++;
					if(t==0)	{strcat(temp,"I");}
					else if(t==1)	{strcat(temp,"F");}
					else if(t==2)	{strcat(temp,"Z");}
					else if(t==4)	{strcat(temp,"Ljava/lang/String;");}
					t=T->attri[j];
				}
				strcat(temp,")");
				if(T->type==0)		{strcat(temp,"I\n");insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\ti2f\n");insert_ins(temp);}
				else if(T->type==1)	{strcat(temp,"F\n");insert_ins(temp);}
				else if(T->type==2)	{strcat(temp,"Z\n");insert_ins(temp);sprintf(temp,"\ti2f\n");insert_ins(temp);}
				else if(T->type==4)	{strcat(temp,"Ljava/lang/String;\n");insert_ins(temp);}//this line is for debugging
				else {strcat(temp,"V\n");insert_ins(temp);}
				
			}
		}
		T=T->next;
	}
	print_ins();
	
}
void check_argu(char *name){
	table_element* T=table_head;
	int t=0,j=0;
	int argu_f=0;
	while(T){
		if(strcmp(T->name,name)==0){
			if(T->kind==0){
				t=T->attri[j];
				while(t>-1){
					if(t!=argu[j]){
					argu_f=1;
					}
					j++;
					t=T->attri[j];
				}
				
				
			}
		}
		if(argu_f==1){argu_type_error();return;}
		T=T->next;
	}
	if(j != argu_cnt){argu_type_error();/*printf("\n%d %d\n",j,argu_cnt);*/return;}
}
void argu_type_error(){
	error_flag=1;
	if(binary_yyline[yylineno+1]!=1){
		binary_yyline[yylineno+1]=1;				
		printf("%d: %s\n",yylineno+1,buff);
	}
	printf("\n|-----------------------------------------------|\n");
	printf("| Error found in line %d: %s\n", yylineno+1, buff);
	printf("| function formal parameter is not the same");
	printf("\n|-----------------------------------------------|\n\n");
	print_or_not=1;
	return;
}
void divide_invalid(){
	error_flag=1;
	if(binary_yyline[yylineno+1]!=1){
		binary_yyline[yylineno+1]=1;				
		printf("%d: %s\n",yylineno+1,buff);
	}
	printf("\n|-----------------------------------------------|\n");
	printf("| Error found in line %d: %s\n", yylineno+1, buff);
	printf("| Variable divided by zero");
	printf("\n|-----------------------------------------------|\n\n");
	print_or_not=1;
	return;
}
void rem_invalid(){
	error_flag=1;
	if(binary_yyline[yylineno+1]!=1){
		binary_yyline[yylineno+1]=1;				
		printf("%d: %s\n",yylineno+1,buff);
	}
	printf("\n|-----------------------------------------------|\n");
	printf("| Error found in line %d: %s\n", yylineno+1, buff);
	printf("| %% with float data type");
	printf("\n|-----------------------------------------------|\n\n");
	print_or_not=1;
	return;
}
