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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   734

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  461

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
     411,   414,   428,   435,   442,   453,   454,   458,   459,   463,
     469,   470,   471,   472,   473,   474,   475,   476,   480,   481,
     485,   489,   493,   494,   495,   499,   500,   501,   505,   506,
     516,   522,   528,   536,   537,   546,   555,   568,   575,   586,
     587,   597,   606,   607,   611,   623,   627,   631,   649,   650,
     654,   655,   659,   669,   686,   690,   691,   692,   696,   697,
     701,   713,   714,   718,   722,   723,   726,   731,   732,   736,
     741,   745,   746,   749,   750,   754,   755,   759,   763,   764,
     765,   771,   772,   776,   777,   778,   779,   780,   781,   788,
     789,   793,   794,   798,   799,   803,   813,   814,   815,   816,
     817,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     830,   834,   835,   839,   840,   841,   842,   843,   847,   848,
     849,   850,   851,   852,   853,   854,   855,   856,   857,   861,
     862,   866,   867,   868,   869,   875,   876,   877,   878,   882,
     883,   887,   888,   892,   893,   894,   895,   896,   897,   898,
     902,   903,   907,   911,   912,   913,   914,   915,   916,   919,
     923,   927,   931,   932,   933,   934,   938,   939,   940,   941,
     942,   946,   950,   951,   955,   956,   960,   964,   968,   980,
     981,   991,   992,   996,   997,  1006,  1007,  1012,  1023,  1032,
    1033,  1038,  1039,  1044,  1045,  1049,  1050,  1055,  1056,  1064,
    1065,  1069,  1073,  1077,  1084,  1097,  1105,  1115,  1134,  1135,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1148,  1157,
    1158,  1163,  1164
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

#define YYPACT_NINF -360

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-360)))

