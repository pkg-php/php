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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2016 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   |          Nikita Popov <nikic@php.net>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE zend_parser_stack_elem

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif




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
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */





/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    T_INCLUDE = 258,
    T_INCLUDE_ONCE = 259,
    T_EVAL = 260,
    T_REQUIRE = 261,
    T_REQUIRE_ONCE = 262,
    T_LOGICAL_OR = 263,
    T_LOGICAL_XOR = 264,
    T_LOGICAL_AND = 265,
    T_PRINT = 266,
    T_YIELD = 267,
    T_DOUBLE_ARROW = 268,
    T_YIELD_FROM = 269,
    T_PLUS_EQUAL = 270,
    T_MINUS_EQUAL = 271,
    T_MUL_EQUAL = 272,
    T_DIV_EQUAL = 273,
    T_CONCAT_EQUAL = 274,
    T_MOD_EQUAL = 275,
    T_AND_EQUAL = 276,
    T_OR_EQUAL = 277,
    T_XOR_EQUAL = 278,
    T_SL_EQUAL = 279,
    T_SR_EQUAL = 280,
    T_POW_EQUAL = 281,
    T_COALESCE = 282,
    T_BOOLEAN_OR = 283,
    T_BOOLEAN_AND = 284,
    T_IS_EQUAL = 285,
    T_IS_NOT_EQUAL = 286,
    T_IS_IDENTICAL = 287,
    T_IS_NOT_IDENTICAL = 288,
    T_SPACESHIP = 289,
    T_IS_SMALLER_OR_EQUAL = 290,
    T_IS_GREATER_OR_EQUAL = 291,
    T_SL = 292,
    T_SR = 293,
    T_INSTANCEOF = 294,
    T_INC = 295,
    T_DEC = 296,
    T_INT_CAST = 297,
    T_DOUBLE_CAST = 298,
    T_STRING_CAST = 299,
    T_ARRAY_CAST = 300,
    T_OBJECT_CAST = 301,
    T_BOOL_CAST = 302,
    T_UNSET_CAST = 303,
    T_POW = 304,
    T_NEW = 305,
    T_CLONE = 306,
    T_NOELSE = 307,
    T_ELSEIF = 308,
    T_ELSE = 309,
    T_ENDIF = 310,
    T_STATIC = 311,
    T_ABSTRACT = 312,
    T_FINAL = 313,
    T_PRIVATE = 314,
    T_PROTECTED = 315,
    T_PUBLIC = 316,
    T_LNUMBER = 317,
    T_DNUMBER = 318,
    T_STRING = 319,
    T_VARIABLE = 320,
    T_INLINE_HTML = 321,
    T_ENCAPSED_AND_WHITESPACE = 322,
    T_CONSTANT_ENCAPSED_STRING = 323,
    T_STRING_VARNAME = 324,
    T_NUM_STRING = 325,
    T_EXIT = 326,
    T_IF = 327,
    T_ECHO = 328,
    T_DO = 329,
    T_WHILE = 330,
    T_ENDWHILE = 331,
    T_FOR = 332,
    T_ENDFOR = 333,
    T_FOREACH = 334,
    T_ENDFOREACH = 335,
    T_DECLARE = 336,
    T_ENDDECLARE = 337,
    T_AS = 338,
    T_SWITCH = 339,
    T_ENDSWITCH = 340,
    T_CASE = 341,
    T_DEFAULT = 342,
    T_BREAK = 343,
    T_CONTINUE = 344,
    T_GOTO = 345,
    T_FUNCTION = 346,
    T_CONST = 347,
    T_RETURN = 348,
    T_TRY = 349,
    T_CATCH = 350,
    T_FINALLY = 351,
    T_THROW = 352,
    T_USE = 353,
    T_INSTEADOF = 354,
    T_GLOBAL = 355,
    T_VAR = 356,
    T_UNSET = 357,
    T_ISSET = 358,
    T_EMPTY = 359,
    T_HALT_COMPILER = 360,
    T_CLASS = 361,
    T_TRAIT = 362,
    T_INTERFACE = 363,
    T_EXTENDS = 364,
    T_IMPLEMENTS = 365,
    T_OBJECT_OPERATOR = 366,
    T_LIST = 367,
    T_ARRAY = 368,
    T_CALLABLE = 369,
    T_LINE = 370,
    T_FILE = 371,
    T_DIR = 372,
    T_CLASS_C = 373,
    T_TRAIT_C = 374,
    T_METHOD_C = 375,
    T_FUNC_C = 376,
    T_COMMENT = 377,
    T_DOC_COMMENT = 378,
    T_OPEN_TAG = 379,
    T_OPEN_TAG_WITH_ECHO = 380,
    T_CLOSE_TAG = 381,
    T_WHITESPACE = 382,
    T_START_HEREDOC = 383,
    T_END_HEREDOC = 384,
    T_DOLLAR_OPEN_CURLY_BRACES = 385,
    T_CURLY_OPEN = 386,
    T_PAAMAYIM_NEKUDOTAYIM = 387,
    T_NAMESPACE = 388,
    T_NS_C = 389,
    T_NS_SEPARATOR = 390,
    T_ELLIPSIS = 391,
    T_ERROR = 392
  };
#endif
/* Tokens.  */
#define END 0
#define T_INCLUDE 258
#define T_INCLUDE_ONCE 259
#define T_EVAL 260
#define T_REQUIRE 261
#define T_REQUIRE_ONCE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_YIELD 267
#define T_DOUBLE_ARROW 268
#define T_YIELD_FROM 269
#define T_PLUS_EQUAL 270
#define T_MINUS_EQUAL 271
#define T_MUL_EQUAL 272
#define T_DIV_EQUAL 273
#define T_CONCAT_EQUAL 274
#define T_MOD_EQUAL 275
#define T_AND_EQUAL 276
#define T_OR_EQUAL 277
#define T_XOR_EQUAL 278
#define T_SL_EQUAL 279
#define T_SR_EQUAL 280
#define T_POW_EQUAL 281
#define T_COALESCE 282
#define T_BOOLEAN_OR 283
#define T_BOOLEAN_AND 284
#define T_IS_EQUAL 285
#define T_IS_NOT_EQUAL 286
#define T_IS_IDENTICAL 287
#define T_IS_NOT_IDENTICAL 288
#define T_SPACESHIP 289
#define T_IS_SMALLER_OR_EQUAL 290
#define T_IS_GREATER_OR_EQUAL 291
#define T_SL 292
#define T_SR 293
#define T_INSTANCEOF 294
#define T_INC 295
#define T_DEC 296
#define T_INT_CAST 297
#define T_DOUBLE_CAST 298
#define T_STRING_CAST 299
#define T_ARRAY_CAST 300
#define T_OBJECT_CAST 301
#define T_BOOL_CAST 302
#define T_UNSET_CAST 303
#define T_POW 304
#define T_NEW 305
#define T_CLONE 306
#define T_NOELSE 307
#define T_ELSEIF 308
#define T_ELSE 309
#define T_ENDIF 310
#define T_STATIC 311
#define T_ABSTRACT 312
#define T_FINAL 313
#define T_PRIVATE 314
#define T_PROTECTED 315
#define T_PUBLIC 316
#define T_LNUMBER 317
#define T_DNUMBER 318
#define T_STRING 319
#define T_VARIABLE 320
#define T_INLINE_HTML 321
#define T_ENCAPSED_AND_WHITESPACE 322
#define T_CONSTANT_ENCAPSED_STRING 323
#define T_STRING_VARNAME 324
#define T_NUM_STRING 325
#define T_EXIT 326
#define T_IF 327
#define T_ECHO 328
#define T_DO 329
#define T_WHILE 330
#define T_ENDWHILE 331
#define T_FOR 332
#define T_ENDFOR 333
#define T_FOREACH 334
#define T_ENDFOREACH 335
#define T_DECLARE 336
#define T_ENDDECLARE 337
#define T_AS 338
#define T_SWITCH 339
#define T_ENDSWITCH 340
#define T_CASE 341
#define T_DEFAULT 342
#define T_BREAK 343
#define T_CONTINUE 344
#define T_GOTO 345
#define T_FUNCTION 346
#define T_CONST 347
#define T_RETURN 348
#define T_TRY 349
#define T_CATCH 350
#define T_FINALLY 351
#define T_THROW 352
#define T_USE 353
#define T_INSTEADOF 354
#define T_GLOBAL 355
#define T_VAR 356
#define T_UNSET 357
#define T_ISSET 358
#define T_EMPTY 359
#define T_HALT_COMPILER 360
#define T_CLASS 361
#define T_TRAIT 362
#define T_INTERFACE 363
#define T_EXTENDS 364
#define T_IMPLEMENTS 365
#define T_OBJECT_OPERATOR 366
#define T_LIST 367
#define T_ARRAY 368
#define T_CALLABLE 369
#define T_LINE 370
#define T_FILE 371
#define T_DIR 372
#define T_CLASS_C 373
#define T_TRAIT_C 374
#define T_METHOD_C 375
#define T_FUNC_C 376
#define T_COMMENT 377
#define T_DOC_COMMENT 378
#define T_OPEN_TAG 379
#define T_OPEN_TAG_WITH_ECHO 380
#define T_CLOSE_TAG 381
#define T_WHITESPACE 382
#define T_START_HEREDOC 383
#define T_END_HEREDOC 384
#define T_DOLLAR_OPEN_CURLY_BRACES 385
#define T_CURLY_OPEN 386
#define T_PAAMAYIM_NEKUDOTAYIM 387
#define T_NAMESPACE 388
#define T_NS_C 389
#define T_NS_SEPARATOR 390
#define T_ELLIPSIS 391
#define T_ERROR 392

/* Value type.  */



ZEND_API int zendparse (void);

