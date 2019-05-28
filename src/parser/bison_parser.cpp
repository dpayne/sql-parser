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
    SQL_DICT = 346,
    SQL_DROP = 347,
    SQL_ELSE = 348,
    SQL_FILE = 349,
    SQL_FROM = 350,
    SQL_FULL = 351,
    SQL_HASH = 352,
    SQL_HINT = 353,
    SQL_HOUR = 354,
    SQL_INTO = 355,
    SQL_JOIN = 356,
    SQL_LEFT = 357,
    SQL_LIKE = 358,
    SQL_LOAD = 359,
    SQL_LONG = 360,
    SQL_NULL = 361,
    SQL_PLAN = 362,
    SQL_SHOW = 363,
    SQL_TEXT = 364,
    SQL_THEN = 365,
    SQL_TIME = 366,
    SQL_TRUE = 367,
    SQL_VIEW = 368,
    SQL_WHEN = 369,
    SQL_WITH = 370,
    SQL_YEAR = 371,
    SQL_ADD = 372,
    SQL_ALL = 373,
    SQL_AND = 374,
    SQL_ASC = 375,
    SQL_CSV = 376,
    SQL_DAY = 377,
    SQL_END = 378,
    SQL_FOR = 379,
    SQL_INT = 380,
    SQL_KEY = 381,
    SQL_NOT = 382,
    SQL_OFF = 383,
    SQL_SET = 384,
    SQL_TBL = 385,
    SQL_TOP = 386,
    SQL_AS = 387,
    SQL_BY = 388,
    SQL_IF = 389,
    SQL_IN = 390,
    SQL_IS = 391,
    SQL_OF = 392,
    SQL_ON = 393,
    SQL_OR = 394,
    SQL_TO = 395,
    SQL_EQUALS = 396,
    SQL_NOTEQUALS = 397,
    SQL_LESS = 398,
    SQL_GREATER = 399,
    SQL_LESSEQ = 400,
    SQL_GREATEREQ = 401,
    SQL_NOTNULL = 402,
    SQL_CONCAT = 403,
    SQL_UMINUS = 404
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
	hsql::Cardinality* cardinality_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 380 "bison_parser.cpp" /* yacc.c:352  */
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
#define YYLAST   805

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  251
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  458

#define YYUNDEFTOK  2
#define YYMAXUTOK   404

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
     161,   162,   153,   151,   165,   152,   163,   154,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   164,
     144,   141,   145,   166,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   159,     2,   160,   156,     2,     2,     2,     2,     2,
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
     148,   149,   150,   157,   158
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   266,   266,   287,   293,   302,   306,   310,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   334,   335,   340,
     341,   345,   349,   361,   368,   371,   375,   387,   396,   400,
     410,   413,   427,   434,   441,   452,   453,   457,   458,   462,
     468,   469,   470,   471,   472,   473,   474,   475,   479,   480,
     484,   488,   492,   493,   497,   498,   499,   503,   504,   514,
     520,   526,   534,   535,   544,   553,   566,   573,   584,   585,
     595,   604,   605,   609,   621,   625,   629,   647,   648,   652,
     653,   657,   667,   684,   688,   689,   690,   694,   695,   699,
     711,   712,   716,   720,   721,   724,   729,   730,   734,   739,
     743,   744,   747,   748,   752,   753,   757,   761,   762,   763,
     769,   770,   774,   775,   776,   777,   778,   779,   786,   787,
     791,   792,   796,   797,   801,   811,   812,   813,   814,   815,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     832,   833,   837,   838,   839,   840,   841,   845,   846,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   859,   860,
     864,   865,   866,   867,   873,   874,   875,   876,   880,   881,
     885,   886,   890,   891,   892,   893,   894,   895,   896,   900,
     901,   905,   909,   910,   911,   912,   913,   914,   917,   921,
     925,   929,   930,   931,   932,   936,   937,   938,   939,   940,
     944,   948,   949,   953,   954,   958,   962,   966,   978,   979,
     989,   990,   994,   995,  1004,  1005,  1010,  1021,  1030,  1031,
    1036,  1037,  1042,  1043,  1047,  1048,  1053,  1054,  1062,  1063,
    1067,  1071,  1075,  1082,  1095,  1103,  1113,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1146,  1155,  1156,
    1161,  1162
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
  "CALL", "CASE", "CHAR", "DATE", "DESC", "DICT", "DROP", "ELSE", "FILE",
  "FROM", "FULL", "HASH", "HINT", "HOUR", "INTO", "JOIN", "LEFT", "LIKE",
  "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "TRUE",
  "VIEW", "WHEN", "WITH", "YEAR", "ADD", "ALL", "AND", "ASC", "CSV", "DAY",
  "END", "FOR", "INT", "KEY", "NOT", "OFF", "SET", "TBL", "TOP", "AS",
  "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "CONCAT", "UMINUS",
  "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept",
  "input", "statement_list", "statement", "preparable_statement",
  "opt_hints", "hint_list", "hint", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "import_file_type", "file_path", "show_statement", "create_statement",
  "opt_not_exists", "column_def_commalist", "column_def", "column_type",
  "opt_cardinality", "opt_aggregation", "opt_encoding",
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
     402,    43,    45,    42,    47,    37,    94,   403,   404,    91,
      93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -321

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-321)))

