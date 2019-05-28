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
    SQL_CARDINALITY = 262,
    SQL_DEALLOCATE = 263,
    SQL_PARAMETERS = 264,
    SQL_INTERSECT = 265,
    SQL_TEMPORARY = 266,
    SQL_TIMESTAMP = 267,
    SQL_DISTINCT = 268,
    SQL_ENCODING = 269,
    SQL_NVARCHAR = 270,
    SQL_RESTRICT = 271,
    SQL_TRUNCATE = 272,
    SQL_ANALYZE = 273,
    SQL_BETWEEN = 274,
    SQL_CASCADE = 275,
    SQL_COLUMNS = 276,
    SQL_CONTROL = 277,
    SQL_DEFAULT = 278,
    SQL_EXECUTE = 279,
    SQL_EXPLAIN = 280,
    SQL_EXTRACT = 281,
    SQL_HISTORY = 282,
    SQL_INTEGER = 283,
    SQL_NATURAL = 284,
    SQL_PREPARE = 285,
    SQL_PRIMARY = 286,
    SQL_SCHEMAS = 287,
    SQL_SPATIAL = 288,
    SQL_VARCHAR = 289,
    SQL_VIRTUAL = 290,
    SQL_BEFORE = 291,
    SQL_COLUMN = 292,
    SQL_CREATE = 293,
    SQL_DELETE = 294,
    SQL_DIRECT = 295,
    SQL_DOUBLE = 296,
    SQL_ESCAPE = 297,
    SQL_EXCEPT = 298,
    SQL_EXISTS = 299,
    SQL_GLOBAL = 300,
    SQL_HAVING = 301,
    SQL_IMPORT = 302,
    SQL_INSERT = 303,
    SQL_ISNULL = 304,
    SQL_MINUTE = 305,
    SQL_OFFSET = 306,
    SQL_RENAME = 307,
    SQL_SCHEMA = 308,
    SQL_SECOND = 309,
    SQL_SELECT = 310,
    SQL_SORTED = 311,
    SQL_TABLES = 312,
    SQL_UNIQUE = 313,
    SQL_UNLOAD = 314,
    SQL_UPDATE = 315,
    SQL_VALUES = 316,
    SQL_AFTER = 317,
    SQL_ALTER = 318,
    SQL_ARRAY = 319,
    SQL_CROSS = 320,
    SQL_DELTA = 321,
    SQL_FALSE = 322,
    SQL_FLOAT = 323,
    SQL_GROUP = 324,
    SQL_ILIKE = 325,
    SQL_INDEX = 326,
    SQL_INNER = 327,
    SQL_LIMIT = 328,
    SQL_LOCAL = 329,
    SQL_MERGE = 330,
    SQL_MINUS = 331,
    SQL_MONTH = 332,
    SQL_ORDER = 333,
    SQL_OUTER = 334,
    SQL_RIGHT = 335,
    SQL_TABLE = 336,
    SQL_UNION = 337,
    SQL_USING = 338,
    SQL_WHERE = 339,
    SQL_CALL = 340,
    SQL_CASE = 341,
    SQL_CHAR = 342,
    SQL_DATE = 343,
    SQL_DESC = 344,
    SQL_DICT = 345,
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
#define YYLAST   708

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  453

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
       0,   266,   266,   287,   293,   302,   306,   310,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   334,   335,   340,
     341,   345,   349,   361,   368,   371,   375,   387,   396,   400,
     410,   413,   427,   434,   441,   452,   453,   457,   458,   462,
     468,   469,   470,   471,   472,   473,   474,   475,   479,   480,
     484,   485,   489,   490,   491,   495,   496,   506,   512,   518,
     526,   527,   536,   545,   558,   565,   576,   577,   587,   596,
     597,   601,   613,   617,   621,   639,   640,   644,   645,   649,
     659,   676,   680,   681,   682,   686,   687,   691,   703,   704,
     708,   712,   713,   716,   721,   722,   726,   731,   735,   736,
     739,   740,   744,   745,   749,   753,   754,   755,   761,   762,
     766,   767,   768,   769,   770,   771,   778,   779,   783,   784,
     788,   789,   793,   803,   804,   805,   806,   807,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   824,   825,
     829,   830,   831,   832,   833,   837,   838,   839,   840,   841,
     842,   843,   844,   845,   846,   847,   851,   852,   856,   857,
     858,   859,   865,   866,   867,   868,   872,   873,   877,   878,
     882,   883,   884,   885,   886,   887,   888,   892,   893,   897,
     901,   902,   903,   904,   905,   906,   909,   913,   917,   921,
     922,   923,   924,   928,   929,   930,   931,   932,   936,   940,
     941,   945,   946,   950,   954,   958,   970,   971,   981,   982,
     986,   987,   996,   997,  1002,  1013,  1022,  1023,  1028,  1029,
    1034,  1035,  1039,  1040,  1045,  1046,  1054,  1055,  1059,  1063,
    1067,  1074,  1087,  1095,  1105,  1124,  1125,  1126,  1127,  1128,
    1129,  1130,  1131,  1132,  1133,  1138,  1147,  1148,  1153,  1154
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "CARDINALITY", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "ENCODING", "NVARCHAR", "RESTRICT",
  "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL",
  "DEFAULT", "EXECUTE", "EXPLAIN", "EXTRACT", "HISTORY", "INTEGER",
  "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS", "SPATIAL", "VARCHAR",
  "VIRTUAL", "BEFORE", "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE",
  "ESCAPE", "EXCEPT", "EXISTS", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "MINUTE", "OFFSET", "RENAME", "SCHEMA", "SECOND", "SELECT",
  "SORTED", "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER",
  "ALTER", "ARRAY", "CROSS", "DELTA", "FALSE", "FLOAT", "GROUP", "ILIKE",
  "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS", "MONTH", "ORDER",
  "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL", "CASE",
  "CHAR", "DATE", "DESC", "DICT", "DROP", "ELSE", "FILE", "FROM", "FULL",
  "HASH", "HINT", "HOUR", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "TRUE", "VIEW", "WHEN",
  "WITH", "YEAR", "ADD", "ALL", "AND", "ASC", "CSV", "DAY", "END", "FOR",
  "INT", "KEY", "NOT", "OFF", "SET", "TBL", "TOP", "AS", "BY", "IF", "IN",
  "IS", "OF", "ON", "OR", "TO", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'",
  "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "CONCAT", "UMINUS", "'['", "']'", "'('", "')'",
  "'.'", "';'", "','", "'?'", "$accept", "input", "statement_list",
  "statement", "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "import_file_type", "file_path", "show_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "opt_cardinality", "opt_encoding",
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
      61,   395,   396,    60,    62,   397,   398,   399,   400,   401,
      43,    45,    42,    47,    37,    94,   402,   403,    91,    93,
      40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -348

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-348)))

