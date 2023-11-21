
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "bison.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>

	int yylex ();
	int yyerror();

	int switchdone = 0;
	int switchvar;

	int ifval[1000];
	int ifptr = -1;
	int ifdone[1000];

    int ptr = 0;
    int value[1000];
    char varlist[1000][1000];

    ///if already declared  return 1 else return 0
    int isdeclared(char str[]){
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) return 1;
        }
        return 0;
    }
    /// if already declared return 0 or add new value and return 1;
    int addnewval(char str[],int val){
        if(isdeclared(str) == 1) return 0;
        strcpy(varlist[ptr],str);
        value[ptr] = val;
        ptr++;
        return 1;
    }

    ///get the value of corresponding string
    int getval(char str[]){
        int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
		if(indx==-1)
		{
			return 0;
		}
        return value[indx];
    }
    int setval(char str[], int val){
    	int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
		if(indx!=-1)
        value[indx] = val;

	

    }




/* Line 189 of yacc.c  */
#line 145 "bison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUM = 259,
     STR = 260,
     GE = 261,
     LE = 262,
     GT = 263,
     LT = 264,
     MINUS = 265,
     PLUS = 266,
     DIV = 267,
     MULT = 268,
     SCAN = 269,
     LESS = 270,
     GREAT = 271,
     WHILE = 272,
     INT = 273,
     DOUBLE = 274,
     FACT = 275,
     CHAR = 276,
     MAIN = 277,
     PB = 278,
     PE = 279,
     BB = 280,
     BE = 281,
     DOT = 282,
     CM = 283,
     ASGN = 284,
     PRINTVAR = 285,
     PRINTSTR = 286,
     PRINTLN = 287,
     IF = 288,
     ELSE = 289,
     ELSEIF = 290,
     FOR = 291,
     INC = 292,
     DEC = 293,
     TO = 294,
     SWITCH = 295,
     DEFAULT = 296,
     COL = 297,
     FUNCTION = 298,
     IFX = 299,
     SH = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 74 "bison.y"

  char text[10000];
  int val;