#define YYTABLE_NINF -250

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-250)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     620,    -2,    38,    60,    69,   -37,   -30,    -8,    28,    38,
     -35,    -3,   128,   154,     0,  -360,    67,    67,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,   -39,  -360,
     159,    13,  -360,    16,    95,    70,    70,    38,    88,    38,
      81,  -360,    92,    92,    38,  -360,   106,    59,  -360,  -360,
     405,  -360,   142,  -360,  -360,   117,   -39,    14,  -360,     9,
    -360,   246,    31,   249,   133,    38,    38,   183,  -360,   180,
     114,   279,   239,    38,    38,  -360,   127,   128,  -360,   131,
     286,   284,   140,   141,  -360,  -360,  -360,   -39,   190,   176,
     -39,   -12,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     148,   147,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,   269,   -76,   114,   225,  -360,   311,   313,    25,   179,
     -69,  -360,  -360,  -360,  -360,  -360,  -360,   321,  -360,  -360,
     225,  -360,  -360,  -360,   241,  -360,  -360,  -360,   225,   241,
     225,   145,  -360,  -360,    31,  -360,   196,   324,   197,   -22,
     171,   184,   181,   129,   273,   329,  -360,   261,    48,   317,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,   247,  -360,  -360,   -63,   185,
    -360,   225,   279,  -360,   189,    43,  -360,   256,   188,  -360,
       8,   -12,   198,  -360,   -62,   -12,    48,   291,    77,  -360,
     260,   602,    53,  -360,   250,    -1,     6,   244,   305,   225,
     225,    55,   -54,   203,   329,   428,   330,   207,   -88,   225,
     225,   329,  -360,   329,   329,   -80,   210,   -57,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   286,    38,  -360,   368,    31,    48,  -360,    31,
    -360,   321,     1,   183,  -360,   225,  -360,   370,  -360,  -360,
    -360,   225,  -360,  -360,  -360,  -360,   225,   225,   311,  -360,
     214,  -360,  -360,   219,  -360,  -360,  -360,    39,  -360,   324,
    -360,  -360,   225,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,   287,   221,   -74,    61,   -31,   225,   225,  -360,   305,
     278,  -360,  -360,  -360,   265,   385,   450,   450,   329,   226,
     261,  -360,   290,   450,   450,   450,   472,   472,   472,   472,
     330,   330,    64,    64,    64,    11,   231,   232,  -360,  -360,
      63,    72,  -360,   250,  -360,   111,  -360,   228,  -360,    12,
    -360,   326,  -360,  -360,  -360,    48,    48,  -360,   392,   395,
    -360,   297,   379,  -360,    74,   225,  -360,  -360,   225,   225,
    -360,    80,    62,   243,   329,   450,   261,   245,    90,  -360,
    -360,  -360,  -360,   248,   310,  -360,  -360,  -360,   335,   337,
     338,   320,     1,   426,  -360,  -360,  -360,   299,  -360,   271,
     276,  -360,   281,   424,  -360,   -87,    48,    83,  -360,   225,
    -360,   428,   285,    97,  -360,  -360,    12,     1,  -360,  -360,
    -360,     1,   327,   282,   225,  -360,  -360,   225,   444,   440,
    -360,  -360,    48,  -360,  -360,  -360,  -360,   274,   313,   -41,
     -72,   289,   302,   443,   303,   225,    99,   225,  -360,  -360,
     471,   470,   319,  -360,     7,    48,  -360,  -360,    48,   316,
     328,   487,   331,   334,  -360,   491,   340,  -360,   341,  -360,
    -360
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     230,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     3,    18,    18,    16,     9,
       7,    10,    15,    12,    13,    11,    14,     8,     0,   229,
       0,   219,    66,    25,     0,    36,    36,     0,     0,     0,
       0,   218,    64,    64,     0,    30,     0,   231,   232,     1,
     230,     2,     0,     6,     5,   112,     0,    75,    76,   104,
      62,     0,   122,     0,     0,     0,     0,    98,    28,     0,
      70,     0,     0,     0,     0,    31,     0,     0,     4,     0,
       0,    92,     0,     0,    86,    87,    85,     0,    89,     0,
       0,   118,   220,   201,   204,   206,   203,   207,   202,   208,
       0,   121,   123,   196,   197,   198,   205,   199,   200,    24,
      23,     0,     0,    70,     0,    65,     0,     0,     0,     0,
      98,    72,    63,    60,    61,   234,   233,     0,   111,    91,
       0,    79,    78,    80,   104,    81,    88,    84,     0,   104,
       0,     0,    82,    26,     0,    35,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,   194,     0,    97,   126,
     133,   134,   135,   128,   130,   136,   129,   148,   137,   138,
     139,   132,   127,   141,   142,     0,    29,   251,     0,     0,
      68,     0,     0,    71,    21,     0,    19,    95,    93,   119,
     228,   118,   103,   105,   110,   118,   114,   116,   113,   124,
       0,     0,     0,    37,   230,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   143,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,    74,    73,     0,
      17,     0,     0,    98,    94,     0,   226,     0,   227,   125,
      77,     0,   109,   108,   107,    83,     0,     0,     0,    41,
       0,    44,    43,     0,    42,    47,    40,    57,    33,     0,
      34,   180,     0,   193,   195,   184,   183,   187,   185,   188,
     186,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,   140,   131,   159,   160,     0,   157,   155,     0,     0,
       0,   146,     0,   173,   174,   175,   176,   177,   178,   179,
     150,   149,   152,   151,   153,   154,   158,     0,    27,   252,
       0,     0,    20,   230,    96,   209,   211,     0,   213,   224,
     212,   100,   120,   225,   106,   117,   115,    32,     0,     0,
      55,     0,    59,    38,     0,     0,   171,   189,     0,     0,
     165,     0,     0,     0,     0,   156,     0,     0,     0,   147,
     190,    67,    22,     0,     0,   246,   238,   244,   242,   245,
     240,     0,     0,     0,   223,   217,   221,     0,    90,     0,
       0,    56,     0,    54,   181,     0,   169,     0,   168,     0,
     172,   191,     0,     0,   163,   161,   224,     0,   241,   243,
     239,     0,   210,   225,     0,    45,    46,     0,     0,    49,
     182,   166,   170,   164,   162,   214,   235,   247,     0,   102,
       0,    52,     0,    51,     0,     0,     0,     0,    99,    58,
       0,     0,     0,    39,     0,   248,   236,   222,   101,     0,
       0,     0,   192,     0,    53,     0,     0,   237,     0,    50,
      48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,  -360,   448,  -360,   488,  -360,   253,  -360,  -360,
    -360,  -360,  -360,   238,  -360,  -360,   473,  -360,   229,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,   464,  -360,  -360,  -360,
     397,  -360,  -360,   332,  -196,     4,   423,   -53,   456,  -360,
    -360,   182,   312,  -360,  -360,  -360,  -108,  -360,  -360,    -9,
    -360,   255,  -360,  -360,   -67,  -188,  -360,    37,   263,  -114,
    -121,  -360,  -360,  -360,  -360,  -360,  -360,   323,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,    79,   -61,  -111,  -360,
    -360,   -78,  -360,  -360,  -360,  -359,   124,  -360,  -360,  -360,
       5,  -360,   118,   352,  -360,  -360,  -360,  -360,   467,  -360,
    -360,  -360,  -360,   119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    53,   185,   186,    17,   110,
      18,    19,    69,   175,    20,    21,    65,   202,   203,   277,
     433,   443,   419,   352,   393,    22,    73,    23,    24,    25,
     118,    26,   120,   121,    27,   133,   134,    58,    87,    88,
     137,    59,   130,   187,   253,   254,   115,   388,   438,    91,
     192,   193,   264,    81,   142,   188,   100,   101,   189,   190,
     159,   160,   161,   162,   163,   164,   165,   212,   166,   167,
     168,   169,   291,   170,   171,   172,   173,   174,   103,   104,
     105,   106,   107,   108,   334,   335,   336,   337,   338,    40,
     339,   384,   385,   386,   259,    28,    29,    47,    48,   340,
     381,   446,    51,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     158,   102,   128,    83,    31,   176,   437,    32,   280,   283,
     452,   256,   183,   129,    41,   256,   114,    55,   146,    44,
      84,   293,   308,   412,   194,    84,   196,   198,   262,    30,
     219,   219,    57,   215,   216,    93,    94,    95,   296,   211,
     140,    31,    67,   218,    70,    35,   219,    42,   311,    75,
     220,   220,   427,    85,   309,    45,   219,   263,    85,   297,
      82,   359,   141,    33,    37,   180,   220,   247,   298,   312,
     112,   113,    34,   302,   420,    36,   220,    43,   123,   124,
     125,    55,   297,   199,   147,   357,    38,   179,    89,   439,
     255,   360,    86,   215,   354,   182,   294,    86,   244,    96,
     305,   245,   306,   307,   217,   303,   304,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,    56,   368,   255,   260,   191,   219,    39,   265,   267,
     195,    46,   149,    93,    94,    95,    97,   373,   205,   257,
     206,   374,    98,   383,   350,   341,   220,   194,   149,    93,
      94,    95,   345,   346,    49,   292,   150,   176,   284,   156,
     281,   333,    60,    50,   327,   351,   219,   241,   210,   242,
     358,   399,   150,   219,   151,    61,    62,   375,   403,   219,
     219,    52,   361,   362,   376,   102,   220,   365,   102,    63,
     151,   377,   378,   220,   152,   219,    99,    96,   219,   220,
     220,   219,   398,    64,   250,   421,   379,   251,    68,    71,
     152,  -247,   380,    96,   278,   220,   153,   279,   220,   240,
     241,   220,   242,    77,   371,    72,   429,   144,   149,    93,
      94,    95,   153,   372,    97,   394,   144,    76,   255,    79,
      98,   395,   210,   401,   396,   397,   363,    80,   328,    92,
      97,   405,   150,   109,   255,   154,    98,   367,   424,   111,
     447,   255,   197,   245,   149,    93,    94,    95,   114,   135,
     151,   154,   135,   116,   117,  -215,   149,    93,    94,    95,
     155,   156,   119,   330,   122,   422,   331,    56,   150,   157,
     152,   127,    95,    96,    99,   285,   155,   156,   129,   286,
     150,   131,   132,   430,   374,   157,   151,   136,   138,   143,
      99,   144,   153,   402,   145,    93,   177,    55,   213,   181,
      89,   445,   287,   448,   184,   200,   152,   201,   204,    96,
      97,   207,   149,    93,    94,    95,    98,   221,   152,   209,
     375,    96,   288,   266,   208,   246,   243,   376,   153,   249,
     252,   154,   255,   268,   377,   378,   150,   374,   434,   289,
     153,    55,   261,   299,    12,   290,    97,   222,   301,   379,
     310,   329,    98,   343,   348,   380,   155,   156,    97,   349,
     308,   355,   356,   219,    98,   157,   366,   154,   223,   242,
      99,   370,   382,   375,   152,   369,   387,    96,   389,   214,
     376,   390,   391,   392,   400,  -249,   404,   377,   378,   406,
     407,   435,   155,   156,     1,   408,   153,   409,   410,   224,
     411,   157,   379,     2,   155,   156,    99,  -247,   380,   413,
       3,   414,   415,   157,    97,   222,     4,   416,    99,   418,
      98,   417,   428,   225,     5,     6,   423,   431,   432,   440,
     442,   226,   227,     7,     8,   214,   223,   228,   229,   230,
     231,   232,   441,   444,   233,   234,     9,   235,   236,   237,
     238,   239,   240,   241,   449,   242,   450,   454,   222,   451,
     155,   156,   237,   238,   239,   240,   241,   224,   242,   157,
     456,  -216,   455,   206,    99,   457,    10,   458,    78,   223,
     222,   459,   460,   364,   332,    54,   347,    74,   353,    66,
     148,   300,    11,   139,   248,    90,   344,   282,   342,    12,
     227,  -250,   222,   453,   425,   228,   229,   230,   231,   232,
     224,   426,   233,   234,   295,   235,   236,   237,   238,   239,
     240,   241,   258,   242,   126,     0,     0,   436,     0,     0,
       0,     0,  -250,     0,   300,     0,     0,     0,     0,     0,
       0,     0,     0,   227,     0,     0,     0,     0,   228,   229,
     230,   231,   232,     0,     0,   233,   234,     0,   235,   236,
     237,   238,   239,   240,   241,   227,   242,     0,     0,     0,
    -250,  -250,  -250,   231,   232,     0,     0,   233,   234,     0,
     235,   236,   237,   238,   239,   240,   241,   227,   242,     0,
       0,     0,     0,     0,     0,  -250,  -250,     0,     0,  -250,
    -250,     0,   235,   236,   237,   238,   239,   240,   241,     1,
     242,   269,     0,     0,     0,     0,     0,   270,     2,     0,
       0,     0,     0,     0,   271,     3,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,   272,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   274,     0,     0,     0,
     275,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,    11,     0,     0,
       0,     0,     0,     0,    12
};

