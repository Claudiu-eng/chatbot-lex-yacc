/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "proiect.y"

typedef struct _node{
  char* type;
  struct _node* first;
  struct _node* second;
  struct _node* third;
  struct _node* fourth;
  char* value;
} node;
	
node* setConst(char* type);
node *opr1(char* type, node *first);
node* opr2(char* type, node* first, node* second);
node *opr3(char* type, node *first, node *second, node *third);
node *opr4(char* type, node *first, node *second, node *third ,node *fourth);
void printpre(node *opr,int nr);


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#include <mysql/mysql.h>


#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int state=0;
MYSQL* con;	
char numeMedicament[50];
char numeSimptom[50];
int treeFile=-1;

char* getList(char* a,char* b);
char* getL(char* a);
char* getString(char* a,char* b);
char* getString1(char* a,char* b);

#line 114 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DRUG = 258,                    /* DRUG  */
    GAT = 259,                     /* GAT  */
    SIMPTOM = 260,                 /* SIMPTOM  */
    SALUT = 261,                   /* SALUT  */
    HOW = 262,                     /* HOW  */
    MEDS = 263,                    /* MEDS  */
    BENEFITS = 264,                /* BENEFITS  */
    DRAWBACK = 265,                /* DRAWBACK  */
    HELP = 266,                    /* HELP  */
    EATING = 267,                  /* EATING  */
    NOT = 268                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DRUG 258
#define GAT 259
#define SIMPTOM 260
#define SALUT 261
#define HOW 262
#define MEDS 263
#define BENEFITS 264
#define DRAWBACK 265
#define HELP 266
#define EATING 267
#define NOT 268

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 46 "proiect.y"

	char* str;
    node* tree;

