/* Automatically generated from ./pptok.dat by ./pptok.pl */
/* Do not edit */

enum preproc_token {
    PP_ELIF          =   0,
    PP_ELIFN         =   1,
    PP_ELIFCTX       =   2,
    PP_ELIFNCTX      =   3,
    PP_ELIFDEF       =   4,
    PP_ELIFNDEF      =   5,
    PP_ELIFID        =   6,
    PP_ELIFNID       =   7,
    PP_ELIFIDN       =   8,
    PP_ELIFNIDN      =   9,
    PP_ELIFIDNI      =  10,
    PP_ELIFNIDNI     =  11,
    PP_ELIFMACRO     =  12,
    PP_ELIFNMACRO    =  13,
    PP_ELIFNUM       =  14,
    PP_ELIFNNUM      =  15,
    PP_ELIFSTR       =  16,
    PP_ELIFNSTR      =  17,
    PP_IF            =  32,
    PP_IFN           =  33,
    PP_IFCTX         =  34,
    PP_IFNCTX        =  35,
    PP_IFDEF         =  36,
    PP_IFNDEF        =  37,
    PP_IFID          =  38,
    PP_IFNID         =  39,
    PP_IFIDN         =  40,
    PP_IFNIDN        =  41,
    PP_IFIDNI        =  42,
    PP_IFNIDNI       =  43,
    PP_IFMACRO       =  44,
    PP_IFNMACRO      =  45,
    PP_IFNUM         =  46,
    PP_IFNNUM        =  47,
    PP_IFSTR         =  48,
    PP_IFNSTR        =  49,
    PP_ARG           =  64,
    PP_ASSIGN        =  65,
    PP_CLEAR         =  66,
    PP_DEFINE        =  67,
    PP_ELSE          =  68,
    PP_ENDIF         =  69,
    PP_ENDM          =  70,
    PP_ENDMACRO      =  71,
    PP_ENDREP        =  72,
    PP_ERROR         =  73,
    PP_EXITREP       =  74,
    PP_IASSIGN       =  75,
    PP_IDEFINE       =  76,
    PP_IMACRO        =  77,
    PP_INCLUDE       =  78,
    PP_IXDEFINE      =  79,
    PP_LINE          =  80,
    PP_LOCAL         =  81,
    PP_MACRO         =  82,
    PP_POP           =  83,
    PP_PUSH          =  84,
    PP_REP           =  85,
    PP_REPL          =  86,
    PP_ROTATE        =  87,
    PP_STACKSIZE     =  88,
    PP_STRLEN        =  89,
    PP_SUBSTR        =  90,
    PP_UNDEF         =  91,
    PP_XDEFINE       =  92,
    PP_INVALID       =  -1
};

enum pp_conditional {
    PPC_IF           =   0,
    PPC_IFCTX        =   2,
    PPC_IFDEF        =   4,
    PPC_IFID         =   6,
    PPC_IFIDN        =   8,
    PPC_IFIDNI       =  10,
    PPC_IFMACRO      =  12,
    PPC_IFNUM        =  14,
    PPC_IFSTR        =  16,
};

#define PP_COND(x)     ((enum pp_conditional)((x) & 0x1e))
#define PP_IS_COND(x)  ((unsigned int)(x) < PP_ARG)
#define PP_NEGATIVE(x) ((x) & 1)

#define CASE_PP_ELIF \
	case PP_ELIF: \
	case PP_ELIFN:\
	case PP_ELIFCTX: \
	case PP_ELIFNCTX:\
	case PP_ELIFDEF: \
	case PP_ELIFNDEF:\
	case PP_ELIFID: \
	case PP_ELIFNID:\
	case PP_ELIFIDN: \
	case PP_ELIFNIDN:\
	case PP_ELIFIDNI: \
	case PP_ELIFNIDNI:\
	case PP_ELIFMACRO: \
	case PP_ELIFNMACRO:\
	case PP_ELIFNUM: \
	case PP_ELIFNNUM:\
	case PP_ELIFSTR: \
	case PP_ELIFNSTR
#define CASE_PP_IF \
	case PP_IF: \
	case PP_IFN:\
	case PP_IFCTX: \
	case PP_IFNCTX:\
	case PP_IFDEF: \
	case PP_IFNDEF:\
	case PP_IFID: \
	case PP_IFNID:\
	case PP_IFIDN: \
	case PP_IFNIDN:\
	case PP_IFIDNI: \
	case PP_IFNIDNI:\
	case PP_IFMACRO: \
	case PP_IFNMACRO:\
	case PP_IFNUM: \
	case PP_IFNNUM:\
	case PP_IFSTR: \
	case PP_IFNSTR
