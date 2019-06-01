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
    SQL_AGGREGATION = 262,
    SQL_CARDINALITY = 263,
    SQL_DEALLOCATE = 264,
    SQL_PARAMETERS = 265,
    SQL_INTERSECT = 266,
    SQL_TEMPORARY = 267,
    SQL_TIMESTAMP = 268,
    SQL_DISTINCT = 269,
    SQL_ENCODING = 270,
    SQL_NVARCHAR = 271,
    SQL_RESTRICT = 272,
    SQL_TRUNCATE = 273,
    SQL_ANALYZE = 274,
    SQL_BETWEEN = 275,
    SQL_CASCADE = 276,
    SQL_COLUMNS = 277,
    SQL_CONTROL = 278,
    SQL_DEFAULT = 279,
    SQL_EXECUTE = 280,
    SQL_EXPLAIN = 281,
    SQL_EXTRACT = 282,
    SQL_HISTORY = 283,
    SQL_INTEGER = 284,
    SQL_NATURAL = 285,
    SQL_PREPARE = 286,
    SQL_PRIMARY = 287,
    SQL_SCHEMAS = 288,
    SQL_SPATIAL = 289,
    SQL_VARCHAR = 290,
    SQL_VIRTUAL = 291,
    SQL_BEFORE = 292,
    SQL_COLUMN = 293,
    SQL_CREATE = 294,
    SQL_DELETE = 295,
    SQL_DIRECT = 296,
    SQL_DOUBLE = 297,
    SQL_ESCAPE = 298,
    SQL_EXCEPT = 299,
    SQL_EXISTS = 300,
    SQL_GLOBAL = 301,
    SQL_HAVING = 302,
    SQL_IMPORT = 303,
    SQL_INSERT = 304,
    SQL_ISNULL = 305,
    SQL_MINUTE = 306,
    SQL_OFFSET = 307,
    SQL_RENAME = 308,
    SQL_SCHEMA = 309,
    SQL_SECOND = 310,
    SQL_SELECT = 311,
    SQL_SORTED = 312,
    SQL_TABLES = 313,
    SQL_UNIQUE = 314,
    SQL_UNLOAD = 315,
    SQL_UPDATE = 316,
    SQL_VALUES = 317,
    SQL_AFTER = 318,
    SQL_ALTER = 319,
    SQL_ARRAY = 320,
    SQL_CROSS = 321,
    SQL_DELTA = 322,
    SQL_FALSE = 323,
    SQL_FLOAT = 324,
    SQL_GROUP = 325,
    SQL_ILIKE = 326,
    SQL_INDEX = 327,
    SQL_INNER = 328,
    SQL_LIMIT = 329,
    SQL_LOCAL = 330,
    SQL_MERGE = 331,
    SQL_MINUS = 332,
    SQL_MONTH = 333,
    SQL_ORDER = 334,
    SQL_OUTER = 335,
    SQL_RIGHT = 336,
    SQL_TABLE = 337,
    SQL_UNION = 338,
    SQL_USING = 339,
    SQL_WHERE = 340,
    SQL_CALL = 341,
    SQL_CASE = 342,
    SQL_CHAR = 343,
    SQL_DATE = 344,
    SQL_DESC = 345,
    SQL_DROP = 346,
    SQL_ELSE = 347,
    SQL_FILE = 348,
    SQL_FROM = 349,
    SQL_FULL = 350,
    SQL_HASH = 351,
    SQL_HINT = 352,
    SQL_HOUR = 353,
    SQL_INTO = 354,
    SQL_JOIN = 355,
    SQL_LEFT = 356,
    SQL_LIKE = 357,
    SQL_LOAD = 358,
    SQL_LONG = 359,
    SQL_NULL = 360,
    SQL_PLAN = 361,
    SQL_SHOW = 362,
    SQL_TEXT = 363,
    SQL_THEN = 364,
    SQL_TIME = 365,
    SQL_TRUE = 366,
    SQL_VIEW = 367,
    SQL_WHEN = 368,
    SQL_WITH = 369,
    SQL_YEAR = 370,
    SQL_ADD = 371,
    SQL_ALL = 372,
    SQL_AND = 373,
    SQL_ASC = 374,
    SQL_CSV = 375,
    SQL_DAY = 376,
    SQL_END = 377,
    SQL_FOR = 378,
    SQL_INT = 379,
    SQL_KEY = 380,
    SQL_NOT = 381,
    SQL_OFF = 382,
    SQL_SET = 383,
    SQL_TBL = 384,
    SQL_TOP = 385,
    SQL_AS = 386,
    SQL_BY = 387,
    SQL_IF = 388,
    SQL_IN = 389,
    SQL_IS = 390,
    SQL_OF = 391,
    SQL_ON = 392,
    SQL_OR = 393,
    SQL_TO = 394,
    SQL_EQUALS = 395,
    SQL_NOTEQUALS = 396,
    SQL_LESS = 397,
    SQL_GREATER = 398,
    SQL_LESSEQ = 399,
    SQL_GREATEREQ = 400,
    SQL_NOTNULL = 401,
    SQL_CONCAT = 402,
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
	hsql::Cardinality* cardinality_t;
	hsql::Encoding* encoding_t;

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   683

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  253
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  464

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
       2,     2,     2,     2,     2,     2,     2,   154,     2,     2,
     160,   161,   152,   150,   164,   151,   162,   153,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   163,
     143,   140,   144,   165,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   158,     2,   159,   155,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   141,   142,   145,   146,   147,
     148,   149,   156,   157
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   267,   267,   288,   294,   303,   307,   311,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   335,   336,   341,
     342,   346,   350,   362,   369,   372,   376,   388,   397,   401,
     411,   414,   428,   435,   442,   450,   458,   459,   463,   464,
     468,   474,   475,   476,   477,   478,   479,   480,   481,   485,
     486,   490,   494,   498,   499,   500,   504,   505,   506,   510,
     511,   521,   527,   533,   541,   542,   551,   560,   573,   580,
     591,   592,   602,   611,   612,   616,   628,   632,   636,   654,
     655,   659,   660,   664,   674,   691,   695,   696,   697,   701,
     702,   706,   718,   719,   723,   727,   728,   731,   736,   737,
     741,   746,   750,   751,   754,   755,   759,   760,   764,   768,
     769,   770,   776,   777,   781,   782,   783,   784,   785,   786,
     793,   794,   798,   799,   803,   804,   808,   818,   819,   820,
     821,   822,   826,   827,   828,   829,   830,   831,   832,   833,
     834,   835,   839,   840,   844,   845,   846,   847,   848,   852,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
     866,   867,   871,   872,   873,   874,   880,   881,   882,   883,
     887,   888,   892,   893,   897,   898,   899,   900,   901,   902,
     903,   907,   908,   912,   916,   917,   918,   919,   920,   921,
     924,   928,   932,   936,   937,   938,   939,   943,   944,   945,
     946,   947,   951,   955,   956,   960,   961,   965,   969,   973,
     985,   986,   996,   997,  1001,  1002,  1011,  1012,  1017,  1028,
    1037,  1038,  1043,  1044,  1049,  1050,  1054,  1055,  1060,  1061,
    1069,  1070,  1074,  1078,  1082,  1089,  1102,  1110,  1120,  1139,
    1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,  1153,
    1162,  1163,  1168,  1169
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "AGGREGATION", "CARDINALITY", "DEALLOCATE", "PARAMETERS",
  "INTERSECT", "TEMPORARY", "TIMESTAMP", "DISTINCT", "ENCODING",
  "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE",
  "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE", "EXPLAIN", "EXTRACT",
  "HISTORY", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "SPATIAL", "VARCHAR", "VIRTUAL", "BEFORE", "COLUMN", "CREATE", "DELETE",
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "GLOBAL", "HAVING",
  "IMPORT", "INSERT", "ISNULL", "MINUTE", "OFFSET", "RENAME", "SCHEMA",
  "SECOND", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE",
  "VALUES", "AFTER", "ALTER", "ARRAY", "CROSS", "DELTA", "FALSE", "FLOAT",
  "GROUP", "ILIKE", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS",
  "MONTH", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "HOUR", "INTO", "JOIN", "LEFT", "LIKE", "LOAD",
  "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "TRUE", "VIEW",
  "WHEN", "WITH", "YEAR", "ADD", "ALL", "AND", "ASC", "CSV", "DAY", "END",
  "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF",
  "IN", "IS", "OF", "ON", "OR", "TO", "'='", "EQUALS", "NOTEQUALS", "'<'",
  "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'^'", "CONCAT", "UMINUS", "'['", "']'", "'('",
  "')'", "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "opt_cardinality", "opt_aggregation",
  "opt_encoding", "opt_column_nullable", "opt_column_default",
  "drop_statement", "opt_exists", "delete_statement", "truncate_statement",
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
      61,   395,   396,    60,    62,   397,   398,   399,   400,   401,
      43,    45,    42,    47,    37,    94,   402,   403,    91,    93,
      40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -259

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-259)))