#line 198 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DRUG = 3,                       /* DRUG  */
  YYSYMBOL_GAT = 4,                        /* GAT  */
  YYSYMBOL_SIMPTOM = 5,                    /* SIMPTOM  */
  YYSYMBOL_SALUT = 6,                      /* SALUT  */
  YYSYMBOL_HOW = 7,                        /* HOW  */
  YYSYMBOL_MEDS = 8,                       /* MEDS  */
  YYSYMBOL_BENEFITS = 9,                   /* BENEFITS  */
  YYSYMBOL_DRAWBACK = 10,                  /* DRAWBACK  */
  YYSYMBOL_HELP = 11,                      /* HELP  */
  YYSYMBOL_EATING = 12,                    /* EATING  */
  YYSYMBOL_NOT = 13,                       /* NOT  */
  YYSYMBOL_14_n_ = 14,                     /* '\n'  */
  YYSYMBOL_YYACCEPT = 15,                  /* $accept  */
  YYSYMBOL_program = 16,                   /* program  */
  YYSYMBOL_simple_exec = 17,               /* simple_exec  */
  YYSYMBOL_salut_exec = 18,                /* salut_exec  */
  YYSYMBOL_exec_tratement = 19,            /* exec_tratement  */
  YYSYMBOL_simptom_prescriptions = 20,     /* simptom_prescriptions  */
  YYSYMBOL_exec_general = 21,              /* exec_general  */
  YYSYMBOL_general_prescriptions = 22,     /* general_prescriptions  */
  YYSYMBOL_general_benefits = 23,          /* general_benefits  */
  YYSYMBOL_general_drawbacks = 24,         /* general_drawbacks  */
  YYSYMBOL_exec_medicament = 25,           /* exec_medicament  */
  YYSYMBOL_drugs_prescriptions = 26,       /* drugs_prescriptions  */
  YYSYMBOL_drugs_benefits = 27,            /* drugs_benefits  */
  YYSYMBOL_drugs_drawbacks = 28,           /* drugs_drawbacks  */
  YYSYMBOL_exec_reteta = 29,               /* exec_reteta  */
  YYSYMBOL_medicine = 30,                  /* medicine  */
  YYSYMBOL_medicine_benefits = 31,         /* medicine_benefits  */
  YYSYMBOL_medicine_drawbacks = 32,        /* medicine_drawbacks  */
  YYSYMBOL_food = 33,                      /* food  */
  YYSYMBOL_help = 34,                      /* help  */
  YYSYMBOL_simptom = 35,                   /* simptom  */
  YYSYMBOL_gat = 36,                       /* gat  */
  YYSYMBOL_drug = 37,                      /* drug  */
  YYSYMBOL_drawback = 38,                  /* drawback  */
  YYSYMBOL_not = 39,                       /* not  */
  YYSYMBOL_how = 40,                       /* how  */
  YYSYMBOL_meds = 41,                      /* meds  */
  YYSYMBOL_benefits = 42,                  /* benefits  */
  YYSYMBOL_eating = 43                     /* eating  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  15
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   268


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      14,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    67,    68,    69,    70,    71,    72,    75,
      76,    77,    78,    83,    87,    88,    93,    95,    97,    99,
     101,   103,   105,   112,   113,   114,   118,   120,   123,   124,
     125,   129,   130,   131,   132,   133,   134,   135,   139,   140,
     141,   145,   147,   151,   152,   153,   154,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   173,
     174,   177,   179,   180,   182,   183,   189,   190,   191,   192,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   212,   212,   213,   214,   215,   216,   217,
     220,   223,   226,   229,   233,   236,   240,   243,   247,   250
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DRUG", "GAT",
  "SIMPTOM", "SALUT", "HOW", "MEDS", "BENEFITS", "DRAWBACK", "HELP",
  "EATING", "NOT", "'\\n'", "$accept", "program", "simple_exec",
  "salut_exec", "exec_tratement", "simptom_prescriptions", "exec_general",
  "general_prescriptions", "general_benefits", "general_drawbacks",
  "exec_medicament", "drugs_prescriptions", "drugs_benefits",
  "drugs_drawbacks", "exec_reteta", "medicine", "medicine_benefits",
  "medicine_drawbacks", "food", "help", "simptom", "gat", "drug",
  "drawback", "not", "how", "meds", "benefits", "eating", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-33)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-16)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -33,    90,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   105,    -9,   -33,     0,
     -33,   -33,   -33,     2,   -33,   -33,   -33,     3,    15,   -33,
     -33,   -33,    13,    -1,    30,   112,    68,    24,    60,    64,
      72,     7,   -33,   -33,   -33,   -33,   -33,   -33,   -33,    38,
      30,    30,    42,   -33,    44,   -33,   -33,    36,    15,    64,
      68,    64,    36,    42,    44,   -33,    36,   -33,   -33,    15,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,    15,   -33,   -33,
      42,    44,   -33,   -33,    50,    42,    44,   -33,    50,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     7,    93,    92,    91,    13,    96,    97,
      98,    94,    90,    99,    95,     4,     6,     0,    14,     0,
      23,    25,    24,     0,    38,    40,    39,     0,    60,    64,
      65,    59,     0,    17,    18,     0,    31,     0,    26,    61,
      28,    84,     5,    12,    11,    10,     9,    62,     3,     0,
      16,    19,    49,    42,    45,    47,    70,    33,    86,    41,
      32,    63,    29,    72,    68,    43,    35,    30,    66,    87,
      85,    21,    20,    22,    53,    57,    51,     0,    74,    88,
      50,    46,    48,    71,    34,    73,    69,    44,    37,    67,
      76,    80,    55,    36,    78,    89,    82,    54,    58,    52,
      75,    77,    81,    56,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -33,   -33,    41,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -32,   -27,   -29,   -14,    25,    48,   -28,    26,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      47,    49,    51,     5,     6,    43,    50,    55,    56,    59,
      61,    65,    68,    70,    44,     9,    45,    46,    72,    73,
      14,    52,    71,     9,    60,    63,    66,    48,    76,    78,
      79,    82,    83,    87,    89,     6,    13,    92,    94,     4,
      75,    95,     5,    77,     9,    80,    11,    85,    88,    96,
      91,    10,    93,     4,    11,    99,   100,    42,     9,   103,
     104,    54,    57,     4,    62,    64,    69,    98,     9,    10,
      11,     4,   102,    10,    11,     4,     9,    10,    74,     8,
       9,     0,    11,    53,    58,    81,    84,    86,    67,    90,
       2,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   -15,     0,    97,     0,     4,     5,
       6,   101,     8,     9,    10,    11,     0,    13,    14,     8,
       0,    10,    11
};

static const yytype_int8 yycheck[] =
{
      28,    33,    34,     4,     5,    14,    33,    36,    36,    38,
      38,    40,    40,    41,    14,     8,    14,    14,    50,    51,
      13,    35,    49,     8,    38,    39,    40,    14,    57,    57,
      58,    60,    60,    62,    62,     5,    12,    66,    66,     3,
      54,    69,     4,    57,     8,    59,    10,    61,    62,    77,
      64,     9,    66,     3,    10,    84,    84,    16,     8,    88,
      88,    35,    36,     3,    38,    39,    41,    81,     8,     9,
      10,     3,    86,     9,    10,     3,     8,     9,    52,     7,
       8,    -1,    10,    35,    37,    59,    60,    61,    40,    63,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    80,    -1,     3,     4,
       5,    85,     7,     8,     9,    10,    -1,    12,    13,     7,
      -1,     9,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    17,    14,    14,    14,    14,    41,    14,    35,
      36,    35,    38,    40,    42,    37,    41,    42,    43,    37,
      38,    41,    42,    38,    42,    37,    38,    40,    41,    39,
      41,    36,    35,    35,    42,    38,    37,    38,    41,    41,
      38,    42,    37,    41,    42,    38,    42,    37,    38,    41,
      42,    38,    37,    38,    41,    41,    41,    42,    38,    37,
      41,    42,    38,    37,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    15,    16,    16,    16,    16,    16,    16,    16,    17,
      17,    17,    17,    18,    19,    19,    20,    20,    20,    20,
      20,    20,    20,    21,    21,    21,    22,    22,    23,    23,
      23,    24,    24,    24,    24,    24,    24,    24,    25,    25,
      25,    26,    26,    27,    27,    27,    27,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    29,
      29,    30,    30,    30,    30,    30,    31,    31,    31,    31,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    33,    33,    33,    33,    33,    33,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     2,     3,     2,     2,     0,     2,
       2,     2,     2,     1,     1,     0,     2,     1,     1,     2,
       3,     3,     3,     1,     1,     1,     1,     0,     1,     2,
       2,     1,     2,     2,     3,     2,     3,     3,     1,     1,
       1,     2,     2,     2,     3,     2,     3,     2,     3,     2,
       3,     3,     4,     3,     4,     3,     4,     3,     4,     1,
       1,     1,     2,     2,     1,     1,     2,     3,     2,     3,
       2,     3,     2,     3,     3,     4,     3,     4,     3,     4,
       3,     4,     4,     0,     1,     2,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* program: program help '\n'  */