#define YYTABLE_NINF -249

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-249)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     690,   100,    35,   129,   170,   -27,    91,    97,   106,    35,
      15,    18,   174,   191,    47,  -321,   118,   118,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,   -37,  -321,
     235,    84,  -321,    88,   159,   128,   128,    35,   145,    35,
     144,  -321,   150,   150,    35,  -321,   156,   124,  -321,  -321,
     533,  -321,   200,  -321,  -321,   169,   -37,    12,  -321,     9,
    -321,   298,    31,   300,   175,    35,    35,   226,  -321,   218,
     161,   314,   275,    35,    35,  -321,   164,   174,  -321,   165,
     321,   316,   166,   171,  -321,  -321,  -321,   -37,   214,   201,
     -37,   -11,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
     173,   177,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,   291,   -79,   161,   304,  -321,   340,   342,   -34,   205,
     -38,  -321,  -321,  -321,  -321,  -321,  -321,   344,  -321,  -321,
     304,  -321,  -321,  -321,   269,  -321,  -321,  -321,   304,   269,
     304,   153,  -321,  -321,    31,  -321,   224,   352,   225,   -76,
     195,   198,   202,   163,   335,   347,  -321,   231,    62,   375,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,   260,  -321,  -321,   -64,   203,
    -321,   304,   314,  -321,   204,    60,  -321,   268,   206,  -321,
       2,   -11,   208,  -321,    80,   -11,    62,   315,     6,  -321,
     272,   107,    77,  -321,   253,    -8,     8,   152,   319,   304,
     304,    65,    79,   209,   347,   475,   138,   215,   -89,   304,
     304,   347,  -321,   347,   347,   -71,   217,    23,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   321,    35,  -321,   373,    31,    62,  -321,    31,
    -321,   344,     1,   226,  -321,   304,  -321,   376,  -321,  -321,
    -321,   304,  -321,  -321,  -321,  -321,   304,   304,   340,  -321,
     220,  -321,  -321,   221,  -321,  -321,  -321,    83,  -321,   352,
    -321,  -321,   304,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,   290,   227,   -25,   -62,    82,   304,   304,  -321,   319,
     283,  -321,  -321,  -321,   271,   444,   519,   519,   347,   232,
     231,  -321,   281,   519,   519,   519,   541,   541,   541,   541,
     138,   138,    58,    58,    58,    96,   229,   234,  -321,  -321,
      98,    99,  -321,   253,  -321,   -21,  -321,   233,  -321,     7,
    -321,   326,  -321,  -321,  -321,    62,    62,  -321,   393,   396,
    -321,   299,   380,  -321,   105,   304,  -321,  -321,   304,   304,
    -321,    90,    55,   244,   347,   519,   231,   245,   116,  -321,
    -321,  -321,  -321,   246,   308,  -321,  -321,  -321,   331,   333,
     334,   317,     1,   414,  -321,  -321,  -321,   286,  -321,   258,
     259,  -321,   262,   409,  -321,   -88,    62,   133,  -321,   304,
    -321,   475,   264,   117,  -321,  -321,     7,     1,  -321,  -321,
    -321,     1,   371,   266,   304,  -321,  -321,   304,   337,   421,
    -321,  -321,    62,  -321,  -321,  -321,  -321,   -12,   342,   -35,
     -73,  -321,   274,   423,   277,   304,   121,   304,  -321,  -321,
     426,   278,  -321,    10,    62,  -321,  -321,    62,   280,   430,
     273,   287,   434,   288,  -321,   292,  -321,  -321
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,     3,    18,    18,    16,     9,
       7,    10,    15,    12,    13,    11,    14,     8,     0,   228,
       0,   218,    65,    25,     0,    36,    36,     0,     0,     0,
       0,   217,    63,    63,     0,    30,     0,   230,   231,     1,
     229,     2,     0,     6,     5,   111,     0,    74,    75,   103,
      61,     0,   121,     0,     0,     0,     0,    97,    28,     0,
      69,     0,     0,     0,     0,    31,     0,     0,     4,     0,
       0,    91,     0,     0,    85,    86,    84,     0,    88,     0,
       0,   117,   219,   200,   203,   205,   202,   206,   201,   207,
       0,   120,   122,   195,   196,   197,   204,   198,   199,    24,
      23,     0,     0,    69,     0,    64,     0,     0,     0,     0,
      97,    71,    62,    59,    60,   233,   232,     0,   110,    90,
       0,    78,    77,    79,   103,    80,    87,    83,     0,   103,
       0,     0,    81,    26,     0,    35,     0,     0,     0,   191,
       0,     0,     0,     0,     0,     0,   193,     0,    96,   125,
     132,   133,   134,   127,   129,   135,   128,   147,   136,   137,
     138,   131,   126,   140,   141,     0,    29,   250,     0,     0,
      67,     0,     0,    70,    21,     0,    19,    94,    92,   118,
     227,   117,   102,   104,   109,   117,   113,   115,   112,   123,
       0,     0,     0,    37,   229,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   142,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,     0,     0,    73,    72,     0,
      17,     0,     0,    97,    93,     0,   225,     0,   226,   124,
      76,     0,   108,   107,   106,    82,     0,     0,     0,    41,
       0,    44,    43,     0,    42,    47,    40,    56,    33,     0,
      34,   179,     0,   192,   194,   183,   182,   186,   184,   187,
     185,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,   139,   130,   158,   159,     0,   156,   154,     0,     0,
       0,   145,     0,   172,   173,   174,   175,   176,   177,   178,
     149,   148,   151,   150,   152,   153,   157,     0,    27,   251,
       0,     0,    20,   229,    95,   208,   210,     0,   212,   223,
     211,    99,   119,   224,   105,   116,   114,    32,     0,     0,
      54,     0,    58,    38,     0,     0,   170,   188,     0,     0,
     164,     0,     0,     0,     0,   155,     0,     0,     0,   146,
     189,    66,    22,     0,     0,   245,   237,   243,   241,   244,
     239,     0,     0,     0,   222,   216,   220,     0,    89,     0,
       0,    55,     0,    53,   180,     0,   168,     0,   167,     0,
     171,   190,     0,     0,   162,   160,   223,     0,   240,   242,
     238,     0,   209,   224,     0,    45,    46,     0,     0,    49,
     181,   165,   169,   163,   161,   213,   234,   246,     0,   101,
       0,    52,     0,    51,     0,     0,     0,     0,    98,    57,
       0,     0,    39,     0,   247,   235,   221,   100,     0,     0,
     191,     0,     0,     0,   236,     0,    50,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -321,  -321,  -321,   392,  -321,   431,  -321,   192,  -321,  -321,
    -321,  -321,  -321,   187,  -321,  -321,   422,  -321,   181,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,   418,  -321,  -321,  -321,
     350,  -321,  -321,   282,  -187,    95,   378,   -53,   407,  -321,
    -321,   137,   270,  -321,  -321,  -321,  -105,  -321,  -321,    -1,
    -321,   210,  -321,  -321,  -166,  -188,  -321,   -26,   222,  -114,
    -121,  -321,  -321,  -321,  -321,  -321,  -321,   265,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,    26,   -61,  -108,  -321,
    -321,   -78,  -321,  -321,  -321,  -320,    72,  -321,  -321,  -321,
       5,  -321,    74,   293,  -321,  -321,  -321,  -321,   404,  -321,
    -321,  -321,  -321,    54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    53,   185,   186,    17,   110,
      18,    19,    69,   175,    20,    21,    65,   202,   203,   277,
     433,   442,   419,   352,   393,    22,    73,    23,    24,    25,
     118,    26,   120,   121,    27,   133,   134,    58,    87,    88,
     137,    59,   130,   187,   253,   254,   115,   388,   438,    91,
     192,   193,   264,    81,   142,   188,   100,   101,   189,   190,
     159,   160,   161,   162,   163,   164,   165,   212,   166,   167,
     168,   169,   291,   170,   171,   172,   173,   174,   103,   104,
     105,   106,   107,   108,   334,   335,   336,   337,   338,    40,
     339,   384,   385,   386,   259,    28,    29,    47,    48,   340,
     381,   445,    51,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     158,   102,   128,    83,    31,   256,   129,    32,   176,   374,
     256,   283,   437,   450,    41,   183,   146,   280,   374,    55,
      84,   293,    55,    84,   194,   260,   196,   198,   179,   265,
     219,   219,   308,   215,   216,    93,    94,    95,    31,   211,
      44,   140,    67,   218,    70,   375,   219,   114,   358,    75,
     220,   220,   376,    85,   375,    35,    85,   219,   267,   377,
     378,   376,   412,   141,   309,   180,   220,   247,   377,   378,
     112,   113,   434,   302,   420,   379,    45,   220,   123,   124,
    -246,   380,   147,   199,   379,   205,    36,   206,    89,   439,
     380,   427,    86,   215,   354,    86,   294,    42,   244,    96,
     305,   245,   306,   307,   217,   303,   304,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   219,   368,    57,    56,   219,   435,   182,    43,   311,
     255,    30,    33,   191,   257,   357,   269,    97,   195,   383,
     255,   220,   270,    98,  -214,   220,   373,   194,   341,   271,
     312,    82,   345,   346,   281,   292,   149,    93,    94,    95,
     176,   284,   333,   156,   327,   399,   149,    93,    94,    95,
     262,   125,   296,    34,   219,   359,   272,    46,   403,   210,
     150,   219,   361,   362,   219,   102,    37,   365,   102,   350,
     150,    49,    38,   297,   220,   273,   297,    99,   151,   219,
     263,   220,   298,   285,   220,   360,    39,   286,   151,   219,
     351,    50,   274,   398,   240,   241,   275,   242,   152,   220,
     330,    96,   250,   331,   135,   251,   429,   135,   152,   220,
     287,    96,   276,    52,   149,    93,    94,    95,    60,   278,
     153,   395,   279,   401,   396,   397,   363,    61,   328,    62,
     153,   288,   219,   241,    63,   242,   421,   367,   150,    97,
     371,   372,    64,   144,   144,    98,    68,   394,   289,    97,
     255,   197,   220,    71,   290,    98,   151,   210,   405,   424,
     154,   255,   255,   446,    72,   422,   245,    55,    76,    77,
     154,   237,   238,   239,   240,   241,   152,   242,    79,    96,
      80,    92,   111,   430,   109,   155,   156,   149,    93,    94,
      95,   114,   116,   402,   157,   155,   156,   119,   153,    99,
     122,   444,   117,   447,   157,    56,   127,    95,   131,    99,
     129,   150,   136,   132,   138,   143,   145,    97,   149,    93,
      94,    95,   144,    98,    93,   177,   181,   184,    89,   151,
     149,    93,    94,    95,   200,   201,   207,   204,   154,   208,
     243,   209,   150,   252,   246,   249,   268,   266,    12,   152,
     299,   255,    96,   261,   150,    55,   329,   301,   310,   343,
     213,   348,   349,   155,   156,   355,   308,   369,   242,   356,
     219,   153,   157,   366,   370,   221,   387,    99,   382,   389,
     152,   374,   390,    96,   392,   391,   400,   404,   406,   407,
      97,   408,   152,   409,   410,    96,    98,   413,   411,   414,
     415,   416,   153,   417,   418,   222,   423,   428,   431,   432,
     441,   154,   448,   453,   153,   440,   206,   375,   443,   449,
     455,    97,    78,   332,   376,   452,   223,    98,    54,   454,
     456,   377,   378,    97,   457,   347,   155,   156,    66,    98,
     353,    74,   214,   148,   248,   157,    90,   379,   139,   451,
      99,   344,  -246,   380,   214,   282,   295,   342,   224,   426,
     425,   126,   436,   258,     0,     0,     0,   155,   156,     0,
       0,     0,     0,     0,   222,     0,   157,     0,     0,   155,
     156,    99,   225,     0,     0,     0,     0,     0,   157,     0,
     226,   227,     0,    99,     0,   223,   228,   229,   230,   231,
     232,     0,     0,   233,   234,   222,   235,   236,   237,   238,
     239,   240,   241,  -248,   242,     0,  -215,     0,     0,     0,
       0,     0,     1,     0,     0,     0,   223,   224,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,   364,     4,     0,     0,     0,     0,   222,
       0,   300,     5,     6,     0,     0,     0,     0,   224,     0,
     227,     7,     8,     0,     0,   228,   229,   230,   231,   232,
    -249,   222,   233,   234,     9,   235,   236,   237,   238,   239,
     240,   241,   300,   242,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,     0,   228,   229,   230,   231,
     232,     0,  -249,   233,   234,    10,   235,   236,   237,   238,
     239,   240,   241,     0,   242,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
    -249,  -249,  -249,   231,   232,     0,     0,   233,   234,     0,
     235,   236,   237,   238,   239,   240,   241,   227,   242,     0,
       0,     0,     0,     0,     0,  -249,  -249,     0,     0,  -249,
    -249,     0,   235,   236,   237,   238,   239,   240,   241,     1,
     242,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,     0,    12
};