#define YYTABLE_NINF -247

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-247)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     516,    17,   122,   125,   135,   -59,   -18,    68,    70,   122,
     -56,    15,   170,   179,    35,  -348,    92,    92,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,   -39,  -348,
     204,    51,  -348,    61,   129,    96,    96,   122,   115,   122,
     112,  -348,   114,   114,   122,  -348,   118,    89,  -348,  -348,
     513,  -348,   161,  -348,  -348,   130,   -39,    42,  -348,    45,
    -348,   256,    25,   269,   149,   122,   122,   195,  -348,   194,
     121,   280,   245,   122,   122,  -348,   131,   170,  -348,   134,
     289,   294,   139,   151,  -348,  -348,  -348,   -39,   200,   186,
     -39,   -23,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
     158,   156,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,   278,   -76,   121,   264,  -348,   321,   323,   -15,   193,
     -67,  -348,  -348,  -348,  -348,  -348,  -348,   326,  -348,  -348,
     264,  -348,  -348,  -348,   252,  -348,  -348,  -348,   264,   252,
     264,   145,  -348,  -348,    25,  -348,   205,   348,   223,   -17,
     196,   197,   202,   188,   332,   374,  -348,   260,   -80,   364,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,   262,  -348,  -348,  -101,   203,
    -348,   264,   280,  -348,   208,   -63,  -348,   268,   206,  -348,
       8,   -23,   209,  -348,   -57,   -23,   -80,   313,    48,  -348,
     279,   174,   -32,  -348,   267,    -7,     6,   234,   319,   264,
     264,    98,    52,   224,   374,   496,   189,   228,   -81,   264,
     264,   374,  -348,   374,   374,   -83,   225,   -51,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   289,   122,  -348,   388,    25,   -80,  -348,    25,
    -348,   326,     1,   195,  -348,   264,  -348,   389,  -348,  -348,
    -348,   264,  -348,  -348,  -348,  -348,   264,   264,   321,  -348,
     233,  -348,  -348,   235,  -348,  -348,  -348,   -36,  -348,   348,
    -348,  -348,   264,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,   300,   236,   -77,    63,    83,   264,   264,  -348,   319,
     296,  -348,  -348,  -348,   283,   439,   526,   526,   374,   242,
     260,  -348,   298,   526,   526,   526,   550,   550,   550,   550,
     189,   189,   -21,   -21,   -21,    12,   246,   247,  -348,  -348,
      -1,    58,  -348,   267,  -348,   138,  -348,   241,  -348,     9,
    -348,   338,  -348,  -348,  -348,   -80,   -80,  -348,   402,   403,
    -348,   305,   391,  -348,    64,   264,  -348,  -348,   264,   264,
    -348,    62,    86,   258,   374,   526,   260,   261,    66,  -348,
    -348,  -348,  -348,   265,   317,  -348,  -348,  -348,   342,   344,
     349,   327,     1,   427,  -348,  -348,  -348,   299,  -348,   271,
     272,  -348,   275,   422,  -348,    38,   -80,   154,  -348,   264,
    -348,   496,   281,    73,  -348,  -348,     9,     1,  -348,  -348,
    -348,     1,   287,   284,   264,  -348,  -348,   264,   350,   432,
    -348,  -348,   -80,  -348,  -348,  -348,  -348,    -6,   323,   -31,
      59,  -348,   285,  -348,   286,   264,    90,   264,  -348,  -348,
     441,     7,   -80,  -348,  -348,   -80,   288,   291,   293,   442,
    -348,   295,  -348
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     3,    18,    18,    16,     9,
       7,    10,    15,    12,    13,    11,    14,     8,     0,   226,
       0,   216,    63,    25,     0,    36,    36,     0,     0,     0,
       0,   215,    61,    61,     0,    30,     0,   228,   229,     1,
     227,     2,     0,     6,     5,   109,     0,    72,    73,   101,
      59,     0,   119,     0,     0,     0,     0,    95,    28,     0,
      67,     0,     0,     0,     0,    31,     0,     0,     4,     0,
       0,    89,     0,     0,    83,    84,    82,     0,    86,     0,
       0,   115,   217,   198,   201,   203,   200,   204,   199,   205,
       0,   118,   120,   193,   194,   195,   202,   196,   197,    24,
      23,     0,     0,    67,     0,    62,     0,     0,     0,     0,
      95,    69,    60,    57,    58,   231,   230,     0,   108,    88,
       0,    76,    75,    77,   101,    78,    85,    81,     0,   101,
       0,     0,    79,    26,     0,    35,     0,     0,     0,   189,
       0,     0,     0,     0,     0,     0,   191,     0,    94,   123,
     130,   131,   132,   125,   127,   133,   126,   145,   134,   135,
     136,   129,   124,   138,   139,     0,    29,   248,     0,     0,
      65,     0,     0,    68,    21,     0,    19,    92,    90,   116,
     225,   115,   100,   102,   107,   115,   111,   113,   110,   121,
       0,     0,     0,    37,   227,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   141,   140,     0,     0,     0,
       0,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,     0,     0,    71,    70,     0,
      17,     0,     0,    95,    91,     0,   223,     0,   224,   122,
      74,     0,   106,   105,   104,    80,     0,     0,     0,    41,
       0,    44,    43,     0,    42,    47,    40,    54,    33,     0,
      34,   177,     0,   190,   192,   181,   180,   184,   182,   185,
     183,     0,     0,     0,     0,     0,     0,     0,   164,     0,
       0,   137,   128,   156,   157,     0,   154,   152,     0,     0,
       0,   143,     0,   170,   171,   172,   173,   174,   175,   176,
     147,   146,   149,   148,   150,   151,   155,     0,    27,   249,
       0,     0,    20,   227,    93,   206,   208,     0,   210,   221,
     209,    97,   117,   222,   103,   114,   112,    32,     0,     0,
      52,     0,    56,    38,     0,     0,   168,   186,     0,     0,
     162,     0,     0,     0,     0,   153,     0,     0,     0,   144,
     187,    64,    22,     0,     0,   243,   235,   241,   239,   242,
     237,     0,     0,     0,   220,   214,   218,     0,    87,     0,
       0,    53,     0,    51,   178,     0,   166,     0,   165,     0,
     169,   188,     0,     0,   160,   158,   221,     0,   238,   240,
     236,     0,   207,   222,     0,    45,    46,     0,     0,    49,
     179,   163,   167,   161,   159,   211,   232,   244,     0,    99,
       0,    50,     0,    39,     0,     0,     0,     0,    96,    55,
       0,     0,   245,   233,   219,    98,     0,   189,     0,     0,
     234,     0,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -348,  -348,  -348,   399,  -348,   433,  -348,   210,  -348,  -348,
    -348,  -348,  -348,   187,  -348,  -348,   421,  -348,   180,  -348,
    -348,  -348,  -348,  -348,  -348,   419,  -348,  -348,  -348,   351,
    -348,  -348,   290,  -191,    -8,   373,   -53,   406,  -348,  -348,
     190,   263,  -348,  -348,  -348,  -112,  -348,  -348,   -48,  -348,
     212,  -348,  -348,  -150,  -188,  -348,    60,   214,  -114,  -121,
    -348,  -348,  -348,  -348,  -348,  -348,   259,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,    26,   -61,  -111,  -348,  -348,
     -78,  -348,  -348,  -348,  -347,    67,  -348,  -348,  -348,     5,
    -348,    65,   292,  -348,  -348,  -348,  -348,   398,  -348,  -348,
    -348,  -348,    49
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    53,   185,   186,    17,   110,
      18,    19,    69,   175,    20,    21,    65,   202,   203,   277,
     433,   419,   352,   393,    22,    73,    23,    24,    25,   118,
      26,   120,   121,    27,   133,   134,    58,    87,    88,   137,
      59,   130,   187,   253,   254,   115,   388,   438,    91,   192,
     193,   264,    81,   142,   188,   100,   101,   189,   190,   159,
     160,   161,   162,   163,   164,   165,   212,   166,   167,   168,
     169,   291,   170,   171,   172,   173,   174,   103,   104,   105,
     106,   107,   108,   334,   335,   336,   337,   338,    40,   339,
     384,   385,   386,   259,    28,    29,    47,    48,   340,   381,
     443,    51,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     158,   102,   128,    83,    31,   176,   129,    32,   183,   283,
     447,   256,   256,   280,    41,   437,    55,   114,   146,   308,
      57,   293,    35,   374,   194,    42,   196,   198,   140,    93,
      94,    95,   262,   215,   216,   412,    44,   219,   219,   211,
      55,   260,    67,   218,    70,   265,   179,    30,    82,    75,
     141,   309,    84,    36,   311,    84,    43,   220,   220,   375,
     244,   219,   263,   245,   427,   180,   376,   247,   125,   350,
     112,   113,    45,   377,   378,   312,    37,   434,   123,   124,
     302,   220,   357,   199,   147,    85,   191,   255,    85,   379,
     351,   195,    96,   215,   354,   380,   294,   182,   250,   267,
     305,   251,   306,   307,   217,   303,   304,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,    56,   368,    89,    86,    31,   219,    86,    33,   278,
      97,   435,   279,   255,   240,   241,    98,   242,    34,   257,
     383,   341,   373,   205,   296,   206,   220,   194,   149,    93,
      94,    95,   345,   346,   281,   292,   219,   176,   284,   156,
     371,   333,    38,   144,   327,   297,   219,   374,   241,    39,
     242,   150,   358,    46,   298,   359,   220,   219,   403,    49,
     219,   219,   361,   362,   398,   102,   220,   365,   102,   151,
      99,   149,    93,    94,    95,   399,   297,   220,    50,   420,
     220,   220,   269,   375,   219,   360,    52,    60,   270,   152,
     376,   210,    96,    61,   150,   271,   219,   377,   378,   372,
     439,    62,   144,    63,   220,   394,   429,   405,   255,    64,
     255,   153,   151,   379,   424,    68,   220,   255,  -244,   380,
      71,   395,   272,   401,   396,   397,   363,    72,   328,    76,
      97,   444,   152,    77,   245,    96,    98,   367,    79,    92,
      80,   273,   197,   149,    93,    94,    95,   149,    93,    94,
      95,   154,   219,   109,   153,   111,   421,   135,   274,   114,
     135,   117,   275,   119,   285,   422,   150,   116,   286,   122,
     150,    56,   220,    97,   127,    95,   155,   156,   276,    98,
     131,   210,  -212,   430,   151,   157,   330,   129,   151,   331,
      99,   287,   132,   402,   154,    55,   374,   136,   138,   143,
     144,   442,   145,   445,   152,    93,   177,    96,   152,   184,
      89,    96,   288,   181,   200,   149,    93,    94,    95,   155,
     156,   237,   238,   239,   240,   241,   153,   242,   157,   289,
     153,   201,   375,    99,   204,   290,   207,   208,   150,   376,
     209,   243,   252,   246,   266,    97,   377,   378,   249,    97,
     255,    98,   268,   261,    55,    98,   213,   149,    93,    94,
      95,    12,   379,   221,   299,   310,   154,  -244,   380,   301,
     154,   329,   343,   348,   355,   349,   152,   356,   308,    96,
     150,   219,   366,   369,   242,   382,   370,   387,   389,   390,
     391,   155,   156,   222,   392,   155,   156,   407,   153,   400,
     157,   408,   404,   409,   157,    99,   406,   411,   410,    99,
     413,   414,   415,   416,   223,   417,   418,    97,   152,   432,
     431,    96,   423,    98,   428,   440,   441,   446,   451,    78,
      54,  -213,   449,   206,   450,   347,   452,    66,   214,   353,
     153,   332,    74,   139,   148,    90,   224,   448,   282,   342,
     295,   425,   248,   344,   426,   126,     0,   436,     0,    97,
       0,     0,   258,   155,   156,    98,     0,     0,   222,     0,
     225,     0,   157,     0,     0,     0,     0,    99,   226,   227,
     214,     0,     0,     0,   228,   229,   230,   231,   232,   223,
       0,   233,   234,  -246,   235,   236,   237,   238,   239,   240,
     241,     1,   242,     0,     1,   155,   156,     0,     0,     0,
       2,     0,     0,     2,   157,     0,     0,     3,     0,    99,
       3,   224,     0,     4,     0,   222,     4,     0,     0,     0,
       0,     5,     6,     0,     5,     6,     0,   364,     0,     0,
       7,     8,     0,     7,     8,   300,   223,     0,     0,     0,
       0,     0,     0,     9,   227,   222,     9,     0,     0,   228,
     229,   230,   231,   232,     0,     0,   233,   234,     0,   235,
     236,   237,   238,   239,   240,   241,  -247,   242,   224,   222,
       0,     0,     0,     0,    10,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,   300,    11,     0,     0,     0,    12,  -247,     0,
      12,   227,     0,     0,     0,     0,   228,   229,   230,   231,
     232,     0,     0,   233,   234,     0,   235,   236,   237,   238,
     239,   240,   241,     0,   242,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,     0,  -247,  -247,  -247,   231,
     232,     0,     0,   233,   234,     0,   235,   236,   237,   238,
     239,   240,   241,     0,   242,   227,     0,     0,     0,     0,
       0,     0,     0,  -247,  -247,     0,     0,  -247,  -247,     0,
     235,   236,   237,   238,   239,   240,   241,     0,   242
};

