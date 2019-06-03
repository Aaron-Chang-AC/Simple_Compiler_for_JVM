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

int para_cnt=0;
int para_attri[100];//the type of each parameter

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
/* Use variable or self-defined structure to represent
 * nonterminal and token type*/


#line 138 "y.tab.c" /* yacc.c:339  */

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
    ID = 298,
    I_CONST = 299,
    F_CONST = 300,
    STR_CONST = 301,
    _TRUE = 302,
    _FALSE = 303,
    IF = 304,
    ELSE = 305
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
#define ID 298
#define I_CONST 299
#define F_CONST 300
#define STR_CONST 301
#define _TRUE 302
#define _FALSE 303
#define IF 304
#define ELSE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 74 "compiler_hw3.y" /* yacc.c:355  */

    	int i_val;
    	double f_val;
	bool b_val;
    	char string[150];

#line 285 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 302 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

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
       0,   107,   107,   121,   124,   125,   128,   129,   130,   131,
     132,   133,   134,   137,   138,   139,   142,   147,   168,   203,
     208,   209,   212,   213,   214,   217,   218,   221,   222,   225,
     226,   227,   228,   229,   230,   231,   232,   235,   238,   259,
     280,   281,   295,   303,   304,   307,   307,   329,   329,   355,
     356,   357,   358,   361,   364,   365,   366,   370,   373,   374,
     375,   376,   379,   380,   381,   382,   385,   388,   389,   393,
     397,   424,   425,   428,   429,   432,   433,   434,   438,   439,
     440,   441,   444,   445,   472,   475,   513,   552,   552,   610,
     610,   668,   668,   726,   726,   784,   784,   844,   847,   848,
     849,   850,   851,   852,   853,   854,   855,   858,   859,   860,
     863,   912,   920
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
  "NE", "AND", "OR", "INT", "FLOAT", "BOOL", "STRING", "VOID", "ID",
  "I_CONST", "F_CONST", "STR_CONST", "_TRUE", "_FALSE", "IF", "ELSE",
  "$accept", "program", "stats", "stat", "use_function", "jump_stat",
  "compound_stat", "if_stat", "else_stat", "for_stat", "while_stat",
  "declaration", "declaration_scope_add", "$@1", "$@2", "initializer",
  "initializer_str", "parameter", "argument", "type", "type_str",
  "expression_stat", "expression", "assignment_expression",
  "assignment_expression_iter", "basic_op", "multiplication", "factor",
  "post_operation", "op_assignment", "$@3", "$@4", "$@5", "$@6", "$@7",
  "bool_expression", "bool_op", "bool_fi", "print_func", YY_NULLPTR
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