static const yytype_int16 yycheck[] =
{
     114,    62,    80,    56,     3,   116,    47,     2,   204,     3,
       3,     3,   120,    14,     9,     3,    85,    56,    94,    22,
      11,   209,   102,   382,   138,    11,   140,   141,    90,    31,
     118,   118,    28,   154,   155,     4,     5,     6,    92,   153,
      52,     3,    37,   157,    39,    82,   118,    82,   105,    44,
     138,   138,   411,    44,   134,    58,   118,   119,    44,   113,
      56,    92,    74,     3,    94,   118,   138,   181,   122,   126,
      65,    66,     3,   161,   161,   112,   138,   112,    73,    74,
      76,    56,   113,   144,   160,   159,    94,    62,    79,   161,
     164,   122,    83,   214,   282,   164,   210,    83,   161,    68,
     221,   164,   223,   224,   157,   219,   220,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   160,   310,   164,   191,   134,   118,    99,   195,    52,
     139,     3,     3,     4,     5,     6,   105,   333,   160,   131,
     162,    30,   111,   131,   105,   253,   138,   261,     3,     4,
       5,     6,   266,   267,     0,   208,    27,   268,   152,   152,
     161,   160,     3,   163,   242,   126,   118,   156,   113,   158,
     109,   109,    27,   118,    45,   162,   160,    66,   366,   118,
     118,   114,   296,   297,    73,   246,   138,   308,   249,    94,
      45,    80,    81,   138,    65,   118,   165,    68,   118,   138,
     138,   118,   122,   133,   161,   122,    95,   164,   120,   128,
      65,   100,   101,    68,   161,   138,    87,   164,   138,   155,
     156,   138,   158,   164,   161,   133,   414,   164,     3,     4,
       5,     6,    87,   161,   105,   161,   164,   131,   164,    97,
     111,   355,   113,   364,   358,   359,   299,   130,   243,     3,
     105,   161,    27,     4,   164,   126,   111,   310,   161,   126,
     161,   164,   117,   164,     3,     4,     5,     6,    85,    87,
      45,   126,    90,    93,   160,   164,     3,     4,     5,     6,
     151,   152,     3,   246,    45,   399,   249,   160,    27,   160,
      65,   160,     6,    68,   165,    51,   151,   152,    14,    55,
      27,   161,   161,   417,    30,   160,    45,   117,   132,   161,
     165,   164,    87,   366,    45,     4,     3,    56,    45,   140,
      79,   435,    78,   437,     3,   129,    65,     3,   131,    68,
     105,   160,     3,     4,     5,     6,   111,    20,    65,   158,
      66,    68,    98,    52,   160,   160,    99,    73,    87,   160,
      94,   126,   164,    93,    80,    81,    27,    30,    84,   115,
      87,    56,   164,   160,   114,   121,   105,    50,   161,    95,
     160,     3,   111,     3,   160,   101,   151,   152,   105,   160,
     102,    94,   161,   118,   111,   160,   160,   126,    71,   158,
     165,   159,   164,    66,    65,   105,    70,    68,     6,   126,
      73,     6,   105,    24,   161,     0,   161,    80,    81,   161,
     100,   137,   151,   152,     9,    80,    87,    80,    80,   102,
     100,   160,    95,    18,   151,   152,   165,   100,   101,     3,
      25,   132,   161,   160,   105,    50,    31,   161,   165,    15,
     111,   160,   160,   126,    39,    40,   161,     3,     8,   160,
       7,   134,   135,    48,    49,   126,    71,   140,   141,   142,
     143,   144,   160,   160,   147,   148,    61,   150,   151,   152,
     153,   154,   155,   156,     3,   158,     6,   161,    50,   160,
     151,   152,   152,   153,   154,   155,   156,   102,   158,   160,
       3,   164,   164,   162,   165,   161,    91,     6,    50,    71,
      50,   161,   161,   118,   251,    17,   268,    43,   279,    36,
     113,   126,   107,    90,   182,    59,   261,   205,   255,   114,
     135,    71,    50,   444,   406,   140,   141,   142,   143,   144,
     102,   407,   147,   148,   211,   150,   151,   152,   153,   154,
     155,   156,   190,   158,    77,    -1,    -1,   428,    -1,    -1,
      -1,    -1,   102,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    -1,    -1,   147,   148,    -1,   150,   151,
     152,   153,   154,   155,   156,   135,   158,    -1,    -1,    -1,
     140,   141,   142,   143,   144,    -1,    -1,   147,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,   135,   158,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,    -1,    -1,   147,
     148,    -1,   150,   151,   152,   153,   154,   155,   156,     9,
     158,    29,    -1,    -1,    -1,    -1,    -1,    35,    18,    -1,
      -1,    -1,    -1,    -1,    42,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
     108,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   107,    -1,    -1,
      -1,    -1,    -1,    -1,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     9,    18,    25,    31,    39,    40,    48,    49,    61,
      91,   107,   114,   167,   168,   169,   170,   174,   176,   177,
     180,   181,   191,   193,   194,   195,   197,   200,   261,   262,
      31,     3,   256,     3,     3,    82,   112,    94,    94,    99,
     255,   256,    82,   112,    22,    58,     3,   263,   264,     0,
     163,   268,   114,   171,   171,    56,   160,   201,   203,   207,
       3,   162,   160,    94,   133,   182,   182,   256,   120,   178,
     256,   128,   133,   192,   192,   256,   131,   164,   169,    97,
     130,   219,   201,   203,    11,    44,    83,   204,   205,    79,
     204,   215,     3,     4,     5,     6,    68,   105,   111,   165,
     222,   223,   243,   244,   245,   246,   247,   248,   249,     4,
     175,   126,   256,   256,    85,   212,    93,   160,   196,     3,
     198,   199,    45,   256,   256,   201,   264,   160,   247,    14,
     208,   161,   161,   201,   202,   207,   117,   206,   132,   202,
      52,    74,   220,   161,   164,    45,    94,   160,   196,     3,
      27,    45,    65,    87,   126,   151,   152,   160,   225,   226,
     227,   228,   229,   230,   231,   232,   234,   235,   236,   237,
     239,   240,   241,   242,   243,   179,   244,     3,   269,    62,
     203,   140,   164,   212,     3,   172,   173,   209,   221,   224,
     225,   215,   216,   217,   225,   215,   225,   117,   225,   243,
     129,     3,   183,   184,   131,   160,   162,   160,   160,   158,
     113,   225,   233,    45,   126,   226,   226,   203,   225,   118,
     138,    20,    50,    71,   102,   126,   134,   135,   140,   141,
     142,   143,   144,   147,   148,   150,   151,   152,   153,   154,
     155,   156,   158,    99,   161,   164,   160,   225,   199,   160,
     161,   164,    94,   210,   211,   164,     3,   131,   259,   260,
     220,   164,    90,   119,   218,   220,    52,    52,    93,    29,
      35,    42,    69,    88,   104,   108,   124,   185,   161,   164,
     200,   161,   208,     3,   152,    51,    55,    78,    98,   115,
     121,   238,   203,   221,   225,   233,    92,   113,   122,   160,
     126,   161,   161,   225,   225,   226,   226,   226,   102,   134,
     160,   105,   126,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   247,   256,     3,
     223,   223,   173,   160,   250,   251,   252,   253,   254,   256,
     265,   212,   224,     3,   217,   225,   225,   179,   160,   160,
     105,   126,   189,   184,   221,    94,   161,   159,   109,    92,
     122,   225,   225,   203,   118,   226,   160,   203,   221,   105,
     159,   161,   161,   200,    30,    66,    73,    80,    81,    95,
     101,   266,   164,   131,   257,   258,   259,    70,   213,     6,
       6,   105,    24,   190,   161,   225,   225,   225,   122,   109,
     161,   226,   203,   221,   161,   161,   161,   100,    80,    80,
      80,   100,   251,     3,   132,   161,   161,   160,    15,   188,
     161,   122,   225,   161,   161,   258,   252,   251,   160,   221,
     225,     3,     8,   186,    84,   137,   269,    47,   214,   161,
     160,   160,     7,   187,   160,   225,   267,   161,   225,     3,
       6,   160,     3,   242,   161,   164,     3,   161,     6,   161,
     161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   175,   176,   176,   177,   178,   179,
     180,   180,   181,   181,   181,   182,   182,   183,   183,   184,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   186,
     187,   187,   188,   188,   188,   189,   189,   189,   190,   190,
     191,   191,   191,   192,   192,   193,   194,   195,   195,   196,
     196,   197,   198,   198,   199,   200,   200,   200,   201,   201,
     202,   202,   203,   203,   204,   205,   205,   205,   206,   206,
     207,   208,   208,   209,   210,   210,   211,   212,   212,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   218,   218,
     218,   219,   219,   220,   220,   220,   220,   220,   220,   221,
     221,   222,   222,   223,   223,   224,   225,   225,   225,   225,
     225,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   227,   227,   228,   228,   228,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   230,
     230,   231,   231,   231,   231,   232,   232,   232,   232,   233,
     233,   234,   234,   235,   235,   235,   235,   235,   235,   235,
     236,   236,   237,   238,   238,   238,   238,   238,   238,   239,
     240,   241,   242,   242,   242,   242,   243,   243,   243,   243,
     243,   244,   245,   245,   246,   246,   247,   248,   249,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   255,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   260,   261,
     261,   262,   263,   263,   264,   265,   265,   265,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   267,   268,
     268,   269,   269
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     7,
       1,     1,     1,     1,     1,     4,     4,     1,     6,     0,
       4,     0,     2,     5,     0,     1,     2,     0,     4,     0,
       4,     4,     3,     2,     0,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     2,     2,     6,     3,     3,
       1,     1,     3,     5,     2,     1,     1,     1,     1,     0,
       7,     1,     0,     1,     1,     0,     2,     2,     0,     4,
       0,     2,     0,     3,     0,     1,     3,     2,     1,     1,
       0,     2,     0,     2,     2,     4,     2,     4,     0,     1,
       3,     1,     0,     1,     3,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     2,     2,     2,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     5,     6,     5,     6,     4,     6,     3,     5,     4,
       5,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     6,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     2,     1,     1,
       3,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     2,     1,     3,     3,     4,     6,     8,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       0,     1,     3
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
#line 1747 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1753 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1759 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1765 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1778 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1784 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* preparable_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1790 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1803 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1816 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* hint  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1822 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* prepare_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1828 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* prepare_target_query  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1834 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* execute_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1840 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* import_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1846 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* import_file_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1852 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* file_path  */
#line 148 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1858 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* show_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1864 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* create_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1870 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_not_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1876 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1889 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* column_def  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1895 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* column_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1901 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_cardinality  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).cardinality_t)); }
#line 1907 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_aggregation  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1913 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_encoding  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).encoding_t)->encoding) ); free( (((*yyvaluep).encoding_t)->arg) ); }
#line 1919 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_column_nullable  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1925 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_column_default  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1931 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* drop_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1937 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1943 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* delete_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1949 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* truncate_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1955 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 195: /* insert_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1961 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1974 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 197: /* update_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1980 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1993 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* update_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1999 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* select_statement  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2005 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_with_paren  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2011 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_paren_or_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2017 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 203: /* select_no_paren  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2023 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* select_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2029 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_distinct  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2035 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2048 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_from_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2054 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* from_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2060 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_where  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2066 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_group  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2072 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_having  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2078 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2091 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2104 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* order_desc  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2110 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_order_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2116 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_top  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2122 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 220: /* opt_limit  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2128 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2141 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2154 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2167 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* expr_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2173 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2179 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* operand  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2185 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* scalar_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2191 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* unary_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2197 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* binary_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2203 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* logic_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2209 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* in_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2215 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* case_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2221 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_list  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2227 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* exists_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2233 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* comp_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2239 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* function_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2245 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* extract_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2251 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* datetime_field  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2257 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* array_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2263 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* array_index  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2269 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* between_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2275 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* column_name  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2281 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2287 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* string_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2293 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* bool_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2299 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* num_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2305 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* int_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2311 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* null_literal  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2317 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* param_expr  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2323 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* table_ref  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2329 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* table_ref_atomic  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2335 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 252: /* nonjoin_table_ref_atomic  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2341 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2354 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* table_ref_name  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2360 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* table_ref_name_no_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2366 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* table_name  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2372 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* table_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2378 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* opt_table_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2384 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2390 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_alias  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2396 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_with_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2402 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* with_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2408 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* with_description_list  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2414 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* with_description  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2420 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* join_clause  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2426 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* opt_join_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2432 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 267: /* join_condition  */
#line 157 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2438 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2451 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 2569 "bison_parser.cpp" /* yacc.c:1431  */
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
#line 2779 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 288 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2790 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 294 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2801 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 303 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2810 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 307 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2819 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 311 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2827 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 318 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2833 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 319 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2839 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 320 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2845 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 321 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2851 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 322 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2857 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 323 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2863 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 324 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2869 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 325 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2875 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 326 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2881 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 335 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2887 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 336 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 2893 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 341 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2899 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 342 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2905 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 346 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2914 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 350 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2924 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 362 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2934 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 372 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2943 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 376 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2953 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 388 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2964 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 397 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kImportCSV; }
#line 2970 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 401 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2976 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 411 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2984 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 414 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2994 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 3006 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 3018 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 3031 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 453 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3037 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 454 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3043 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 458 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3049 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 459 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3055 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 463 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-6].sval), (yyvsp[-5].column_type_t), (yyvsp[-4].bval), (yyvsp[-3].expr), (yyvsp[-2].encoding_t), (yyvsp[-1].cardinality_t), (yyvsp[0].expr));
		}