static const yytype_int16 yycheck[] =
{
     114,    62,    80,    56,     3,   116,    13,     2,   120,     3,
       3,     3,     3,   204,     9,    46,    55,    84,    94,   102,
      28,   209,    81,    29,   138,    81,   140,   141,    51,     4,
       5,     6,    89,   154,   155,   382,    21,   118,   118,   153,
      55,   191,    37,   157,    39,   195,    61,    30,    56,    44,
      73,   134,    10,   112,   105,    10,   112,   138,   138,    65,
     161,   118,   119,   164,   411,   118,    72,   181,    76,   105,
      65,    66,    57,    79,    80,   126,    94,    83,    73,    74,
     161,   138,   159,   144,   160,    43,   134,   164,    43,    95,
     126,   139,    67,   214,   282,   101,   210,   164,   161,    51,
     221,   164,   223,   224,   157,   219,   220,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   160,   310,    78,    82,     3,   118,    82,     3,   161,
     105,   137,   164,   164,   155,   156,   111,   158,     3,   131,
     131,   253,   333,   160,    92,   162,   138,   261,     3,     4,
       5,     6,   266,   267,   161,   208,   118,   268,   152,   152,
     161,   160,    94,   164,   242,   113,   118,    29,   156,    99,
     158,    26,   109,     3,   122,    92,   138,   118,   366,     0,
     118,   118,   296,   297,   122,   246,   138,   308,   249,    44,
     165,     3,     4,     5,     6,   109,   113,   138,   163,   161,
     138,   138,    28,    65,   118,   122,   114,     3,    34,    64,
      72,   113,    67,   162,    26,    41,   118,    79,    80,   161,
     161,   160,   164,    94,   138,   161,   414,   161,   164,   133,
     164,    86,    44,    95,   161,   120,   138,   164,   100,   101,
     128,   355,    68,   364,   358,   359,   299,   133,   243,   131,
     105,   161,    64,   164,   164,    67,   111,   310,    97,     3,
     130,    87,   117,     3,     4,     5,     6,     3,     4,     5,
       6,   126,   118,     4,    86,   126,   122,    87,   104,    84,
      90,   160,   108,     3,    50,   399,    26,    93,    54,    44,
      26,   160,   138,   105,   160,     6,   151,   152,   124,   111,
     161,   113,   164,   417,    44,   160,   246,    13,    44,   249,
     165,    77,   161,   366,   126,    55,    29,   117,   132,   161,
     164,   435,    44,   437,    64,     4,     3,    67,    64,     3,
      78,    67,    98,   140,   129,     3,     4,     5,     6,   151,
     152,   152,   153,   154,   155,   156,    86,   158,   160,   115,
      86,     3,    65,   165,   131,   121,   160,   160,    26,    72,
     158,    99,    94,   160,    51,   105,    79,    80,   160,   105,
     164,   111,    93,   164,    55,   111,    44,     3,     4,     5,
       6,   114,    95,    19,   160,   160,   126,   100,   101,   161,
     126,     3,     3,   160,    94,   160,    64,   161,   102,    67,
      26,   118,   160,   105,   158,   164,   159,    69,     6,     6,
     105,   151,   152,    49,    23,   151,   152,   100,    86,   161,
     160,    79,   161,    79,   160,   165,   161,   100,    79,   165,
       3,   132,   161,   161,    70,   160,    14,   105,    64,     7,
      90,    67,   161,   111,   160,   160,   160,     6,     6,    50,
      17,   164,   164,   162,   161,   268,   161,    36,   126,   279,
      86,   251,    43,    90,   113,    59,   102,   441,   205,   255,
     211,   406,   182,   261,   407,    77,    -1,   428,    -1,   105,
      -1,    -1,   190,   151,   152,   111,    -1,    -1,    49,    -1,
     126,    -1,   160,    -1,    -1,    -1,    -1,   165,   134,   135,
     126,    -1,    -1,    -1,   140,   141,   142,   143,   144,    70,
      -1,   147,   148,     0,   150,   151,   152,   153,   154,   155,
     156,     8,   158,    -1,     8,   151,   152,    -1,    -1,    -1,
      17,    -1,    -1,    17,   160,    -1,    -1,    24,    -1,   165,
      24,   102,    -1,    30,    -1,    49,    30,    -1,    -1,    -1,
      -1,    38,    39,    -1,    38,    39,    -1,   118,    -1,    -1,
      47,    48,    -1,    47,    48,   126,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    60,   135,    49,    60,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,   147,   148,    -1,   150,
     151,   152,   153,   154,   155,   156,    70,   158,   102,    49,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   126,   107,    -1,    -1,    -1,   114,   102,    -1,
     114,   135,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,   147,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,   147,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,    -1,   158,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,    -1,    -1,   147,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,    -1,   158
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     8,    17,    24,    30,    38,    39,    47,    48,    60,
      91,   107,   114,   167,   168,   169,   170,   174,   176,   177,
     180,   181,   190,   192,   193,   194,   196,   199,   260,   261,
      30,     3,   255,     3,     3,    81,   112,    94,    94,    99,
     254,   255,    81,   112,    21,    57,     3,   262,   263,     0,
     163,   267,   114,   171,   171,    55,   160,   200,   202,   206,
       3,   162,   160,    94,   133,   182,   182,   255,   120,   178,
     255,   128,   133,   191,   191,   255,   131,   164,   169,    97,
     130,   218,   200,   202,    10,    43,    82,   203,   204,    78,
     203,   214,     3,     4,     5,     6,    67,   105,   111,   165,
     221,   222,   242,   243,   244,   245,   246,   247,   248,     4,
     175,   126,   255,   255,    84,   211,    93,   160,   195,     3,
     197,   198,    44,   255,   255,   200,   263,   160,   246,    13,
     207,   161,   161,   200,   201,   206,   117,   205,   132,   201,
      51,    73,   219,   161,   164,    44,    94,   160,   195,     3,
      26,    44,    64,    86,   126,   151,   152,   160,   224,   225,
     226,   227,   228,   229,   230,   231,   233,   234,   235,   236,
     238,   239,   240,   241,   242,   179,   243,     3,   268,    61,
     202,   140,   164,   211,     3,   172,   173,   208,   220,   223,
     224,   214,   215,   216,   224,   214,   224,   117,   224,   242,
     129,     3,   183,   184,   131,   160,   162,   160,   160,   158,
     113,   224,   232,    44,   126,   225,   225,   202,   224,   118,
     138,    19,    49,    70,   102,   126,   134,   135,   140,   141,
     142,   143,   144,   147,   148,   150,   151,   152,   153,   154,
     155,   156,   158,    99,   161,   164,   160,   224,   198,   160,
     161,   164,    94,   209,   210,   164,     3,   131,   258,   259,
     219,   164,    89,   119,   217,   219,    51,    51,    93,    28,
      34,    41,    68,    87,   104,   108,   124,   185,   161,   164,
     199,   161,   207,     3,   152,    50,    54,    77,    98,   115,
     121,   237,   202,   220,   224,   232,    92,   113,   122,   160,
     126,   161,   161,   224,   224,   225,   225,   225,   102,   134,
     160,   105,   126,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   246,   255,     3,
     222,   222,   173,   160,   249,   250,   251,   252,   253,   255,
     264,   211,   223,     3,   216,   224,   224,   179,   160,   160,
     105,   126,   188,   184,   220,    94,   161,   159,   109,    92,
     122,   224,   224,   202,   118,   225,   160,   202,   220,   105,
     159,   161,   161,   199,    29,    65,    72,    79,    80,    95,
     101,   265,   164,   131,   256,   257,   258,    69,   212,     6,
       6,   105,    23,   189,   161,   224,   224,   224,   122,   109,
     161,   225,   202,   220,   161,   161,   161,   100,    79,    79,
      79,   100,   250,     3,   132,   161,   161,   160,    14,   187,
     161,   122,   224,   161,   161,   257,   251,   250,   160,   220,
     224,    90,     7,   186,    83,   137,   268,    46,   213,   161,
     160,   160,   224,   266,   161,   224,     6,     3,   241,   164,
     161,     6,   161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   175,   176,   176,   177,   178,   179,
     180,   180,   181,   181,   181,   182,   182,   183,   183,   184,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   186,
     187,   187,   188,   188,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   193,   194,   194,   195,   195,   196,   197,
     197,   198,   199,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   204,   204,   204,   205,   205,   206,   207,   207,
     208,   209,   209,   210,   211,   211,   212,   212,   213,   213,
     214,   214,   215,   215,   216,   217,   217,   217,   218,   218,
     219,   219,   219,   219,   219,   219,   220,   220,   221,   221,
     222,   222,   223,   224,   224,   224,   224,   224,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   226,   226,
     227,   227,   227,   227,   227,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   229,   229,   230,   230,
     230,   230,   231,   231,   231,   231,   232,   232,   233,   233,
     234,   234,   234,   234,   234,   234,   234,   235,   235,   236,
     237,   237,   237,   237,   237,   237,   238,   239,   240,   241,
     241,   241,   241,   242,   242,   242,   242,   242,   243,   244,
     244,   245,   245,   246,   247,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   254,   255,   255,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   261,   262,
     262,   263,   264,   264,   264,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   266,   267,   267,   268,   268
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     0,     1,
       3,     1,     4,     4,     1,     2,     5,     7,     1,     1,
       2,     3,     8,     7,     7,     3,     0,     1,     3,     6,
       1,     1,     1,     1,     1,     4,     4,     1,     6,     0,
       2,     0,     1,     2,     0,     4,     0,     4,     4,     3,
       2,     0,     4,     2,     8,     5,     3,     0,     5,     1,
       3,     3,     2,     2,     6,     3,     3,     1,     1,     3,
       5,     2,     1,     1,     1,     1,     0,     7,     1,     0,
       1,     1,     0,     2,     2,     0,     4,     0,     2,     0,
       3,     0,     1,     3,     2,     1,     1,     0,     2,     0,
       2,     2,     4,     2,     4,     0,     1,     3,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     2,     2,     3,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     5,     6,
       5,     6,     4,     6,     3,     5,     4,     5,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     6,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     4,     1,     3,     2,     1,     1,     3,     1,     5,
       1,     0,     2,     1,     1,     0,     1,     0,     2,     1,
       3,     3,     4,     6,     8,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     0,     1,     1,     0,     1,     3
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
#line 1735 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1741 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1747 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1753 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1766 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 169: /* statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1772 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 170: /* preparable_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 1778 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1791 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1804 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 173: /* hint  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1810 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 174: /* prepare_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 1816 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 175: /* prepare_target_query  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1822 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 176: /* execute_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 1828 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 177: /* import_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 1834 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 178: /* import_file_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1840 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 179: /* file_path  */
#line 147 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 1846 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 180: /* show_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 1852 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 181: /* create_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 1858 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_not_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1864 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1877 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 184: /* column_def  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 1883 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 185: /* column_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1889 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_cardinality  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).cardinality_t)); }
#line 1895 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_encoding  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1901 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_column_nullable  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1907 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_column_default  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 1913 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 190: /* drop_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 1919 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_exists  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 1925 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 192: /* delete_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1931 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 193: /* truncate_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 1937 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 194: /* insert_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 1943 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1956 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 196: /* update_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 1962 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 1975 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 198: /* update_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 1981 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 199: /* select_statement  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1987 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 200: /* select_with_paren  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1993 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_paren_or_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 1999 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_no_paren  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2005 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 206: /* select_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2011 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_distinct  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2017 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2030 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2036 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 210: /* from_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2042 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_where  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2048 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_group  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2054 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_having  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2060 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2073 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2086 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 216: /* order_desc  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2092 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 217: /* opt_order_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2098 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_top  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2104 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_limit  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2110 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2123 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2136 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2149 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 223: /* expr_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2155 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 224: /* expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2161 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 225: /* operand  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2167 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 226: /* scalar_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2173 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 227: /* unary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2179 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 228: /* binary_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2185 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 229: /* logic_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2191 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 230: /* in_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2197 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 231: /* case_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2203 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 232: /* case_list  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2209 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 233: /* exists_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2215 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 234: /* comp_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2221 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 235: /* function_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2227 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 236: /* extract_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2233 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 237: /* datetime_field  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2239 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 238: /* array_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2245 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 239: /* array_index  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2251 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 240: /* between_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2257 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 241: /* column_name  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2263 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 242: /* literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2269 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 243: /* string_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2275 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 244: /* bool_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2281 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 245: /* num_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2287 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 246: /* int_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2293 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 247: /* null_literal  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2299 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 248: /* param_expr  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2305 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 249: /* table_ref  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2311 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 250: /* table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2317 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 251: /* nonjoin_table_ref_atomic  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2323 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2336 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 253: /* table_ref_name  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2342 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 254: /* table_ref_name_no_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2348 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 255: /* table_name  */
#line 146 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2354 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 256: /* table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2360 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 257: /* opt_table_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2366 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 258: /* alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2372 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 259: /* opt_alias  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2378 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_with_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2384 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 261: /* with_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2390 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 262: /* with_description_list  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2396 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 263: /* with_description  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2402 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 264: /* join_clause  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2408 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 265: /* opt_join_type  */
#line 145 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2414 "bison_parser.cpp" /* yacc.c:1257  */
        break;

    case 266: /* join_condition  */
#line 156 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2420 "bison_parser.cpp" /* yacc.c:1257  */
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
#line 2433 "bison_parser.cpp" /* yacc.c:1257  */
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

#line 2551 "bison_parser.cpp" /* yacc.c:1431  */
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
#line 2761 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 287 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2772 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 293 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2783 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 302 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2792 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 306 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2801 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 310 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2809 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 8:
#line 317 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2815 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 318 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 2821 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 319 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2827 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 320 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2833 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 321 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2839 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 322 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2845 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 323 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2851 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 324 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2857 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 325 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2863 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 334 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2869 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 335 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 2875 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 340 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2881 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 341 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 2887 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 21:
#line 345 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 2896 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 349 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 2906 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 361 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 2916 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 371 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 2925 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 375 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 2935 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 387 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.import_stmt) = new ImportStatement((ImportType) (yyvsp[-4].uval));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 2946 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 396 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kImportCSV; }
#line 2952 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 400 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 2958 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 410 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 2966 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 413 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 2976 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 2988 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 3000 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 3013 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 452 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3019 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 453 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3025 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 457 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3031 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 458 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3037 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 462 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-5].sval), (yyvsp[-4].column_type_t), (yyvsp[-3].bval), (yyvsp[-2].expr), (yyvsp[-1].encoding_t), (yyvsp[0].cardinality_t));
		}