/* Line 214 of yacc.c  */
#line 233 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 245 "bison.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    15,    16,    19,    22,    25,    28,
      31,    34,    37,    40,    43,    47,    49,    51,    53,    57,
      59,    61,    65,    70,    76,    82,    88,    93,    95,    97,
     101,   105,   109,   113,   117,   121,   125,   129,   133,   142,
     144,   145,   154,   160,   170,   180,   190,   200,   212,   224,
     225,   228,   234,   240,   245,   253,   255,   256,   263,   270,
     271,   274,   283,   284,   288,   289,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    67,    48,    67,    -1,    18,    22,    23,
      24,    25,    49,    26,    -1,    -1,    49,    50,    -1,    49,
      55,    -1,    49,    56,    -1,    49,    57,    -1,    49,    54,
      -1,    49,    61,    -1,    49,    64,    -1,    49,    60,    -1,
      49,    71,    -1,    51,    52,    27,    -1,    18,    -1,    19,
      -1,    21,    -1,    53,    28,    52,    -1,    53,    -1,     3,
      -1,     3,    29,    56,    -1,     3,    29,    56,    27,    -1,
      14,    23,     3,    24,    27,    -1,    30,    23,     3,    24,
      27,    -1,    31,    23,     5,    24,    27,    -1,    32,    23,
      24,    27,    -1,     4,    -1,     3,    -1,    56,    11,    56,
      -1,    56,    10,    56,    -1,    56,    13,    56,    -1,    56,
      12,    56,    -1,    56,     9,    56,    -1,    56,     8,    56,
      -1,    56,     7,    56,    -1,    56,     6,    56,    -1,    23,
      56,    24,    -1,    33,    23,    58,    24,    25,    62,    26,
      59,    -1,    56,    -1,    -1,    59,    35,    23,    56,    24,
      25,    62,    26,    -1,    59,    34,    25,    62,    26,    -1,
      17,    23,     3,     9,     4,    24,    25,    62,    26,    -1,
      17,    23,     3,     8,     4,    24,    25,    62,    26,    -1,
      17,    23,     3,     7,     4,    24,    25,    62,    26,    -1,
      17,    23,     3,     6,     4,    24,    25,    62,    26,    -1,
      36,    23,    56,    39,    56,    37,    56,    24,    25,    62,
      26,    -1,    36,    23,    56,    39,    56,    38,    56,    24,
      25,    62,    26,    -1,    -1,    62,    63,    -1,    30,    23,
       3,    24,    27,    -1,    31,    23,     5,    24,    27,    -1,
      32,    23,    24,    27,    -1,    40,    23,    65,    24,    25,
      66,    26,    -1,    56,    -1,    -1,    66,    56,    42,    25,
      49,    26,    -1,    66,    41,    42,    25,    49,    26,    -1,
      -1,    67,    68,    -1,    51,    43,    23,    69,    24,    25,
      49,    26,    -1,    -1,    51,     3,    70,    -1,    -1,    70,
      28,    51,     3,    -1,    20,    23,    56,    24,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   108,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   128,   130,   130,   130,   132,   133,
     135,   145,   161,   171,   190,   201,   208,   224,   225,   235,
     237,   239,   241,   252,   254,   256,   258,   260,   270,   278,
     289,   290,   298,   315,   330,   344,   357,   380,   397,   416,
     417,   422,   451,   475,   490,   493,   501,   502,   509,   523,
     524,   527,   532,   533,   535,   536,   538
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "STR", "GE", "LE", "GT",
  "LT", "MINUS", "PLUS", "DIV", "MULT", "SCAN", "LESS", "GREAT", "WHILE",
  "INT", "DOUBLE", "FACT", "CHAR", "MAIN", "PB", "PE", "BB", "BE", "DOT",
  "CM", "ASGN", "PRINTVAR", "PRINTSTR", "PRINTLN", "IF", "ELSE", "ELSEIF",
  "FOR", "INC", "DEC", "TO", "SWITCH", "DEFAULT", "COL", "FUNCTION", "IFX",
  "SH", "$accept", "starthere", "program", "statement", "declaration",
  "type", "variables", "variable", "assign", "print", "expression",
  "ifelse", "ifexp", "elseif", "whileloop", "forloop", "LoopStatement",
  "Lprint", "switch", "expswitch", "switchinside", "function", "func",
  "fparameter", "fsparameter", "fact", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    51,    51,    51,    52,    52,
      53,    53,    54,    54,    55,    55,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    58,
      59,    59,    59,    60,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    64,    65,    66,    66,    66,    67,
      67,    68,    69,    69,    70,    70,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     7,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     1,     1,     1,     3,     1,
       1,     3,     4,     5,     5,     5,     4,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     8,     1,
       0,     8,     5,     9,     9,     9,     9,    11,    11,     0,
       2,     5,     5,     4,     7,     1,     0,     6,     6,     0,
       2,     8,     0,     3,     0,     4,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      59,     0,     0,     1,    15,    16,    17,    59,     0,    60,
       0,     2,     0,     0,    15,    62,     0,     0,     0,     4,
      64,     0,     0,    63,     4,    28,    27,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     5,     0,
       9,     6,     7,     8,    12,    10,    11,    13,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    20,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,    37,
       0,     0,     0,    39,     0,     0,    55,     0,     0,    14,
       0,    36,    35,    34,    33,    30,    29,    32,    31,    65,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    21,    18,    23,     0,     0,     0,     0,
      66,    24,    25,    49,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    49,    49,    49,    40,     0,
       0,     0,    50,     0,     0,    54,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
      46,    45,    44,    43,     0,     0,     0,     0,     0,    49,
      49,     4,     4,    49,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,    51,    52,    47,    48,    58,    57,
      42,     0,    49,     0,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,    22,    38,    39,    63,    64,    40,    41,
      42,    43,    84,   152,    44,    45,   130,   142,    46,    87,
     133,     2,     9,    18,    23,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
    -126,    25,    60,  -126,     1,  -126,  -126,  -126,   -15,  -126,
      40,    70,    43,    41,  -126,    70,    44,    73,    46,  -126,
    -126,    58,    54,    64,  -126,    71,  -126,    78,    82,    84,
      -1,  -126,    85,    91,    93,    94,    96,    97,  -126,   118,
    -126,  -126,   293,  -126,  -126,  -126,  -126,  -126,    70,    92,
      -1,   127,   128,    -1,  -126,   231,   133,   134,   114,    -1,
      -1,    -1,   129,   125,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,  -126,   206,   138,   277,   239,  -126,
     145,   148,   144,   293,   150,   190,   293,   151,    -1,  -126,
     118,    -5,    -5,    -5,    -5,    42,    42,  -126,  -126,  -126,
    -126,   149,   177,   178,   180,   181,   159,   193,   196,  -126,
     197,    -1,   203,   293,  -126,  -126,   207,   208,   210,   256,
    -126,  -126,  -126,  -126,   198,  -126,   205,   229,   262,   263,
     -12,    -1,    -1,    23,  -126,  -126,  -126,  -126,  -126,   284,
     287,   288,  -126,   258,   266,  -126,   247,   182,     3,    21,
      30,    67,   -19,   278,   303,   289,   290,   291,   292,   294,
    -126,  -126,  -126,  -126,   295,   298,   299,   300,   301,  -126,
    -126,  -126,  -126,  -126,    -1,   302,   304,  -126,   103,   195,
     123,   147,   227,   285,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,   297,  -126,   230,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,   -24,  -126,     2,   222,  -126,  -126,  -126,
     -29,  -126,  -126,  -126,  -126,  -126,  -125,  -126,  -126,  -126,
    -126,   307,  -126,  -126,  -126,  -126
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,    55,    54,    26,     8,    69,    70,    71,    72,   148,
     149,   150,   151,     8,   138,   164,   165,    17,   139,   140,
     141,    75,    30,    10,    78,     3,    54,    26,    12,   160,
      83,    85,    86,   139,   140,   141,    91,    92,    93,    94,
      95,    96,    97,    98,   178,   179,    30,   161,   182,   145,
      73,   139,   140,   141,    71,    72,   162,    25,    26,   113,
     139,   140,   141,    13,   146,    16,    15,   193,    27,    19,
      21,    28,    14,     5,    29,     6,    20,    30,     4,     5,
      31,     6,   124,    24,    32,    33,    34,    35,    14,     5,
      36,     6,    48,   163,    37,    25,    26,   139,   140,   141,
      50,    51,   143,   144,   147,    52,    27,    53,    56,    28,
      14,     5,    29,     6,    57,    30,    58,    59,    74,    60,
      61,    62,    32,    33,    34,    35,    25,    26,    36,   186,
      76,    77,    37,   139,   140,   141,    80,    27,    82,    81,
      28,    14,     5,    29,     6,   183,    30,   180,   181,   188,
      25,    26,    89,    32,    33,    34,    35,    99,    88,    36,
      90,    27,   101,    37,    28,    14,     5,    29,     6,   107,
      30,   109,   108,   189,   110,   112,   115,    32,    33,    34,
      35,   116,   117,    36,   118,   119,   120,    37,    65,    66,
      67,    68,    69,    70,    71,    72,    65,    66,    67,    68,
      69,    70,    71,    72,    65,    66,    67,    68,    69,    70,
      71,    72,    65,    66,    67,    68,    69,    70,    71,    72,
     121,   187,   123,   122,   159,   139,   140,   141,   125,   111,
     134,   126,   127,   100,   128,   131,   132,    65,    66,    67,
      68,    69,    70,    71,    72,    65,    66,    67,    68,    69,
      70,    71,    72,   190,   135,    79,   194,   139,   140,   141,
     139,   140,   141,   106,    65,    66,    67,    68,    69,    70,
      71,    72,    65,    66,    67,    68,    69,    70,    71,    72,
     129,   166,   156,   102,   103,   104,   105,   136,   137,   158,
     157,    65,    66,    67,    68,    69,    70,    71,    72,    65,
      66,    67,    68,    69,    70,    71,    72,   153,   167,   191,
     154,   155,   114,   168,    11,   169,   170,   171,     0,   172,
     173,   174,   192,   175,   176,     0,     0,     0,   177,   184,
       0,   185
};