#line 3063 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 469 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3069 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 470 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3075 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 471 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3081 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 472 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3087 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 473 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3093 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 474 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3099 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 475 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3105 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 476 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3111 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 480 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = new Cardinality{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3117 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 481 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = nullptr; }
#line 3123 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 485 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprLiteralString);
			(yyval.expr)->name = (yyvsp[-1].sval);
		}
#line 3132 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 489 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3138 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 493 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = new Encoding((yyvsp[0].sval)); }
#line 3144 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 494 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = new Encoding((yyvsp[-3].sval), (yyvsp[-1].sval)); }
#line 3150 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 495 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = nullptr; }
#line 3156 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 499 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3162 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 500 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3168 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 501 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3174 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 505 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3180 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 506 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3186 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 516 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3197 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 522 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3208 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 528 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3218 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 536 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3224 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 537 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3230 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 546 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3241 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 555 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3251 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 568 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3263 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 575 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3275 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 586 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3281 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 587 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = nullptr; }
#line 3287 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 597 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3298 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 606 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3304 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 607 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3310 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 611 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3320 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 623 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3329 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 76:
#line 627 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3338 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 77:
#line 631 "bison_parser.y" /* yacc.c:1652  */
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

  case 78:
#line 649 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3364 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 79:
#line 650 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3370 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 82:
#line 659 "bison_parser.y" /* yacc.c:1652  */
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

  case 83:
