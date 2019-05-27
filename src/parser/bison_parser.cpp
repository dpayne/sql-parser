/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* First part of user prologue.  */
#line 1 "bison_parser.y" /* yacc.c:337  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.h".  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y" /* yacc.c:352  */

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 172 "bison_parser.cpp" /* yacc.c:352  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_HISTORY = 279,
    SQL_INTEGER = 280,
    SQL_NATURAL = 281,
    SQL_PREPARE = 282,
    SQL_PRIMARY = 283,
    SQL_SCHEMAS = 284,
    SQL_SPATIAL = 285,
    SQL_VARCHAR = 286,
    SQL_VIRTUAL = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_GLOBAL = 298,
    SQL_HAVING = 299,
    SQL_IMPORT = 300,
    SQL_INSERT = 301,
    SQL_ISNULL = 302,
    SQL_OFFSET = 303,
    SQL_RENAME = 304,
    SQL_SCHEMA = 305,
    SQL_SELECT = 306,
    SQL_SORTED = 307,
    SQL_TABLES = 308,
    SQL_UNIQUE = 309,
    SQL_UNLOAD = 310,
    SQL_UPDATE = 311,
    SQL_VALUES = 312,
    SQL_AFTER = 313,
    SQL_ALTER = 314,
    SQL_CROSS = 315,
    SQL_DELTA = 316,
    SQL_FLOAT = 317,
    SQL_GROUP = 318,
    SQL_INDEX = 319,
    SQL_INNER = 320,
    SQL_LIMIT = 321,
    SQL_LOCAL = 322,
    SQL_MERGE = 323,
    SQL_MINUS = 324,
    SQL_ORDER = 325,
    SQL_OUTER = 326,
    SQL_RIGHT = 327,
    SQL_TABLE = 328,
    SQL_UNION = 329,
    SQL_USING = 330,
    SQL_WHERE = 331,
    SQL_CALL = 332,
    SQL_CASE = 333,
    SQL_CHAR = 334,
    SQL_DATE = 335,
    SQL_DESC = 336,
    SQL_DROP = 337,
    SQL_ELSE = 338,
    SQL_FILE = 339,
    SQL_FROM = 340,
    SQL_FULL = 341,
    SQL_HASH = 342,
    SQL_HINT = 343,
    SQL_INTO = 344,
    SQL_JOIN = 345,
    SQL_LEFT = 346,
    SQL_LIKE = 347,
    SQL_LOAD = 348,
    SQL_LONG = 349,
    SQL_NULL = 350,
    SQL_PLAN = 351,
    SQL_SHOW = 352,
    SQL_TEXT = 353,
    SQL_THEN = 354,
    SQL_TIME = 355,
    SQL_VIEW = 356,
    SQL_WHEN = 357,
    SQL_WITH = 358,
    SQL_ADD = 359,
    SQL_ALL = 360,
    SQL_AND = 361,
    SQL_ASC = 362,
    SQL_CSV = 363,
    SQL_END = 364,
    SQL_FOR = 365,
    SQL_INT = 366,
    SQL_KEY = 367,
    SQL_NOT = 368,
    SQL_OFF = 369,
    SQL_SET = 370,
    SQL_TBL = 371,
    SQL_TOP = 372,
    SQL_AS = 373,
    SQL_BY = 374,
    SQL_IF = 375,
    SQL_IN = 376,
    SQL_IS = 377,
    SQL_OF = 378,
    SQL_ON = 379,
    SQL_OR = 380,
    SQL_TO = 381,
    SQL_ARRAY = 382,
    SQL_CONCAT = 383,
    SQL_ILIKE = 384,
    SQL_SECOND = 385,
    SQL_MINUTE = 386,
    SQL_HOUR = 387,
    SQL_DAY = 388,
    SQL_MONTH = 389,
    SQL_YEAR = 390,
    SQL_ENCODING = 391,
    SQL_DICT = 392,
    SQL_CARDINALITY = 393,
    SQL_TRUE = 394,
    SQL_FALSE = 395,
    SQL_EQUALS = 396,
    SQL_NOTEQUALS = 397,
    SQL_LESS = 398,
    SQL_GREATER = 399,
    SQL_LESSEQ = 400,
    SQL_GREATEREQ = 401,
    SQL_NOTNULL = 402,
    SQL_UMINUS = 403
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 95 "bison_parser.y" /* yacc.c:352  */

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::EncodingType encoding_t;
	hsql::Cardinality cardinality_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 379 "bison_parser.cpp" /* yacc.c:352  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   745

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  451

#define YYUNDEFTOK  2
#define YYMAXUTOK   403

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   155,     2,     2,
     160,   161,   153,   151,   164,   152,   162,   154,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   163,
     144,   141,   145,   165,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   158,     2,   159,   156,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   142,   143,   146,   147,
     148,   149,   150,   157
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   264,   264,   285,   291,   300,   304,   308,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   332,   333,   338,
     339,   343,   347,   359,   366,   369,   373,   385,   394,   398,
     408,   411,   425,   432,   439,   450,   451,   455,   456,   460,
     466,   467,   468,   469,   470,   471,   472,   473,   477,   481,
     482,   486,   487,   488,   492,   493,   503,   509,   515,   523,
     524,   533,   542,   555,   562,   573,   574,   584,   593,   594,
     598,   610,   614,   618,   636,   637,   641,   642,   646,   656,
     673,   677,   678,   679,   683,   684,   688,   700,   701,   705,
     709,   710,   713,   718,   719,   723,   728,   732,   733,   736,
     737,   741,   742,   746,   750,   751,   752,   758,   759,   763,
     764,   765,   766,   767,   768,   775,   776,   780,   781,   785,
     786,   790,   800,   801,   802,   803,   804,   808,   809,   810,
     811,   812,   813,   814,   815,   816,   817,   821,   822,   826,
     827,   828,   829,   830,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   848,   849,   853,   854,   855,
     856,   862,   863,   864,   865,   869,   870,   874,   875,   879,
     880,   881,   882,   883,   884,   885,   889,   890,   894,   898,
     899,   900,   901,   902,   903,   906,   910,   914,   918,   919,
     920,   921,   925,   926,   927,   928,   929,   933,   937,   938,
     942,   943,   947,   951,   955,   967,   968,   978,   979,   983,
     984,   993,   994,   999,  1010,  1019,  1020,  1025,  1026,  1031,
    1032,  1036,  1037,  1042,  1043,  1051,  1052,  1056,  1060,  1064,
    1071,  1084,  1092,  1102,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1128,  1129,  1130,  1135,  1144,  1145,  1150,  1151
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "HISTORY", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "BEFORE", "COLUMN", "CREATE",
  "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT",
  "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET", "RENAME",
  "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE",
  "VALUES", "AFTER", "ALTER", "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX",
  "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT",
  "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE", "CHAR", "DATE",
  "DESC", "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO",
  "JOIN", "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT",
  "THEN", "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC",
  "CSV", "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL", "TOP",
  "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY", "CONCAT",
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "ENCODING",
  "DICT", "CARDINALITY", "TRUE", "FALSE", "'='", "EQUALS", "NOTEQUALS",
  "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "cardinality", "opt_encoding",
  "opt_column_nullable", "opt_column_default", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_with_paren", "select_paren_or_clause", "select_no_paren",
  "set_operator", "set_type", "opt_all", "select_clause", "opt_distinct",
  "select_list", "opt_from_clause", "from_clause", "opt_where",
  "opt_group", "opt_having", "opt_order", "order_list", "order_desc",
  "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "opt_literal_list", "literal_list", "expr_alias", "expr", "operand",
  "scalar_expr", "unary_expr", "binary_expr", "logic_expr", "in_expr",
  "case_expr", "case_list", "exists_expr", "comp_expr", "function_expr",
  "extract_expr", "datetime_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,    61,   396,   397,    60,    62,   398,   399,   400,   401,
     402,    43,    45,    42,    47,    37,    94,   403,    91,    93,
      40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -346

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-346)))

#define YYTABLE_NINF -246

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-246)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     642,    21,    46,    91,   100,   -39,    26,    39,    59,    46,
     -28,    -3,   131,   144,    -8,  -346,    58,    58,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,   -29,  -346,
     169,    31,  -346,    37,   141,    96,    96,    46,   119,    46,
     118,  -346,   124,   124,    46,  -346,   139,   101,  -346,  -346,
     625,  -346,   171,  -346,  -346,   132,   -29,   109,  -346,   106,
    -346,   261,    27,   270,   165,    46,    46,   208,  -346,   203,
     151,   310,   273,    46,    46,  -346,   155,   131,  -346,   156,
     311,   307,   162,   166,  -346,  -346,  -346,   -29,   223,   210,
     -29,    -7,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
     172,   173,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,   289,   -50,   151,   248,  -346,   331,   333,    51,   197,
     -57,  -346,  -346,  -346,  -346,  -346,  -346,   337,  -346,  -346,
     248,  -346,  -346,  -346,   271,  -346,  -346,  -346,   248,   271,
     248,    95,  -346,  -346,    27,  -346,   228,   339,   229,    55,
     188,   189,   123,   267,   194,   276,  -346,   226,    82,   317,
    -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,   266,  -346,  -346,    45,   196,
    -346,   248,   310,  -346,   198,    60,  -346,   272,   195,  -346,
       7,    -7,   199,  -346,    64,    -7,    82,   312,    -9,  -346,
     283,   456,    76,  -346,   265,     1,     4,   318,   161,   248,
      85,    94,   212,   276,   417,   248,  -100,   209,    13,   248,
     248,   276,  -346,   276,   -75,   213,   -43,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   311,    46,  -346,   373,    27,    82,  -346,    27,
    -346,   337,    -1,   208,  -346,   248,  -346,   374,  -346,  -346,
    -346,   248,  -346,  -346,  -346,  -346,   248,   248,   331,  -346,
     214,  -346,  -346,   221,  -346,  -346,  -346,   244,  -346,   339,
    -346,  -346,   248,  -346,  -346,   222,  -346,  -346,  -346,  -346,
    -346,  -346,   299,   -62,   102,   248,   248,  -346,   318,   293,
    -139,  -346,  -346,  -346,   284,   371,   455,   276,   232,   226,
    -346,   298,   237,   455,   455,   455,   455,   490,   490,   490,
     490,  -100,  -100,    28,    28,    28,   -98,   238,  -346,  -346,
      97,   105,  -346,   265,  -346,    49,  -346,   234,  -346,    12,
    -346,   336,  -346,  -346,  -346,    82,    82,  -346,   390,   396,
     245,    38,  -346,   136,  -346,   248,   248,   248,  -346,    69,
     113,   243,  -346,   276,   455,   226,   249,   137,  -346,  -346,
    -346,  -346,   250,   322,  -346,  -346,  -346,   343,   346,   350,
     332,    -1,   420,  -346,  -346,  -346,   306,  -346,   274,   279,
     425,  -346,   338,   405,  -346,    44,    82,   114,  -346,   248,
    -346,   417,   281,   138,  -346,  -346,    12,    -1,  -346,  -346,
    -346,    -1,   260,   277,   248,  -346,  -346,   280,  -346,   248,
     313,  -346,  -346,    82,  -346,  -346,  -346,  -346,   530,   333,
     -23,   428,    82,   314,  -346,   287,   248,   142,   248,  -346,
     282,  -346,    15,    82,  -346,  -346,    82,  -346,   286,   291,
    -346
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     3,    18,    18,    16,     9,
       7,    10,    15,    12,    13,    11,    14,     8,     0,   225,
       0,   215,    62,    25,     0,    36,    36,     0,     0,     0,
       0,   214,    60,    60,     0,    30,     0,   227,   228,     1,
     226,     2,     0,     6,     5,   108,     0,    71,    72,   100,
      58,     0,   118,     0,     0,     0,     0,    94,    28,     0,
      66,     0,     0,     0,     0,    31,     0,     0,     4,     0,
       0,    88,     0,     0,    82,    83,    81,     0,    85,     0,
       0,   114,   216,   197,   200,   202,   203,   198,   199,   204,
       0,   117,   119,   192,   193,   194,   201,   195,   196,    24,
      23,     0,     0,    66,     0,    61,     0,     0,     0,     0,
      94,    68,    59,    56,    57,   230,   229,     0,   107,    87,
       0,    75,    74,    76,   100,    77,    84,    80,     0,   100,
       0,     0,    78,    26,     0,    35,     0,     0,     0,   188,
       0,     0,     0,     0,     0,     0,   190,     0,    93,   122,
     129,   130,   131,   124,   126,   132,   125,   144,   133,   134,
     135,   128,   123,   137,   138,     0,    29,   247,     0,     0,
      64,     0,     0,    67,    21,     0,    19,    91,    89,   115,
     224,   114,    99,   101,   106,   114,   110,   112,   109,   120,
       0,     0,     0,    37,   226,    88,     0,     0,     0,     0,
       0,     0,     0,     0,   140,     0,   139,     0,     0,     0,
       0,     0,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    70,    69,     0,
      17,     0,     0,    94,    90,     0,   222,     0,   223,   121,
      73,     0,   105,   104,   103,    79,     0,     0,     0,    41,
       0,    44,    43,     0,    42,    47,    40,     0,    33,     0,
      34,   176,     0,   189,   191,     0,   179,   180,   181,   182,
     183,   184,     0,     0,     0,     0,     0,   163,     0,     0,
       0,   136,   127,   155,   156,     0,   151,     0,     0,     0,
     142,     0,   154,   153,   169,   170,   171,   172,   173,   174,
     175,   146,   145,   148,   147,   149,   150,     0,    27,   248,
       0,     0,    20,   226,    92,   205,   207,     0,   209,   220,
     208,    96,   116,   221,   102,   113,   111,    32,     0,     0,
       0,    53,    38,     0,   167,     0,     0,     0,   161,     0,
       0,     0,   185,     0,   152,     0,     0,     0,   143,   186,
      63,    22,     0,     0,   242,   234,   240,   238,   241,   236,
       0,     0,     0,   219,   213,   217,     0,    86,     0,     0,
       0,    51,     0,    55,   177,     0,   165,     0,   164,     0,
     168,   187,     0,     0,   159,   157,   220,     0,   237,   239,
     235,     0,   206,   221,     0,    45,    46,     0,    52,     0,
      50,   178,   162,   166,   160,   158,   210,   231,   243,     0,
      98,     0,    54,     0,    39,     0,     0,     0,     0,    95,
       0,    49,     0,   244,   232,   218,    97,    48,   188,     0,
     233
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -346,  -346,  -346,   400,  -346,   436,  -346,   204,  -346,  -346,
    -346,  -346,  -346,   186,  -346,  -346,   421,  -346,   177,  -346,
    -346,  -346,  -346,  -346,  -346,   424,  -346,  -346,  -346,   361,
    -346,  -346,   294,  -190,    -5,   388,   -53,   423,  -346,  -346,
     112,   275,  -346,  -346,  -346,  -111,  -346,  -346,   -22,  -346,
     218,  -346,  -346,  -134,  -186,  -346,    61,   230,  -114,  -149,
    -346,  -346,  -346,  -346,  -346,  -346,   278,  -346,  -346,  -346,
    -346,  -346,  -346,  -346,  -346,    41,   -51,  -108,  -346,  -346,
     -79,  -346,  -346,  -346,  -345,    79,  -346,  -346,  -346,     3,
    -346,    83,   300,  -346,  -346,  -346,  -346,   414,  -346,  -346,
    -346,  -346,    63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    53,   185,   186,    17,   110,
      18,    19,    69,   175,    20,    21,    65,   202,   203,   277,
     351,   434,   393,   420,    22,    73,    23,    24,    25,   118,
      26,   120,   121,    27,   133,   134,    58,    87,    88,   137,
      59,   130,   187,   253,   254,   115,   387,   439,    91,   192,
     193,   264,    81,   142,   188,   100,   101,   189,   190,   159,
     160,   161,   162,   163,   164,   165,   211,   166,   167,   168,
     169,   292,   170,   171,   172,   173,   174,   103,   104,   105,
     106,   107,   108,   334,   335,   336,   337,   338,    40,   339,
     383,   384,   385,   259,    28,    29,    47,    48,   340,   380,
     444,    51,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     158,   128,    31,    83,   214,    32,   216,   283,   176,   183,
     256,   102,    41,   129,   280,   256,    44,   307,   448,   114,
     362,   438,    55,    57,   194,   255,   196,   198,   227,   300,
     227,    93,    94,    95,    35,   146,   412,   356,   210,   267,
      67,   140,    70,   218,   219,    42,   308,    75,    30,    31,
      45,    82,   310,   238,   239,   240,   241,   260,   242,   141,
     242,   265,    36,   220,   214,   180,   428,   247,   112,   113,
     311,   125,   305,    43,   306,   373,   123,   124,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   199,    33,   293,   353,   219,   149,    93,
      94,    95,    55,    34,   217,   303,   304,   182,   179,   374,
     147,    37,   191,   219,   375,    84,   220,   195,    84,   219,
     376,   377,    96,   367,    38,   257,   149,    93,    94,    95,
     382,    56,   220,   391,    46,   378,   150,   151,   220,  -243,
     379,   255,   341,   372,    49,   262,    85,   194,    39,    85,
     219,   392,   345,   346,   285,    50,   227,   284,   364,   333,
     176,    52,   281,   327,   150,   151,    97,    98,   156,   220,
     219,   263,    60,   152,   302,   219,    89,   295,   398,   403,
      86,   359,   360,    86,   241,   357,   242,   209,   219,   220,
      96,   219,    99,    61,   220,   102,   296,    62,   102,   135,
     197,   152,   135,   297,   296,   421,   244,   220,   153,   245,
     220,   358,   399,  -211,   401,   205,    64,   206,    96,   219,
     219,   250,   154,   422,   251,   209,    63,    68,   430,   149,
      93,    94,    95,    71,    97,    98,   153,   278,   220,   220,
     279,   395,   396,   397,    72,   361,   328,   155,   156,    80,
     154,   149,    93,    94,    95,   157,   366,    76,   370,    79,
      99,   144,    97,    98,    92,    77,   371,   150,   151,   144,
     149,    93,    94,    95,   109,   155,   156,    55,   111,   149,
      93,    94,    95,   157,   114,   423,   373,   116,    99,   150,
     151,   286,   287,   288,   289,   290,   291,   394,   405,   425,
     255,   255,   255,   445,   152,   432,   245,   330,   212,   151,
     331,   117,   402,   119,   122,    56,   127,    95,   151,   129,
     374,    96,   443,   131,   446,   375,   152,   132,   136,   138,
     145,   376,   377,   143,   221,    93,   177,   144,   181,   153,
     184,    89,   201,    96,   200,   152,   378,   204,   207,   208,
    -243,   379,   215,   154,   152,   243,   246,   252,   249,   255,
     266,   153,    96,   261,   222,    97,    98,   268,    12,    55,
     301,    96,   298,   309,   348,   154,   329,   343,   155,   156,
     213,   349,   350,   354,   355,   307,   157,    97,    98,   213,
     219,    99,   365,   368,   154,   242,   388,   369,   381,   386,
     155,   156,   389,   154,   400,   390,    97,    98,   157,   223,
     404,   406,   407,    99,   408,    97,    98,   409,   222,   155,
     156,   410,   411,   413,  -212,   414,   419,   157,   155,   156,
     224,   417,    99,   418,   440,   415,   157,   429,   225,   226,
     416,    99,   424,   447,   431,   227,   228,   442,   206,   433,
      78,   441,   450,    54,   347,   332,   352,    66,   229,   230,
     231,   232,   233,   223,   222,   234,   235,    74,   236,   237,
     238,   239,   240,   241,   148,   242,   248,   363,   139,   344,
     282,   269,    90,   449,   299,   342,   427,   270,   294,   426,
     258,   126,   437,   226,   271,     0,     0,     0,     0,   227,
     228,     0,   222,     0,     0,     0,     0,     0,     0,   223,
       0,     0,   229,   230,   231,   232,   233,     0,   272,   234,
     235,     0,   236,   237,   238,   239,   240,   241,     0,   242,
     299,     0,     0,     0,     0,   273,     0,   222,     0,   226,
       0,     0,     0,     0,     0,   227,   228,  -246,     0,     0,
     274,     0,     0,     0,   275,     0,   373,     0,   229,   230,
     231,   232,   233,     0,     0,   234,   235,   276,   236,   237,
     238,   239,   240,   241,     0,   242,     0,   226,     0,     0,
       0,     0,     0,   227,  -246,     0,     0,     0,     0,     0,
     374,     0,     0,     0,     0,   375,  -246,  -246,  -246,   232,
     233,   376,   377,   234,   235,   435,   236,   237,   238,   239,
     240,   241,   226,   242,     0,     0,   378,     0,   227,     0,
       0,   379,     0,     0,     0,  -245,     0,     0,     0,     0,
       0,     0,     1,     0,  -246,  -246,     0,     0,  -246,  -246,
       2,   236,   237,   238,   239,   240,   241,     3,   242,     1,
       0,     0,     4,     0,   436,     0,     0,     2,     0,     0,
       5,     6,     0,     0,     3,     0,     0,     0,     0,     4,
       7,     8,     0,     0,     0,     0,     0,     5,     6,     0,
       0,     9,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,    10,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,    12
};

static const yytype_int16 yycheck[] =
{
     114,    80,     3,    56,   153,     2,   155,     3,   116,   120,
       3,    62,     9,    12,   204,     3,    19,    92,     3,    76,
     159,    44,    51,    28,   138,   164,   140,   141,   128,   215,
     128,     4,     5,     6,    73,    85,   381,    99,   152,    48,
      37,    48,    39,   157,   106,    73,   121,    44,    27,     3,
      53,    56,    95,   153,   154,   155,   156,   191,   158,    66,
     158,   195,   101,   125,   213,   118,   411,   181,    65,    66,
     113,    76,   221,   101,   223,    26,    73,    74,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   144,     3,   209,   282,   106,     3,     4,
       5,     6,    51,     3,   157,   219,   220,   164,    57,    60,
     160,    85,   134,   106,    65,     9,   125,   139,     9,   106,
      71,    72,    95,   309,    85,   118,     3,     4,     5,     6,
     118,   160,   125,    95,     3,    86,    41,    42,   125,    90,
      91,   164,   253,   333,     0,    81,    40,   261,    89,    40,
     106,   113,   266,   267,   207,   163,   128,   153,   307,   160,
     268,   103,   161,   242,    41,    42,   139,   140,   153,   125,
     106,   107,     3,    78,   161,   106,    70,    83,   109,   365,
      74,   295,   296,    74,   156,    83,   158,   102,   106,   125,
      95,   106,   165,   162,   125,   246,   102,   160,   249,    87,
     105,    78,    90,   109,   102,   161,   161,   125,   113,   164,
     125,   109,    99,   164,   363,   160,   120,   162,    95,   106,
     106,   161,   127,   109,   164,   102,    85,   108,   414,     3,
       4,     5,     6,   115,   139,   140,   113,   161,   125,   125,
     164,   355,   356,   357,   120,   298,   243,   152,   153,   117,
     127,     3,     4,     5,     6,   160,   309,   118,   161,    88,
     165,   164,   139,   140,     3,   164,   161,    41,    42,   164,
       3,     4,     5,     6,     4,   152,   153,    51,   113,     3,
       4,     5,     6,   160,    76,   399,    26,    84,   165,    41,
      42,   130,   131,   132,   133,   134,   135,   161,   161,   161,
     164,   164,   164,   161,    78,   419,   164,   246,    41,    42,
     249,   160,   365,     3,    41,   160,   160,     6,    42,    12,
      60,    95,   436,   161,   438,    65,    78,   161,   105,   119,
      41,    71,    72,   161,    17,     4,     3,   164,   141,   113,
       3,    70,     3,    95,   116,    78,    86,   118,   160,   160,
      90,    91,   158,   127,    78,    89,   160,    85,   160,   164,
      48,   113,    95,   164,    47,   139,   140,    84,   103,    51,
     161,    95,   160,   160,   160,   127,     3,     3,   152,   153,
     113,   160,   138,   161,    85,    92,   160,   139,   140,   113,
     106,   165,   160,    95,   127,   158,     6,   159,   164,    63,
     152,   153,     6,   127,   161,   160,   139,   140,   160,    92,
     161,   161,    90,   165,    71,   139,   140,    71,    47,   152,
     153,    71,    90,     3,   164,   119,    21,   160,   152,   153,
     113,     6,   165,    95,     6,   161,   160,   160,   121,   122,
     161,   165,   161,   161,   164,   128,   129,   160,   162,   136,
      50,   137,   161,    17,   268,   251,   279,    36,   141,   142,
     143,   144,   145,    92,    47,   148,   149,    43,   151,   152,
     153,   154,   155,   156,   113,   158,   182,   106,    90,   261,
     205,    25,    59,   442,   113,   255,   407,    31,   210,   406,
     190,    77,   429,   122,    38,    -1,    -1,    -1,    -1,   128,
     129,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,   141,   142,   143,   144,   145,    -1,    62,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,    -1,   158,
     113,    -1,    -1,    -1,    -1,    79,    -1,    47,    -1,   122,
      -1,    -1,    -1,    -1,    -1,   128,   129,    92,    -1,    -1,
      94,    -1,    -1,    -1,    98,    -1,    26,    -1,   141,   142,
     143,   144,   145,    -1,    -1,   148,   149,   111,   151,   152,
     153,   154,   155,   156,    -1,   158,    -1,   122,    -1,    -1,
      -1,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    65,   141,   142,   143,   144,
     145,    71,    72,   148,   149,    75,   151,   152,   153,   154,
     155,   156,   122,   158,    -1,    -1,    86,    -1,   128,    -1,
      -1,    91,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,   144,   145,    -1,    -1,   148,   149,
      15,   151,   152,   153,   154,   155,   156,    22,   158,     7,
      -1,    -1,    27,    -1,   124,    -1,    -1,    15,    -1,    -1,
      35,    36,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
      45,    46,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    82,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,   103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    27,    35,    36,    45,    46,    56,
      82,    97,   103,   167,   168,   169,   170,   174,   176,   177,
     180,   181,   190,   192,   193,   194,   196,   199,   260,   261,
      27,     3,   255,     3,     3,    73,   101,    85,    85,    89,
     254,   255,    73,   101,    19,    53,     3,   262,   263,     0,
     163,   267,   103,   171,   171,    51,   160,   200,   202,   206,
       3,   162,   160,    85,   120,   182,   182,   255,   108,   178,
     255,   115,   120,   191,   191,   255,   118,   164,   169,    88,
     117,   218,   200,   202,     9,    40,    74,   203,   204,    70,
     203,   214,     3,     4,     5,     6,    95,   139,   140,   165,
     221,   222,   242,   243,   244,   245,   246,   247,   248,     4,
     175,   113,   255,   255,    76,   211,    84,   160,   195,     3,
     197,   198,    41,   255,   255,   200,   263,   160,   246,    12,
     207,   161,   161,   200,   201,   206,   105,   205,   119,   201,
      48,    66,   219,   161,   164,    41,    85,   160,   195,     3,
      41,    42,    78,   113,   127,   152,   153,   160,   224,   225,
     226,   227,   228,   229,   230,   231,   233,   234,   235,   236,
     238,   239,   240,   241,   242,   179,   243,     3,   268,    57,
     202,   141,   164,   211,     3,   172,   173,   208,   220,   223,
     224,   214,   215,   216,   224,   214,   224,   105,   224,   242,
     116,     3,   183,   184,   118,   160,   162,   160,   160,   102,
     224,   232,    41,   113,   225,   158,   225,   202,   224,   106,
     125,    17,    47,    92,   113,   121,   122,   128,   129,   141,
     142,   143,   144,   145,   148,   149,   151,   152,   153,   154,
     155,   156,   158,    89,   161,   164,   160,   224,   198,   160,
     161,   164,    85,   209,   210,   164,     3,   118,   258,   259,
     219,   164,    81,   107,   217,   219,    48,    48,    84,    25,
      31,    38,    62,    79,    94,    98,   111,   185,   161,   164,
     199,   161,   207,     3,   153,   202,   130,   131,   132,   133,
     134,   135,   237,   224,   232,    83,   102,   109,   160,   113,
     220,   161,   161,   224,   224,   225,   225,    92,   121,   160,
      95,   113,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   246,   255,     3,
     222,   222,   173,   160,   249,   250,   251,   252,   253,   255,
     264,   211,   223,     3,   216,   224,   224,   179,   160,   160,
     138,   186,   184,   220,   161,    85,    99,    83,   109,   224,
     224,   202,   159,   106,   225,   160,   202,   220,    95,   159,
     161,   161,   199,    26,    60,    65,    71,    72,    86,    91,
     265,   164,   118,   256,   257,   258,    63,   212,     6,     6,
     160,    95,   113,   188,   161,   224,   224,   224,   109,    99,
     161,   225,   202,   220,   161,   161,   161,    90,    71,    71,
      71,    90,   250,     3,   119,   161,   161,     6,    95,    21,
     189,   161,   109,   224,   161,   161,   257,   251,   250,   160,
     220,   164,   224,   136,   187,    75,   124,   268,    44,   213,
       6,   137,   160,   224,   266,   161,   224,   161,     3,   241,
     161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   175,   176,   176,   177,   178,   179,
     180,   180,   181,   181,   181,   182,   182,   183,   183,   184,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   187,
     187,   188,   188,   188,   189,   189,   190,   190,   190,   191,
     191,   192,   193,   194,   194,   195,   195,   196,   197,   197,
     198,   199,   199,   199,   200,   200,   201,   201,   202,   202,
     203,   204,   204,   204,   205,   205,   206,   207,   207,   208,
     209,   209,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   215,   216,   217,   217,   217,   218,   218,   219,
     219,   219,   219,   219,   219,   220,   220,   221,   221,   222,
     222,   223,   224,   224,   224,   224,   224,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   226,   226,   227,
     227,   227,   227,   227,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   229,   229,   230,   230,   230,
     230,   231,   231,   231,   231,   232,   232,   233,   233,   234,
     234,   234,   234,   234,   234,   234,   235,   235,   236,   237,
     237,   237,   237,   237,   237,   238,   239,   240,   241,   241,
     241,   241,   242,   242,   242,   242,   242,   243,   244,   244,
     245,   245,   246,   247,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   262,   262,
     263,   264,   264,   264,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   266,   267,   267,   268,   268
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     6,
       1,     1,     1,     1,     1,     4,     4,     1,     6,     2,
       0,     1,     2,     0,     2,     0,     4,     4,     3,     2,
       0,     4,     2,     8,     5,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     3,     3,     1,     1,     3,     5,
       2,     1,     1,     1,     1,     0,     7,     1,     0,     1,
       1,     0,     2,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     3,     2,     1,     1,     0,     2,     0,     2,
       2,     4,     2,     4,     0,     1,     3,     1,     0,     1,
       3,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     4,     6,     3,     5,     4,     5,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     6,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     1,     3,     2,     1,     1,     3,     1,     5,     1,
       0,     2,     1,     1,     0,     1,     0,     2,     1,     3,
       3,     4,     6,     8,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* IDENTIFIER  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1743 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1749 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1755 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1761 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* statement_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1774 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1780 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* preparable_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1786 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* opt_hints  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1799 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* hint_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1812 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* hint  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* prepare_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* prepare_target_query  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* execute_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* import_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* import_file_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* file_path  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* show_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* create_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1866 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_not_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1872 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* column_def_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1885 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* column_def  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1891 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* column_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1897 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* cardinality  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_encoding  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_column_nullable  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_column_default  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1921 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* drop_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1927 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1933 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* delete_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1939 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* truncate_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1945 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* insert_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1951 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* opt_column_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1964 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* update_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1970 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* update_clause_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 1983 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* update_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1989 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* select_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1995 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* select_with_paren  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2001 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_paren_or_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2007 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_no_paren  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2013 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* select_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2019 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_distinct  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2025 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* select_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2038 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2044 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2050 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_where  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2056 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_group  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2062 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_having  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2068 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_order  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2081 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* order_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2094 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* order_desc  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2100 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* opt_order_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2106 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_top  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_limit  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2118 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* expr_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2131 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_literal_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2144 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* literal_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2157 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* expr_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2163 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2169 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* operand  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2175 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* scalar_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2181 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* unary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2187 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* binary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2193 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* logic_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2199 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* in_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2205 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* case_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2211 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* case_list  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2217 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* exists_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2223 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* comp_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2229 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* function_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2235 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* extract_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2241 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* datetime_field  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2247 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* array_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2253 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* array_index  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2259 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* between_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2265 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* column_name  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2271 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2277 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* string_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2283 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* bool_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2289 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* num_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2295 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* int_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2301 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* null_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2307 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* param_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2313 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* table_ref  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2319 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2325 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* nonjoin_table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2331 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* table_ref_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2344 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* table_ref_name  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2350 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* table_ref_name_no_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2356 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* table_name  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2362 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2368 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* opt_table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2374 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2380 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* opt_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2386 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_with_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2392 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* with_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2398 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* with_description_list  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2404 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* with_description  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2410 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* join_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2416 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_join_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2422 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* join_condition  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2428 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* ident_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2441 "bison_parser.cpp" /* yacc.c:1257  */
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y" /* yacc.c:1431  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2559 "bison_parser.cpp" /* yacc.c:1431  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 264 "bison_parser.y" /* yacc.c:1652  */
    {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2769 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 285 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2780 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 291 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2791 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 300 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2800 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 304 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2809 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 308 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2817 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 315 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2823 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 316 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2829 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 317 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2835 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 318 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2841 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 319 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2847 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 320 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2853 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 321 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2859 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 322 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2865 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 323 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2871 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 332 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2877 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 333 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 2883 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 338 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2889 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 339 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2895 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 343 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2904 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 347 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2914 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 359 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2924 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 369 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2933 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 373 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2943 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 385 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2954 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 394 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kImportCSV; }