static const yytype_int16 yycheck[] =
{
      24,    30,     3,     4,     2,    10,    11,    12,    13,   134,
     135,   136,   137,    11,    26,    34,    35,    15,    30,    31,
      32,    50,    23,    22,    53,     0,     3,     4,    43,    26,
      59,    60,    61,    30,    31,    32,    65,    66,    67,    68,
      69,    70,    71,    72,   169,   170,    23,    26,   173,    26,
      48,    30,    31,    32,    12,    13,    26,     3,     4,    88,
      30,    31,    32,    23,    41,    24,    23,   192,    14,    25,
      24,    17,    18,    19,    20,    21,     3,    23,    18,    19,
      26,    21,   111,    25,    30,    31,    32,    33,    18,    19,
      36,    21,    28,    26,    40,     3,     4,    30,    31,    32,
      29,    23,   131,   132,   133,    23,    14,    23,    23,    17,
      18,    19,    20,    21,    23,    23,    23,    23,    26,    23,
      23,     3,    30,    31,    32,    33,     3,     4,    36,    26,
       3,     3,    40,    30,    31,    32,     3,    14,    24,     5,
      17,    18,    19,    20,    21,   174,    23,   171,   172,    26,
       3,     4,    27,    30,    31,    32,    33,     3,    29,    36,
      28,    14,    24,    40,    17,    18,    19,    20,    21,    24,
      23,    27,    24,    26,    24,    24,    27,    30,    31,    32,
      33,     4,     4,    36,     4,     4,    27,    40,     6,     7,
       8,     9,    10,    11,    12,    13,     6,     7,     8,     9,
      10,    11,    12,    13,     6,     7,     8,     9,    10,    11,
      12,    13,     6,     7,     8,     9,    10,    11,    12,    13,
      27,    26,    25,    27,    42,    30,    31,    32,    25,    39,
      25,    24,    24,    27,    24,    37,    38,     6,     7,     8,
       9,    10,    11,    12,    13,     6,     7,     8,     9,    10,
      11,    12,    13,    26,    25,    24,    26,    30,    31,    32,
      30,    31,    32,    24,     6,     7,     8,     9,    10,    11,
      12,    13,     6,     7,     8,     9,    10,    11,    12,    13,
      24,     3,    24,     6,     7,     8,     9,    25,    25,    42,
      24,     6,     7,     8,     9,    10,    11,    12,    13,     6,
       7,     8,     9,    10,    11,    12,    13,    23,     5,    24,
      23,    23,    90,    24,     7,    25,    25,    25,    -1,    25,
      25,    23,    25,    24,    24,    -1,    -1,    -1,    27,    27,
      -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    67,     0,    18,    19,    21,    48,    51,    68,
      22,    67,    43,    23,    18,    23,    24,    51,    69,    25,
       3,    24,    49,    70,    25,     3,     4,    14,    17,    20,
      23,    26,    30,    31,    32,    33,    36,    40,    50,    51,
      54,    55,    56,    57,    60,    61,    64,    71,    28,    49,
      29,    23,    23,    23,     3,    56,    23,    23,    23,    23,
      23,    23,     3,    52,    53,     6,     7,     8,     9,    10,
      11,    12,    13,    51,    26,    56,     3,     3,    56,    24,
       3,     5,    24,    56,    58,    56,    56,    65,    29,    27,
      28,    56,    56,    56,    56,    56,    56,    56,    56,     3,
      27,    24,     6,     7,     8,     9,    24,    24,    24,    27,
      24,    39,    24,    56,    52,    27,     4,     4,     4,     4,
      27,    27,    27,    25,    56,    25,    24,    24,    24,    24,
      62,    37,    38,    66,    25,    25,    25,    25,    26,    30,
      31,    32,    63,    56,    56,    26,    41,    56,    62,    62,
      62,    62,    59,    23,    23,    23,    24,    24,    42,    42,
      26,    26,    26,    26,    34,    35,     3,     5,    24,    25,
      25,    25,    25,    25,    23,    24,    24,    27,    62,    62,
      49,    49,    62,    56,    27,    27,    26,    26,    26,    26,
      26,    24,    25,    62,    26
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 108 "bison.y"
    { printf("\nCompilation Successful\n"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 128 "bison.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 130 "bison.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 132 "bison.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 133 "bison.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 136 "bison.y"
    {
						//printf("%s\n",$1);
						int x = addnewval((yyvsp[(1) - (1)].text),0);
						if(!x) {
							printf("Compilation Error:Variable %s is already declared\n",(yyvsp[(1) - (1)].text));
							exit(-1);
						}

					;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 146 "bison.y"
    {
						//printf("%s %d\n",$1,$3);
						int x = addnewval((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].val));
						if(!x) {
							printf("Compilation Error: Variable %s is already declared\n",(yyvsp[(1) - (3)].text));
							exit(-1);
							}
					;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 162 "bison.y"
    {
						if(!isdeclared((yyvsp[(1) - (4)].text))) {
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (4)].text));
							exit(-1);
						}
						else{
							setval((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].val));
						}
				    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 172 "bison.y"
    {
			int tmp;
			tmp = 7;
			//printf("scan korte chai\n");
			scanf("%d", &tmp);
			//printf("%d - %s \n", tmp, $3);
			
			setval((yyvsp[(3) - (5)].text), tmp);
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 191 "bison.y"
    {
						if(!isdeclared((yyvsp[(3) - (5)].text))){
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(3) - (5)].text));
							exit(-1);
						}
						else{
							int v = getval((yyvsp[(3) - (5)].text));
							printf("%d",v);
						}
					;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 203 "bison.y"
    {
						int l = strlen((yyvsp[(3) - (5)].text));
						int i;
						for(i = 1;  i < l-1; i++) printf("%c",(yyvsp[(3) - (5)].text)[i]);
					;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 210 "bison.y"
    {
						printf("\n");
					;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 224 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 226 "bison.y"
    {
						if(!isdeclared((yyvsp[(1) - (1)].text))) {
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (1)].text));
							exit(-1);
						}
						else{
							(yyval.val) = getval((yyvsp[(1) - (1)].text));
						}
				 	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 236 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 238 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 240 "bison.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 242 "bison.y"
    {
						if((yyvsp[(3) - (3)].val)) {
 							(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
							}
				  		else {
							(yyval.val) = 0;
							printf("\nRuntime Error: division by zero\t");
							exit(-1);
				  		} 
					;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 253 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 255 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 257 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 259 "bison.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 261 "bison.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 271 "bison.y"
    {
						if((yyvsp[(3) - (8)].val))
						printf("%s", (yyvsp[(6) - (8)].text));
						ifdone[ifptr] = 0;
						ifptr--;
					;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 279 "bison.y"
    {
						ifptr++;
						ifdone[ifptr] = 0;
						if((yyvsp[(1) - (1)].val)){
							printf("\nIf executed\n");
							ifdone[ifptr] = 1;
						}
						(yyval.val) = (yyvsp[(1) - (1)].val);
					;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 291 "bison.y"
    {
						if((yyvsp[(4) - (8)].val) && ifdone[ifptr] == 0){
							printf("%s", (yyvsp[(7) - (8)].text));
							printf("\nElse if block expressin %d executed\n",(yyvsp[(4) - (8)].val));
							ifdone[ifptr] = 1;
						}
					;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 299 "bison.y"
    {
						if(ifdone[ifptr] == 0){
							printf("%s", (yyvsp[(4) - (5)].text));
							printf("\nElse block executed\n");
							ifdone[ifptr] = 1;
						}
					;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 316 "bison.y"
    {
			int tmp = getval((yyvsp[(3) - (9)].text));
			int tmp2;
			while(tmp<(yyvsp[(5) - (9)].val))
			{
				printf("%d ", tmp);
				printf("%s",(yyvsp[(8) - (9)].text));
				
				
				tmp = tmp+1;
			}
			setval((yyvsp[(3) - (9)].text), tmp);

		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 331 "bison.y"
    {
			int tmp = getval((yyvsp[(3) - (9)].text));
			while(tmp>(yyvsp[(5) - (9)].val))
			{
				printf("%d ", tmp);
				
				printf("%s",(yyvsp[(8) - (9)].text));
				
				tmp = tmp-1;
			}
			setval((yyvsp[(3) - (9)].text), tmp);

		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 345 "bison.y"
    {
			int tmp = getval((yyvsp[(3) - (9)].text));
			for(;tmp<=(yyvsp[(5) - (9)].val);tmp++)
			{
				printf("%d ", tmp);
				
				printf("%s",(yyvsp[(8) - (9)].text));
				
			}
			setval((yyvsp[(3) - (9)].text), tmp);

		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 358 "bison.y"
    {
			int tmp = getval((yyvsp[(3) - (9)].text));
			for(;tmp>=(yyvsp[(5) - (9)].val);tmp--)
			{
				printf("%d ", tmp);
				
				printf("%s",(yyvsp[(8) - (9)].text));
				
			}	
			setval((yyvsp[(3) - (9)].text), tmp);

		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 381 "bison.y"
    {
						int st = (yyvsp[(3) - (11)].val);
						int ed = (yyvsp[(5) - (11)].val);
						int dif = (yyvsp[(7) - (11)].val);
						int cnt = 0;
						int k = 0;
						//printf(" hhel : \n%s\n", $10);
						printf("%d\n",st);
						for(k = st; k <= ed; k += dif){
							cnt++;
							int r ;
							if(strlen((yyvsp[(10) - (11)].text))!=0)
							printf("%d\n",k);
						}	
						printf("Loop executes %d times\n",cnt);
					;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 398 "bison.y"
    {
						int st = (yyvsp[(3) - (11)].val);
						int ed = (yyvsp[(5) - (11)].val);
						int dif = (yyvsp[(7) - (11)].val);
						int cnt = 0;
						int k = 0;
						//printf(" hhel : \n%s\n", $10);
						printf("%d\n",st);
						for(k = st; k >= ed; k -= dif){
							cnt++;
							int r ;
							if(strlen((yyvsp[(10) - (11)].text))!=0)
							printf("%d\n",k);
						}	
						printf("Loop executes %d times\n",cnt);
					;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 416 "bison.y"
    { strcpy((yyval.text),"");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 417 "bison.y"
    {
				 strcat((yyval.text), (yyvsp[(2) - (2)].text));
				;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 423 "bison.y"
    {
						char val[1000];
						strcpy(val, "");
						if(!isdeclared((yyvsp[(3) - (5)].text))){
							strcat(val, "Compilation Error: Variable ");

							char tmp[20];
							sprintf(tmp, "%s ", (yyvsp[(3) - (5)].text));
							strcat(val, tmp);
							strcat( val,"is not declared\n");
							printf("%s", val);
							exit(-1);
							strcpy((yyval.text), val);
						}
						else{
							char val[1000];
							strcpy(val, "");
							int v = getval((yyvsp[(3) - (5)].text));
							char tmp[18];
							sprintf(tmp, "%d", v);
							//strcpy(tmp,atoi(v));
							//printf(" v er value : %d - %s\n ", v, tmp);
							strcat(val, tmp);
							strcpy((yyval.text), val);

							//printf("%d",v);
						}
					;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 453 "bison.y"
    {
						char val[10000];
						strcpy(val, "");
						int l = strlen((yyvsp[(3) - (5)].text));
						int i;
						for(i = 1;  i < l-1; i++) 
						{
							char tmp[20];
							sprintf(tmp, "%c", (yyvsp[(3) - (5)].text)[i]);
							//printf(" str er tmp:  %s\n",tmp);
							strcat(val, tmp);
							
							
							//printf("%c",$3[i]);
						}
						//strcat(val, "");
						
						//printf("  %s ", $$);
						
						strcpy((yyval.text), val);
						//printf("::: --- val: %s - %s\n",val, $$);
					;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 477 "bison.y"
    {
						strcpy((yyval.text), "\n");
					;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 494 "bison.y"
    {
						switchdone = 0;
						switchvar = (yyvsp[(1) - (1)].val);
					;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 503 "bison.y"
    {
						if((yyvsp[(2) - (6)].val) == switchvar){
							printf("Executed %d\n",(yyvsp[(2) - (6)].val));
							switchdone = 1;
						}					
					;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 510 "bison.y"
    {
						if(switchdone == 0){
							switchdone = 1;
							printf("Default Block executed\n");
						}
					;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 528 "bison.y"
    {
						printf("Function Declared\n");
					;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 539 "bison.y"
    {
	int j = (int)(yyvsp[(3) - (5)].val);
	int i, result;
	result = 1;
	if(j==0){
		printf("Factorial %d is %d\n", j, result);
	}
	else{
		for(i = 1; i <= j; i++){
			result = result*i;
		}
		printf("Factorial of %d is %d\n", j, result);
	}
	
;}
    break;



/* Line 1455 of yacc.c  */
#line 2166 "bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 559 "bison.y"



int yyerror(char *s){
	printf( "%s\n", s);
}