#endif /* !YY_ZEND_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */



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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  495
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  939

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,   164,     2,   165,    53,    36,     2,
     157,   158,    51,    48,     8,    49,    50,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   159,
      42,    16,    44,    29,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,   162,    35,     2,   163,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,    34,   161,    56,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    31,    32,    33,    37,    38,    39,    40,    41,
      43,    45,    46,    47,    55,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   266,   266,   270,   270,   270,   270,   270,   270,   270,
     270,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   275,   275,   275,   275,   275,   275,
     275,   275,   276,   276,   276,   276,   276,   276,   276,   276,
     280,   281,   281,   281,   281,   281,   281,   285,   286,   294,
     295,   299,   300,   304,   305,   306,   310,   311,   312,   313,
     314,   315,   319,   322,   322,   325,   325,   328,   329,   330,
     331,   332,   336,   337,   341,   343,   348,   350,   355,   357,
     362,   364,   369,   371,   376,   377,   381,   383,   388,   389,
     393,   394,   398,   401,   406,   407,   408,   409,   410,   411,
     418,   419,   420,   421,   423,   425,   427,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   440,   444,   443,
     447,   448,   450,   451,   452,   457,   458,   463,   464,   468,
     469,   473,   474,   478,   482,   489,   490,   494,   495,   499,
     499,   502,   502,   508,   509,   513,   514,   518,   518,   524,
     524,   530,   531,   535,   536,   540,   541,   545,   546,   547,
     548,   552,   553,   557,   558,   562,   563,   567,   568,   569,
     570,   574,   575,   577,   582,   583,   588,   589,   594,   597,
     603,   604,   609,   612,   618,   619,   625,   626,   631,   633,
     638,   640,   646,   647,   651,   652,   656,   657,   658,   662,
     663,   667,   668,   672,   674,   679,   680,   684,   685,   689,
     695,   696,   700,   701,   706,   709,   714,   716,   718,   720,
     727,   728,   732,   733,   734,   738,   740,   745,   746,   750,
     755,   757,   759,   761,   766,   768,   772,   777,   778,   782,
     783,   787,   788,   793,   794,   799,   800,   801,   802,   803,
     804,   808,   809,   813,   815,   820,   821,   825,   829,   833,
     834,   837,   841,   842,   846,   847,   851,   851,   861,   863,
     868,   870,   872,   874,   876,   877,   879,   881,   883,   885,
     887,   889,   891,   893,   895,   897,   899,   901,   902,   903,
     904,   905,   907,   909,   911,   913,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   933,   935,   937,   939,   941,   943,   945,
     947,   949,   951,   952,   953,   955,   957,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   981,   989,   993,   997,  1001,
    1002,  1006,  1007,  1011,  1012,  1016,  1017,  1021,  1023,  1025,
    1027,  1032,  1035,  1039,  1040,  1044,  1045,  1050,  1051,  1052,
    1057,  1058,  1063,  1064,  1065,  1069,  1070,  1071,  1072,  1073,
    1074,  1075,  1076,  1077,  1078,  1079,  1080,  1082,  1083,  1084,
    1085,  1089,  1090,  1092,  1097,  1098,  1102,  1103,  1107,  1111,
    1112,  1113,  1117,  1118,  1119,  1123,  1125,  1127,  1129,  1131,
    1133,  1137,  1139,  1141,  1146,  1147,  1148,  1152,  1154,  1159,
    1161,  1163,  1165,  1167,  1169,  1174,  1175,  1176,  1180,  1181,
    1182,  1186,  1191,  1192,  1196,  1198,  1203,  1205,  1207,  1209,
    1211,  1214,  1220,  1222,  1224,  1226,  1231,  1233,  1236,  1239,
    1241,  1243,  1246,  1250,  1251,  1252,  1257,  1258,  1259,  1261,
    1263,  1265,  1267,  1272,  1273,  1278
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"include (T_INCLUDE)\"",
  "\"include_once (T_INCLUDE_ONCE)\"", "\"eval (T_EVAL)\"",
  "\"require (T_REQUIRE)\"", "\"require_once (T_REQUIRE_ONCE)\"", "','",
  "\"or (T_LOGICAL_OR)\"", "\"xor (T_LOGICAL_XOR)\"",
  "\"and (T_LOGICAL_AND)\"", "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"",
  "\"=> (T_DOUBLE_ARROW)\"", "\"yield from (T_YIELD_FROM)\"", "'='",
  "\"+= (T_PLUS_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"**= (T_POW_EQUAL)\"",
  "'?'", "':'", "\"?? (T_COALESCE)\"", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'", "\"== (T_IS_EQUAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"<=> (T_SPACESHIP)\"", "'<'",
  "\"<= (T_IS_SMALLER_OR_EQUAL)\"", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<< (T_SL)\"", "\">> (T_SR)\"",
  "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'",
  "\"instanceof (T_INSTANCEOF)\"", "'~'", "\"++ (T_INC)\"",
  "\"-- (T_DEC)\"", "\"(int) (T_INT_CAST)\"",
  "\"(double) (T_DOUBLE_CAST)\"", "\"(string) (T_STRING_CAST)\"",
  "\"(array) (T_ARRAY_CAST)\"", "\"(object) (T_OBJECT_CAST)\"",
  "\"(bool) (T_BOOL_CAST)\"", "\"(unset) (T_UNSET_CAST)\"", "'@'",
  "\"** (T_POW)\"", "'['", "\"new (T_NEW)\"", "\"clone (T_CLONE)\"",
  "T_NOELSE", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"static (T_STATIC)\"",
  "\"abstract (T_ABSTRACT)\"", "\"final (T_FINAL)\"",
  "\"private (T_PRIVATE)\"", "\"protected (T_PROTECTED)\"",
  "\"public (T_PUBLIC)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable (T_VARIABLE)\"", "T_INLINE_HTML",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"number (T_NUM_STRING)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"var (T_VAR)\"", "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"",
  "\"empty (T_EMPTY)\"", "\"__halt_compiler (T_HALT_COMPILER)\"",
  "\"class (T_CLASS)\"", "\"trait (T_TRAIT)\"",
  "\"interface (T_INTERFACE)\"", "\"extends (T_EXTENDS)\"",
  "\"implements (T_IMPLEMENTS)\"", "\"-> (T_OBJECT_OPERATOR)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"", "\"__DIR__ (T_DIR)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"\\\\ (T_NS_SEPARATOR)\"",
  "\"... (T_ELLIPSIS)\"", "T_ERROR", "'('", "')'", "';'", "'{'", "'}'",
  "']'", "'`'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "$@3", "catch_list", "catch_name_list",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "is_reference", "is_variadic",
  "class_declaration_statement", "@4", "@5", "class_modifiers",
  "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type_expr", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr",
  "expr_without_variable", "function", "backup_doc_comment",
  "backup_fn_flags", "returns_ref", "lexical_vars", "lexical_var_list",
  "lexical_var", "function_call", "class_name", "class_name_reference",
  "exit_expr", "backticks_expr", "ctor_arguments", "dereferencable_scalar",
  "scalar", "constant", "expr", "optional_expr", "variable_class_name",
  "dereferencable", "callable_expr", "callable_variable", "variable",
  "simple_variable", "static_member", "new_variable", "member_name",
  "property_name", "array_pair_list", "possible_array_pair",
  "non_empty_array_pair_list", "array_pair", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "isset_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,   268,   269,    61,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    63,
      58,   282,   283,   284,   124,    94,    38,   285,   286,   287,
     288,   289,    60,   290,    62,   291,   292,   293,    43,    45,
      46,    42,    47,    37,    33,   294,   126,   295,   296,   297,
     298,   299,   300,   301,   302,   303,    64,   304,    91,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    40,    41,    59,
     123,   125,    93,    96,    34,    36
};
# endif

#define YYPACT_NINF -729

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-729)))