static const yytype_int16 yycheck[] =
{
     114,    62,    80,    56,     3,     3,    14,     2,   116,    30,
       3,     3,    47,     3,     9,   120,    95,   204,    30,    56,
      11,   209,    56,    11,   138,   191,   140,   141,    62,   195,
     119,   119,   103,   154,   155,     4,     5,     6,     3,   153,
      22,    52,    37,   157,    39,    66,   119,    85,   110,    44,
     139,   139,    73,    44,    66,    82,    44,   119,    52,    80,
      81,    73,   382,    74,   135,   118,   139,   181,    80,    81,
      65,    66,    84,   162,   162,    96,    58,   139,    73,    74,
     101,   102,   161,   144,    96,   161,   113,   163,    79,   162,
     102,   411,    83,   214,   282,    83,   210,    82,   162,    68,
     221,   165,   223,   224,   157,   219,   220,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   119,   310,    28,   161,   119,   138,   165,   113,   106,
     165,    31,     3,   134,   132,   160,    29,   106,   139,   132,
     165,   139,    35,   112,   165,   139,   333,   261,   253,    42,
     127,    56,   266,   267,   162,   208,     3,     4,     5,     6,
     268,   153,   161,   153,   242,   110,     3,     4,     5,     6,
      90,    76,    93,     3,   119,    93,    69,     3,   366,   114,
      27,   119,   296,   297,   119,   246,    95,   308,   249,   106,
      27,     0,    95,   114,   139,    88,   114,   166,    45,   119,
     120,   139,   123,    51,   139,   123,   100,    55,    45,   119,
     127,   164,   105,   123,   156,   157,   109,   159,    65,   139,
     246,    68,   162,   249,    87,   165,   414,    90,    65,   139,
      78,    68,   125,   115,     3,     4,     5,     6,     3,   162,
      87,   355,   165,   364,   358,   359,   299,   163,   243,   161,
      87,    99,   119,   157,    95,   159,   123,   310,    27,   106,
     162,   162,   134,   165,   165,   112,   121,   162,   116,   106,
     165,   118,   139,   129,   122,   112,    45,   114,   162,   162,
     127,   165,   165,   162,   134,   399,   165,    56,   132,   165,
     127,   153,   154,   155,   156,   157,    65,   159,    98,    68,
     131,     3,   127,   417,     4,   152,   153,     3,     4,     5,
       6,    85,    94,   366,   161,   152,   153,     3,    87,   166,
      45,   435,   161,   437,   161,   161,   161,     6,   162,   166,
      14,    27,   118,   162,   133,   162,    45,   106,     3,     4,
       5,     6,   165,   112,     4,     3,   141,     3,    79,    45,
       3,     4,     5,     6,   130,     3,   161,   132,   127,   161,
     100,   159,    27,    95,   161,   161,    94,    52,   115,    65,
     161,   165,    68,   165,    27,    56,     3,   162,   161,     3,
      45,   161,   161,   152,   153,    95,   103,   106,   159,   162,
     119,    87,   161,   161,   160,    20,    70,   166,   165,     6,
      65,    30,     6,    68,    24,   106,   162,   162,   162,   101,
     106,    80,    65,    80,    80,    68,   112,     3,   101,   133,
     162,   162,    87,   161,    15,    50,   162,   161,    91,     8,
       7,   127,     6,     3,    87,   161,   163,    66,   161,   161,
       6,   106,    50,   251,    73,   165,    71,   112,    17,   162,
     162,    80,    81,   106,   162,   268,   152,   153,    36,   112,
     279,    43,   127,   113,   182,   161,    59,    96,    90,   443,
     166,   261,   101,   102,   127,   205,   211,   255,   103,   407,
     406,    77,   428,   190,    -1,    -1,    -1,   152,   153,    -1,
      -1,    -1,    -1,    -1,    50,    -1,   161,    -1,    -1,   152,
     153,   166,   127,    -1,    -1,    -1,    -1,    -1,   161,    -1,
     135,   136,    -1,   166,    -1,    71,   141,   142,   143,   144,
     145,    -1,    -1,   148,   149,    50,   151,   152,   153,   154,
     155,   156,   157,     0,   159,    -1,   165,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    71,   103,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,   119,    31,    -1,    -1,    -1,    -1,    50,
      -1,   127,    39,    40,    -1,    -1,    -1,    -1,   103,    -1,
     136,    48,    49,    -1,    -1,   141,   142,   143,   144,   145,
      71,    50,   148,   149,    61,   151,   152,   153,   154,   155,
     156,   157,   127,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,    -1,   103,   148,   149,    92,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,    -1,    -1,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   136,   159,    -1,
      -1,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,     9,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,   115
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     9,    18,    25,    31,    39,    40,    48,    49,    61,
      92,   108,   115,   168,   169,   170,   171,   175,   177,   178,
     181,   182,   192,   194,   195,   196,   198,   201,   262,   263,
      31,     3,   257,     3,     3,    82,   113,    95,    95,   100,
     256,   257,    82,   113,    22,    58,     3,   264,   265,     0,
     164,   269,   115,   172,   172,    56,   161,   202,   204,   208,
       3,   163,   161,    95,   134,   183,   183,   257,   121,   179,
     257,   129,   134,   193,   193,   257,   132,   165,   170,    98,
     131,   220,   202,   204,    11,    44,    83,   205,   206,    79,
     205,   216,     3,     4,     5,     6,    68,   106,   112,   166,
     223,   224,   244,   245,   246,   247,   248,   249,   250,     4,
     176,   127,   257,   257,    85,   213,    94,   161,   197,     3,
     199,   200,    45,   257,   257,   202,   265,   161,   248,    14,
     209,   162,   162,   202,   203,   208,   118,   207,   133,   203,
      52,    74,   221,   162,   165,    45,    95,   161,   197,     3,
      27,    45,    65,    87,   127,   152,   153,   161,   226,   227,
     228,   229,   230,   231,   232,   233,   235,   236,   237,   238,
     240,   241,   242,   243,   244,   180,   245,     3,   270,    62,
     204,   141,   165,   213,     3,   173,   174,   210,   222,   225,
     226,   216,   217,   218,   226,   216,   226,   118,   226,   244,
     130,     3,   184,   185,   132,   161,   163,   161,   161,   159,
     114,   226,   234,    45,   127,   227,   227,   204,   226,   119,
     139,    20,    50,    71,   103,   127,   135,   136,   141,   142,
     143,   144,   145,   148,   149,   151,   152,   153,   154,   155,
     156,   157,   159,   100,   162,   165,   161,   226,   200,   161,
     162,   165,    95,   211,   212,   165,     3,   132,   260,   261,
     221,   165,    90,   120,   219,   221,    52,    52,    94,    29,
      35,    42,    69,    88,   105,   109,   125,   186,   162,   165,
     201,   162,   209,     3,   153,    51,    55,    78,    99,   116,
     122,   239,   204,   222,   226,   234,    93,   114,   123,   161,
     127,   162,   162,   226,   226,   227,   227,   227,   103,   135,
     161,   106,   127,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   248,   257,     3,
     224,   224,   174,   161,   251,   252,   253,   254,   255,   257,
     266,   213,   225,     3,   218,   226,   226,   180,   161,   161,
     106,   127,   190,   185,   222,    95,   162,   160,   110,    93,
     123,   226,   226,   204,   119,   227,   161,   204,   222,   106,
     160,   162,   162,   201,    30,    66,    73,    80,    81,    96,
     102,   267,   165,   132,   258,   259,   260,    70,   214,     6,
       6,   106,    24,   191,   162,   226,   226,   226,   123,   110,
     162,   227,   204,   222,   162,   162,   162,   101,    80,    80,
      80,   101,   252,     3,   133,   162,   162,   161,    15,   189,
     162,   123,   226,   162,   162,   259,   253,   252,   161,   222,
     226,    91,     8,   187,    84,   138,   270,    47,   215,   162,
     161,     7,   188,   161,   226,   268,   162,   226,     6,   161,
       3,   243,   165,     3,   162,     6,   162,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   167,   168,   169,   169,   170,   170,   170,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   172,   172,   173,
     173,   174,   174,   175,   176,   177,   177,   178,   179,   180,
     181,   181,   182,   182,   182,   183,   183,   184,   184,   185,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   190,   191,   191,   192,
     192,   192,   193,   193,   194,   195,   196,   196,   197,   197,
     198,   199,   199,   200,   201,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   206,   206,   206,   207,   207,   208,
     209,   209,   210,   211,   211,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   217,   217,   218,   219,   219,   219,
     220,   220,   221,   221,   221,   221,   221,   221,   222,   222,
     223,   223,   224,   224,   225,   226,   226,   226,   226,   226,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     228,   228,   229,   229,   229,   229,   229,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   232,   232,   232,   233,   233,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   236,   236,   236,   237,
     237,   238,   239,   239,   239,   239,   239,   239,   240,   241,
     242,   243,   243,   243,   243,   244,   244,   244,   244,   244,
     245,   246,   246,   247,   247,   248,   249,   250,   251,   251,
     252,   252,   253,   253,   254,   254,   255,   256,   257,   257,
     258,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     263,   264,   264,   265,   266,   266,   266,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   268,   269,   269,
     270,   270
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     7,
       1,     1,     1,     1,     1,     4,     4,     1,     6,     0,
       4,     0,     2,     0,     1,     2,     0,     4,     0,     4,
       4,     3,     2,     0,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     2,     2,     6,     3,     3,     1,
       1,     3,     5,     2,     1,     1,     1,     1,     0,     7,
       1,     0,     1,     1,     0,     2,     2,     0,     4,     0,
       2,     0,     3,     0,     1,     3,     2,     1,     1,     0,
       2,     0,     2,     2,     4,     2,     4,     0,     1,     3,
       1,     0,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     3,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       5,     6,     5,     6,     4,     6,     3,     5,     4,     5,
       4,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     6,     1,     1,     1,     1,     1,     1,     4,     4,
       5,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     4,     1,     3,     2,     1,     1,     3,
       1,     5,     1,     0,     2,     1,     1,     0,     1,     0,
       2,     1,     3,     3,     4,     6,     8,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     0,     1,     1,     0,
       1,     3
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
#line 1760 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1766 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1772 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1778 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* statement_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1791 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1797 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 171: /* preparable_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1803 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 172: /* opt_hints  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1816 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* hint_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1829 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* hint  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1835 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* prepare_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1841 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* prepare_target_query  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1847 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* execute_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1853 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* import_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1859 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* import_file_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1865 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* file_path  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1871 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* show_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1877 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* create_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1883 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_not_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1889 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* column_def_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1902 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* column_def  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1908 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* column_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1914 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_cardinality  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).cardinality_t)); }
#line 1920 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_aggregation  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1926 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_encoding  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1932 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_column_nullable  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1938 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_column_default  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1944 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* drop_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1950 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1956 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* delete_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1962 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* truncate_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1968 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* insert_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1974 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_column_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 1987 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* update_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1993 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* update_clause_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2006 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* update_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2012 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2018 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_with_paren  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2024 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* select_paren_or_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2030 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 204: /* select_no_paren  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2036 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* select_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2042 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_distinct  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2048 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* select_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2061 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2067 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2073 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_where  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2079 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_group  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2085 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_having  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2091 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_order  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2104 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* order_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2117 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* order_desc  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2123 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_order_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2129 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* opt_top  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2135 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_limit  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2141 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 222: /* expr_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2154 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_literal_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2167 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* literal_list  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2180 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* expr_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2186 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2192 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* operand  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2198 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* scalar_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2204 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* unary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2210 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* binary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2216 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* logic_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2222 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* in_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2228 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2234 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_list  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2240 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* exists_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2246 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* comp_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2252 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* function_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2258 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* extract_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2264 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* datetime_field  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2270 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* array_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2276 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* array_index  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2282 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* between_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2288 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* column_name  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2294 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2300 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* string_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2306 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* bool_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2312 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* num_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2318 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* int_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2324 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* null_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2330 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* param_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2336 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* table_ref  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2342 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2348 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* nonjoin_table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2354 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* table_ref_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2367 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* table_ref_name  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2373 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* table_ref_name_no_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2379 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* table_name  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2385 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2391 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* opt_table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2397 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2403 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2409 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* opt_with_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2415 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* with_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2421 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* with_description_list  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2427 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* with_description  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2433 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* join_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2439 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* opt_join_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2445 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 268: /* join_condition  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2451 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 270: /* ident_commalist  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2464 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 2582 "bison_parser.cpp" /* yacc.c:1431  */
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
#line 266 "bison_parser.y" /* yacc.c:1652  */
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
#line 2792 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 287 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2803 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 293 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2814 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 302 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2823 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 306 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2832 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 310 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2840 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 317 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2846 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 318 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2852 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 319 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2858 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 320 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2864 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 321 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2870 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 322 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2876 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 323 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2882 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 324 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2888 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 325 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2894 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 334 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2900 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 335 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 2906 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 340 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2912 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 341 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2918 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 345 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2927 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 349 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2937 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 361 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2947 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 371 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2956 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 375 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2966 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 387 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2977 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 396 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kImportCSV; }
#line 2983 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 400 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2989 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 410 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2997 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 413 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3007 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 427 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3019 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 33:
#line 434 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3031 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 34:
#line 441 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3044 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 452 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3050 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 453 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3056 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 457 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3062 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 458 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3068 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 462 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-6].sval), (yyvsp[-5].column_type_t), (yyvsp[-4].bval), (yyvsp[-3].expr), (yyvsp[-2].encoding_t), (yyvsp[-1].cardinality_t), (yyvsp[0].expr));
		}