#line 67 "proiect.y"
                                        {helpUser();}
#line 1299 "y.tab.c"
    break;

  case 4: /* program: program simple_exec  */
#line 68 "proiect.y"
                                            {printpre((yyvsp[0].tree),1);}
#line 1305 "y.tab.c"
    break;

  case 5: /* program: program salut_exec simple_exec  */
#line 69 "proiect.y"
                                                   {(yyval.tree)=opr2("root",(yyvsp[-1].tree),(yyvsp[0].tree));printpre((yyval.tree),1);}
#line 1311 "y.tab.c"
    break;

  case 6: /* program: program salut_exec  */
#line 70 "proiect.y"
                                          {printpre((yyvsp[0].tree),1);}
#line 1317 "y.tab.c"
    break;

  case 7: /* program: program error  */
#line 71 "proiect.y"
                                    {puts("eroaredsA");}
#line 1323 "y.tab.c"
    break;

  case 9: /* simple_exec: exec_reteta '\n'  */
#line 75 "proiect.y"
                                       {state=1; (yyval.tree)=opr1("simple_exec",(yyvsp[-1].tree));}
#line 1329 "y.tab.c"
    break;

  case 10: /* simple_exec: exec_medicament '\n'  */
#line 76 "proiect.y"
                                         {state=2;(yyval.tree)=opr1("simple_exec",(yyvsp[-1].tree));}
#line 1335 "y.tab.c"
    break;

  case 11: /* simple_exec: exec_general '\n'  */
#line 77 "proiect.y"
                                        {(yyval.tree)=opr1("simple_exec",(yyvsp[-1].tree));}
#line 1341 "y.tab.c"
    break;

  case 12: /* simple_exec: exec_tratement '\n'  */
#line 78 "proiect.y"
                                          {state=3;(yyval.tree)=opr1("simple_exec",(yyvsp[-1].tree));}
#line 1347 "y.tab.c"
    break;

  case 13: /* salut_exec: SALUT  */
#line 83 "proiect.y"
                            {  (yyval.tree)=setConst("SALUT");puts("Salut");}
#line 1353 "y.tab.c"
    break;

  case 14: /* exec_tratement: simptom_prescriptions  */
#line 87 "proiect.y"
                                            {(yyval.tree)=opr1("Exec_tratament",(yyvsp[0].tree));}
#line 1359 "y.tab.c"
    break;

  case 16: /* simptom_prescriptions: simptom gat  */