#line 3045 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 468 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3051 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 469 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3057 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 470 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3063 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 471 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3069 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 472 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3075 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 473 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3081 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 474 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3087 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 475 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3093 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 479 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = new Cardinality{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3099 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 480 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.cardinality_t) = nullptr; }
#line 3105 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 484 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = EncodingType::DICT; }
#line 3111 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 485 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.encoding_t) = EncodingType::RAW; }
#line 3117 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 489 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3123 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 490 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3129 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 491 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3135 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 495 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3141 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 496 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3147 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 506 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3158 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 512 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3169 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 518 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3179 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 526 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3185 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 527 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3191 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 536 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3202 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 545 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3212 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 64:
#line 558 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3224 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 65:
#line 565 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3236 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 66:
#line 576 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3242 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 67:
#line 577 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = nullptr; }
#line 3248 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 68:
#line 587 "bison_parser.y" /* yacc.c:1652  */
    {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3259 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 69:
#line 596 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3265 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 70:
#line 597 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3271 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 71:
#line 601 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3281 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 72:
#line 613 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3290 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 73:
#line 617 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3299 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 74:
#line 621 "bison_parser.y" /* yacc.c:1652  */
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
#line 3319 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 75:
#line 639 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3325 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 76:
#line 640 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3331 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 79:
#line 649 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3346 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 80:
#line 659 "bison_parser.y" /* yacc.c:1652  */
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
#line 3365 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 87:
#line 691 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3379 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 88:
#line 703 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = true; }
#line 3385 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 89:
#line 704 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.bval) = false; }
#line 3391 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 91:
#line 712 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3397 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 92:
#line 713 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = nullptr; }
#line 3403 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 93:
#line 716 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table) = (yyvsp[0].table); }
#line 3409 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 94:
#line 721 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3415 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 95:
#line 722 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3421 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 96:
#line 726 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3431 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 97:
#line 731 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.group_t) = nullptr; }
#line 3437 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 98:
#line 735 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3443 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 99:
#line 736 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = nullptr; }
#line 3449 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 100:
#line 739 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3455 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 101:
#line 740 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = nullptr; }
#line 3461 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 102:
#line 744 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3467 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 103:
#line 745 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3473 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 104:
#line 749 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3479 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 105:
#line 753 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3485 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 106:
#line 754 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderDesc; }
#line 3491 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 107:
#line 755 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.order_type) = kOrderAsc; }
#line 3497 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 108:
#line 761 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3503 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 109:
#line 762 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3509 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 110:
#line 766 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3515 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 111:
#line 767 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3521 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 112:
#line 768 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3527 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 113:
#line 769 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3533 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 114:
#line 770 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3539 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 115:
#line 771 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.limit) = nullptr; }
#line 3545 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 116:
#line 778 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3551 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 117:
#line 779 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3557 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 118:
#line 783 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3563 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 119:
#line 784 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = nullptr; }
#line 3569 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 120:
#line 788 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3575 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 121:
#line 789 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3581 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 122:
#line 793 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3593 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 128:
#line 811 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3599 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 137:
#line 820 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3605 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 140:
#line 829 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3611 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 141:
#line 830 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3617 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 142:
#line 831 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3623 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 143:
#line 832 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3629 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 144:
#line 833 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3635 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 146:
#line 838 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3641 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 147:
#line 839 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3647 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 148:
#line 840 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3653 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 149:
#line 841 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3659 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 150:
#line 842 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3665 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 151:
#line 843 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3671 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 152:
#line 844 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3677 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 153:
#line 845 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3683 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 154:
#line 846 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3689 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 155:
#line 847 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3695 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 156:
#line 851 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3701 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 157:
#line 852 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3707 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 158:
#line 856 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3713 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 159:
#line 857 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3719 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 160:
#line 858 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3725 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 161:
#line 859 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3731 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 162:
#line 865 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3737 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 163:
#line 866 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3743 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 164:
#line 867 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3749 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 165:
#line 868 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3755 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 166:
#line 872 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3761 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 167:
#line 873 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3767 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 168:
#line 877 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3773 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 169:
#line 878 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3779 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 170:
#line 882 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3785 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 171:
#line 883 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3791 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 172:
#line 884 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3797 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 173:
#line 885 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3803 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 174:
#line 886 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3809 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 175:
#line 887 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3815 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 176:
#line 888 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3821 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 177:
#line 892 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3827 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 178:
#line 893 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3833 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 179:
#line 897 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 3839 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 180:
#line 901 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 3845 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 181:
#line 902 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 3851 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 182:
#line 903 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 3857 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 183:
#line 904 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 3863 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 184:
#line 905 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 3869 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 185:
#line 906 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 3875 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 186:
#line 909 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 3881 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 187:
#line 913 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 3887 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 188:
#line 917 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3893 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 189:
#line 921 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 3899 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 190:
#line 922 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 3905 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 191:
#line 923 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar(); }
#line 3911 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 192:
#line 924 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 3917 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 198:
#line 936 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 3923 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 199:
#line 940 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 3929 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 200:
#line 941 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 3935 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 201:
#line 945 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 3941 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 203:
#line 950 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 3947 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 204:
#line 954 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 3953 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 205:
#line 958 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 3963 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 207:
#line 971 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 3974 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 211:
#line 987 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 3985 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 212:
#line 996 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 3991 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 213:
#line 997 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 3997 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 214:
#line 1002 "bison_parser.y" /* yacc.c:1652  */
    {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4009 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 215:
#line 1013 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4019 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 216:
#line 1022 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4025 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 217:
#line 1023 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4031 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 219:
#line 1029 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4037 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 221:
#line 1035 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4043 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 222:
#line 1039 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4049 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 223:
#line 1040 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4055 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 225:
#line 1046 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.alias_t) = nullptr; }
#line 4061 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 227:
#line 1055 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = nullptr; }
#line 4067 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 228:
#line 1059 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4073 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 229:
#line 1063 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4082 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 230:
#line 1067 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4091 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 231:
#line 1074 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4101 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 232:
#line 1088 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4113 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 233:
#line 1096 "bison_parser.y" /* yacc.c:1652  */
    {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4126 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 234:
#line 1106 "bison_parser.y" /* yacc.c:1652  */
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
#line 4146 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 235:
#line 1124 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4152 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 236:
#line 1125 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4158 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 237:
#line 1126 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinLeft; }
#line 4164 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 238:
#line 1127 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4170 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 239:
#line 1128 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinRight; }
#line 4176 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 240:
#line 1129 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4182 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 241:
#line 1130 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4188 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 242:
#line 1131 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinFull; }
#line 4194 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 243:
#line 1132 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinCross; }
#line 4200 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 244:
#line 1133 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.uval) = kJoinInner; }
#line 4206 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 248:
#line 1153 "bison_parser.y" /* yacc.c:1652  */
    { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4212 "bison_parser.cpp" /* yacc.c:1652  */
    break;

  case 249:
#line 1154 "bison_parser.y" /* yacc.c:1652  */
    { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4218 "bison_parser.cpp" /* yacc.c:1652  */
    break;


#line 4222 "bison_parser.cpp" /* yacc.c:1652  */
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
#line 1157 "bison_parser.y" /* yacc.c:1918  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