#line 3076 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 468 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3082 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 469 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3088 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 470 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3094 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 471 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3100 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 472 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3106 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 473 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3112 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 474 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3118 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 475 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3124 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 479 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = new Cardinality{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3130 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 480 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = nullptr; }
#line 3136 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 484 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprLiteralString);
			(yyval.expr)->name = (yyvsp[-1].sval);
		}
#line 3145 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 488 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3151 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 492 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = EncodingType::DICT; }
#line 3157 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 493 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = EncodingType::RAW; }
#line 3163 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 497 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3169 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 498 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3175 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 499 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3181 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 503 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3187 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 504 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3193 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 514 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3204 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 520 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3215 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 526 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3225 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 534 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3231 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 535 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3237 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 544 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3248 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 553 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3258 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 566 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3270 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 573 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3282 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 584 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3288 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 585 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = nullptr; }
#line 3294 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 595 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3305 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 604 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3311 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 605 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3317 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 609 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3327 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 621 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3336 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 625 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3345 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 76:
#line 629 "bison_parser.y" /* yacc.c:1652  */
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
#line 3365 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 77:
#line 647 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3371 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 78:
#line 648 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3377 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 81:
#line 657 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3392 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 82:
#line 667 "bison_parser.y" /* yacc.c:1652  */
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
#line 3411 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 89:
#line 699 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3425 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 90:
#line 711 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3431 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 91:
#line 712 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3437 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 93:
#line 720 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3443 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 94:
#line 721 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = nullptr; }
#line 3449 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 724 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3455 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 729 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3461 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 730 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3467 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 734 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3477 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 739 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.group_t) = nullptr; }
#line 3483 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 743 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3489 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 744 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3495 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 747 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3501 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 748 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = nullptr; }
#line 3507 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 752 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3513 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 753 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3519 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 757 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3525 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 761 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3531 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 762 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderDesc; }
#line 3537 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 763 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3543 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 769 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3549 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 770 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3555 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 774 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3561 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 775 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3567 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 776 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3573 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 777 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3579 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 778 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3585 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 779 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3591 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 786 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3597 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 787 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3603 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 791 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3609 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 792 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 3615 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 122:
#line 796 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3621 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 123:
#line 797 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3627 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 124:
#line 801 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3639 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 130:
#line 819 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3645 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 139:
#line 828 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3651 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 142:
#line 837 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3657 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 143:
#line 838 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3663 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 144:
#line 839 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3669 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 145:
#line 840 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3675 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 841 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3681 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 148:
#line 846 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3687 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 149:
#line 847 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3693 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 848 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3699 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 849 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3705 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 850 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3711 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 851 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3717 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 852 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3723 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 853 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3729 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 854 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3735 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 855 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3741 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 859 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3747 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 860 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3753 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 864 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3759 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 865 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3765 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 866 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3771 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 867 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3777 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 873 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3783 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 874 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3789 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 875 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3795 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 876 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3801 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 880 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3807 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 881 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3813 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 885 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3819 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 886 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3825 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 890 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3831 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 891 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3837 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 892 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3843 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 893 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3849 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 894 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3855 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 895 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3861 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 896 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3867 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 900 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3873 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 901 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3879 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 905 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3885 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 909 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3891 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 910 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3897 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 911 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3903 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 912 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3909 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 913 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3915 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 914 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3921 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 917 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3927 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 921 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3933 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 925 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3939 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 929 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3945 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 192:
#line 930 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3951 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 193:
#line 931 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3957 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 194:
#line 932 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3963 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 200:
#line 944 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3969 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 201:
#line 948 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3975 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 202:
#line 949 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3981 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 953 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3987 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 205:
#line 958 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3993 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 206:
#line 962 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3999 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 207:
#line 966 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4009 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 209:
#line 979 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4020 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 213:
#line 995 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4031 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 214:
#line 1004 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4037 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 1005 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4043 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 1010 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4055 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 217:
#line 1021 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4065 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 218:
#line 1030 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4071 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 219:
#line 1031 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4077 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 221:
#line 1037 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4083 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 223:
#line 1043 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4089 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 224:
#line 1047 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4095 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 225:
#line 1048 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4101 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 227:
#line 1054 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4107 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 229:
#line 1063 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = nullptr; }
#line 4113 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 230:
#line 1067 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4119 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 1071 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4128 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 1075 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4137 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 1082 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4147 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 1096 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4159 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 1104 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4172 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 1114 "bison_parser.y" /* yacc.c:1652  */
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
#line 4192 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 237:
#line 1132 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4198 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 238:
#line 1133 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4204 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 1134 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4210 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 1135 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4216 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 1136 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4222 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 1137 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4228 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 1138 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4234 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 244:
#line 1139 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4240 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 245:
#line 1140 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinCross; }
#line 4246 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 246:
#line 1141 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4252 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 250:
#line 1161 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4258 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 251:
#line 1162 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4264 "bison_parser.cpp" /* yacc.c:1652  */
    break;


#line 4268 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 1165 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