#define YYTABLE_NINF -251

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-251)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    84,    50,   118,   160,    58,    74,    80,    30,    50,
     -38,    14,   178,   186,    34,  -259,    98,    98,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,   -34,  -259,
     216,    66,  -259,    76,   159,   133,   133,   133,    50,   122,
      50,   139,  -259,   135,   135,    50,  -259,   161,   129,  -259,
    -259,   494,  -259,   197,  -259,  -259,   168,   -34,    35,  -259,
      19,  -259,   312,    27,   318,   200,   321,    50,    50,   242,
    -259,   236,   170,   328,   287,    50,    50,  -259,   173,   178,
    -259,   180,   336,   329,   187,   189,  -259,  -259,  -259,   -34,
     228,   215,   -34,   -23,  -259,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,   190,   194,  -259,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,   314,  -259,   -57,   170,   273,  -259,   357,
     359,    -8,   223,   -65,  -259,  -259,  -259,  -259,  -259,  -259,
     361,  -259,  -259,   273,  -259,  -259,  -259,   286,  -259,  -259,
    -259,   273,   286,   273,   104,  -259,  -259,    27,  -259,   238,
     365,   239,   -98,   211,   212,   219,   184,   301,   349,  -259,
     269,   109,   337,  -259,  -259,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,   274,  -259,
    -259,    15,   221,  -259,   273,   328,  -259,   225,    99,  -259,
     285,   222,  -259,     5,   -23,   227,  -259,    87,   -23,   109,
     331,   -18,  -259,   299,   116,   126,  -259,   279,   -11,     7,
      86,   338,   273,   273,    95,    22,   237,   349,   470,   128,
     235,  -100,   273,   273,   349,  -259,   349,   349,   -79,   240,
       8,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   336,    50,  -259,   395,    27,
     109,  -259,    27,  -259,   361,     6,   242,  -259,   273,  -259,
     398,  -259,  -259,  -259,   273,  -259,  -259,  -259,  -259,   273,
     273,   357,  -259,   243,  -259,  -259,   245,  -259,  -259,  -259,
      68,  -259,   365,  -259,  -259,   273,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,   308,   246,  -107,    62,   101,   273,
     273,  -259,   338,   311,  -259,  -259,  -259,   293,   426,   500,
     500,   349,   255,   269,  -259,   313,   500,   500,   500,   525,
     525,   525,   525,   128,   128,    40,    40,    40,   -28,   258,
     260,  -259,  -259,   127,   138,  -259,   279,  -259,   137,  -259,
     259,  -259,    11,  -259,   352,  -259,  -259,  -259,   109,   109,
    -259,   420,   422,  -259,   325,   407,  -259,   147,   273,  -259,
    -259,   273,   273,  -259,   121,   113,   271,   349,   500,   269,
     276,   148,  -259,  -259,  -259,  -259,   280,   335,  -259,  -259,
    -259,   360,   362,   363,   344,     6,   442,  -259,  -259,  -259,
     315,  -259,   288,   289,  -259,   291,   431,  -259,   -93,   109,
     132,  -259,   273,  -259,   470,   294,   155,  -259,  -259,    11,
       6,  -259,  -259,  -259,     6,   309,   296,   273,  -259,  -259,
     273,   445,   449,  -259,  -259,   109,  -259,  -259,  -259,  -259,
     456,   359,   -31,     1,   298,   302,   452,   304,   273,   156,
     273,  -259,  -259,   462,   461,   310,  -259,     9,   109,  -259,
    -259,   109,   307,   305,   471,   320,   322,  -259,   490,   341,
    -259,   343,  -259,  -259
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   251,     3,    18,    18,    16,     9,
       7,    10,    15,    12,    13,    11,    14,     8,     0,   230,
       0,   220,    67,    25,     0,    37,    37,    37,     0,     0,
       0,     0,   219,    65,    65,     0,    30,     0,   232,   233,
       1,   231,     2,     0,     6,     5,   113,     0,    76,    77,
     105,    63,     0,   123,     0,     0,     0,     0,     0,    99,
      28,     0,    71,     0,     0,     0,     0,    31,     0,     0,
       4,     0,     0,    93,     0,     0,    87,    88,    86,     0,
      90,     0,     0,   119,   221,   202,   205,   207,   204,   208,
     203,   209,     0,   122,   124,   197,   198,   199,   206,   200,
     201,    24,    23,     0,    35,     0,    71,     0,    66,     0,
       0,     0,     0,    99,    73,    64,    61,    62,   235,   234,
       0,   112,    92,     0,    80,    79,    81,   105,    82,    89,
      85,     0,   105,     0,     0,    83,    26,     0,    36,     0,
       0,     0,   193,     0,     0,     0,     0,     0,     0,   195,
       0,    98,   127,   134,   135,   136,   129,   131,   137,   130,
     149,   138,   139,   140,   133,   128,   142,   143,     0,    29,
     252,     0,     0,    69,     0,     0,    72,    21,     0,    19,
      96,    94,   120,   229,   119,   104,   106,   111,   119,   115,
     117,   114,   125,     0,     0,     0,    38,   231,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   144,
       0,     0,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,     0,
      75,    74,     0,    17,     0,     0,    99,    95,     0,   227,
       0,   228,   126,    78,     0,   110,   109,   108,    84,     0,
       0,     0,    42,     0,    45,    44,     0,    43,    48,    41,
      58,    33,     0,    34,   181,     0,   194,   196,   185,   184,
     188,   186,   189,   187,     0,     0,     0,     0,     0,     0,
       0,   168,     0,     0,   141,   132,   160,   161,     0,   158,
     156,     0,     0,     0,   147,     0,   174,   175,   176,   177,
     178,   179,   180,   151,   150,   153,   152,   154,   155,   159,
       0,    27,   253,     0,     0,    20,   231,    97,   210,   212,
       0,   214,   225,   213,   101,   121,   226,   107,   118,   116,
      32,     0,     0,    56,     0,    60,    39,     0,     0,   172,
     190,     0,     0,   166,     0,     0,     0,     0,   157,     0,
       0,     0,   148,   191,    68,    22,     0,     0,   247,   239,
     245,   243,   246,   241,     0,     0,     0,   224,   218,   222,
       0,    91,     0,     0,    57,     0,    55,   182,     0,   170,
       0,   169,     0,   173,   192,     0,     0,   164,   162,   225,
       0,   242,   244,   240,     0,   211,   226,     0,    46,    47,
       0,     0,    50,   183,   167,   171,   165,   163,   215,   236,
     248,     0,   103,     0,    53,     0,    52,     0,     0,     0,
       0,   100,    59,     0,     0,     0,    40,     0,   249,   237,
     223,   102,     0,     0,     0,   193,     0,    54,     0,     0,
     238,     0,    51,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -259,  -259,  -259,   447,  -259,   482,  -259,   251,  -259,  -259,
    -259,  -259,  -259,   244,  -259,  -259,   198,  -259,   224,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,   463,  -259,  -259,  -259,
     392,  -259,  -259,   326,  -190,    97,   418,   -56,   453,  -259,
    -259,   169,   316,  -259,  -259,  -259,  -108,  -259,  -259,   -26,
    -259,   252,  -259,  -259,  -138,  -191,  -259,    13,   263,  -117,
    -151,  -259,  -259,  -259,  -259,  -259,  -259,   303,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,    71,   -50,  -114,  -259,
    -259,   -80,  -259,  -259,  -259,  -258,   117,  -259,  -259,  -259,
       2,  -259,   114,   333,  -259,  -259,  -259,  -259,   451,  -259,
    -259,  -259,  -259,   100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    54,   188,   189,    17,   112,
      18,    19,    71,   178,    20,    21,    66,   205,   206,   280,
     436,   446,   422,   355,   396,    22,    75,    23,    24,    25,
     121,    26,   123,   124,    27,   136,   137,    59,    89,    90,
     140,    60,   133,   190,   256,   257,   118,   391,   441,    93,
     195,   196,   267,    83,   145,   191,   102,   103,   192,   193,
     162,   163,   164,   165,   166,   167,   168,   215,   169,   170,
     171,   172,   294,   173,   174,   175,   176,   177,   105,   106,
     107,   108,   109,   110,   337,   338,   339,   340,   341,    41,
     342,   387,   388,   389,   262,    28,    29,    48,    49,   343,
     384,   449,    52,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     161,    85,   131,   132,    32,   179,   218,   219,   259,    31,
     286,    42,   455,   104,   259,   186,   440,   283,   222,     1,
     117,   296,    56,   311,   197,   222,   199,   201,     2,   143,
      86,    95,    96,    97,   270,     3,    45,   149,   223,   214,
      69,     4,    72,   221,    43,   223,    86,    77,    56,     5,
       6,   144,   360,    31,   182,   312,   263,   258,     7,     8,
     268,   305,   208,    87,   209,   183,   218,   250,   423,   115,
     116,     9,    46,   308,    44,   309,   310,   126,   127,    87,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   357,    98,   297,   202,    91,   185,
     222,    10,    88,   150,   220,   306,   307,   152,    95,    96,
      97,   194,    35,   314,   299,    30,   198,    11,    88,   222,
     223,    33,   371,   222,    12,    58,    57,   415,   244,    40,
     245,   153,    99,   258,   315,   300,   260,   288,   100,   223,
      36,   289,   386,   223,   301,   272,   376,   197,   344,   154,
     284,   273,   348,   349,    84,   295,   430,   179,   274,   287,
     368,   159,   442,    34,   290,   330,   336,   377,    38,   155,
      37,   361,    98,   353,    39,   128,   247,   265,   406,   248,
     222,    47,   364,   365,   291,   275,    50,   152,    95,    96,
      97,   156,   101,   362,   354,   243,   244,    51,   245,   104,
     223,   292,   104,   378,   276,   222,   266,   293,   213,    99,
     379,   153,    53,   222,   300,   100,   404,   380,   381,    61,
     277,   200,   402,   363,   278,   223,   432,   222,    62,   154,
     157,   222,   382,   223,    67,    68,    63,  -248,   383,   222,
     279,   398,    70,   401,   399,   400,   366,   223,   331,   155,
     222,   223,    98,    64,   424,   158,   159,   370,   138,   223,
     253,   138,   333,   254,   160,   334,    65,    73,    74,   101,
     223,   156,   152,    95,    96,    97,   152,    95,    96,    97,
     240,   241,   242,   243,   244,   425,   245,   281,   374,    99,
     282,   147,    78,    79,    81,   100,   153,   213,    82,   375,
     153,  -216,   147,   433,   152,    95,    96,    97,   397,   408,
     157,   258,   258,   405,   154,    94,   427,   450,   154,   258,
     248,   448,   111,   451,   114,    56,   113,   117,   153,   119,
     120,   122,   125,    57,   155,   158,   159,    98,   155,   377,
     130,    98,    97,   132,   160,   139,   216,   141,   134,   101,
     135,   146,   152,    95,    96,    97,   156,   224,   147,   148,
     156,    95,   180,   184,   187,    91,   155,   203,   204,    98,
     207,   210,   211,   246,    99,   378,   153,   212,    99,   255,
     100,   249,   379,   269,   100,   252,   258,   225,   156,   380,
     381,   264,   271,    12,    56,   157,   304,   302,   332,   157,
     313,   346,   358,   351,   382,   352,    99,   359,   226,  -248,
     383,   222,   100,   311,   155,   369,   245,    98,   372,   373,
     158,   159,   390,   385,   158,   159,   392,   217,   393,   160,
     394,   395,   403,   160,   101,   410,   156,   407,   101,   227,
     411,   409,   412,   413,   414,   416,   421,   417,   434,   418,
     419,   420,   158,   159,    99,   426,   431,   435,   443,   445,
     100,   160,   444,   228,   447,   452,   101,   453,   457,   458,
     454,   229,   230,  -217,   459,   217,   225,   231,   232,   233,
     234,   235,   209,   460,   236,   237,   377,   238,   239,   240,
     241,   242,   243,   244,  -250,   245,   461,   226,    80,    55,
     158,   159,   462,     1,   463,   335,   356,    76,   151,   160,
     142,   251,     2,    92,   101,   350,   347,   298,   456,     3,
     225,   345,   378,   428,   285,     4,   261,   429,   227,   379,
     129,   439,     0,     5,     6,     0,   380,   381,     0,     0,
     437,   226,     7,     8,   367,     0,     0,     0,     0,     0,
     225,   382,   303,     0,     0,     9,     0,   383,     0,     0,
       0,   230,     0,     0,     0,     0,   231,   232,   233,   234,
     235,  -251,   227,   236,   237,   225,   238,   239,   240,   241,
     242,   243,   244,     0,   245,    10,     0,     0,     0,     0,
       0,     0,     0,   438,     0,     0,   303,     0,     0,     0,
       0,    11,  -251,     0,     0,   230,     0,     0,    12,     0,
     231,   232,   233,   234,   235,     0,     0,   236,   237,     0,
     238,   239,   240,   241,   242,   243,   244,     0,   245,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
    -251,  -251,  -251,   234,   235,     0,     0,   236,   237,     0,
     238,   239,   240,   241,   242,   243,   244,     0,   245,     0,
     230,     0,     0,     0,     0,     0,     0,     0,  -251,  -251,
       0,     0,  -251,  -251,     0,   238,   239,   240,   241,   242,
     243,   244,     0,   245
};