#line 93 "proiect.y"
                                        { puts(numeSimptom);
                                    print_treatment();(yyval.tree)=opr2("Simptom_prescriptions",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1366 "y.tab.c"
    break;

  case 17: /* simptom_prescriptions: simptom  */
#line 95 "proiect.y"
                                       {  puts(numeSimptom);
                                    print_treatment();(yyval.tree)=opr1("Simptom_prescriptions",(yyvsp[0].tree));}
#line 1373 "y.tab.c"
    break;

  case 18: /* simptom_prescriptions: gat  */
#line 97 "proiect.y"
                                    {  puts(numeSimptom);
                                    print_treatment();(yyval.tree)=opr1("Simptom_prescriptions",(yyvsp[0].tree));}
#line 1380 "y.tab.c"
    break;

  case 19: /* simptom_prescriptions: gat simptom  */
#line 99 "proiect.y"
                                           {  puts(numeSimptom);
                                    print_treatment();(yyval.tree)=opr2("Simptom_prescriptions",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1387 "y.tab.c"
    break;

  case 20: /* simptom_prescriptions: simptom gat simptom  */
#line 101 "proiect.y"
                                                   {  puts(numeSimptom);
                                    print_treatment();(yyval.tree)=opr3("Simptom_prescriptions",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1394 "y.tab.c"
    break;

  case 21: /* simptom_prescriptions: simptom simptom gat  */
#line 103 "proiect.y"
                                                    {  puts(numeSimptom);
                                    print_treatment();(yyval.tree)=opr3("Simptom_prescriptions",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1401 "y.tab.c"
    break;

  case 22: /* simptom_prescriptions: gat simptom simptom  */
#line 105 "proiect.y"
                                                   {  puts(numeSimptom);
                                    print_treatment();(yyval.tree)=opr3("Simptom_prescriptions",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1408 "y.tab.c"
    break;

  case 23: /* exec_general: general_prescriptions  */
#line 112 "proiect.y"
                                                {(yyval.tree)=opr1("Exec_general",(yyvsp[0].tree));}
#line 1414 "y.tab.c"
    break;

  case 24: /* exec_general: general_drawbacks  */
#line 113 "proiect.y"
                                            {(yyval.tree)=opr1("Exec_general",(yyvsp[0].tree));}
#line 1420 "y.tab.c"
    break;

  case 25: /* exec_general: general_benefits  */
#line 114 "proiect.y"
                                                    {(yyval.tree)=opr1("Exec_general",(yyvsp[0].tree));}
#line 1426 "y.tab.c"
    break;

  case 26: /* general_prescriptions: how  */
#line 118 "proiect.y"
                                  {  
                                    print_general(0);(yyval.tree)=opr1("General_prescriptions",(yyvsp[0].tree));}
#line 1433 "y.tab.c"
    break;

  case 28: /* general_benefits: benefits  */
#line 123 "proiect.y"
                               {  print_general(1);(yyval.tree)=opr1("General_prescriptions",(yyvsp[0].tree));}
#line 1439 "y.tab.c"
    break;

  case 29: /* general_benefits: how benefits  */
#line 124 "proiect.y"
                                    { print_general(1);(yyval.tree)=opr2("General_prescriptions",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1445 "y.tab.c"
    break;

  case 30: /* general_benefits: benefits how  */
#line 125 "proiect.y"
                                  {  print_general(1);(yyval.tree)=opr2("General_prescriptions",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1451 "y.tab.c"
    break;

  case 31: /* general_drawbacks: drawback  */
#line 129 "proiect.y"
                               {  print_general(2);(yyval.tree)=opr1("General_drawbacks",(yyvsp[0].tree));}
#line 1457 "y.tab.c"
    break;

  case 32: /* general_drawbacks: how drawback  */
#line 130 "proiect.y"
                                 {   print_general(2);(yyval.tree)=opr2("General_prescriptions",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1463 "y.tab.c"
    break;

  case 33: /* general_drawbacks: drawback benefits  */
#line 131 "proiect.y"
                                        {   print_general(2);(yyval.tree)=opr2("General_prescriptions",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1469 "y.tab.c"
    break;

  case 34: /* general_drawbacks: how drawback benefits  */
#line 132 "proiect.y"
                                          {print_general(2);(yyval.tree)=opr3("General_prescriptions",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1475 "y.tab.c"
    break;

  case 35: /* general_drawbacks: benefits drawback  */
#line 133 "proiect.y"
                                       {   print_general(2);(yyval.tree)=opr2("General_prescriptions",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1481 "y.tab.c"
    break;

  case 36: /* general_drawbacks: benefits drawback drawback  */
#line 134 "proiect.y"
                                               {   print_general(2);(yyval.tree)=opr3("General_prescriptions",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1487 "y.tab.c"
    break;

  case 37: /* general_drawbacks: how benefits drawback  */
#line 135 "proiect.y"
                                           {print_general(2);(yyval.tree)=opr3("General_prescriptions",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1493 "y.tab.c"
    break;

  case 38: /* exec_medicament: drugs_prescriptions  */
#line 139 "proiect.y"
                                            {(yyval.tree)=opr1("Exec_medicament",(yyvsp[0].str));}
#line 1499 "y.tab.c"
    break;

  case 39: /* exec_medicament: drugs_drawbacks  */
#line 140 "proiect.y"
                                            {(yyval.tree)=opr1("Exec_medicament",(yyvsp[0].str));}
#line 1505 "y.tab.c"
    break;

  case 40: /* exec_medicament: drugs_benefits  */
#line 141 "proiect.y"
                                                    {(yyval.tree)=opr1("Exec_medicament",(yyvsp[0].str));}
#line 1511 "y.tab.c"
    break;

  case 41: /* drugs_prescriptions: how drug  */
#line 145 "proiect.y"
                                       { puts(numeMedicament);
                                    print_medicament_prescriptie();(yyval.str)=opr2("Drug_prescription",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1518 "y.tab.c"
    break;

  case 42: /* drugs_prescriptions: drug how  */
#line 147 "proiect.y"
                                        {
                                    print_medicament_prescriptie();(yyval.str)=opr2("Drug_prescription",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1525 "y.tab.c"
    break;

  case 43: /* drugs_benefits: benefits drug  */
#line 151 "proiect.y"
                                    {puts(numeMedicament); print_medicament_beneficii();(yyval.str)=opr2("drugs_benefits",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1531 "y.tab.c"
    break;

  case 44: /* drugs_benefits: how benefits drug  */
#line 152 "proiect.y"
                                        {puts(numeMedicament); print_medicament_beneficii();(yyval.str)=opr3("drugs_benefits",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1537 "y.tab.c"
    break;

  case 45: /* drugs_benefits: drug benefits  */
#line 153 "proiect.y"
                                    {puts(numeMedicament); print_medicament_beneficii();(yyval.str)=opr2("drugs_benefits",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1543 "y.tab.c"
    break;

  case 46: /* drugs_benefits: how drug benefits  */
#line 154 "proiect.y"
                                       {puts(numeMedicament); print_medicament_beneficii();(yyval.str)=opr3("drugs_benefits",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1549 "y.tab.c"
    break;

  case 47: /* drugs_drawbacks: drawback drug  */
#line 158 "proiect.y"
                                    {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr2("Drug_drawback",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1555 "y.tab.c"
    break;

  case 48: /* drugs_drawbacks: how drawback drug  */
#line 159 "proiect.y"
                                        {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr3("Drub_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1561 "y.tab.c"
    break;

  case 49: /* drugs_drawbacks: drug drawback  */
#line 160 "proiect.y"
                                    {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr2("Drub_drawbacks",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1567 "y.tab.c"
    break;

  case 50: /* drugs_drawbacks: how drug drawback  */
#line 161 "proiect.y"
                                       {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr3("Drub_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1573 "y.tab.c"
    break;

  case 51: /* drugs_drawbacks: drawback benefits drug  */
#line 162 "proiect.y"
                                             {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr3("Drub_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1579 "y.tab.c"
    break;

  case 52: /* drugs_drawbacks: how drawback benefits drug  */
#line 163 "proiect.y"
                                                 {puts(numeMedicament);print_medicament_riscuri();(yyval.str)=opr4("Drub_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1585 "y.tab.c"
    break;

  case 53: /* drugs_drawbacks: drug drawback benefits  */
#line 164 "proiect.y"
                                            {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr3("Drub_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1591 "y.tab.c"
    break;

  case 54: /* drugs_drawbacks: how drug drawback benefits  */
#line 165 "proiect.y"
                                                {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr4("Drub_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1597 "y.tab.c"
    break;

  case 55: /* drugs_drawbacks: benefits drawback drug  */
#line 166 "proiect.y"
                                             {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr3("Drub_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1603 "y.tab.c"
    break;

  case 56: /* drugs_drawbacks: how benefits drawback drug  */
#line 167 "proiect.y"
                                                 {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr3("Drub_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree));}
#line 1609 "y.tab.c"
    break;

  case 57: /* drugs_drawbacks: drug benefits drawback  */
#line 168 "proiect.y"
                                             {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr3("Drub_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1615 "y.tab.c"
    break;

  case 58: /* drugs_drawbacks: how drug benefits drawback  */
#line 169 "proiect.y"
                                                {puts(numeMedicament); print_medicament_riscuri();(yyval.str)=opr4("Drub_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1621 "y.tab.c"
    break;

  case 61: /* medicine: meds  */
#line 177 "proiect.y"
                            {print_medicamente();
                                (yyval.tree)=opr1("Medicine",(yyvsp[0].tree));}
#line 1628 "y.tab.c"
    break;

  case 63: /* medicine: how meds  */
#line 180 "proiect.y"
                                {print_medicamente_administrare();
                                (yyval.tree) = opr2("Medicine",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1635 "y.tab.c"
    break;

  case 64: /* medicine: medicine_benefits  */
#line 182 "proiect.y"
                                        {(yyval.tree)=opr1("Medicine",(yyvsp[0].tree));}
#line 1641 "y.tab.c"
    break;

  case 65: /* medicine: medicine_drawbacks  */
#line 183 "proiect.y"
                                        {(yyval.tree)=opr1("Medicine",(yyvsp[0].tree));}
#line 1647 "y.tab.c"
    break;

  case 66: /* medicine_benefits: benefits meds  */
#line 189 "proiect.y"
                                   {print_medicamente_beneficii();(yyval.tree)=opr2("Medicine_benefits",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1653 "y.tab.c"
    break;

  case 67: /* medicine_benefits: how benefits meds  */
#line 190 "proiect.y"
                                        {print_medicamente_beneficii();(yyval.tree)=opr3("Medicine_benefits",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1659 "y.tab.c"
    break;

  case 68: /* medicine_benefits: meds benefits  */
#line 191 "proiect.y"
                                    {print_medicamente_beneficii();(yyval.tree)=opr2("Medicine_benefits",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1665 "y.tab.c"
    break;

  case 69: /* medicine_benefits: how meds benefits  */
#line 192 "proiect.y"
                                       {print_medicamente_beneficii();(yyval.tree)=opr3("Medicine_benefits",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1671 "y.tab.c"
    break;

  case 70: /* medicine_drawbacks: drawback meds  */
#line 197 "proiect.y"
                                    {print_medicamente_riscuri();(yyval.tree)=opr2("Medicine_drawbacks11",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1677 "y.tab.c"
    break;

  case 71: /* medicine_drawbacks: how drawback meds  */
#line 198 "proiect.y"
                                        {print_medicamente_riscuri();(yyval.tree)=opr3("Medicine_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1683 "y.tab.c"
    break;

  case 72: /* medicine_drawbacks: meds drawback  */
#line 199 "proiect.y"
                                    {print_medicamente_riscuri();(yyval.tree)=opr2("Medicine_drawbacks3",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1689 "y.tab.c"
    break;

  case 73: /* medicine_drawbacks: how meds drawback  */
#line 200 "proiect.y"
                                       {print_medicamente_riscuri();(yyval.tree)=opr3("Medicine_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1695 "y.tab.c"
    break;

  case 74: /* medicine_drawbacks: drawback benefits meds  */
#line 201 "proiect.y"
                                             {print_medicamente_riscuri();(yyval.tree)=opr3("Medicine_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1701 "y.tab.c"
    break;

  case 75: /* medicine_drawbacks: how drawback benefits meds  */
#line 202 "proiect.y"
                                                 {print_medicamente_riscuri();(yyval.tree)=opr4("Medicine_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1707 "y.tab.c"
    break;

  case 76: /* medicine_drawbacks: meds drawback benefits  */
#line 203 "proiect.y"
                                            {print_medicamente_riscuri();(yyval.tree)=opr3("Medicine_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1713 "y.tab.c"
    break;

  case 77: /* medicine_drawbacks: how meds drawback benefits  */
#line 204 "proiect.y"
                                                {print_medicamente_riscuri();(yyval.tree)=opr4("Medicine_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1719 "y.tab.c"
    break;

  case 78: /* medicine_drawbacks: benefits drawback meds  */
#line 205 "proiect.y"
                                             {print_medicamente_riscuri();(yyval.tree)=opr3("Medicine_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1725 "y.tab.c"
    break;

  case 79: /* medicine_drawbacks: how benefits drawback meds  */
#line 206 "proiect.y"
                                                  {print_medicamente_riscuri();(yyval.tree)=opr4("Medicine_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1731 "y.tab.c"
    break;

  case 80: /* medicine_drawbacks: meds benefits drawback  */
#line 207 "proiect.y"
                                             {print_medicamente_riscuri();(yyval.tree)=opr3("Medicine_drawbacks",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1737 "y.tab.c"
    break;

  case 81: /* medicine_drawbacks: how meds benefits drawback  */
#line 208 "proiect.y"
                                                {print_medicamente_riscuri();(yyval.tree)=opr4("Medicine_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1743 "y.tab.c"
    break;

  case 82: /* medicine_drawbacks: drawback benefits drawback meds  */
#line 209 "proiect.y"
                                                     {print_medicamente_riscuri();(yyval.tree)=opr4("Medicine_drawbacks",(yyvsp[-3].tree),(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1749 "y.tab.c"
    break;

  case 84: /* food: eating  */
#line 212 "proiect.y"
                           {print_goodFoodList();{(yyval.tree)=opr1("Food",(yyvsp[0].tree));}}
#line 1755 "y.tab.c"
    break;

  case 85: /* food: eating meds  */
#line 213 "proiect.y"
                                {print_goodFoodList();(yyval.tree)=opr2("Food",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1761 "y.tab.c"
    break;

  case 86: /* food: not eating  */
#line 214 "proiect.y"
                               {print_badFoodList();(yyval.tree)=opr2("Food",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1767 "y.tab.c"
    break;

  case 87: /* food: eating not  */
#line 215 "proiect.y"
                               {print_badFoodList();(yyval.tree)=opr2("Food",(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1773 "y.tab.c"
    break;

  case 88: /* food: not eating meds  */
#line 216 "proiect.y"
                                    {print_badFoodList();(yyval.tree)=opr3("Food",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1779 "y.tab.c"
    break;

  case 89: /* food: eating not meds  */
#line 217 "proiect.y"
                                    {print_badFoodList();(yyval.tree)=opr3("Food",(yyvsp[-2].tree),(yyvsp[-1].tree),(yyvsp[0].tree));}
#line 1785 "y.tab.c"
    break;

  case 90: /* help: HELP  */
#line 220 "proiect.y"
                        {(yyval.tree)=setConst("HELP");}
#line 1791 "y.tab.c"
    break;

  case 91: /* simptom: SIMPTOM  */
#line 223 "proiect.y"
                           {strcpy(numeSimptom,(yyvsp[0].str));(yyval.tree)=setConst("SIMPTOM");}
#line 1797 "y.tab.c"
    break;

  case 92: /* gat: GAT  */
#line 226 "proiect.y"
                        {strcpy(numeSimptom,(yyvsp[0].str));(yyval.tree)=setConst("GAT");}
#line 1803 "y.tab.c"
    break;

  case 93: /* drug: DRUG  */
#line 229 "proiect.y"
                        {strcpy(numeMedicament,(yyvsp[0].str));(yyval.tree)=setConst("DRUG");}
#line 1809 "y.tab.c"
    break;

  case 94: /* drawback: DRAWBACK  */
#line 233 "proiect.y"
                            {(yyval.tree)=setConst("DRAWBACK");}
#line 1815 "y.tab.c"
    break;

  case 95: /* not: NOT  */
#line 236 "proiect.y"
                        {(yyval.tree)=setConst("NOT");}
#line 1821 "y.tab.c"
    break;

  case 96: /* how: HOW  */
#line 240 "proiect.y"
                        {(yyval.tree)=setConst("HOW");}
#line 1827 "y.tab.c"
    break;

  case 97: /* meds: MEDS  */
#line 243 "proiect.y"
                        {(yyval.tree)=setConst("MEDS");}
#line 1833 "y.tab.c"
    break;

  case 98: /* benefits: BENEFITS  */
#line 247 "proiect.y"
                            {(yyval.tree)=setConst("BENEFITS");}
#line 1839 "y.tab.c"
    break;

  case 99: /* eating: EATING  */
#line 250 "proiect.y"
                            {(yyval.tree)=setConst("EATING");}
#line 1845 "y.tab.c"
    break;


#line 1849 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 254 "proiect.y"


void helpUser(){

    puts("Sunt asistentul tau virtual si am ca misiune sa asist si sprijin urmarea tratamentului prescris de dl doctor. \nRaspund la orice fel de intrebari legate de medicamentele din reteta din ziua curenta cat si despre dieta, ofer informatii despre fiecare medicament in parte.\nSi in plus poti sa-mi descrii o afectiune simpla (cum ar fi o durere) pe care incerc sa o tratez.\nCu ce iti pot fi de folos?\n");

}
void print_treatment(){
    

    char interogare[200];

    sprintf(interogare, "SELECT nume, mod_administrare FROM tratament WHERE simptom = \'%s\'",numeSimptom);


    if (mysql_query(con, interogare)) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }
    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    printf("Pentru afectiunea ta iti recomanda sa iei: ");
    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
    
}

void print_general(int type){
    printf("%d\n",state);
    char var[50]="medicament";

    if(state==3){
        strcpy(var,"tratament");
    } 

    if( state == 0 ){
        puts("Nu inteleg exact la ce anume te referi, poti sa fii mai specific?");
        return 1;
    }

    char interogare[400];
    char intrebare[400];
    if(type == 0)
        sprintf(intrebare, "SELECT nume, mod_administrare FROM %s",var);
    else if(type == 1)
        sprintf(intrebare, "SELECT nume, beneficii FROM %s",var);
    else
        sprintf(intrebare, "SELECT nume, efecte_adverse FROM %s",var);

    if(state == 1)
    {
        sprintf(interogare,intrebare);
    }
    else if(state == 2)
    {
        sprintf(interogare, "%s WHERE nume = \'%s\'",intrebare, numeMedicament);
    }
    else
    {
        sprintf(interogare, "%s WHERE simptom = \'%s\'",intrebare, numeSimptom);
    }
    
    if (mysql_query(con, interogare)) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }
    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;


    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicament_riscuri(){

    if(numeMedicament[0]>='a' && numeMedicament[0]<='z')
        numeMedicament[0]-=32;
    else numeMedicament[0]+=32;

    char interogare[400];
    
    sprintf(interogare, "SELECT nume, efecte_adverse FROM medicament WHERE nume = \'%s\'", numeMedicament);


    if (mysql_query(con, interogare)) {
        puts("eroare");
       mysql_close(con);
       return 1;
        
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;


    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicament_prescriptie(){

    if(numeMedicament[0]>='a' && numeMedicament[0]<='z')
        numeMedicament[0]-=32;
    else numeMedicament[0]+=32;

    char interogare[400];
    
    sprintf(interogare, "SELECT nume, mod_administrare FROM medicament WHERE nume = \'%s\'", numeMedicament);


    if (mysql_query(con, interogare)) {
        puts("eroare");
       mysql_close(con);
       return 1;
        
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;


    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicament_beneficii(){

    if(numeMedicament[0]>='a' && numeMedicament[0]<='z')
        numeMedicament[0]-=32;
    else numeMedicament[0]+=32;

    char interogare[400];
    
    sprintf(interogare, "SELECT nume, beneficii FROM medicament WHERE nume = \'%s\'", numeMedicament);


    if (mysql_query(con, interogare)) {
        puts("eroare");
       mysql_close(con);
       return 1;
        
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    int q=0;

    while ((row = mysql_fetch_row(result))) {
        q=1;
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    if(q==0){
        puts("NU am gasit medicamentul cautat");
    }

    puts(""); 
}

void print_medicamente_administrare(){

   
    if (mysql_query(con, "SELECT nume,mod_administrare FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    printf("Pentru astazi, conform retetei, trebuie sa iei urmatoarele medicamente:\n ");
    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicamente_beneficii(){

   
    if (mysql_query(con, "SELECT nume,beneficii FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicamente_riscuri(){

   
    if (mysql_query(con, "SELECT nume,efecte_adverse FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts("");
}

void print_goodFoodList(){

    if (mysql_query(con, "SELECT nume FROM mancare_recomandata")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    puts("Din reteta eu iti recomand sa incerci din urmatoarele preparate");

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
        }
       puts("");
    } 
    puts("");
}

void print_badFoodList(){

    if (mysql_query(con, "SELECT nume FROM mancare_nerecomandata")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

     puts("Din reteta iti recomand sa  eviti urmatoarele preparate: ");

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
        }
       puts("");
    }
    puts(""); 
}

void print_medicamente(){

   
    if (mysql_query(con, "SELECT nume FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    printf("Pentru astazi, conform retetei aveti de luat urmatoarele medicamente: \n");

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s\n",row[i]);
        }
      
    } 
    puts("");
}

void yyerror(){
    puts("Nu inteleg intrebarea pusa!\nPentru asistenta , tastati : --ajutor \n");
}

node *opr1(char* type, node *first){
    

   node *p;
   p=(node*)malloc(sizeof(node));
   p->type=type;
   p->first=first;

    p->second=NULL;
    p->third=NULL;
    p->fourth=NULL;

   return p;
}

node *opr2(char* type, node *first, node *second){
    

   node *p;
   p=(node*)malloc(sizeof(node));
   p->type=type;

   p->first=first;
   p->second = second;
    
    p->third=NULL;
    p->fourth=NULL;

    

   return p;
}

node *opr4(char* type, node *first, node *second, node *third,node *fourth){
   node *p;
   p=(node*)malloc(sizeof(node));
   p->type= type;
   p->first=first;
   p->second = second;
   p->third = third;
   p->fourth = fourth;

   
   return p;
}

node *opr3(char* type, node *first, node *second, node *third){
   node *p;
   p=(node*)malloc(sizeof(node));
   p->type= type;
   p->first=first;
   p->second = second;
   p->third = third;

    p->fourth=NULL;
   return p;
}

node* setConst(char* type){
   
   node* p;
   p=(node*)malloc(sizeof(node));

    p->first=NULL;
    p->second=NULL;
    p->third=NULL;
    p->fourth=NULL;
   p->type = type;
   return p;
}

void printpre(node *opr,int nr){
    

    if (opr == NULL)
       return ;
    
        
        write(treeFile,"\n",1);
        for(int i=0;i<nr;i++)
            write(treeFile," ",1);
		  
          write(treeFile,opr->type,strlen(opr->type));
          if(opr->first!=NULL)
            printpre(opr->first,nr+2);
		  if(opr->second!=NULL)
            printpre(opr->second,nr+2);
          if(opr->third!=NULL)
            printpre(opr->third,nr+2);
		  if(opr->fourth!=NULL)
            printpre(opr->fourth,nr+2);
		  
		  
    
    write(treeFile,"\n",1);
}


int main(){

    
    
    con = mysql_init(NULL);
    if (con == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(con));
        exit(1);
    }
    if (mysql_real_connect(con, "localhost", "root", "12345678",
        NULL, 0, NULL, 0) == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(con));
        mysql_close(con);
        exit(1);
    }


    if (mysql_query(con, "USE lftProiect"))
    {
        fprintf(stderr, "%s\n", mysql_error(con));
        mysql_close(con);
        exit(1);
    }

    treeFile = open("/home/claudiu/Desktop/Limbaje Formale si Translatoare/Project/arbore.txt",
                O_WRONLY | O_CREAT | O_TRUNC,777);
  
    if(treeFile==-1){
        puts("fisier creare eroare");
        return -1;
    }
    

    yyparse();

    fclose(treeFile);
    mysql_close(con);
    exit(0);

}