#define YYPACT_NINF -150

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-150)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      81,    22,     8,    45,    51,    52,    82,  -150,  -150,  -150,
    -150,  -150,  -150,   186,    96,   115,  -150,    81,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,   -31,    75,  -150,   117,
    -150,  -150,  -150,  -150,   192,  -150,   113,   118,  -150,  -150,
    -150,  -150,   124,    53,    12,  -150,  -150,  -150,    -5,   120,
     132,   104,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   120,
    -150,  -150,   100,    72,  -150,   121,   137,   140,  -150,  -150,
      31,  -150,  -150,  -150,   113,   113,   113,   113,   113,    92,
     193,   145,   120,  -150,  -150,   142,   189,  -150,   151,  -150,
      56,   157,   193,    48,  -150,  -150,   132,   132,   132,   132,
     132,   165,  -150,   -29,   146,   138,  -150,   135,   174,   232,
     233,  -150,    12,    12,  -150,  -150,  -150,    -7,   234,    98,
     159,   218,   120,   120,   120,   120,   120,   120,   120,   120,
     132,  -150,   126,   236,  -150,  -150,  -150,  -150,  -150,   220,
     238,   239,    90,   206,   207,   222,  -150,   243,  -150,  -150,
    -150,   227,   241,    -6,    -2,   246,  -150,    81,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
      81,  -150,  -150,   230,   161,   248,  -150,  -150,   249,  -150,
      81,   235,   237,   247,   240,   251,     0,   242,   244,    81,
     216,   219,  -150,   250,  -150,   245,    81,    81,   252,    81,
     253,   254,   255,  -150,   215,   256,  -150,  -150,    81,  -150,
     257,   258,    81,   259,    81,    81,   261,   -17,  -150,  -150,
     262,  -150,  -150,   263,  -150,   264,   265,    81,    81,  -150,
    -150,  -150,  -150,  -150,   266,   267,  -150,  -150
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,    67,    62,    63,
      64,    66,    65,     0,     0,     0,     2,     5,    12,    11,
       8,    22,    23,    24,     6,     7,     0,     0,     9,     0,
      69,    71,    72,    10,     0,    16,     0,    83,    49,    50,
      51,    52,    84,     0,    77,    81,    20,    21,     0,     0,
       0,     0,    85,    86,    87,    89,    91,    93,    95,     0,
       1,     4,     0,     0,    68,     0,     0,     0,    83,    84,
       0,    18,    17,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,     0,    97,   106,    83,    70,
      74,     0,   108,     0,    60,    61,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,    42,     0,     0,     0,
       0,    82,    75,    76,    78,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,    15,    88,    90,    92,    94,    96,     0,
       0,    45,     0,     0,     0,     0,    53,     0,   110,   111,
     112,     0,     0,     0,     0,     0,   107,     3,    98,    99,
     100,   101,   102,   103,   104,   105,    73,    58,    59,    14,
       3,    38,    43,     0,     0,    47,    56,    57,     0,    41,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,    44,     0,    40,     0,     3,     3,     0,     3,
       0,     0,     0,    37,    25,     0,    54,    55,     3,    36,
       0,     0,     3,     0,     3,     3,     0,     0,    26,    46,
       0,    33,    35,     0,    34,     0,     0,     3,     3,    28,
      48,    30,    31,    32,     0,     0,    29,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -149,   260,  -150,  -150,  -150,  -150,    50,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,    -1,  -150,  -150,  -150,  -102,
     -94,  -150,  -150,   -48,   -73,     3,    39,    15,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,   -37,   188,   105,  -150
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    21,   218,    22,
      23,    24,    25,   173,   193,    84,   147,   142,    93,    26,
      27,    28,    29,    30,    89,    90,    44,    45,    31,    32,
      96,    97,    98,    99,   100,    85,    86,    87,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      81,    42,   143,    94,    79,    43,   151,   182,   187,   228,
     144,   184,    62,   201,    95,    38,    39,    35,    40,    41,
      36,   188,   101,   134,   135,   136,   137,   138,    76,    77,
      78,   195,    14,    67,    34,    69,    80,    80,    80,    70,
     205,    80,   118,    80,   111,    74,    75,   210,   211,    69,
     213,    37,    38,    39,    46,    40,    41,   166,   132,   220,
      47,   133,    73,   223,    48,   225,   226,    74,    75,   152,
      74,    75,   190,    69,    69,    69,    69,    69,   234,   235,
     191,   106,   155,   107,     1,     2,     3,     4,     5,     6,
       7,   114,   115,   116,    49,    69,    69,    69,    69,    69,
     174,   117,   140,   175,    82,   183,   185,   154,    59,   102,
      82,   103,   104,   112,   113,    60,    82,    91,    63,     8,
       9,    10,    11,    12,    13,    36,    64,    71,   105,    69,
      14,   168,    82,    72,   108,    83,    38,    39,   202,    40,
      41,    83,    38,    39,    36,    40,    41,    92,    38,    39,
     109,    40,    41,   110,   119,   121,    68,    38,    39,   141,
      40,    41,   130,    83,    38,    39,   131,    40,    41,   167,
      38,    39,   156,    40,    41,    88,    38,    39,   139,    40,
      41,   146,   145,   148,     8,     9,    10,    11,    12,   122,
     123,   124,   125,   126,   127,   128,   129,    50,    51,     8,
       9,    10,    11,    12,    50,    52,    53,    54,    55,    56,
      57,    58,    52,    53,    54,    55,    56,    57,    58,   122,
     123,   124,   125,   126,   127,   128,   129,   158,   159,   160,
     161,   162,   163,   164,   165,    65,    38,    39,    66,    40,
      41,   149,   150,   153,   157,   169,   170,   171,   172,   176,
     177,   178,   179,   180,   181,   186,   189,   192,   194,   206,
     198,   196,   207,   197,   200,   217,   199,   229,   216,   203,
     120,   204,   209,     0,     0,     0,   208,    61,   212,   214,
     215,     0,     0,   219,   221,   222,   224,   227,     0,   230,
     231,   232,   233,   236,   237
};