static const yytype_int16 yycheck[] =
{
     117,    57,    82,    14,     2,   119,   157,   158,     3,     3,
       3,     9,     3,    63,     3,   123,    47,   207,   118,     9,
      85,   212,    56,   102,   141,   118,   143,   144,    18,    52,
      11,     4,     5,     6,    52,    25,    22,    94,   138,   156,
      38,    31,    40,   160,    82,   138,    11,    45,    56,    39,
      40,    74,   159,     3,    62,   134,   194,   164,    48,    49,
     198,   161,   160,    44,   162,   121,   217,   184,   161,    67,
      68,    61,    58,   224,   112,   226,   227,    75,    76,    44,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   285,    68,   213,   147,    79,   164,
     118,    91,    83,   160,   160,   222,   223,     3,     4,     5,
       6,   137,    54,   105,    92,    31,   142,   107,    83,   118,
     138,     3,   313,   118,   114,    28,   160,   385,   156,    99,
     158,    27,   105,   164,   126,   113,   131,    51,   111,   138,
      82,    55,   131,   138,   122,    29,   336,   264,   256,    45,
     161,    35,   269,   270,    57,   211,   414,   271,    42,   152,
     311,   152,   161,     3,    78,   245,   160,    30,    94,    65,
     112,   109,    68,   105,    94,    78,   161,    90,   369,   164,
     118,     3,   299,   300,    98,    69,     0,     3,     4,     5,
       6,    87,   165,    92,   126,   155,   156,   163,   158,   249,
     138,   115,   252,    66,    88,   118,   119,   121,   113,   105,
      73,    27,   114,   118,   113,   111,   367,    80,    81,     3,
     104,   117,   109,   122,   108,   138,   417,   118,   162,    45,
     126,   118,    95,   138,    36,    37,   160,   100,   101,   118,
     124,   358,   120,   122,   361,   362,   302,   138,   246,    65,
     118,   138,    68,    94,   122,   151,   152,   313,    89,   138,
     161,    92,   249,   164,   160,   252,   133,   128,   133,   165,
     138,    87,     3,     4,     5,     6,     3,     4,     5,     6,
     152,   153,   154,   155,   156,   402,   158,   161,   161,   105,
     164,   164,   131,   164,    97,   111,    27,   113,   130,   161,
      27,   164,   164,   420,     3,     4,     5,     6,   161,   161,
     126,   164,   164,   369,    45,     3,   161,   161,    45,   164,
     164,   438,     4,   440,     3,    56,   126,    85,    27,    93,
     160,     3,    45,   160,    65,   151,   152,    68,    65,    30,
     160,    68,     6,    14,   160,   117,    45,   132,   161,   165,
     161,   161,     3,     4,     5,     6,    87,    20,   164,    45,
      87,     4,     3,   140,     3,    79,    65,   129,     3,    68,
     131,   160,   160,    99,   105,    66,    27,   158,   105,    94,
     111,   160,    73,    52,   111,   160,   164,    50,    87,    80,
      81,   164,    93,   114,    56,   126,   161,   160,     3,   126,
     160,     3,    94,   160,    95,   160,   105,   161,    71,   100,
     101,   118,   111,   102,    65,   160,   158,    68,   105,   159,
     151,   152,    70,   164,   151,   152,     6,   126,     6,   160,
     105,    24,   161,   160,   165,   100,    87,   161,   165,   102,
      80,   161,    80,    80,   100,     3,    15,   132,     3,   161,
     161,   160,   151,   152,   105,   161,   160,     8,   160,     7,
     111,   160,   160,   126,   160,     3,   165,     6,   161,   164,
     160,   134,   135,   164,     3,   126,    50,   140,   141,   142,
     143,   144,   162,   161,   147,   148,    30,   150,   151,   152,
     153,   154,   155,   156,     0,   158,     6,    71,    51,    17,
     151,   152,   161,     9,   161,   254,   282,    44,   116,   160,
      92,   185,    18,    60,   165,   271,   264,   214,   447,    25,
      50,   258,    66,   409,   208,    31,   193,   410,   102,    73,
      79,   431,    -1,    39,    40,    -1,    80,    81,    -1,    -1,
      84,    71,    48,    49,   118,    -1,    -1,    -1,    -1,    -1,
      50,    95,   126,    -1,    -1,    61,    -1,   101,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    71,   102,   147,   148,    50,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,    -1,   126,    -1,    -1,    -1,
      -1,   107,   102,    -1,    -1,   135,    -1,    -1,   114,    -1,
     140,   141,   142,   143,   144,    -1,    -1,   147,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,    -1,    -1,   147,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
      -1,    -1,   147,   148,    -1,   150,   151,   152,   153,   154,
     155,   156,    -1,   158
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     9,    18,    25,    31,    39,    40,    48,    49,    61,
      91,   107,   114,   167,   168,   169,   170,   174,   176,   177,
     180,   181,   191,   193,   194,   195,   197,   200,   261,   262,
      31,     3,   256,     3,     3,    54,    82,   112,    94,    94,
      99,   255,   256,    82,   112,    22,    58,     3,   263,   264,
       0,   163,   268,   114,   171,   171,    56,   160,   201,   203,
     207,     3,   162,   160,    94,   133,   182,   182,   182,   256,
     120,   178,   256,   128,   133,   192,   192,   256,   131,   164,
     169,    97,   130,   219,   201,   203,    11,    44,    83,   204,
     205,    79,   204,   215,     3,     4,     5,     6,    68,   105,
     111,   165,   222,   223,   243,   244,   245,   246,   247,   248,
     249,     4,   175,   126,     3,   256,   256,    85,   212,    93,
     160,   196,     3,   198,   199,    45,   256,   256,   201,   264,
     160,   247,    14,   208,   161,   161,   201,   202,   207,   117,
     206,   132,   202,    52,    74,   220,   161,   164,    45,    94,
     160,   196,     3,    27,    45,    65,    87,   126,   151,   152,
     160,   225,   226,   227,   228,   229,   230,   231,   232,   234,
     235,   236,   237,   239,   240,   241,   242,   243,   179,   244,
       3,   269,    62,   203,   140,   164,   212,     3,   172,   173,
     209,   221,   224,   225,   215,   216,   217,   225,   215,   225,
     117,   225,   243,   129,     3,   183,   184,   131,   160,   162,
     160,   160,   158,   113,   225,   233,    45,   126,   226,   226,
     203,   225,   118,   138,    20,    50,    71,   102,   126,   134,
     135,   140,   141,   142,   143,   144,   147,   148,   150,   151,
     152,   153,   154,   155,   156,   158,    99,   161,   164,   160,
     225,   199,   160,   161,   164,    94,   210,   211,   164,     3,
     131,   259,   260,   220,   164,    90,   119,   218,   220,    52,
      52,    93,    29,    35,    42,    69,    88,   104,   108,   124,
     185,   161,   164,   200,   161,   208,     3,   152,    51,    55,
      78,    98,   115,   121,   238,   203,   221,   225,   233,    92,
     113,   122,   160,   126,   161,   161,   225,   225,   226,   226,
     226,   102,   134,   160,   105,   126,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     247,   256,     3,   223,   223,   173,   160,   250,   251,   252,
     253,   254,   256,   265,   212,   224,     3,   217,   225,   225,
     179,   160,   160,   105,   126,   189,   184,   221,    94,   161,
     159,   109,    92,   122,   225,   225,   203,   118,   226,   160,
     203,   221,   105,   159,   161,   161,   200,    30,    66,    73,
      80,    81,    95,   101,   266,   164,   131,   257,   258,   259,
      70,   213,     6,     6,   105,    24,   190,   161,   225,   225,
     225,   122,   109,   161,   226,   203,   221,   161,   161,   161,
     100,    80,    80,    80,   100,   251,     3,   132,   161,   161,
     160,    15,   188,   161,   122,   225,   161,   161,   258,   252,
     251,   160,   221,   225,     3,     8,   186,    84,   137,   269,
      47,   214,   161,   160,   160,     7,   187,   160,   225,   267,
     161,   225,     3,     6,   160,     3,   242,   161,   164,     3,
     161,     6,   161,   161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   175,   176,   176,   177,   178,   179,
     180,   180,   181,   181,   181,   181,   182,   182,   183,   183,
     184,   185,   185,   185,   185,   185,   185,   185,   185,   186,
     186,   187,   187,   188,   188,   188,   189,   189,   189,   190,
     190,   191,   191,   191,   192,   192,   193,   194,   195,   195,
     196,   196,   197,   198,   198,   199,   200,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   205,   205,   205,   206,
     206,   207,   208,   208,   209,   210,   210,   211,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   218,
     218,   218,   219,   219,   220,   220,   220,   220,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   225,   225,   225,
     225,   225,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   227,   227,   228,   228,   228,   228,   228,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     230,   230,   231,   231,   231,   231,   232,   232,   232,   232,
     233,   233,   234,   234,   235,   235,   235,   235,   235,   235,
     235,   236,   236,   237,   238,   238,   238,   238,   238,   238,
     239,   240,   241,   242,   242,   242,   242,   243,   243,   243,
     243,   243,   244,   245,   245,   246,   246,   247,   248,   249,
     250,   250,   251,   251,   252,   252,   253,   253,   254,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   262,   263,   263,   264,   265,   265,   265,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   267,
     268,   268,   269,   269
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     4,     3,     0,     1,     3,
       7,     1,     1,     1,     1,     1,     4,     4,     1,     6,
       0,     4,     0,     2,     5,     0,     1,     2,     0,     4,
       0,     4,     4,     3,     2,     0,     4,     2,     8,     5,
       3,     0,     5,     1,     3,     3,     2,     2,     6,     3,
       3,     1,     1,     3,     5,     2,     1,     1,     1,     1,
       0,     7,     1,     0,     1,     1,     0,     2,     2,     0,
       4,     0,     2,     0,     3,     0,     1,     3,     2,     1,
       1,     0,     2,     0,     2,     2,     4,     2,     4,     0,
       1,     3,     1,     0,     1,     3,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     2,     3,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     5,     6,     5,     6,     4,     6,     3,     5,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     6,     1,     1,     1,     1,     1,     1,
       4,     4,     5,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     5,     1,     0,     2,     1,     1,     0,
       1,     0,     2,     1,     3,     3,     4,     6,     8,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     0,     1,     3
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
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1737 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1743 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1749 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1755 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 168: /* statement_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1768 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1774 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* preparable_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1780 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* opt_hints  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1793 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* hint_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1806 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* hint  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1812 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* prepare_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1818 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* prepare_target_query  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1824 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* execute_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1830 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* import_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1836 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* import_file_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1842 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* file_path  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1848 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* show_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1854 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* create_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1860 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_not_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1866 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* column_def_commalist  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1879 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* column_def  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1885 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* column_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1891 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_cardinality  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).cardinality_t)); }
#line 1897 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_aggregation  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1903 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_encoding  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).encoding_t)->encoding) ); free( (((*yyvaluep).encoding_t)->arg) ); }
#line 1909 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_column_nullable  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1915 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_column_default  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1921 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* drop_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1927 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1933 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* delete_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1939 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* truncate_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1945 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* insert_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1951 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_column_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 197: /* update_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1970 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* update_clause_commalist  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 199: /* update_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1989 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* select_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1995 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_with_paren  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2001 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_paren_or_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2007 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* select_no_paren  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2013 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* select_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2019 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_distinct  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2025 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* select_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 210: /* opt_from_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2044 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* from_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2050 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_where  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2056 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_group  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2062 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_having  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2068 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_order  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 216: /* order_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 217: /* order_desc  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2100 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_order_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2106 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_top  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2112 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* opt_limit  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2118 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* expr_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 222: /* opt_literal_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 223: /* literal_list  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 224: /* expr_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2163 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2169 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* operand  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2175 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* scalar_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2181 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* unary_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2187 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* binary_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2193 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* logic_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2199 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* in_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2205 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* case_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2211 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_list  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2217 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* exists_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2223 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* comp_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2229 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* function_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2235 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* extract_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2241 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* datetime_field  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2247 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* array_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2253 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* array_index  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2259 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* between_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2265 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* column_name  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2271 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2277 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* string_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2283 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* bool_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2289 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* num_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2295 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* int_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2301 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* null_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2307 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* param_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2313 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* table_ref  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2319 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* table_ref_atomic  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2325 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* nonjoin_table_ref_atomic  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2331 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* table_ref_commalist  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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

    case 254: /* table_ref_name  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2350 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* table_ref_name_no_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2356 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* table_name  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2362 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* table_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2368 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* opt_table_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2374 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2380 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2386 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_with_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2392 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* with_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2398 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* with_description_list  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2404 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* with_description  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2410 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* join_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2416 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* opt_join_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2422 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* join_condition  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2428 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 269: /* ident_commalist  */
#line 149 "bison_parser.y" /* yacc.c:1257  */
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
#line 267 "bison_parser.y" /* yacc.c:1652  */
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
#line 288 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2780 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 294 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2791 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 303 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2800 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 307 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2809 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 311 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2817 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 318 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2823 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 319 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2829 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 320 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2835 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 321 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2841 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 322 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2847 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 323 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2853 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 324 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2859 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 325 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2865 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 326 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2871 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 335 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2877 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 336 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 2883 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 341 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2889 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 342 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2895 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 346 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2904 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 350 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2914 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 362 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2924 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 372 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2933 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 376 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2943 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 388 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2954 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 397 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kImportCSV; }
#line 2960 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 401 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2966 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 411 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 414 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2984 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 428 "bison_parser.y" /* yacc.c:1652  */
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
#line 435 "bison_parser.y" /* yacc.c:1652  */
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
#line 442 "bison_parser.y" /* yacc.c:1652  */
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
    {
			(yyval.create_stmt) = new CreateStatement(kCreateSchema);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-1].bval);
			(yyval.create_stmt)->schema = (yyvsp[0].sval);
		}