#define YYTABLE_NINF -470

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-470)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -729,    98,  1210,  -729,  5559,  5559,   -51,  5559,  5559,  5559,
    5559,  5559,  5559,  5559,  5559,  5559,   486,   486,  5559,  5559,
    5559,  5559,  5559,  5559,  5559,  5559,  4887,   381,  5559,    20,
    -729,  -729,  -729,  -729,    79,  -729,  -729,  -729,   -44,   -19,
    5559,  4612,   -17,   -15,     6,    70,    94,  5559,  5559,   126,
    -729,   171,  5559,   -12,  5559,     5,    68,    99,   107,   158,
     164,  -729,  -729,  -729,   179,   182,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,   389,    60,  -729,   245,  5559,  -729,  -729,
     426,   436,    97,    -3,   -43,  -729,  -729,  -729,  -729,   292,
    -729,  -729,  -729,   187,  -729,   398,  -729,  -729,  -729,   306,
    -729,   200,   330,  -729,   286,  6242,   205,    28,   207,   220,
    7047,  -729,  -729,  -729,   273,  -729,   231,   306,  7273,  7273,
    5559,  7273,  7273,  1847,  1684,  1847,   323,   323,    64,   323,
    4887,  -729,  5559,   236,   286,    19,    19,   323,   323,   323,
     323,   323,   323,   323,   323,   486,   243,  7179,   240,  -729,
     399,  -729,  -729,  -729,  -729,   264,   207,  -729,   190,  -729,
     408,    33,  -729,   306,  -729,  5559,  -729,  5559,    57,  -729,
    7273,   356,  5559,  5559,  5559,   171,  5559,  7273,   294,   320,
     325,   469,    61,  -729,   329,  -729,  6525,  -729,  -729,   245,
      -9,   139,   333,    62,  -729,  -729,    67,  -729,  -729,   486,
    5559,  5559,   335,   411,   413,   414,  4887,  4887,    23,   232,
    -729,  4999,   486,   444,  -729,   245,   -30,   345,    -3,  6572,
    1373,   261,   344,   474,   261,   305,  5559,  -729,   428,  4775,
    -729,  -729,  -729,   362,  4612,   368,   483,   367,  -729,   446,
    3492,  5559,  5559,  5559,  5559,  5111,  5559,  5559,  5559,  5559,
    5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,
    5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,   505,
    5559,  -729,  3492,  5559,   254,  5559,  -729,  5223,  5559,  5559,
    5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,
    -729,  -729,  -729,  6619,  5559,   369,  6666,    18,  4887,  5335,
     516,  4887,   207,    68,  -729,  -729,  5559,   254,    68,  5559,
    5559,   456,  -729,  -729,   392,  6713,  5559,  -729,   390,  6760,
     393,   545,  7273,  7085,    52,  6807,  -729,  -729,  -729,  5559,
     171,  -729,  -729,  1536,  -729,   198,  -729,   480,    11,   245,
     224,   405,    69,  -729,   165,  -729,    68,  -729,    65,  -729,
      71,  7273,    81,  -729,  6854,   419,   454,  -729,   463,   438,
     440,    39,   519,  -729,  -729,     0,   723,   442,  -729,  -729,
    -729,    -3,  -729,   447,  -729,   338,   453,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  5993,  -729,  5559,  -729,
      82,  -729,  7273,   536,  5559,  -729,  5559,  -729,  -729,  -729,
     464,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  5559,  -729,  -729,   468,   471,
     207,   477,  1361,  1524,  1847,  5559,  7226,  2010,  2171,  2334,
    2497,  2657,  2819,  2982,  2982,  2982,  2982,  2982,   809,   809,
     809,   809,   870,   870,   449,   449,   449,    64,    64,    64,
    -729,   323,   468,   471,   207,   482,  -729,  5559,  -729,   207,
    6040,   486,  1847,  1847,  1847,  1847,  1847,  1847,  1847,  1847,
    1847,  1847,  1847,  1847,  1847,  -729,  1847,  -729,   476,   484,
     486,   488,  7273,  5559,  -729,   454,  -729,   485,  -729,  -729,
    6088,  7273,  -729,   491,  -729,  3797,  -729,  5559,  3960,  5559,
    5559,   717,  -729,    25,  7273,  -729,  -729,    27,  -729,   249,
     233,    72,  -729,  -729,   245,   241,  -729,  -729,   486,   467,
    5559,  -729,  -729,  -729,    91,   520,   492,    91,  -729,   640,
    -729,  -729,  -729,  -729,   498,  -729,  5559,  -729,  -729,  -729,
    -729,   884,   503,  -729,  7273,  5447,  -729,   454,  6901,  6948,
    1699,   506,   234,  6135,  -729,  -729,  2010,  5559,  -729,  -729,
    6183,  -729,  -729,    19,   640,    32,  4887,  1847,   520,  -729,
    -729,   234,  -729,  -729,  6995,  -729,  -729,  -729,   507,  7273,
     486,  4887,   511,     7,     8,  4123,   512,   513,  -729,  -729,
     282,   249,   245,    17,  -729,  -729,    74,   245,  -729,  -729,
    -729,  -729,    91,  -729,  -729,  -729,   654,   504,  5559,  -729,
     394,  1047,  -729,   514,  -729,   520,  4612,   644,   521,   234,
     391,  -729,  -729,  -729,   523,   671,  -729,   646,  -729,  -729,
    -729,  2010,  -729,   530,  -729,   533,  3634,   534,  1862,  5559,
       9,   540,  4887,   717,  4286,  -729,  -729,  -729,  -729,    30,
    -729,    12,   538,   543,  -729,    22,  -729,   249,  -729,   245,
      50,  -729,   654,   549,   296,    91,  -729,  1847,   544,  -729,
    -729,  -729,  -729,  -729,  -729,   553,  -729,   597,   326,  -729,
     560,   640,   556,   597,  -729,   559,   561,    10,   563,   564,
    -729,  -729,  -729,  2025,   526,   565,  5559,    44,    21,  -729,
      91,  -729,  -729,  -729,    51,   245,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,    91,  -729,  -729,  -729,   643,   311,
     745,  -729,  -729,   755,  -729,   568,  3634,   699,   573,   699,
    -729,  -729,   647,  -729,   699,  -729,  4449,  -729,  4286,  2188,
     577,   578,  -729,  5709,  -729,  -729,  -729,  -729,  -729,    63,
    2351,  -729,  -729,   763,    45,   722,    77,  -729,  6255,   306,
    -729,  -729,  -729,   326,  -729,   260,  -729,   725,  1001,  -729,
    -729,  -729,  -729,  -729,   580,  -729,  -729,  -729,  3634,    91,
     584,  -729,  -729,  -729,  5722,  -729,  5559,  -729,   643,  -729,
     728,    78,  -729,  6255,  1164,  -729,   586,   663,  -729,    84,
    -729,   588,  5559,  -729,   619,  2514,  -729,  3634,  -729,   621,
     680,   231,  -729,  -729,   632,  5860,  -729,   627,   628,   686,
     675,  7273,  -729,  5559,  6255,  -729,  -729,  -729,  -729,  -729,
     260,  -729,  -729,  7273,  -729,   630,  -729,  6255,  -729,  -729,
    -729,  -729,  6393,    91,  -729,  7273,  -729,   637,  2677,  -729,
    2840,  3003,  -729,  3166,  -729,  -729,  -729,  6255,   654,  -729,
     234,  -729,  -729,  -729,  -729,  -729,   638,  -729,  -729,  -729,
     699,  -729,   303,  -729,  -729,  -729,  3329,  -729,  -729
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      80,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,     0,     0,   391,
     175,   176,   405,   406,    81,   444,   143,   404,   395,     0,
       0,     0,     0,     0,     0,     0,     0,   426,   426,     0,
     376,     0,   426,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   177,   179,     0,     0,   407,   408,   409,   414,
     410,   411,   412,     0,    95,   413,     0,     0,   150,   123,
     397,     0,     0,    83,   421,    79,    86,    87,    88,     0,
     173,    89,    90,   210,   131,     0,   132,   353,   425,   379,
     440,     0,   419,   367,   420,     0,     0,   428,     0,   441,
     424,   435,   442,   357,   391,    81,     0,   379,   488,   489,
       0,   491,   492,   369,   371,   373,   338,   339,   340,   341,
     462,   391,     0,   431,     0,   318,   320,   358,   359,   360,
     361,   362,   363,   364,   366,     0,     0,   467,     0,   465,
     461,   463,   296,   392,   299,   393,   400,   449,   394,   304,
     242,     0,   241,   379,   154,   426,   365,     0,     0,   290,
     291,     0,     0,   292,     0,     0,     0,   427,     0,     0,
       0,     0,     0,   121,     0,   123,     0,   102,   103,     0,
     116,     0,     0,     0,   118,   113,     0,   238,   239,     0,
       0,     0,     0,     0,     0,     0,   462,   462,   476,     0,
     416,     0,     0,     0,   474,     0,    93,     0,    85,     0,
       0,   398,     0,   399,     0,     0,     0,   446,     0,     0,
     387,   169,   174,     0,     0,     0,     0,     0,   380,   377,
       0,   426,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,   426,     0,     0,   390,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     317,   319,   377,     0,     0,     0,     0,   429,   462,     0,
     403,   462,   400,     0,   401,   298,   426,     0,     0,     0,
       0,     0,   141,   377,     0,     0,     0,   142,     0,     0,
       0,   293,   295,     0,     0,     0,   137,   138,   153,     0,
       0,   101,   139,     0,   152,   116,   119,     0,     0,     0,
     116,     0,     0,    97,     0,    99,     0,   140,     0,   161,
     429,   495,     0,   493,     0,     0,   181,   377,   183,     0,
       0,     0,     0,   415,   475,     0,     0,   429,   473,   418,
     472,    84,    92,     0,    80,   352,     0,   130,   122,   124,
     125,   126,   127,   128,   368,   417,     0,    82,     0,   231,
       0,   233,   235,     0,     0,   211,     0,   123,   214,   377,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    46,
      47,    11,    12,    13,    16,    17,    18,    71,    72,    73,
      74,    75,    76,    77,    14,    15,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    49,    50,    51,
      52,    53,    41,    42,    43,    44,    45,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    61,    59,
      60,    56,    57,    48,    54,    55,    66,    67,    68,    62,
      63,    65,    64,    58,    69,     0,    70,    78,   422,   447,
       0,     0,   323,   325,   324,     0,     0,   356,   321,   322,
     326,   328,   327,   344,   345,   342,   343,   350,   346,   347,
     348,   349,   336,   337,   330,   331,   329,   332,   334,   335,
     351,   333,   423,   448,     0,     0,   458,     0,   460,   443,
       0,     0,   302,   305,   306,   307,   309,   310,   311,   312,
     313,   314,   315,   316,   308,   490,   372,   403,   430,     0,
       0,     0,   466,     0,   464,   181,   453,     0,   452,   454,
       0,   243,   240,     0,   396,     0,   289,     0,     0,   292,
       0,     0,   148,     0,   377,   120,   155,     0,   117,     0,
     116,     0,    98,   100,     0,   116,   112,   237,     0,     0,
       0,   486,   487,    91,     0,   185,     0,     0,   377,     0,
     402,   483,   485,   484,     0,   478,     0,   480,   479,   482,
      80,     0,     0,   445,   236,     0,   232,   181,     0,     0,
       0,     0,   222,     0,   388,   437,   355,     0,   389,   436,
       0,   439,   438,   303,   471,   429,   462,   301,   185,   450,
     451,   222,   123,   208,     0,   123,   206,   133,     0,   294,
       0,   462,     0,     0,   429,     0,   201,   201,   136,   288,
     159,     0,     0,     0,   109,   114,     0,     0,   162,   145,
     494,   182,     0,   377,   245,   250,   184,     0,     0,   477,
       0,     0,    96,     0,   234,   185,     0,     0,     0,   222,
       0,   226,   227,   228,     0,   216,   218,   165,   223,   224,
     456,   354,   459,     0,   377,     0,   212,     0,     0,   292,
     429,     0,   462,     0,     0,   123,   195,   149,   201,     0,
     201,     0,     0,     0,   151,     0,   115,     0,   106,     0,
       0,   111,   186,     0,   271,     0,   245,   300,     0,    94,
     129,   377,   209,   123,   215,     0,   225,   381,   222,   166,
     167,   470,     0,   381,   134,     0,     0,   403,     0,     0,
     123,   193,   146,     0,     0,     0,     0,     0,     0,   197,
       0,   123,   107,   108,     0,     0,   104,   245,   278,   279,
     280,   277,   276,   275,     0,   270,   178,   244,     0,     0,
     272,   273,   251,   271,   481,     0,   213,   229,     0,   229,
     219,   168,     0,   245,   229,   207,     0,   189,     0,     0,
       0,     0,   199,     0,   204,   205,   123,   198,   157,     0,
       0,   105,   110,   271,     0,   377,     0,   282,     0,   379,
     274,   180,   245,     0,   378,     0,   378,   220,   271,   378,
     123,   191,   135,   147,     0,   196,   200,   123,   203,     0,
       0,   160,   172,   252,     0,   248,     0,   283,     0,   246,
       0,     0,   286,     0,   271,   230,     0,     0,   385,     0,
     384,     0,     0,   297,     0,     0,   194,   202,   158,     0,
      81,    58,   253,   264,     0,     0,   255,     0,     0,     0,
     265,   377,   281,     0,     0,   247,   377,   170,   123,   386,
       0,   382,   123,   221,   123,     0,   123,     0,   254,   256,
     257,   258,     0,     0,   284,   377,   285,     0,     0,   383,
       0,     0,   192,     0,   266,   260,   261,   263,   259,   287,
     222,   378,   378,   378,   156,   262,     0,   164,   374,   375,
     229,   378,     0,   267,   123,   378,     0,   249,   268
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -729,  -729,  -107,  -729,  -177,  -354,    26,   -25,  -729,  -729,
    -729,   744,  -729,  -729,   151,    86,   612,    89,  -175,   466,
     641,  -184,  -729,    13,  -729,  -729,  -729,  -729,  -729,   229,
       4,  -729,  -729,    14,  -729,  -729,  -729,   724,    15,  -729,
      16,  -729,  -438,  -729,  -525,   109,  -729,    29,  -729,  -729,
    -548,    34,  -729,  -729,  -729,  -729,  -729,  -622,  -729,    80,
    -729,     3,   135,  -728,   -28,  -729,   212,  -729,   499,  -729,
     517,  -621,  -729,  -654,  -729,  -729,   -31,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -718,  -729,    -1,  -729,   -38,
     537,  -729,   550,  -492,  -729,  -729,  -729,  -729,  -729,    -2,
    -180,  -574,  -112,   125,  -729,   -11,  -729,    -8,   604,  -729,
    -729,   575,   -13,  -729,    -6,    24,    73,  -729,  -729,  -729,
    -729,    -4,    55,  -729,  -729,   609,   585,  -123,   592,  -729,
    -729,   386,   388,  -729,  -729,  -729,   314
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   476,   477,   850,     2,    83,    84,    85,   373,
     217,   652,   341,   192,   653,   720,   193,   654,   194,   195,
     182,   220,   378,   379,   645,   650,   809,   714,   348,   349,
     380,   740,   792,   381,   393,   203,    89,    90,   382,   204,
     383,   205,   585,   588,   663,   643,   832,   752,   707,   648,
     709,   806,   637,    93,    94,    95,    96,   684,   685,   686,
     687,   688,   689,   824,   304,   390,   391,   196,   197,   161,
     162,   724,   777,   666,   845,   875,   876,   877,   878,   879,
     880,   935,   778,   779,   780,   781,   816,   817,   851,   852,
     183,   168,   169,   320,   321,   154,   302,    97,    98,   117,
     400,   856,   239,   789,   859,   860,   100,   101,   156,   166,
     222,   305,   102,   103,   104,   105,   178,   106,   107,   108,
     109,   110,   111,   112,   158,   480,   519,   148,   149,   150,
     151,   213,   214,   594,   113,   352,   353
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,   333,   153,   133,   133,   292,    87,   295,   722,   695,
     134,   134,   135,   136,   336,    86,    88,    91,    92,   155,
     601,   703,  -187,  -188,  -190,   717,  -469,   163,   118,   119,
     717,   121,   122,   123,   124,   125,   126,   127,   128,   129,
    -468,   311,   137,   138,   139,   140,   141,   142,   143,   144,
     147,   313,   159,   725,   171,   646,   230,   735,   765,   765,
     330,   826,   820,   478,   170,   316,   829,   638,   596,   330,
     344,   177,   177,   578,   804,   346,   177,   344,   186,  -163,
     276,   190,   157,   359,   360,   848,   884,  -429,   115,   580,
     605,   361,   890,   337,   387,   512,   273,   839,     3,   711,
     216,   219,   218,   694,   160,   783,   120,   628,  -392,   164,
     387,   198,   163,   165,   229,   187,   188,   756,   757,   269,
     814,   179,   591,   592,   228,   184,   756,   757,   593,   372,
      50,   270,   133,   553,   755,   756,   757,   227,   167,   134,
     172,   297,   173,   115,   293,   338,   813,   840,   185,  -429,
     731,   228,    35,   362,   147,   387,   296,   387,   274,   189,
     754,   597,   758,   174,   336,   704,  -187,  -188,  -190,   675,
    -429,   569,   828,   759,   115,   539,  -469,   586,   718,  -429,
    -469,    35,   807,   762,   917,   647,   133,   651,   275,   177,
    -468,   315,   312,   134,  -468,   350,   319,   322,   323,   133,
     325,   854,   931,   805,   843,   844,   134,   746,   367,   180,
     562,   766,   811,   610,   215,   335,   317,   340,    99,   611,
     331,   345,   115,   579,   351,   354,   347,   175,   573,  -163,
     147,   147,   657,    82,   719,   366,   849,   885,   314,   581,
     606,   371,   891,   116,   153,    76,   671,   395,   115,   918,
     386,   176,   861,   392,   181,   864,   199,   226,   306,   233,
     234,   155,    82,   680,   200,   177,   482,   483,   484,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   339,   511,   479,   857,   177,   926,   520,
     337,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   481,   201,   208,   115,   536,   574,
     307,   202,   147,   542,   157,   147,   337,   513,   115,   518,
     177,    99,   115,   550,   551,   337,   206,   516,    35,   207,
     170,   308,   238,   337,   858,   208,   515,   927,   928,   929,
     309,   240,   567,   564,   241,   680,   272,   932,   546,   187,
     188,   937,   518,   549,   229,   570,   681,   682,    30,    31,
     575,   768,   769,   770,   771,   772,   773,  -432,   571,   547,
     363,   211,   212,    50,   649,   215,   116,   656,    76,   208,
     270,   368,  -217,  -434,   655,   228,   712,   713,  -431,   336,
     298,   198,   300,   242,   243,   244,  -430,   301,   667,   115,
     211,   212,   604,   774,   517,   303,   775,   231,   608,    82,
     609,    50,   818,   245,   310,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   696,   269,
     318,   698,   614,   326,   211,   212,   131,   776,   681,   682,
    -431,   270,   933,   934,   115,    35,   223,   225,  -430,   385,
     235,   236,   237,   208,   115,   209,   655,   716,   116,   327,
      76,  -431,   721,   723,   328,   329,   618,  -434,   332,  -430,
    -431,   621,   343,   355,   356,  -433,   357,   358,  -430,   613,
     266,   267,   268,   693,   269,   374,   152,   384,   133,   616,
     208,   387,   221,   397,   742,   134,   270,   623,   701,   394,
     208,   753,   224,   681,   682,   396,   398,   133,   208,   399,
     368,   537,   543,   116,   134,    76,   625,   210,   211,   212,
     160,   620,   655,   116,   721,    76,    82,   557,   133,   786,
     554,   785,   559,   560,   130,   134,   728,   644,   208,   661,
     368,   131,   665,   568,   572,   133,   799,   627,   633,   115,
      35,   636,   134,    37,   350,   211,   212,   810,   583,   748,
     131,   634,   584,   322,   639,   211,   212,   683,   115,    35,
     812,   587,   369,   211,   212,   575,   589,   364,   590,    99,
     575,   370,   595,   599,   351,    87,   683,   600,    99,   364,
     602,   370,   364,   370,    86,    88,    91,    92,    65,   607,
     670,   612,   838,   211,   212,  -455,   659,   133,  -457,   392,
     801,   756,   757,  -433,   134,   847,   700,   665,   116,   615,
      76,   691,   624,   132,   619,   626,   865,   629,   631,   662,
     147,    82,   664,   867,   683,   683,   668,   116,   706,    76,
     669,   673,   725,   679,   726,   147,   699,   873,   702,    99,
      82,   708,   710,   730,   733,    87,   886,   575,   575,   738,
     734,   737,   739,   575,    86,    88,    91,    92,   741,   732,
     133,   743,   727,   744,    99,   760,    99,   134,   873,   644,
     782,   904,   747,   761,   908,   784,   907,   853,   910,   767,
     911,   787,   913,   683,   788,   791,   793,   751,   795,   796,
     914,   797,   798,   322,   802,   919,   147,   815,   822,   823,
     825,   827,   242,   243,   244,   808,   835,   836,   846,   866,
     925,   862,   869,   575,   883,   575,   888,   889,   892,   665,
     936,    99,   245,   640,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   819,   269,   894,
     803,   896,   -77,   897,    99,   641,   900,   901,   902,   912,
     270,   575,   131,   903,   920,   916,   930,    99,   683,   191,
     115,    35,   715,   342,    37,   764,   763,   658,    99,   831,
     576,   751,   749,   232,   868,   736,   324,   674,   790,   874,
     768,   769,   770,   771,   772,   773,   855,   833,   552,  -269,
     768,   769,   770,   771,   772,   773,    99,   837,   768,   769,
     770,   771,   772,   773,   899,   577,   906,   882,   642,    65,
     874,  -470,  -470,  -470,  -470,   261,   262,   263,   264,   265,
     266,   267,   268,    99,   269,    99,   556,   565,   794,   116,
     881,    76,   774,   510,   132,   775,   270,   545,   665,   909,
     774,   514,    82,   775,   598,     0,   893,     4,     5,     6,
       7,     8,   548,   544,   660,   683,     9,    10,     0,    11,
       0,     0,     0,     0,     0,     0,    99,   905,    99,    99,
       0,    99,     0,     0,     0,     0,   821,     0,   263,   264,
     265,   266,   267,   268,   842,   269,     0,     0,     0,     0,
       0,     0,    12,    13,    99,     0,     0,   270,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,     0,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,    55,     0,    56,     0,    57,    58,    59,    60,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,    74,    75,    76,     0,
       0,    77,     0,    78,    79,   672,     0,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   768,   769,   770,   771,
     772,   773,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,   774,     0,
       0,   775,    29,    30,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,    51,    52,
      53,     0,   863,    54,    55,     0,    56,     0,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,    74,
      75,    76,     0,     0,    77,     0,    78,    79,   729,     0,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   768,
     769,   770,   771,   772,   773,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,   774,     0,     0,   775,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,     0,   887,    54,    55,     0,    56,
       0,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,    74,    75,    76,     0,     0,    77,     0,    78,
      79,   243,   244,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,   270,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,   376,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,   377,   244,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,   270,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
     376,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,   566,   294,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   245,    11,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,   270,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,   678,    29,    30,    31,     0,     0,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   376,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
       0,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,   245,    11,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,   270,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,   745,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   376,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,     0,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,   270,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
      29,    30,    31,     0,     0,     0,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,   800,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,   376,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,     0,    80,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,   270,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,    44,   834,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,   376,    61,    62,    63,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,     0,
       0,    80,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,   270,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,     0,
      56,     0,    57,    58,    59,   376,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
      78,    79,   841,     0,    80,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,   270,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,   895,    44,     0,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,     0,    52,    53,     0,     0,
      54,     0,     0,    56,     0,    57,    58,    59,   376,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,    78,    79,     0,     0,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   376,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,   921,     0,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,   376,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,   922,     0,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,  -470,
    -470,  -470,  -470,  -470,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,   376,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,   923,     0,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
     376,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,   924,     0,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   376,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
     938,     0,    80,    81,    82,   401,   402,   403,   404,   405,
       0,   406,   407,   408,   409,   410,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   411,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,   413,     0,   414,   415,   416,   417,   418,   419,
     420,   421,   422,     0,     0,   423,    35,     0,     0,     0,
       0,     0,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,     0,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,   473,   474,     9,    10,     0,    11,
       0,     0,   475,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,     0,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,     0,    52,    53,     0,     0,
      54,     0,     0,    56,     0,    57,    58,    59,   376,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,    78,    79,     0,     0,    80,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   632,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,     0,     0,
      80,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     635,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,     0,     0,    80,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   705,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,     0,     0,    80,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   750,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,     0,     0,    80,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   830,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
       0,     0,    80,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,     0,     0,    80,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,    32,    33,   115,    35,
       0,     0,    37,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,    58,    59,     9,
      10,     0,    11,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,   145,     0,     0,     0,   116,    75,    76,
     388,     0,    77,   389,     0,    12,    13,     0,    80,    81,
      82,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,    32,    33,
     115,    35,     0,     0,    37,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,    58,
      59,     9,    10,     0,    11,     0,     0,     0,   146,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,     0,    12,    13,     0,
      80,    81,    82,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
      32,    33,   115,    35,     0,     0,    37,   365,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     0,
       0,    58,    59,     9,    10,     0,    11,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,   485,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,     0,    12,
      13,     0,    80,    81,    82,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,    32,    33,   115,    35,     0,     0,    37,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,    58,    59,     9,    10,     0,    11,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,   521,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
       0,    12,    13,     0,    80,    81,    82,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,   114,     0,
       0,     0,     0,     0,    32,    33,   115,    35,     0,     0,
      37,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,    58,    59,     9,    10,     0,
      11,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,   540,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,     0,    12,    13,     0,    80,    81,    82,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,    32,    33,   115,    35,
       0,     0,    37,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,    58,    59,     9,
      10,     0,    11,     0,     0,     0,   541,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,     0,    12,    13,     0,    80,    81,
      82,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,    32,    33,
     115,    35,     0,     0,    37,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,    58,
      59,     9,    10,     0,    11,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,   388,     0,    77,     0,     0,    12,    13,     0,
      80,    81,    82,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,   114,     0,     0,     0,     0,     0,
      32,    33,   115,    35,     0,     0,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,   242,   243,
     244,     0,    80,    81,    82,   401,   402,   403,   404,   405,
       0,   406,   407,   408,   409,   410,     0,     0,   245,   804,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,   411,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,   413,     0,   414,   415,   416,   417,   418,   419,
     420,   421,   422,     0,     0,   870,     0,     0,     0,     0,
       0,     0,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,     0,   458,   459,   460,
     461,   462,     0,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   401,   402,   403,   404,   405,   805,   406,
     407,   408,   409,   410,   871,   474,    76,     0,     0,     0,
       0,     0,     0,   872,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   412,
     413,     0,   414,   415,   416,   417,   418,   419,   420,   421,
     422,     0,     0,   870,     0,     0,     0,     0,     0,     0,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,     0,   458,   459,   460,   461,   462,
       0,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,   871,   474,    76,     0,     0,     0,     0,     0,
       0,   898,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,     0,     0,     0,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,   242,   243,   244,
       0,     0,     0,     0,     0,     0,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,   603,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,   242,   243,   244,     0,     0,     0,     0,     0,
       0,   622,   270,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   630,
     270,   242,   243,   244,     0,     0,     0,     0,   401,   402,
     403,   404,   405,     0,   406,   407,   408,   409,   410,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   690,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,   413,     0,   414,   415,   416,
     417,   418,   419,   420,   421,   422,     0,     0,   423,     0,
       0,     0,     0,     0,   692,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,     0,
     458,   459,   460,   461,   462,     0,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   401,   402,   403,   404,
     405,   271,   406,   407,   408,   409,   410,   473,   474,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   411,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   412,   413,     0,   414,   415,   416,   768,   769,
     770,   771,   772,   773,     0,     0,   915,     0,     0,     0,
       0,     0,     0,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,     0,   458,   459,
     460,   461,   462,     0,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,   473,   474,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,   242,   243,   244,     0,     0,     0,     0,     0,     0,
       0,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,   334,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
     375,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   242,
     243,   244,     0,     0,     0,     0,     0,   535,     0,     0,
     270,     0,     0,     0,     0,     0,     0,     0,     0,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,   242,   243,   244,     0,
       0,     0,     0,     0,   538,     0,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   242,   243,   244,     0,     0,     0,     0,
       0,   555,     0,     0,   270,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     242,   243,   244,     0,     0,     0,     0,     0,   558,     0,
       0,   270,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   242,   243,   244,
       0,     0,     0,     0,     0,   563,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   242,   243,   244,     0,     0,     0,
       0,     0,   582,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,   676,
       0,     0,   270,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,   290,   291,   677,     0,     0,     0,
       0,     0,     0,     0,   245,  -429,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270,   697,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -429,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   561,   242,   243,
     244,     0,     0,   299,     0,     0,     0,     0,  -429,     0,
       0,     0,     0,     0,     0,     0,     0,  -429,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   617,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     270
};