#line 2960 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 398 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2966 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 408 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 411 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2984 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 425 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 2996 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 33:
#line 432 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3008 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 34:
#line 439 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3021 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 450 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3027 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 451 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3033 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 455 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3039 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 456 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3045 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 460 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-5].sval), (yyvsp[-4].column_type_t), (yyvsp[-3].cardinality_t), (yyvsp[-2].bval), (yyvsp[-1].expr), (yyvsp[0].encoding_t));
		}
#line 3053 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 466 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3059 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 467 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3065 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 468 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3071 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 469 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3077 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 470 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3083 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 471 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3089 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 472 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3095 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 473 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3101 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 477 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = Cardinality{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3107 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 481 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = EncodingType::DICT; }
#line 3113 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 482 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = EncodingType::RAW; }
#line 3119 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 486 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3125 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 487 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3131 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 488 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3137 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 492 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3143 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 493 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3149 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 503 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3160 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 509 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3171 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 515 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3181 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 523 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3187 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 524 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3193 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 533 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3204 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 542 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3214 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 555 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3226 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 562 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3238 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 573 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3244 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 574 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = nullptr; }
#line 3250 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 584 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3261 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 593 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3267 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 594 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3273 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 598 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3283 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 610 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3292 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 614 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3301 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 618 "bison_parser.y" /* yacc.c:1652  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3321 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 636 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3327 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 637 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3333 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 78:
#line 646 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3348 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 79:
#line 656 "bison_parser.y" /* yacc.c:1652  */
    {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3367 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 86:
#line 688 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3381 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 87:
#line 700 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3387 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 88:
#line 701 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3393 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 90:
#line 709 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3399 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 91:
#line 710 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = nullptr; }
#line 3405 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 92:
#line 713 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3411 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 93:
#line 718 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3417 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 94:
#line 719 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3423 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 723 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3433 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 728 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.group_t) = nullptr; }
#line 3439 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 732 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3445 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 733 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3451 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 736 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3457 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 737 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = nullptr; }
#line 3463 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 741 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3469 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 742 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3475 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 746 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3481 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 750 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3487 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 751 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderDesc; }
#line 3493 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 752 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3499 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 758 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3505 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 759 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3511 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 763 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3517 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 764 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3523 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 765 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3529 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 766 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3535 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 767 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3541 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 768 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3547 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 775 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3553 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 776 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3559 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 780 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3565 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 781 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 3571 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 785 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3577 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 786 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3583 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 790 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3595 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 127:
#line 808 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3601 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 136:
#line 817 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3607 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 139:
#line 826 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3613 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 140:
#line 827 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3619 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 141:
#line 828 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3625 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 142:
#line 829 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3631 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 143:
#line 830 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3637 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 145:
#line 835 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3643 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 836 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3649 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 147:
#line 837 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3655 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 148:
#line 838 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3661 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 149:
#line 839 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3667 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 840 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3673 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 841 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3679 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 842 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3685 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 843 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3691 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 844 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3697 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 848 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3703 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 849 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3709 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 853 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3715 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 854 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3721 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 855 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3727 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 856 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3733 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 862 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3739 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 863 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3745 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 864 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3751 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 865 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3757 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 869 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3763 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 870 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3769 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 874 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3775 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 875 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3781 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 879 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3787 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 880 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3793 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 881 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3799 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 882 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3805 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 883 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3811 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 884 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3817 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 885 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3823 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 889 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3829 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 890 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3835 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 894 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3841 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 898 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3847 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 899 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3853 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 900 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3859 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 901 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3865 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 902 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3871 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 903 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3877 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 906 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3883 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 910 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3889 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 914 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3895 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 918 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3901 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 919 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3907 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 920 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3913 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 921 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3919 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 197:
#line 933 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3925 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 198:
#line 937 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3931 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 199:
#line 938 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3937 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 200:
#line 942 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3943 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 202:
#line 947 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3949 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 951 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3955 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 204:
#line 955 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3965 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 206:
#line 968 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3976 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 210:
#line 984 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3987 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 211:
#line 993 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3993 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 212:
#line 994 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3999 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 213:
#line 999 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4011 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 214:
#line 1010 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4021 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 1019 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4027 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 1020 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4033 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 218:
#line 1026 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4039 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 220:
#line 1032 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4045 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 221:
#line 1036 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4051 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 222:
#line 1037 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4057 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 224:
#line 1043 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4063 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 226:
#line 1052 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = nullptr; }
#line 4069 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 227:
#line 1056 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4075 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 228:
#line 1060 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4084 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 229:
#line 1064 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4093 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 230:
#line 1071 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4103 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 1085 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4115 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 1093 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4128 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 1103 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4148 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 1121 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4154 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 1122 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4160 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 1123 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4166 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 237:
#line 1124 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4172 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 238:
#line 1125 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4178 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 1126 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4184 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 1127 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4190 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 1128 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4196 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 1129 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinCross; }
#line 4202 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 1130 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4208 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 247:
#line 1150 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4214 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 248:
#line 1151 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4220 "bison_parser.cpp" /* yacc.c:1652  */
    break;


#line 4224 "bison_parser.cpp" /* yacc.c:1652  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, result, scanner);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
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
#line 1154 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