#line 669 "bison_parser.y" /* yacc.c:1652  */
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

  case 90:
#line 701 "bison_parser.y" /* yacc.c:1652  */
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

  case 91:
#line 713 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3424 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 92:
#line 714 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3430 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 94:
#line 722 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3436 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 723 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = nullptr; }
#line 3442 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 726 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3448 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 731 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3454 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 732 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3460 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 736 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3470 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 741 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.group_t) = nullptr; }
#line 3476 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 745 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3482 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 746 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3488 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 749 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3494 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 750 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = nullptr; }
#line 3500 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 754 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3506 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 755 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3512 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 759 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3518 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 763 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3524 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 764 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderDesc; }
#line 3530 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 765 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3536 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 771 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3542 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 772 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3548 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 776 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3554 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 777 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3560 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 778 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3566 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 779 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3572 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 780 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3578 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 781 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3584 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 788 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3590 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 789 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3596 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 793 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3602 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 122:
#line 794 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 3608 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 123:
#line 798 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3614 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 124:
#line 799 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3620 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 125:
#line 803 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3632 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 131:
#line 821 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3638 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 140:
#line 830 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3644 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 143:
#line 839 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3650 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 144:
#line 840 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3656 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 145:
#line 841 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3662 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 842 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3668 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 147:
#line 843 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3674 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 149:
#line 848 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3680 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 849 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3686 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 850 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3692 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 851 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3698 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 852 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3704 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 853 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3710 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 854 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3716 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 855 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3722 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 856 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3728 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 857 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3734 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 861 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3740 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 862 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3746 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 866 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3752 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 867 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3758 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 868 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3764 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 869 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3770 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 875 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3776 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 876 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3782 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 877 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3788 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 878 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3794 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 882 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3800 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 883 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3806 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 887 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3812 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 888 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3818 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 892 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3824 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 893 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3830 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 894 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3836 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 895 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3842 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 896 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3848 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 897 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3854 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 898 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3860 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 902 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3866 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 903 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3872 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 907 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3878 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 911 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3884 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 912 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3890 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 913 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3896 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 914 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3902 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 915 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3908 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 916 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3914 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 919 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3920 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 923 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3926 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 927 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3932 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 192:
#line 931 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3938 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 193:
#line 932 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3944 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 194:
#line 933 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3950 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 195:
#line 934 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3956 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 201:
#line 946 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3962 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 202:
#line 950 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3968 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 951 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 204:
#line 955 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3980 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 206:
#line 960 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3986 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 207:
#line 964 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3992 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 208:
#line 968 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4002 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 210:
#line 981 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4013 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 214:
#line 997 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4024 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 1006 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4030 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 1007 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4036 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 217:
#line 1012 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4048 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 218:
#line 1023 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4058 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 219:
#line 1032 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4064 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 220:
#line 1033 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4070 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 222:
#line 1039 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4076 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 224:
#line 1045 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4082 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 225:
#line 1049 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4088 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 226:
#line 1050 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4094 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 228:
#line 1056 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4100 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 230:
#line 1065 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = nullptr; }
#line 4106 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 1069 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4112 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 1073 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4121 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 1077 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4130 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 1084 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4140 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 1098 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4152 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 1106 "bison_parser.y" /* yacc.c:1652  */
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

  case 237:
#line 1116 "bison_parser.y" /* yacc.c:1652  */
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

  case 238:
#line 1134 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4191 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 1135 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4197 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 1136 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4203 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 1137 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4209 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 1138 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4215 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 1139 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4221 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 244:
#line 1140 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4227 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 245:
#line 1141 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4233 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 246:
#line 1142 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinCross; }
#line 4239 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 247:
#line 1143 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4245 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 251:
#line 1163 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4251 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 252:
#line 1164 "bison_parser.y" /* yacc.c:1652  */
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
#line 1167 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