static const yytype_int16 yycheck[] =
{
      48,     2,   104,    51,     9,     2,    13,    13,   157,    26,
     104,    13,    43,    13,    51,    44,    45,     9,    47,    48,
      12,   170,    59,    96,    97,    98,    99,   100,    16,    17,
      18,   180,    49,    34,    12,    36,    43,    43,    43,    36,
     189,    43,    79,    43,    13,    14,    15,   196,   197,    50,
     199,    43,    44,    45,     9,    47,    48,   130,    10,   208,
       9,    13,     9,   212,    12,   214,   215,    14,    15,   117,
      14,    15,   174,    74,    75,    76,    77,    78,   227,   228,
     174,     9,   119,    11,     3,     4,     5,     6,     7,     8,
       9,    76,    77,    78,    12,    96,    97,    98,    99,   100,
      10,     9,   103,    13,    12,   153,   154,     9,    12,     9,
      12,    11,    12,    74,    75,     0,    12,    13,    43,    38,
      39,    40,    41,    42,    43,    12,     9,     9,    28,   130,
      49,   132,    12,     9,    13,    43,    44,    45,   186,    47,
      48,    43,    44,    45,    12,    47,    48,    43,    44,    45,
      13,    47,    48,    13,     9,    13,    43,    44,    45,    13,
      47,    48,    11,    43,    44,    45,     9,    47,    48,    43,
      44,    45,    13,    47,    48,    43,    44,    45,    13,    47,
      48,    46,    44,     9,    38,    39,    40,    41,    42,    30,
      31,    32,    33,    34,    35,    36,    37,    11,    12,    38,
      39,    40,    41,    42,    11,    19,    20,    21,    22,    23,
      24,    25,    19,    20,    21,    22,    23,    24,    25,    30,
      31,    32,    33,    34,    35,    36,    37,   122,   123,   124,
     125,   126,   127,   128,   129,    43,    44,    45,    46,    47,
      48,     9,     9,     9,    26,     9,    26,     9,     9,    43,
      43,    29,     9,    26,    13,     9,    26,     9,     9,    43,
      13,    26,    43,    26,    13,    50,    26,   217,    13,    27,
      82,    27,    27,    -1,    -1,    -1,    26,    17,    26,    26,
      26,    -1,    -1,    27,    27,    27,    27,    26,    -1,    27,
      27,    27,    27,    27,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    38,    39,
      40,    41,    42,    43,    49,    52,    53,    54,    55,    56,
      57,    58,    60,    61,    62,    63,    70,    71,    72,    73,
      74,    79,    80,    89,    12,     9,    12,    43,    44,    45,
      47,    48,    66,    76,    77,    78,     9,     9,    12,    12,
      11,    12,    19,    20,    21,    22,    23,    24,    25,    12,
       0,    53,    43,    43,     9,    43,    46,    66,    43,    66,
      76,     9,     9,     9,    14,    15,    16,    17,    18,     9,
      43,    74,    12,    43,    66,    86,    87,    88,    43,    75,
      76,    13,    43,    69,    74,    86,    81,    82,    83,    84,
      85,    86,     9,    11,    12,    28,     9,    11,    13,    13,
      13,    13,    77,    77,    78,    78,    78,     9,    86,     9,
      87,    13,    30,    31,    32,    33,    34,    35,    36,    37,
      11,     9,    10,    13,    75,    75,    75,    75,    75,    13,
      66,    13,    68,    70,    71,    44,    46,    67,     9,     9,
       9,    13,    74,     9,     9,    86,    13,    26,    88,    88,
      88,    88,    88,    88,    88,    88,    75,    43,    66,     9,
      26,     9,     9,    64,    10,    13,    43,    43,    29,     9,
      26,    13,    13,    74,    13,    74,     9,    52,    52,    26,
      70,    71,     9,    65,     9,    52,    26,    26,    13,    26,
      13,    13,    74,    27,    27,    52,    43,    43,    26,    27,
      52,    52,    26,    52,    26,    26,    13,    50,    59,    27,
      52,    27,    27,    52,    27,    52,    52,    26,    26,    58,
      27,    27,    27,    27,    52,    52,    27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    58,    58,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    62,    62,
      62,    62,    62,    62,    62,    64,    63,    65,    63,    66,
      66,    66,    66,    67,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    70,    70,    71,    72,    72,    73,
      74,    74,    74,    75,    75,    76,    76,    76,    77,    77,
      77,    77,    78,    78,    78,    79,    79,    81,    80,    82,
      80,    83,    80,    84,    80,    85,    80,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     4,     2,     3,     3,     3,
       2,     2,     1,     1,     1,     7,     8,     4,     2,    11,
      10,    10,    10,     9,     9,     9,     8,     7,     5,     3,
       6,     5,     3,     5,     6,     0,     8,     0,     9,     1,
       1,     1,     1,     1,     4,     4,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     1,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     1,     2,     2,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     1,
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
#line 107 "compiler_hw3.y" /* yacc.c:1646  */
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
		dump_symbol(current_scope); //print_all();//print all for testing
		print_ins();//////////////////print .j
		}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "compiler_hw3.y" /* yacc.c:1646  */
    {un_f=1;int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,0,(yyvsp[-3].string));}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 138 "compiler_hw3.y" /* yacc.c:1646  */
    {un_f=1;int f=lookup_symbol((yyvsp[-4].string)); int flag=semantic_error(f,0,(yyvsp[-4].string));}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 139 "compiler_hw3.y" /* yacc.c:1646  */
    {un_f=1;int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,0,(yyvsp[-3].string));}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 142 "compiler_hw3.y" /* yacc.c:1646  */
    {int i=check_return_type();char temp[100];
					if(i==3){sprintf(temp,"\treturn\n");}
					else{return_type_error();}//raise error msg
					insert_ins(temp);print_ins();
					}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 147 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 168 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 203 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];int i=check_return_type();
					if(i==0){sprintf(temp,"\tf2i\n");insert_ins(temp);memset(temp,'\0',100);sprintf(temp,"\tireturn\n");insert_ins(temp);}
					else {sprintf(temp,"\tfreturn\n");insert_ins(temp);}
					print_ins();
					}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 238 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 259 "compiler_hw3.y" /* yacc.c:1646  */
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
									else if((yyvsp[-2].i_val)==1)	{sprintf(temp,"\tldc 0\n");insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tfstore %d\n",i );insert_ins(temp);print_ins();
											}
									else if((yyvsp[-2].i_val)==2)	{sprintf(temp,"\tldc 0\n");insert_ins(temp);memset(temp,'\0',100);
											sprintf(temp,"\tistore %d\n",i );insert_ins(temp);print_ins();
											}
								}
							}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 280 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-4].string)); int flag=semantic_error(f,1,(yyvsp[-4].string)); create_symbol(flag,(yyvsp[-4].string),0,(yyvsp[-5].i_val),current_scope);}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 281 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 295 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-1].string)); int flag=semantic_error(f,1,(yyvsp[-1].string)); create_symbol(flag,(yyvsp[-1].string),1,(yyvsp[-2].i_val),current_scope);
								if(current_scope==0){
									char temp[100];
									sprintf(temp,".field public static %s Ljava/lang/String;\n",(yyvsp[-1].string));
									insert_ins(temp);
									print_ins();
								}
							}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 303 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-3].string)); int flag=semantic_error(f,1,(yyvsp[-3].string)); create_symbol(flag,(yyvsp[-3].string),0,(yyvsp[-4].i_val),current_scope);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 304 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-4].string)); int flag=semantic_error(f,1,(yyvsp[-4].string)); create_symbol(flag,(yyvsp[-4].string),0,(yyvsp[-5].i_val),current_scope);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 307 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 328 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_ins(".end method\n");print_ins();}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 329 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 351 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_ins(".end method\n");print_ins();para_cnt=0;}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 355 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].i_val);initializer_flag=0;}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 356 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].f_val);initializer_flag=1;}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 357 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].b_val);initializer_flag=2;}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 358 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.f_val) = (yyvsp[0].b_val);initializer_flag=2;}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 361 "compiler_hw3.y" /* yacc.c:1646  */
    {sprintf((yyval.string),"%s",(yyvsp[0].string));}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 364 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);para_attri[para_cnt]=(yyvsp[-1].i_val);para_cnt++;}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 365 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);para_attri[para_cnt]=4;para_cnt++;}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 366 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);
					para_attri[para_cnt]=(yyvsp[-1].i_val);//store the type
					para_cnt++;
					}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 370 "compiler_hw3.y" /* yacc.c:1646  */
    {insert_para((yyvsp[-1].i_val));int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,1,(yyvsp[0].string)); create_symbol(flag,(yyvsp[0].string),2,(yyvsp[-1].i_val),current_scope+1);para_attri[para_cnt]=4;para_cnt++;}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 373 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,0,(yyvsp[0].string));}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 379 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=0;}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 380 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=1;}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 381 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=2;}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 382 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=3;}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 385 "compiler_hw3.y" /* yacc.c:1646  */
    {(yyval.i_val)=4;}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 397 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 428 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[-2].string)); int flag=semantic_error(f,0,(yyvsp[-2].string));}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 432 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfadd\n");insert_ins(temp);print_ins();}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 433 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfsub\n");insert_ins(temp);print_ins();}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 438 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfmul\n");insert_ins(temp);print_ins();}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 439 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfdiv\n");insert_ins(temp);print_ins();}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 440 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tfrem\n");insert_ins(temp);print_ins();}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 445 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,0,(yyvsp[0].string));
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
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 472 "compiler_hw3.y" /* yacc.c:1646  */
    {char temp[100];sprintf(temp,"\tldc %lf\n",(yyvsp[0].f_val));insert_ins(temp);print_ins();}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 475 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 513 "compiler_hw3.y" /* yacc.c:1646  */
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
		}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 552 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}
			}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 581 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}memset(op_assignment_name,'\0',50);
							}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 610 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}
			}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 639 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}memset(op_assignment_name,'\0',50);
							}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 668 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}
			}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 697 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}memset(op_assignment_name,'\0',50);
							}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 726 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}
			}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 755 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}memset(op_assignment_name,'\0',50);
							}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 784 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}
			}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 813 "compiler_hw3.y" /* yacc.c:1646  */
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
							
							
						}memset(op_assignment_name,'\0',50);
							}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 859 "compiler_hw3.y" /* yacc.c:1646  */
    {int f=lookup_symbol((yyvsp[0].string)); int flag=semantic_error(f,0,(yyvsp[0].string));}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 863 "compiler_hw3.y" /* yacc.c:1646  */
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
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 912 "compiler_hw3.y" /* yacc.c:1646  */
    {
					char temp[100];
					sprintf(temp,"\tldc %s\n",(yyvsp[-2].string));insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tgetstatic java/lang/System/out Ljava/io/PrintStream;\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tswap\n");insert_ins(temp);memset(temp,'\0',100);
					sprintf(temp,"\tinvokevirtual java/io/PrintStream/println(Ljava/lang/String;)V\n");insert_ins(temp);
					print_ins();
					}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 920 "compiler_hw3.y" /* yacc.c:1646  */
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
					}
					}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2569 "y.tab.c" /* yacc.c:1646  */
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
#line 939 "compiler_hw3.y" /* yacc.c:1906  */


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
	table_element* T5=table_head;
	if(!T){
		return;
	}
	int i=0,max=0;
	max=T2->scope;
	if(max>0){
		while(T5){
			if(max < T5->scope){
				max=T5->scope;
			}
			T5 = T5 -> next;
		}
		if(T2->scope==max){
			printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n","Index", "Name", "Kind", "Type", "Scope", "Attribute");
			while(T2->scope==max){
				printf("\n%-10d%-10s",i,T2->name);
				if(T2->kind==0){printf("%-12s","function");}
				else if(T2->kind==1){printf("%-12s","variable");}
				else {printf("%-12s","parameter");}

				if(T2->type==0){printf("%-10s","int");}
				else if(T2->type==1){printf("%-10s","float");}
				else if(T2->type==2){printf("%-10s","bool");}
				else if(T2->type==3){printf("%-10s","void");}
				else 	{printf("%-10s","string");}
				printf("%-10d",T2->scope);
				i++;
				T3=T2;
				T2=T2->next;
				free(T3);
			}
			table_head=T2;
			printf("\n\n");
			return;
		}
	}
	while(T2){
		if(max < T2->scope){
			max=T2->scope;
		}
		T2 = T2 -> next;
	}
	if(max==0 || (max!=scope+1)){return;}
	printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n","Index", "Name", "Kind", "Type", "Scope", "Attribute");
	int flag_find=0;
	while(T){
		if(T->scope < max && flag_find==0){
			T3=T;
			T=T->next;
			if(T->scope==max){
				flag_find=1;
			}
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
		if(T){
			if(T->scope<max){break;}
		}	
	}
	printf("\n\n");
	T3->next=T;
	//free(T3->next);
	//T3->next=NULL;
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