#line 3031 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 458 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3037 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 459 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3043 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 463 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3049 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 464 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3055 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 468 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-6].sval), (yyvsp[-5].column_type_t), (yyvsp[-4].bval), (yyvsp[-3].expr), (yyvsp[-2].encoding_t), (yyvsp[-1].cardinality_t), (yyvsp[0].expr));
		}
#line 3063 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 474 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3069 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 475 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3075 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 476 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3081 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 477 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3087 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 478 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3093 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 479 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3099 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 480 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3105 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 481 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3111 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 485 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = new Cardinality{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3117 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 486 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = nullptr; }
#line 3123 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 490 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprLiteralString);
			(yyval.expr)->name = (yyvsp[-1].sval);
		}
#line 3132 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 494 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3138 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 498 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = new Encoding((yyvsp[0].sval)); }
#line 3144 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 499 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = new Encoding((yyvsp[-3].sval), (yyvsp[-1].sval)); }
#line 3150 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 500 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = nullptr; }
#line 3156 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 504 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3162 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 505 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3168 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 506 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3174 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 510 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3180 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 511 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3186 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 521 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3197 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 527 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3208 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 533 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3218 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 541 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3224 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 542 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3230 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 551 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3241 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 560 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3251 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 573 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3263 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 580 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3275 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 591 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3281 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 592 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = nullptr; }
#line 3287 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 602 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3298 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 611 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3304 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 612 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3310 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 616 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3320 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 76:
#line 628 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3329 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 77:
#line 632 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3338 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 78:
#line 636 "bison_parser.y" /* yacc.c:1652  */
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
#line 3358 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 79:
#line 654 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3364 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 80:
#line 655 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3370 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 83:
#line 664 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3385 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 84:
#line 674 "bison_parser.y" /* yacc.c:1652  */
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
#line 3404 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 91:
#line 706 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3418 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 92:
#line 718 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3424 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 93:
#line 719 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3430 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 727 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3436 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 728 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = nullptr; }
#line 3442 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 731 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3448 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 736 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3454 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 737 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3460 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 741 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3470 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 746 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.group_t) = nullptr; }
#line 3476 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 750 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3482 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 751 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3488 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 754 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3494 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 755 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = nullptr; }
#line 3500 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 759 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3506 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 760 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3512 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 764 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3518 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 768 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3524 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 769 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderDesc; }
#line 3530 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 770 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3536 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 776 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3542 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 777 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3548 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 781 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3554 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 782 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3560 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 783 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3566 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 784 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3572 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 785 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3578 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 786 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3584 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 793 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3590 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 794 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3596 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 122:
#line 798 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3602 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 123:
#line 799 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 3608 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 124:
#line 803 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3614 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 125:
#line 804 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3620 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 126:
#line 808 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3632 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 132:
#line 826 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3638 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 141:
#line 835 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3644 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 144:
#line 844 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3650 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 145:
#line 845 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3656 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 846 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3662 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 147:
#line 847 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3668 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 148:
#line 848 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3674 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 853 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3680 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 854 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3686 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 855 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3692 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 856 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3698 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 857 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3704 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 858 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3710 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 859 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3716 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 860 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3722 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 861 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3728 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 862 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3734 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 866 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3740 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 867 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3746 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 871 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3752 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 872 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3758 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 873 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3764 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 874 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3770 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 880 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3776 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 881 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3782 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 882 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3788 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 883 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3794 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 887 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3800 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 888 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3806 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 892 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3812 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 893 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3818 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 897 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3824 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 898 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3830 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 899 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3836 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 900 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3842 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 901 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3848 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 902 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3854 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 903 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3860 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 907 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3866 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 908 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3872 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 912 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3878 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 916 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3884 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 917 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3890 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 918 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3896 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 919 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3902 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 920 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3908 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 921 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3914 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 924 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3920 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 928 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3926 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 192:
#line 932 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3932 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 193:
#line 936 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3938 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 194:
#line 937 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3944 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 195:
#line 938 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3950 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 196:
#line 939 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3956 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 202:
#line 951 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3962 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 955 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3968 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 204:
#line 956 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 205:
#line 960 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3980 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 207:
#line 965 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3986 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 208:
#line 969 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3992 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 209:
#line 973 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4002 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 211:
#line 986 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4013 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 1002 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4024 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 1011 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4030 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 217:
#line 1012 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4036 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 218:
#line 1017 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4048 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 219:
#line 1028 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4058 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 220:
#line 1037 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4064 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 221:
#line 1038 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4070 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 223:
#line 1044 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4076 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 225:
#line 1050 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4082 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 226:
#line 1054 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4088 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 227:
#line 1055 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4094 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 229:
#line 1061 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4100 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 1070 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = nullptr; }
#line 4106 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 1074 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4112 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 1078 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4121 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 1082 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4130 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 1089 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4140 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 1103 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4152 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 237:
#line 1111 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4165 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 238:
#line 1121 "bison_parser.y" /* yacc.c:1652  */
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
#line 4185 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 1139 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4191 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 1140 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4197 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 1141 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4203 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 1142 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4209 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 1143 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4215 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 244:
#line 1144 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4221 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 245:
#line 1145 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4227 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 246:
#line 1146 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4233 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 247:
#line 1147 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinCross; }
#line 4239 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 248:
#line 1148 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4245 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 252:
#line 1168 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4251 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 253:
#line 1169 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4257 "bison_parser.cpp" /* yacc.c:1652  */
    break;


#line 4261 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 1172 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