static const yytype_int16 yycheck[] =
{
       2,   185,    27,    16,    17,   117,     2,   130,   662,   631,
      16,    17,    16,    17,   189,     2,     2,     2,     2,    27,
     374,    14,    14,    14,    14,     8,     8,    29,     4,     5,
       8,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       8,     8,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   163,    28,     8,    41,    30,    84,   679,     8,     8,
       8,   789,   780,   240,    40,     8,   794,   559,    68,     8,
       8,    47,    48,     8,    30,     8,    52,     8,    54,     8,
     108,    55,    27,   206,   207,     8,     8,    68,    83,     8,
       8,    68,     8,   102,    83,   272,    68,    34,     0,   647,
      74,    77,    76,   628,    84,   726,   157,   545,   151,    30,
      83,    56,   114,   157,   157,   110,   111,   105,   106,    55,
     774,    48,    83,    84,   154,    52,   105,   106,    89,   159,
     110,    67,   145,   313,   104,   105,   106,    82,   157,   145,
     157,   145,   157,    83,   120,   154,   767,    84,   160,   130,
     675,   154,    84,   130,   130,    83,   132,    83,   130,   154,
     708,   161,   710,   157,   339,   158,   158,   158,   158,   607,
     151,   160,   793,   161,    83,   298,   158,   357,   161,   160,
     162,    84,   161,   161,   902,   160,   199,   160,   160,   165,
     158,   167,   159,   199,   162,   199,   172,   173,   174,   212,
     176,   822,   930,   159,   159,   160,   212,   699,   212,    83,
     158,   161,   161,   397,   154,   189,   159,   191,   220,   399,
     159,   159,    83,   158,   200,   201,   159,   157,   159,   158,
     206,   207,   160,   165,   160,   211,   159,   159,   165,   158,
     158,   215,   158,   152,   269,   154,   600,   234,    83,   903,
     226,   157,   826,   229,    83,   829,   157,   160,    68,    72,
      73,   269,   165,    29,   157,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   154,   270,   240,    36,   273,   920,   275,
     102,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   241,   157,    84,    83,   294,   154,
     130,   157,   298,   299,   269,   301,   102,   272,    83,   274,
     306,   333,    83,   309,   310,   102,   157,    83,    84,   157,
     316,   151,    36,   102,    84,    84,   273,   921,   922,   923,
     160,   151,   154,   329,    68,    29,   151,   931,   303,   110,
     111,   935,   307,   308,   157,   339,   132,   133,    76,    77,
     344,    75,    76,    77,    78,    79,    80,   157,   154,   306,
     148,   149,   150,   110,   564,   154,   152,   154,   154,    84,
      67,    86,   158,   157,   569,   154,   114,   115,    68,   574,
     157,   346,   162,     9,    10,    11,    68,     8,   588,    83,
     149,   150,   388,   117,   160,   151,   120,   125,   394,   165,
     396,   110,   111,    29,    16,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   632,    55,
      94,   635,   480,   159,   149,   150,    75,   161,   132,   133,
     130,    67,   159,   160,    83,    84,    80,    81,   130,   164,
      72,    73,    74,    84,    83,    86,   651,   652,   152,   159,
     154,   151,   657,   663,   159,    16,   514,   157,   159,   151,
     160,   519,   159,   158,    83,   157,    83,    83,   160,   475,
      51,    52,    53,   626,    55,   160,   125,   163,   521,   485,
      84,    83,    86,    30,   694,   521,    67,   521,   641,   157,
      84,   705,    86,   132,   133,   157,   159,   540,    84,    83,
      86,   162,    16,   152,   540,   154,   540,   148,   149,   150,
      84,   517,   717,   152,   719,   154,   165,   157,   561,   733,
     158,   731,   159,     8,    68,   561,   162,   561,    84,   584,
      86,    75,   587,    83,   159,   578,   750,   543,   555,    83,
      84,   558,   578,    87,   578,   149,   150,   761,   159,   702,
      75,   557,   128,   559,   560,   149,   150,   612,    83,    84,
     765,   128,   148,   149,   150,   569,   158,   209,   158,   601,
     574,   213,    83,   161,   580,   601,   631,   160,   610,   221,
     157,   223,   224,   225,   601,   601,   601,   601,   132,    83,
     596,   157,   806,   149,   150,   157,   159,   640,   157,   605,
     104,   105,   106,   157,   640,   815,   640,   662,   152,   162,
     154,   617,   158,   157,   162,   157,   830,   162,   157,   129,
     626,   165,   160,   837,   679,   680,    16,   152,   645,   154,
     162,   158,     8,   157,   160,   641,   159,   844,   157,   671,
     165,   159,   159,   159,    30,   671,   853,   651,   652,     8,
     159,   158,    36,   657,   671,   671,   671,   671,   158,   676,
     703,   158,   668,   159,   696,   157,   698,   703,   875,   703,
     725,   881,   162,   160,   888,   161,   886,   819,   892,   160,
     894,   158,   896,   738,   117,   155,   160,   704,   159,   158,
     897,   158,   158,   699,   159,   905,   702,    84,   160,    30,
     157,    84,     9,    10,    11,   760,   159,   159,    16,   159,
     917,    16,   158,   717,    16,   719,   160,    84,   160,   774,
     934,   753,    29,    36,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   779,    55,   160,
     756,   160,   102,   151,   786,    68,   159,   159,   102,   159,
      67,   765,    75,   118,   157,   902,   158,   799,   823,    55,
      83,    84,   651,   191,    87,   719,   717,   578,   810,   796,
     344,   798,   703,    89,   839,   680,   175,   605,   738,   844,
      75,    76,    77,    78,    79,    80,   823,   798,   311,    84,
      75,    76,    77,    78,    79,    80,   838,   803,    75,    76,
      77,    78,    79,    80,   875,   346,   884,   848,   131,   132,
     875,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   865,    55,   867,   316,   330,   743,   152,
     846,   154,   117,   269,   157,   120,    67,   302,   903,   890,
     117,   272,   165,   120,   161,    -1,   862,     3,     4,     5,
       6,     7,   307,   301,   580,   920,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,   908,   883,   910,   911,
      -1,   913,    -1,    -1,    -1,    -1,   161,    -1,    48,    49,
      50,    51,    52,    53,   161,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,   936,    -1,    -1,    67,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,   161,    -1,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,   117,    -1,
      -1,   120,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   161,   116,   117,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,    -1,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,   117,    -1,    -1,   120,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   161,   116,   117,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    10,    11,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    67,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,   161,    11,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    67,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,   161,    14,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    29,    15,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    67,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    29,    15,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,    -1,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    67,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,   101,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    67,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    -1,    96,    -1,    98,    99,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,
      -1,   163,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    67,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,   161,    -1,   163,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    67,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    97,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,    -1,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,   161,    -1,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,   161,    -1,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,   161,    -1,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
     161,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,   152,   153,    12,    13,    -1,    15,
      -1,    -1,   160,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,    -1,    -1,   163,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,
     163,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    -1,    -1,   163,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,    -1,    -1,   163,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,   163,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,    -1,    -1,   163,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   122,   123,    12,
      13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    36,    -1,    -1,    -1,   152,   153,   154,
     155,    -1,   157,   158,    -1,    48,    49,    -1,   163,   164,
     165,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,   122,
     123,    12,    13,    -1,    15,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,    -1,    48,    49,    -1,
     163,   164,   165,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    88,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   122,   123,    12,    13,    -1,    15,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    30,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,    -1,    48,
      49,    -1,   163,   164,   165,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,   122,   123,    12,    13,    -1,    15,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    36,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
      -1,    48,    49,    -1,   163,   164,   165,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,   122,   123,    12,    13,    -1,
      15,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    36,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,    -1,    48,    49,    -1,   163,   164,   165,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   122,   123,    12,
      13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,    -1,    48,    49,    -1,   163,   164,
     165,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,   122,
     123,    12,    13,    -1,    15,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,   155,    -1,   157,    -1,    -1,    48,    49,    -1,
     163,   164,   165,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,     9,    10,
      11,    -1,   163,   164,   165,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,   125,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     3,     4,     5,     6,     7,   159,     9,
      10,    11,    12,    13,   152,   153,   154,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,   125,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      67,     9,    10,    11,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   161,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,   161,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,     3,     4,     5,     6,
       7,   159,     9,    10,    11,    12,    13,   152,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,   125,   126,
     127,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    67,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    68,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   167,   171,     0,     3,     4,     5,     6,     7,    12,
      13,    15,    48,    49,    54,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    69,    70,    75,
      76,    77,    81,    82,    83,    84,    85,    87,    90,    91,
      92,    93,    94,    96,    98,   100,   103,   107,   108,   109,
     110,   111,   112,   113,   116,   117,   119,   121,   122,   123,
     124,   125,   126,   127,   131,   132,   134,   135,   136,   137,
     138,   139,   140,   147,   152,   153,   154,   157,   159,   160,
     163,   164,   165,   172,   173,   174,   189,   196,   199,   202,
     203,   204,   206,   219,   220,   221,   222,   263,   264,   265,
     272,   273,   278,   279,   280,   281,   283,   284,   285,   286,
     287,   288,   289,   300,    75,    83,   152,   265,   281,   281,
     157,   281,   281,   281,   281,   281,   281,   281,   281,   281,
      68,    75,   157,   278,   280,   287,   287,   281,   281,   281,
     281,   281,   281,   281,   281,    36,   131,   281,   293,   294,
     295,   296,   125,   173,   261,   273,   274,   288,   290,   281,
      84,   235,   236,   265,    30,   157,   275,   157,   257,   258,
     281,   189,   157,   157,   157,   157,   157,   281,   282,   282,
      83,    83,   186,   256,   282,   160,   281,   110,   111,   154,
     172,   177,   179,   182,   184,   185,   233,   234,   288,   157,
     157,   157,   157,   201,   205,   207,   157,   157,    84,    86,
     148,   149,   150,   297,   298,   154,   172,   176,   172,   281,
     187,    86,   276,   297,    86,   297,   160,   288,   154,   157,
     230,   125,   203,    72,    73,    72,    73,    74,    36,   268,
     151,    68,     9,    10,    11,    29,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    55,
      67,   159,   151,    68,   130,   160,   230,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      57,    58,   268,   281,    14,   293,   281,   287,   157,    14,
     162,     8,   262,   151,   230,   277,    68,   130,   151,   160,
      16,     8,   159,   268,   282,   281,     8,   159,    94,   281,
     259,   260,   281,   281,   186,   281,   159,   159,   159,    16,
       8,   159,   159,   187,   159,   172,   184,   102,   154,   154,
     172,   178,   182,   159,     8,   159,     8,   159,   194,   195,
     287,   281,   301,   302,   281,   158,    83,    83,    83,   293,
     293,    68,   130,   148,   298,    88,   281,   287,    86,   148,
     298,   172,   159,   175,   160,   158,   124,   161,   188,   189,
     196,   199,   204,   206,   163,   164,   281,    83,   155,   158,
     231,   232,   281,   200,   157,   189,   157,    30,   159,    83,
     266,     3,     4,     5,     6,     7,     9,    10,    11,    12,
      13,    55,    69,    70,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    83,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   125,   126,
     127,   128,   129,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   152,   153,   160,   168,   169,   170,   288,
     291,   282,   281,   281,   281,    30,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     274,   281,   170,   288,   291,   282,    83,   160,   288,   292,
     281,    36,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   158,   281,   162,   158,   293,
      36,   131,   281,    16,   294,   277,   288,   282,   292,   288,
     281,   281,   236,   266,   158,   158,   258,   157,   158,   159,
       8,   102,   158,   158,   281,   256,   161,   154,    83,   160,
     172,   154,   159,   159,   154,   172,   185,   234,     8,   158,
       8,   158,   158,   159,   128,   208,   266,   128,   209,   158,
     158,    83,    84,    89,   299,    83,    68,   161,   161,   161,
     160,   171,   157,   161,   281,     8,   158,    83,   281,   281,
     187,   266,   157,   281,   230,   162,   281,    30,   230,   162,
     281,   230,   161,   287,   158,   287,   157,   281,   208,   162,
     161,   157,    30,   189,   281,    30,   189,   218,   259,   281,
      36,    68,   131,   211,   287,   190,    30,   160,   215,   266,
     191,   160,   177,   180,   183,   184,   154,   160,   195,   159,
     302,   173,   129,   210,   160,   173,   239,   266,    16,   162,
     281,   171,   161,   158,   232,   208,   158,   158,    74,   157,
      29,   132,   133,   173,   223,   224,   225,   226,   227,   228,
     161,   281,   161,   293,   210,   223,   187,   158,   187,   159,
     287,   293,   157,    14,   158,    30,   189,   214,   159,   216,
     159,   216,   114,   115,   193,   180,   184,     8,   161,   160,
     181,   184,   239,   266,   237,     8,   160,   281,   162,   161,
     159,   210,   189,    30,   159,   223,   228,   158,     8,    36,
     197,   158,   266,   158,   159,    95,   259,   162,   293,   211,
      30,   189,   213,   187,   216,   104,   105,   106,   216,   161,
     157,   160,   161,   183,   181,     8,   161,   160,    75,    76,
      77,    78,    79,    80,   117,   120,   161,   238,   248,   249,
     250,   251,   173,   237,   161,   266,   187,   158,   117,   269,
     225,   155,   198,   160,   269,   159,   158,   158,   158,   187,
     101,   104,   159,   281,    30,   159,   217,   161,   173,   192,
     187,   161,   184,   237,   239,    84,   252,   253,   111,   265,
     251,   161,   160,    30,   229,   157,   229,    84,   237,   229,
      30,   189,   212,   213,    99,   159,   159,   217,   187,    34,
      84,   161,   161,   159,   160,   240,    16,   266,     8,   159,
     170,   254,   255,   268,   237,   227,   267,    36,    84,   270,
     271,   267,    16,   161,   267,   187,   159,   187,   173,   158,
      83,   152,   161,   170,   173,   241,   242,   243,   244,   245,
     246,   281,   253,    16,     8,   159,   170,   161,   160,    84,
       8,   158,   160,   281,   160,    97,   160,   151,   161,   242,
     159,   159,   102,   118,   266,   281,   255,   266,   187,   271,
     187,   187,   159,   187,   170,    83,   168,   251,   239,   266,
     157,   161,   161,   161,   161,   170,   223,   267,   267,   267,
     158,   229,   267,   159,   160,   247,   187,   267,   161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   175,   174,   176,   174,   174,   174,   174,
     174,   174,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   190,   189,
     189,   189,   189,   189,   189,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   196,   197,   197,   198,   198,   200,
     199,   201,   199,   202,   202,   203,   203,   205,   204,   207,
     206,   208,   208,   209,   209,   210,   210,   211,   211,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   215,
     215,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   238,   238,
     239,   239,   240,   240,   240,   241,   241,   242,   242,   243,
     244,   244,   244,   244,   245,   245,   246,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   256,   257,
     257,   258,   259,   259,   260,   260,   262,   261,   263,   263,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   265,   266,   267,   268,
     268,   269,   269,   270,   270,   271,   271,   272,   272,   272,
     272,   273,   273,   274,   274,   275,   275,   276,   276,   276,
     277,   277,   278,   278,   278,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   280,   281,   281,   282,   282,   283,   284,
     284,   284,   285,   285,   285,   286,   286,   286,   286,   286,
     286,   287,   287,   287,   288,   288,   288,   289,   289,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   292,   292,
     292,   293,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   296,   297,   297,   297,   297,   298,   298,   298,   298,
     298,   298,   298,   299,   299,   299,   300,   300,   300,   300,
     300,   300,   300,   301,   301,   302
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     3,
       4,     3,     1,     1,     5,     6,     5,     6,     3,     1,
       3,     1,     3,     1,     1,     2,     1,     3,     1,     2,
       3,     1,     2,     0,     1,     1,     1,     1,     1,     4,
       3,     1,     1,     5,     7,     9,     5,     3,     3,     3,
       3,     3,     3,     1,     2,     5,     7,     9,     0,     6,
       1,     6,     3,     3,     2,     0,     9,     1,     3,     0,
       4,     1,     3,     1,    13,     0,     1,     0,     1,     0,
      10,     0,     9,     1,     2,     1,     1,     0,     7,     0,
       8,     0,     2,     0,     2,     0,     2,     1,     2,     4,
       3,     1,     4,     1,     4,     1,     4,     3,     4,     4,
       5,     0,     5,     4,     1,     1,     1,     4,     5,     6,
       1,     3,     6,     7,     3,     6,     1,     0,     1,     3,
       4,     6,     0,     1,     1,     2,     1,     1,     1,     0,
       2,     2,     3,     1,     3,     1,     2,     3,     1,     1,
       3,     1,     1,     3,     2,     0,     3,     4,     3,    12,
       1,     3,     1,     2,     3,     1,     2,     2,     2,     3,
       3,     3,     4,     3,     1,     1,     3,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     4,     3,     1,     4,     4,     3,
       1,     1,     0,     1,     3,     1,     0,     9,     3,     2,
       6,     5,     3,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       1,     2,     4,     2,    13,    14,     1,     0,     0,     0,
       1,     0,     4,     3,     1,     1,     2,     2,     4,     4,
       2,     1,     1,     1,     1,     0,     3,     0,     1,     1,
       0,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     3,     1,
       1,     1,     3,     3,     1,     1,     0,     1,     1,     1,
       3,     1,     1,     3,     1,     1,     4,     4,     4,     4,
       1,     1,     1,     3,     1,     4,     2,     3,     3,     1,
       4,     4,     3,     3,     3,     1,     3,     1,     1,     3,
       1,     1,     0,     1,     3,     1,     3,     1,     4,     2,
       6,     4,     2,     2,     1,     2,     1,     4,     3,     3,
       3,     6,     3,     1,     1,     1,     4,     4,     2,     2,
       4,     2,     2,     1,     3,     1
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
  switch (yytype)
    {
          case 81: /* "integer number (T_LNUMBER)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 82: /* "floating-point number (T_DNUMBER)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 83: /* "identifier (T_STRING)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 84: /* "variable (T_VARIABLE)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 85: /* T_INLINE_HTML  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 86: /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 87: /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 88: /* "variable name (T_STRING_VARNAME)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 89: /* "number (T_NUM_STRING)"  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 170: /* identifier  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 171: /* top_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 172: /* namespace_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 173: /* name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 174: /* top_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 178: /* group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 179: /* mixed_group_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 180: /* inline_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 181: /* unprefixed_use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 182: /* use_declarations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 183: /* inline_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 184: /* unprefixed_use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 185: /* use_declaration  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 186: /* const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 187: /* inner_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 188: /* inner_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 189: /* statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 191: /* catch_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 192: /* catch_name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 193: /* finally_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 194: /* unset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 195: /* unset_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 196: /* function_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 199: /* class_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 204: /* trait_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 206: /* interface_declaration_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 208: /* extends_from  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 209: /* interface_extends_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 210: /* implements_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 211: /* foreach_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 212: /* for_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 213: /* foreach_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 214: /* declare_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 215: /* switch_case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 216: /* case_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 218: /* while_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 219: /* if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 220: /* if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 221: /* alt_if_stmt_without_else  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 222: /* alt_if_stmt  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 223: /* parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 224: /* non_empty_parameter_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 225: /* parameter  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 226: /* optional_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 227: /* type_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 228: /* type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 229: /* return_type  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 230: /* argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 231: /* non_empty_argument_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 232: /* argument  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 233: /* global_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 234: /* global_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 235: /* static_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 236: /* static_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 237: /* class_statement_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 238: /* class_statement  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 239: /* name_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 240: /* trait_adaptations  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 241: /* trait_adaptation_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 242: /* trait_adaptation  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 243: /* trait_precedence  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 244: /* trait_alias  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 245: /* trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 246: /* absolute_trait_method_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 247: /* method_body  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 252: /* property_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 253: /* property  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 254: /* class_const_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 255: /* class_const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 256: /* const_decl  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 257: /* echo_expr_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 258: /* echo_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 259: /* for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 260: /* non_empty_for_exprs  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 261: /* anonymous_class  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 263: /* new_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 264: /* expr_without_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 266: /* backup_doc_comment  */

      { if (((*yyvaluep).str)) zend_string_release(((*yyvaluep).str)); }

        break;

    case 269: /* lexical_vars  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 270: /* lexical_var_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 271: /* lexical_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 272: /* function_call  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 273: /* class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 274: /* class_name_reference  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 275: /* exit_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 276: /* backticks_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 277: /* ctor_arguments  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 278: /* dereferencable_scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 279: /* scalar  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 280: /* constant  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 281: /* expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 282: /* optional_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 283: /* variable_class_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 284: /* dereferencable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 285: /* callable_expr  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 286: /* callable_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 287: /* variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 288: /* simple_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 289: /* static_member  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 290: /* new_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 291: /* member_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 292: /* property_name  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 293: /* array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 294: /* possible_array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 295: /* non_empty_array_pair_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 296: /* array_pair  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 297: /* encaps_list  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 298: /* encaps_var  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 299: /* encaps_var_offset  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 300: /* internal_functions_in_yacc  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 301: /* isset_variables  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

        break;

    case 302: /* isset_variable  */

      { zend_ast_destroy(((*yyvaluep).ast)); }

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
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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

    { CG(ast) = (yyvsp[0].ast); }

    break;

  case 77:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 78:

    {
			zval zv;
			zend_lex_tstring(&zv);
			(yyval.ast) = zend_ast_create_zval(&zv);
		}

    break;

  case 79:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 80:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 81:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 82:

    { (yyval.ast) = zend_ast_append_str((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 83:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }

    break;

  case 84:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }

    break;

  case 85:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }

    break;

  case 86:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 87:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 88:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 89:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 90:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 91:

    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }

    break;

  case 92:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }

    break;

  case 93:

    { RESET_DOC_COMMENT(); }

    break;

  case 94:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 95:

    { RESET_DOC_COMMENT(); }

    break;

  case 96:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }

    break;

  case 97:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 98:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 99:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = T_CLASS; }

    break;

  case 100:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 101:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 102:

    { (yyval.num) = T_FUNCTION; }

    break;

  case 103:

    { (yyval.num) = T_CONST; }

    break;

  case 104:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 105:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 106:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast));}

    break;

  case 107:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }

    break;

  case 108:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 109:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 110:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 111:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 112:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 113:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }

    break;

  case 114:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = T_CLASS; }

    break;

  case 115:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }

    break;

  case 116:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 117:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 118:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 119:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 120:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 121:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 122:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 123:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 124:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 125:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 126:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 127:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 128:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 129:

    { (yyval.ast) = NULL; zend_error_noreturn(E_COMPILE_ERROR,
			      "__HALT_COMPILER() can only be used from the outermost scope"); }

    break;

  case 130:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 131:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 132:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 133:

    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 134:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }

    break;

  case 135:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 136:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 137:

    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }

    break;

  case 138:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }

    break;

  case 139:

    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }

    break;

  case 140:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 141:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 142:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 143:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 144:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 145:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 146:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 147:

    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }

    break;

  case 148:

    { zend_handle_encoding_declaration((yyvsp[-1].ast)); }

    break;

  case 149:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 150:

    { (yyval.ast) = NULL; }

    break;

  case 151:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 152:

    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[-1].ast)); }

    break;

  case 153:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }

    break;

  case 154:

    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }

    break;

  case 155:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }

    break;

  case 156:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }

    break;

  case 157:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 158:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 159:

    { (yyval.ast) = NULL; }

    break;

  case 160:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 161:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 162:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 163:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }

    break;

  case 164:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 165:

    { (yyval.num) = 0; }

    break;

  case 166:

    { (yyval.num) = ZEND_PARAM_REF; }

    break;

  case 167:

    { (yyval.num) = 0; }

    break;

  case 168:

    { (yyval.num) = ZEND_PARAM_VARIADIC; }

    break;

  case 169:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 170:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }

    break;

  case 171:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 172:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }

    break;

  case 173:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 174:

    { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); }

    break;

  case 175:

    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }

    break;

  case 176:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 177:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 178:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL); }

    break;

  case 179:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 180:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }

    break;

  case 181:

    { (yyval.ast) = NULL; }

    break;

  case 182:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 183:

    { (yyval.ast) = NULL; }

    break;

  case 184:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 185:

    { (yyval.ast) = NULL; }

    break;

  case 186:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 187:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 188:

    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }

    break;

  case 189:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }

    break;

  case 190:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 191:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 192:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 193:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 194:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 195:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 196:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 197:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 198:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 199:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 200:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 201:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }

    break;

  case 202:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 203:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }

    break;

  case 206:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 207:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 208:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 209:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }

    break;

  case 210:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 211:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }

    break;

  case 212:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 213:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }

    break;

  case 214:

    { (yyval.ast) = (yyvsp[-2].ast); }

    break;

  case 215:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }

    break;

  case 216:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 217:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }

    break;

  case 218:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }

    break;

  case 219:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 220:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-2].num) | (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast), NULL); }

    break;

  case 221:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-4].num) | (yyvsp[-3].num), (yyvsp[-5].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 222:

    { (yyval.ast) = NULL; }

    break;

  case 223:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 224:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 225:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }

    break;

  case 226:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }

    break;

  case 227:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }

    break;

  case 228:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 229:

    { (yyval.ast) = NULL; }

    break;

  case 230:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 231:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 232:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 233:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }

    break;

  case 234:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 235:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 236:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }

    break;

  case 237:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 238:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 239:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }

    break;

  case 240:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 241:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 242:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }

    break;

  case 243:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 244:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 245:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }

    break;

  case 246:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }

    break;

  case 247:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-3].num); }

    break;

  case 248:

    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 249:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast)); CG(extra_fn_flags) = (yyvsp[-2].num); }

    break;

  case 250:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }

    break;

  case 251:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 252:

    { (yyval.ast) = NULL; }

    break;

  case 253:

    { (yyval.ast) = NULL; }

    break;

  case 254:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 255:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }

    break;

  case 256:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 257:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 258:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 259:

    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 260:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 261:

    { zval zv; zend_lex_tstring(&zv); (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }

    break;

  case 262:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 263:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }

    break;

  case 264:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }

    break;

  case 265:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 266:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 267:

    { (yyval.ast) = NULL; }

    break;

  case 268:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 269:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 270:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 271:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 272:

    { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }

    break;

  case 273:

    { (yyval.num) = (yyvsp[0].num); }

    break;

  case 274:

    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); }

    break;

  case 275:

    { (yyval.num) = ZEND_ACC_PUBLIC; }

    break;

  case 276:

    { (yyval.num) = ZEND_ACC_PROTECTED; }

    break;

  case 277:

    { (yyval.num) = ZEND_ACC_PRIVATE; }

    break;

  case 278:

    { (yyval.num) = ZEND_ACC_STATIC; }

    break;

  case 279:

    { (yyval.num) = ZEND_ACC_ABSTRACT; }

    break;

  case 280:

    { (yyval.num) = ZEND_ACC_FINAL; }

    break;

  case 281:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 282:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }

    break;

  case 283:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 284:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 285:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 286:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }

    break;

  case 287:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 288:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }

    break;

  case 289:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 290:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }

    break;

  case 291:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }

    break;

  case 292:

    { (yyval.ast) = NULL; }

    break;

  case 293:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 294:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 295:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }

    break;

  case 296:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 297:

    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}

    break;

  case 298:

    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 299:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 300:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 301:

    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 302:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 303:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }

    break;

  case 304:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }

    break;

  case 305:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 306:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 307:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 308:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 309:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 310:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 311:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 312:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 313:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 314:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 315:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 316:

    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 317:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }

    break;

  case 318:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }

    break;

  case 319:

    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }

    break;

  case 320:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }

    break;

  case 321:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 322:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 323:

    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 324:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 325:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 326:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 327:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 328:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 329:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 330:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 331:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 332:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 333:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 334:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 335:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 336:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 337:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 338:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }

    break;

  case 339:

    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }

    break;

  case 340:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }

    break;

  case 341:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }

    break;

  case 342:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 343:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 344:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 345:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 346:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 347:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 348:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 349:

    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 350:

    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 351:

    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 352:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 353:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 354:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 355:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }

    break;

  case 356:

    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 357:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 358:

    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }

    break;

  case 359:

    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }

    break;

  case 360:

    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }

    break;

  case 361:

    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }

    break;

  case 362:

    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }

    break;

  case 363:

    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }

    break;

  case 364:

    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }

    break;

  case 365:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }

    break;

  case 366:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }

    break;

  case 367:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 368:

    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }

    break;

  case 369:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }

    break;

  case 370:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 371:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 372:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 373:

    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }

    break;

  case 374:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 375:

    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num) | ZEND_ACC_STATIC, (yyvsp[-12].num), (yyvsp[-10].str),
			      zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast)); CG(extra_fn_flags) = (yyvsp[-4].num); }

    break;

  case 376:

    { (yyval.num) = CG(zend_lineno); }

    break;

  case 377:

    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }

    break;

  case 378:

    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }

    break;

  case 379:

    { (yyval.num) = 0; }

    break;

  case 380:

    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }

    break;

  case 381:

    { (yyval.ast) = NULL; }

    break;

  case 382:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 383:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 384:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }

    break;

  case 385:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 386:

    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = 1; }

    break;

  case 387:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 388:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 389:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 390:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 391:

    { zval zv; ZVAL_INTERNED_STR(&zv, CG(known_strings)[ZEND_STR_STATIC]);
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }

    break;

  case 392:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 393:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 394:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 395:

    { (yyval.ast) = NULL; }

    break;

  case 396:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 397:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 398:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 399:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 400:

    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }

    break;

  case 401:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 402:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }

    break;

  case 403:

    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }

    break;

  case 404:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 405:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 406:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 407:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }

    break;

  case 408:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }

    break;

  case 409:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }

    break;

  case 410:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }

    break;

  case 411:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }

    break;

  case 412:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }

    break;

  case 413:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }

    break;

  case 414:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }

    break;

  case 415:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 416:

    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }

    break;

  case 417:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 418:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 419:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 420:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 421:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }

    break;

  case 422:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 423:

    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 424:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 425:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 426:

    { (yyval.ast) = NULL; }

    break;

  case 427:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 428:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 429:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 430:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 431:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 432:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 433:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 434:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 435:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 436:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 437:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 438:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 439:

    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 440:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 441:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 442:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 443:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 444:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 445:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 446:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 447:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 448:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 449:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 450:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 451:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }

    break;

  case 452:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 453:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 454:

    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 455:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 456:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 457:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 458:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 459:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 460:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 461:

    { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }

    break;

  case 462:

    { (yyval.ast) = NULL; }

    break;

  case 463:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 464:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 465:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }

    break;

  case 466:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }

    break;

  case 467:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }

    break;

  case 468:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }

    break;

  case 469:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }

    break;

  case 470:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }

    break;

  case 471:

    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }

    break;

  case 472:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 473:

    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 474:

    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }

    break;

  case 475:

    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }

    break;

  case 476:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 477:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }

    break;

  case 478:

    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }

    break;

  case 479:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 480:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }

    break;

  case 481:

    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }

    break;

  case 482:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 483:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 484:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 485:

    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }

    break;

  case 486:

    { (yyval.ast) = (yyvsp[-1].ast); }

    break;

  case 487:

    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }

    break;

  case 488:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }

    break;

  case 489:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }

    break;

  case 490:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }

    break;

  case 491:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }

    break;

  case 492:

    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }

    break;

  case 493:

    { (yyval.ast) = (yyvsp[0].ast); }

    break;

  case 494:

    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }

    break;

  case 495:

    { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }

    break;



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



/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
		unsigned int len = 0, toklen = 0, yystr_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		str = LANG_SCNG(yy_text);
		end = memchr(str, '\n', LANG_SCNG(yy_leng));
		yystr_len = (unsigned int)yystrlen(yystr);

		if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
			&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
			toklen = (tok2 - tok1) + 1;
		} else {
			tok1 = tok2 = NULL;
			toklen = 0;
		}

		if (end == NULL) {
			len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
		} else {
			len = (end - str) > 30 ? 30 : (end - str);
		}
		if (yyres) {
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
		}
		return len + (toklen ? toklen + 1 : 0) + 2;
	}

	/* One of the expected tokens */
	if (!yyres) {
		return yystrlen(yystr) - (*yystr == '"' ? 2 : 0);
	}

	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
