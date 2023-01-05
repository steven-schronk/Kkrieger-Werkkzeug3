/* This file auto-generated from insns.dat by insns.pl - don't edit it */

#include "nasm.h"
#include "insns.h"

static const struct itemplate instrux[] = {
    /*    0 */ {I_RESB, 1, {IMMEDIATE,0,0,0}, "\340", IF_8086},
    /*    1 */ {I_AAA, 0, {0,0,0,0}, "\1\x37", IF_8086|IF_NOLONG},
    /*    2 */ {I_AAD, 0, {0,0,0,0}, "\2\xD5\x0A", IF_8086|IF_NOLONG},
    /*    3 */ {I_AAD, 1, {IMMEDIATE,0,0,0}, "\1\xD5\24", IF_8086|IF_SB|IF_NOLONG},
    /*    4 */ {I_AAM, 0, {0,0,0,0}, "\2\xD4\x0A", IF_8086|IF_NOLONG},
    /*    5 */ {I_AAM, 1, {IMMEDIATE,0,0,0}, "\1\xD4\24", IF_8086|IF_SB|IF_NOLONG},
    /*    6 */ {I_AAS, 0, {0,0,0,0}, "\1\x3F", IF_8086|IF_NOLONG},
    /*    7 */ {I_ADC, 2, {MEMORY,REG8,0,0}, "\1\x10\101", IF_8086|IF_SM},
    /*    8 */ {I_ADC, 2, {REG8,REG8,0,0}, "\1\x10\101", IF_8086},
    /*    9 */ {I_ADC, 2, {MEMORY,REG16,0,0}, "\320\1\x11\101", IF_8086|IF_SM},
    /*   10 */ {I_ADC, 2, {REG16,REG16,0,0}, "\320\1\x11\101", IF_8086},
    /*   11 */ {I_ADC, 2, {MEMORY,REG32,0,0}, "\321\1\x11\101", IF_386|IF_SM},
    /*   12 */ {I_ADC, 2, {REG32,REG32,0,0}, "\321\1\x11\101", IF_386},
    /*   13 */ {I_ADC, 2, {MEMORY,REG64,0,0}, "\324\1\x11\101", IF_X64|IF_SM},
    /*   14 */ {I_ADC, 2, {REG64,REG64,0,0}, "\324\1\x11\101", IF_X64},
    /*   15 */ {I_ADC, 2, {REG8,MEMORY,0,0}, "\1\x12\110", IF_8086|IF_SM},
    /*   16 */ {I_ADC, 2, {REG8,REG8,0,0}, "\1\x12\110", IF_8086},
    /*   17 */ {I_ADC, 2, {REG16,MEMORY,0,0}, "\320\1\x13\110", IF_8086|IF_SM},
    /*   18 */ {I_ADC, 2, {REG16,REG16,0,0}, "\320\1\x13\110", IF_8086},
    /*   19 */ {I_ADC, 2, {REG32,MEMORY,0,0}, "\321\1\x13\110", IF_386|IF_SM},
    /*   20 */ {I_ADC, 2, {REG32,REG32,0,0}, "\321\1\x13\110", IF_386},
    /*   21 */ {I_ADC, 2, {REG64,MEMORY,0,0}, "\324\1\x13\110", IF_X64|IF_SM},
    /*   22 */ {I_ADC, 2, {REG64,REG64,0,0}, "\324\1\x13\110", IF_X64},
    /*   23 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\202\15", IF_8086},
    /*   24 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\202\15", IF_386},
    /*   25 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\202\15", IF_X64},
    /*   26 */ {I_ADC, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x14\21", IF_8086|IF_SM},
    /*   27 */ {I_ADC, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x15\31", IF_8086|IF_SM},
    /*   28 */ {I_ADC, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x15\41", IF_386|IF_SM},
    /*   29 */ {I_ADC, 2, {REG_RAX,IMMEDIATE,0,0}, "\321\1\x15\41", IF_X64|IF_SM},
    /*   30 */ {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\202\21", IF_8086|IF_SM},
    /*   31 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\202\141", IF_8086|IF_SM},
    /*   32 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\202\151", IF_386|IF_SM},
    /*   33 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\202\151", IF_X64|IF_SM},
    /*   34 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\202\21", IF_8086|IF_SM},
    /*   35 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\202\141", IF_8086|IF_SM},
    /*   36 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\202\151", IF_386|IF_SM},
    /*   37 */ {I_ADD, 2, {MEMORY,REG8,0,0}, "\170\101", IF_8086|IF_SM},
    /*   38 */ {I_ADD, 2, {REG8,REG8,0,0}, "\170\101", IF_8086},
    /*   39 */ {I_ADD, 2, {MEMORY,REG16,0,0}, "\320\1\x01\101", IF_8086|IF_SM},
    /*   40 */ {I_ADD, 2, {REG16,REG16,0,0}, "\320\1\x01\101", IF_8086},
    /*   41 */ {I_ADD, 2, {MEMORY,REG32,0,0}, "\321\1\x01\101", IF_386|IF_SM},
    /*   42 */ {I_ADD, 2, {REG32,REG32,0,0}, "\321\1\x01\101", IF_386},
    /*   43 */ {I_ADD, 2, {MEMORY,REG64,0,0}, "\324\1\x01\101", IF_X64|IF_SM},
    /*   44 */ {I_ADD, 2, {REG64,REG64,0,0}, "\324\1\x01\101", IF_X64},
    /*   45 */ {I_ADD, 2, {REG8,MEMORY,0,0}, "\1\x02\110", IF_8086|IF_SM},
    /*   46 */ {I_ADD, 2, {REG8,REG8,0,0}, "\1\x02\110", IF_8086},
    /*   47 */ {I_ADD, 2, {REG16,MEMORY,0,0}, "\320\1\x03\110", IF_8086|IF_SM},
    /*   48 */ {I_ADD, 2, {REG16,REG16,0,0}, "\320\1\x03\110", IF_8086},
    /*   49 */ {I_ADD, 2, {REG32,MEMORY,0,0}, "\321\1\x03\110", IF_386|IF_SM},
    /*   50 */ {I_ADD, 2, {REG32,REG32,0,0}, "\321\1\x03\110", IF_386},
    /*   51 */ {I_ADD, 2, {REG64,MEMORY,0,0}, "\324\1\x03\110", IF_X64|IF_SM},
    /*   52 */ {I_ADD, 2, {REG64,REG64,0,0}, "\324\1\x03\110", IF_X64},
    /*   53 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\200\15", IF_8086},
    /*   54 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\200\15", IF_386},
    /*   55 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\200\15", IF_X64},
    /*   56 */ {I_ADD, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x04\21", IF_8086|IF_SM},
    /*   57 */ {I_ADD, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x05\31", IF_8086|IF_SM},
    /*   58 */ {I_ADD, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x05\41", IF_386|IF_SM},
    /*   59 */ {I_ADD, 2, {REG_RAX,IMMEDIATE,0,0}, "\323\1\x05\41", IF_X64|IF_SM},
    /*   60 */ {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\200\21", IF_8086|IF_SM},
    /*   61 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\200\141", IF_8086|IF_SM},
    /*   62 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\200\151", IF_386|IF_SM},
    /*   63 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\200\151", IF_X64|IF_SM},
    /*   64 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\200\21", IF_8086|IF_SM},
    /*   65 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\200\141", IF_8086|IF_SM},
    /*   66 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\200\151", IF_386|IF_SM},
    /*   67 */ {I_AND, 2, {MEMORY,REG8,0,0}, "\1\x20\101", IF_8086|IF_SM},
    /*   68 */ {I_AND, 2, {REG8,REG8,0,0}, "\1\x20\101", IF_8086},
    /*   69 */ {I_AND, 2, {MEMORY,REG16,0,0}, "\320\1\x21\101", IF_8086|IF_SM},
    /*   70 */ {I_AND, 2, {REG16,REG16,0,0}, "\320\1\x21\101", IF_8086},
    /*   71 */ {I_AND, 2, {MEMORY,REG32,0,0}, "\321\1\x21\101", IF_386|IF_SM},
    /*   72 */ {I_AND, 2, {REG32,REG32,0,0}, "\321\1\x21\101", IF_386},
    /*   73 */ {I_AND, 2, {MEMORY,REG64,0,0}, "\324\1\x21\101", IF_X64|IF_SM},
    /*   74 */ {I_AND, 2, {REG64,REG64,0,0}, "\324\1\x21\101", IF_X64},
    /*   75 */ {I_AND, 2, {REG8,MEMORY,0,0}, "\1\x22\110", IF_8086|IF_SM},
    /*   76 */ {I_AND, 2, {REG8,REG8,0,0}, "\1\x22\110", IF_8086},
    /*   77 */ {I_AND, 2, {REG16,MEMORY,0,0}, "\320\1\x23\110", IF_8086|IF_SM},
    /*   78 */ {I_AND, 2, {REG16,REG16,0,0}, "\320\1\x23\110", IF_8086},
    /*   79 */ {I_AND, 2, {REG32,MEMORY,0,0}, "\321\1\x23\110", IF_386|IF_SM},
    /*   80 */ {I_AND, 2, {REG32,REG32,0,0}, "\321\1\x23\110", IF_386},
    /*   81 */ {I_AND, 2, {REG64,MEMORY,0,0}, "\324\1\x23\110", IF_X64|IF_SM},
    /*   82 */ {I_AND, 2, {REG64,REG64,0,0}, "\324\1\x23\110", IF_X64},
    /*   83 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\204\15", IF_8086},
    /*   84 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\204\15", IF_386},
    /*   85 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\204\15", IF_X64},
    /*   86 */ {I_AND, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x24\21", IF_8086|IF_SM},
    /*   87 */ {I_AND, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x25\31", IF_8086|IF_SM},
    /*   88 */ {I_AND, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x25\41", IF_386|IF_SM},
    /*   89 */ {I_AND, 2, {REG_RAX,IMMEDIATE,0,0}, "\324\1\x25\41", IF_X64|IF_SM},
    /*   90 */ {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\204\21", IF_8086|IF_SM},
    /*   91 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\204\141", IF_8086|IF_SM},
    /*   92 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\204\151", IF_386|IF_SM},
    /*   93 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\204\151", IF_X64|IF_SM},
    /*   94 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\204\21", IF_8086|IF_SM},
    /*   95 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\204\141", IF_8086|IF_SM},
    /*   96 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\204\151", IF_386|IF_SM},
    /*   97 */ {I_ARPL, 2, {MEMORY,REG16,0,0}, "\1\x63\101", IF_286|IF_PROT|IF_SM|IF_NOLONG},
    /*   98 */ {I_ARPL, 2, {REG16,REG16,0,0}, "\1\x63\101", IF_286|IF_PROT|IF_NOLONG},
    /*   99 */ {I_BOUND, 2, {REG16,MEMORY,0,0}, "\320\1\x62\110", IF_186|IF_NOLONG},
    /*  100 */ {I_BOUND, 2, {REG32,MEMORY,0,0}, "\321\1\x62\110", IF_386|IF_NOLONG},
    /*  101 */ {I_BSF, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xBC\110", IF_386|IF_SM},
    /*  102 */ {I_BSF, 2, {REG16,REG16,0,0}, "\320\2\x0F\xBC\110", IF_386},
    /*  103 */ {I_BSF, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\xBC\110", IF_386|IF_SM},
    /*  104 */ {I_BSF, 2, {REG32,REG32,0,0}, "\321\2\x0F\xBC\110", IF_386},
    /*  105 */ {I_BSF, 2, {REG64,MEMORY,0,0}, "\324\2\x0F\xBC\110", IF_X64|IF_SM},
    /*  106 */ {I_BSF, 2, {REG64,REG64,0,0}, "\324\2\x0F\xBC\110", IF_X64},
    /*  107 */ {I_BSR, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xBD\110", IF_386|IF_SM},
    /*  108 */ {I_BSR, 2, {REG16,REG16,0,0}, "\320\2\x0F\xBD\110", IF_386},
    /*  109 */ {I_BSR, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\xBD\110", IF_386|IF_SM},
    /*  110 */ {I_BSR, 2, {REG32,REG32,0,0}, "\321\2\x0F\xBD\110", IF_386},
    /*  111 */ {I_BSR, 2, {REG64,MEMORY,0,0}, "\324\2\x0F\xBD\110", IF_X64|IF_SM},
    /*  112 */ {I_BSR, 2, {REG64,REG64,0,0}, "\324\2\x0F\xBD\110", IF_X64},
    /*  113 */ {I_BSWAP, 1, {REG32,0,0,0}, "\321\1\x0F\10\xC8", IF_486},
    /*  114 */ {I_BSWAP, 1, {REG64,0,0,0}, "\324\1\x0F\10\xC8", IF_X64},
    /*  115 */ {I_BT, 2, {MEMORY,REG16,0,0}, "\320\2\x0F\xA3\101", IF_386|IF_SM},
    /*  116 */ {I_BT, 2, {REG16,REG16,0,0}, "\320\2\x0F\xA3\101", IF_386},
    /*  117 */ {I_BT, 2, {MEMORY,REG32,0,0}, "\321\2\x0F\xA3\101", IF_386|IF_SM},
    /*  118 */ {I_BT, 2, {REG32,REG32,0,0}, "\321\2\x0F\xA3\101", IF_386},
    /*  119 */ {I_BT, 2, {MEMORY,REG64,0,0}, "\324\2\x0F\xA3\101", IF_X64|IF_SM},
    /*  120 */ {I_BT, 2, {REG64,REG64,0,0}, "\324\2\x0F\xA3\101", IF_X64},
    /*  121 */ {I_BT, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\2\x0F\xBA\204\25", IF_386|IF_SB},
    /*  122 */ {I_BT, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\2\x0F\xBA\204\25", IF_386|IF_SB},
    /*  123 */ {I_BT, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\2\x0F\xBA\204\25", IF_X64|IF_SB},
    /*  124 */ {I_BTC, 2, {MEMORY,REG16,0,0}, "\320\2\x0F\xBB\101", IF_386|IF_SM},
    /*  125 */ {I_BTC, 2, {REG16,REG16,0,0}, "\320\2\x0F\xBB\101", IF_386},
    /*  126 */ {I_BTC, 2, {MEMORY,REG32,0,0}, "\321\2\x0F\xBB\101", IF_386|IF_SM},
    /*  127 */ {I_BTC, 2, {REG32,REG32,0,0}, "\321\2\x0F\xBB\101", IF_386},
    /*  128 */ {I_BTC, 2, {MEMORY,REG64,0,0}, "\324\2\x0F\xBB\101", IF_X64|IF_SM},
    /*  129 */ {I_BTC, 2, {REG64,REG64,0,0}, "\324\2\x0F\xBB\101", IF_X64},
    /*  130 */ {I_BTC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\2\x0F\xBA\207\25", IF_386|IF_SB},
    /*  131 */ {I_BTC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\2\x0F\xBA\207\25", IF_386|IF_SB},
    /*  132 */ {I_BTC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\2\x0F\xBA\207\25", IF_X64|IF_SB},
    /*  133 */ {I_BTR, 2, {MEMORY,REG16,0,0}, "\320\2\x0F\xB3\101", IF_386|IF_SM},
    /*  134 */ {I_BTR, 2, {REG16,REG16,0,0}, "\320\2\x0F\xB3\101", IF_386},
    /*  135 */ {I_BTR, 2, {MEMORY,REG32,0,0}, "\321\2\x0F\xB3\101", IF_386|IF_SM},
    /*  136 */ {I_BTR, 2, {REG32,REG32,0,0}, "\321\2\x0F\xB3\101", IF_386},
    /*  137 */ {I_BTR, 2, {MEMORY,REG64,0,0}, "\324\2\x0F\xB3\101", IF_X64|IF_SM},
    /*  138 */ {I_BTR, 2, {REG64,REG64,0,0}, "\324\2\x0F\xB3\101", IF_X64},
    /*  139 */ {I_BTR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\2\x0F\xBA\206\25", IF_386|IF_SB},
    /*  140 */ {I_BTR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\2\x0F\xBA\206\25", IF_386|IF_SB},
    /*  141 */ {I_BTR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\2\x0F\xBA\206\25", IF_X64|IF_SB},
    /*  142 */ {I_BTS, 2, {MEMORY,REG16,0,0}, "\320\2\x0F\xAB\101", IF_386|IF_SM},
    /*  143 */ {I_BTS, 2, {REG16,REG16,0,0}, "\320\2\x0F\xAB\101", IF_386},
    /*  144 */ {I_BTS, 2, {MEMORY,REG32,0,0}, "\321\2\x0F\xAB\101", IF_386|IF_SM},
    /*  145 */ {I_BTS, 2, {REG32,REG32,0,0}, "\321\2\x0F\xAB\101", IF_386},
    /*  146 */ {I_BTS, 2, {MEMORY,REG64,0,0}, "\324\2\x0F\xAB\101", IF_X64|IF_SM},
    /*  147 */ {I_BTS, 2, {REG64,REG64,0,0}, "\324\2\x0F\xAB\101", IF_X64},
    /*  148 */ {I_BTS, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\2\x0F\xBA\205\25", IF_386|IF_SB},
    /*  149 */ {I_BTS, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\2\x0F\xBA\205\25", IF_386|IF_SB},
    /*  150 */ {I_BTS, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\2\x0F\xBA\205\25", IF_X64|IF_SB},
    /*  151 */ {I_CALL, 1, {IMMEDIATE,0,0,0}, "\322\1\xE8\64", IF_8086},
    /*  152 */ {I_CALL, 1, {IMMEDIATE|NEAR,0,0,0}, "\322\1\xE8\64", IF_8086},
    /*  153 */ {I_CALL, 1, {IMMEDIATE|BITS16,0,0,0}, "\320\1\xE8\64", IF_8086},
    /*  154 */ {I_CALL, 1, {IMMEDIATE|BITS16|NEAR,0,0,0}, "\320\1\xE8\64", IF_8086},
    /*  155 */ {I_CALL, 1, {IMMEDIATE|BITS32,0,0,0}, "\321\1\xE8\64", IF_386},
    /*  156 */ {I_CALL, 1, {IMMEDIATE|BITS32|NEAR,0,0,0}, "\321\1\xE8\64", IF_386},
    /*  157 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0}, "\322\1\x9A\35\30", IF_8086|IF_NOLONG},
    /*  158 */ {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0}, "\320\1\x9A\31\30", IF_8086|IF_NOLONG},
    /*  159 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0}, "\320\1\x9A\31\30", IF_8086|IF_NOLONG},
    /*  160 */ {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0}, "\321\1\x9A\41\30", IF_386|IF_NOLONG},
    /*  161 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0}, "\321\1\x9A\41\30", IF_386|IF_NOLONG},
    /*  162 */ {I_CALL, 1, {MEMORY|FAR,0,0,0}, "\322\1\xFF\203", IF_8086},
    /*  163 */ {I_CALL, 1, {MEMORY|BITS16|FAR,0,0,0}, "\320\1\xFF\203", IF_8086},
    /*  164 */ {I_CALL, 1, {MEMORY|BITS32|FAR,0,0,0}, "\321\1\xFF\203", IF_386},
    /*  165 */ {I_CALL, 1, {MEMORY|NEAR,0,0,0}, "\322\1\xFF\202", IF_8086},
    /*  166 */ {I_CALL, 1, {MEMORY|BITS16|NEAR,0,0,0}, "\320\1\xFF\202", IF_8086},
    /*  167 */ {I_CALL, 1, {MEMORY|BITS32|NEAR,0,0,0}, "\321\1\xFF\202", IF_386|IF_NOLONG},
    /*  168 */ {I_CALL, 1, {MEMORY|BITS64|NEAR,0,0,0}, "\324\1\xFF\202", IF_X64},
    /*  169 */ {I_CALL, 1, {REG16,0,0,0}, "\320\1\xFF\202", IF_8086},
    /*  170 */ {I_CALL, 1, {REG32,0,0,0}, "\321\1\xFF\202", IF_386|IF_NOLONG},
    /*  171 */ {I_CALL, 1, {REG64,0,0,0}, "\324\1\xFF\202", IF_X64},
    /*  172 */ {I_CALL, 1, {MEMORY,0,0,0}, "\322\1\xFF\202", IF_8086},
    /*  173 */ {I_CALL, 1, {MEMORY|BITS16,0,0,0}, "\320\1\xFF\202", IF_8086},
    /*  174 */ {I_CALL, 1, {MEMORY|BITS32,0,0,0}, "\321\1\xFF\202", IF_386|IF_NOLONG},
    /*  175 */ {I_CALL, 1, {MEMORY|BITS64,0,0,0}, "\324\1\xFF\202", IF_X64},
    /*  176 */ {I_CBW, 0, {0,0,0,0}, "\320\1\x98", IF_8086},
    /*  177 */ {I_CDQ, 0, {0,0,0,0}, "\321\1\x99", IF_386},
    /*  178 */ {I_CDQE, 0, {0,0,0,0}, "\324\1\x98", IF_X64},
    /*  179 */ {I_CLC, 0, {0,0,0,0}, "\1\xF8", IF_8086},
    /*  180 */ {I_CLD, 0, {0,0,0,0}, "\1\xFC", IF_8086},
    /*  181 */ {I_CLFLUSH, 1, {MEMORY,0,0,0}, "\2\x0F\x80\207", IF_KATMAI},
    /*  182 */ {I_CLGI, 0, {0,0,0,0}, "\3\x0F\x01\xDD", IF_X64|IF_AMD},
    /*  183 */ {I_CLI, 0, {0,0,0,0}, "\1\xFA", IF_8086},
    /*  184 */ {I_CLTS, 0, {0,0,0,0}, "\2\x0F\x06", IF_286|IF_PRIV},
    /*  185 */ {I_CMC, 0, {0,0,0,0}, "\1\xF5", IF_8086},
    /*  186 */ {I_CMP, 2, {MEMORY,REG8,0,0}, "\1\x38\101", IF_8086|IF_SM},
    /*  187 */ {I_CMP, 2, {REG8,REG8,0,0}, "\1\x38\101", IF_8086},
    /*  188 */ {I_CMP, 2, {MEMORY,REG16,0,0}, "\320\1\x39\101", IF_8086|IF_SM},
    /*  189 */ {I_CMP, 2, {REG16,REG16,0,0}, "\320\1\x39\101", IF_8086},
    /*  190 */ {I_CMP, 2, {MEMORY,REG32,0,0}, "\321\1\x39\101", IF_386|IF_SM},
    /*  191 */ {I_CMP, 2, {REG32,REG32,0,0}, "\321\1\x39\101", IF_386},
    /*  192 */ {I_CMP, 2, {MEMORY,REG64,0,0}, "\324\1\x39\101", IF_X64|IF_SM},
    /*  193 */ {I_CMP, 2, {REG64,REG64,0,0}, "\324\1\x39\101", IF_X64},
    /*  194 */ {I_CMP, 2, {REG8,MEMORY,0,0}, "\1\x3A\110", IF_8086|IF_SM},
    /*  195 */ {I_CMP, 2, {REG8,REG8,0,0}, "\1\x3A\110", IF_8086},
    /*  196 */ {I_CMP, 2, {REG16,MEMORY,0,0}, "\320\1\x3B\110", IF_8086|IF_SM},
    /*  197 */ {I_CMP, 2, {REG16,REG16,0,0}, "\320\1\x3B\110", IF_8086},
    /*  198 */ {I_CMP, 2, {REG32,MEMORY,0,0}, "\321\1\x3B\110", IF_386|IF_SM},
    /*  199 */ {I_CMP, 2, {REG32,REG32,0,0}, "\321\1\x3B\110", IF_386},
    /*  200 */ {I_CMP, 2, {REG64,MEMORY,0,0}, "\324\1\x3B\110", IF_X64|IF_SM},
    /*  201 */ {I_CMP, 2, {REG64,REG64,0,0}, "\324\1\x3B\110", IF_X64},
    /*  202 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\207\15", IF_8086},
    /*  203 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\207\15", IF_386},
    /*  204 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\207\15", IF_X64},
    /*  205 */ {I_CMP, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x3C\21", IF_8086|IF_SM},
    /*  206 */ {I_CMP, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x3D\31", IF_8086|IF_SM},
    /*  207 */ {I_CMP, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x3D\41", IF_386|IF_SM},
    /*  208 */ {I_CMP, 2, {REG_RAX,IMMEDIATE,0,0}, "\321\1\x3D\41", IF_X64|IF_SM},
    /*  209 */ {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\207\21", IF_8086|IF_SM},
    /*  210 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\207\141", IF_8086|IF_SM},
    /*  211 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\207\151", IF_386|IF_SM},
    /*  212 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\207\151", IF_X64|IF_SM},
    /*  213 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\207\21", IF_8086|IF_SM},
    /*  214 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\207\141", IF_8086|IF_SM},
    /*  215 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\207\151", IF_386|IF_SM},
    /*  216 */ {I_CMPSB, 0, {0,0,0,0}, "\335\1\xA6", IF_8086},
    /*  217 */ {I_CMPSD, 0, {0,0,0,0}, "\335\321\1\xA7", IF_386},
    /*  218 */ {I_CMPSQ, 0, {0,0,0,0}, "\335\324\1\xA7", IF_X64},
    /*  219 */ {I_CMPSW, 0, {0,0,0,0}, "\335\320\1\xA7", IF_8086},
    /*  220 */ {I_CMPXCHG, 2, {MEMORY,REG8,0,0}, "\2\x0F\xB0\101", IF_PENT|IF_SM},
    /*  221 */ {I_CMPXCHG, 2, {REG8,REG8,0,0}, "\2\x0F\xB0\101", IF_PENT},
    /*  222 */ {I_CMPXCHG, 2, {MEMORY,REG16,0,0}, "\320\2\x0F\xB1\101", IF_PENT|IF_SM},
    /*  223 */ {I_CMPXCHG, 2, {REG16,REG16,0,0}, "\320\2\x0F\xB1\101", IF_PENT},
    /*  224 */ {I_CMPXCHG, 2, {MEMORY,REG32,0,0}, "\321\2\x0F\xB1\101", IF_PENT|IF_SM},
    /*  225 */ {I_CMPXCHG, 2, {REG32,REG32,0,0}, "\321\2\x0F\xB1\101", IF_PENT},
    /*  226 */ {I_CMPXCHG, 2, {MEMORY,REG64,0,0}, "\324\2\x0F\xB1\101", IF_X64|IF_SM},
    /*  227 */ {I_CMPXCHG, 2, {REG64,REG64,0,0}, "\324\2\x0F\xB1\101", IF_X64},
    /*  228 */ {I_CMPXCHG8B, 1, {MEMORY,0,0,0}, "\2\x0F\xC7\201", IF_PENT},
    /*  229 */ {I_CMPXCHG16B, 1, {MEMORY,0,0,0}, "\324\2\x0F\xC7\201", IF_X64},
    /*  230 */ {I_CPUID, 0, {0,0,0,0}, "\2\x0F\xA2", IF_PENT},
    /*  231 */ {I_CPU_READ, 0, {0,0,0,0}, "\2\x0F\x3D", IF_PENT|IF_CYRIX},
    /*  232 */ {I_CPU_WRITE, 0, {0,0,0,0}, "\2\x0F\x3C", IF_PENT|IF_CYRIX},
    /*  233 */ {I_CQO, 0, {0,0,0,0}, "\324\1\x99", IF_X64},
    /*  234 */ {I_CWD, 0, {0,0,0,0}, "\320\1\x99", IF_8086},
    /*  235 */ {I_CWDE, 0, {0,0,0,0}, "\321\1\x98", IF_386},
    /*  236 */ {I_DAA, 0, {0,0,0,0}, "\1\x27", IF_8086|IF_NOLONG},
    /*  237 */ {I_DAS, 0, {0,0,0,0}, "\1\x2F", IF_8086|IF_NOLONG},
    /*  238 */ {I_DEC, 1, {REG16,0,0,0}, "\320\10\x48", IF_8086|IF_NOLONG},
    /*  239 */ {I_DEC, 1, {REG32,0,0,0}, "\321\10\x48", IF_386|IF_NOLONG},
    /*  240 */ {I_DEC, 1, {RM_GPR|BITS8,0,0,0}, "\1\xFE\201", IF_8086},
    /*  241 */ {I_DEC, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xFF\201", IF_8086},
    /*  242 */ {I_DEC, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xFF\201", IF_386},
    /*  243 */ {I_DEC, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xFF\201", IF_X64},
    /*  244 */ {I_DIV, 1, {RM_GPR|BITS8,0,0,0}, "\1\xF6\206", IF_8086},
    /*  245 */ {I_DIV, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xF7\206", IF_8086},
    /*  246 */ {I_DIV, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xF7\206", IF_386},
    /*  247 */ {I_DIV, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xF7\206", IF_X64},
    /*  248 */ {I_DMINT, 0, {0,0,0,0}, "\2\x0F\x39", IF_P6|IF_CYRIX},
    /*  249 */ {I_EMMS, 0, {0,0,0,0}, "\2\x0F\x77", IF_PENT|IF_MMX},
    /*  250 */ {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0,0}, "\1\xC8\30\25", IF_186},
    /*  251 */ {I_EQU, 1, {IMMEDIATE,0,0,0}, "\0", IF_8086},
    /*  252 */ {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0}, "\0", IF_8086},
    /*  253 */ {I_F2XM1, 0, {0,0,0,0}, "\2\xD9\xF0", IF_8086|IF_FPU},
    /*  254 */ {I_FABS, 0, {0,0,0,0}, "\2\xD9\xE1", IF_8086|IF_FPU},
    /*  255 */ {I_FADD, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\200", IF_8086|IF_FPU},
    /*  256 */ {I_FADD, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\200", IF_8086|IF_FPU},
    /*  257 */ {I_FADD, 1, {FPUREG|TO,0,0,0}, "\1\xDC\10\xC0", IF_8086|IF_FPU},
    /*  258 */ {I_FADD, 1, {FPUREG,0,0,0}, "\1\xD8\10\xC0", IF_8086|IF_FPU},
    /*  259 */ {I_FADD, 2, {FPUREG,FPU0,0,0}, "\1\xDC\10\xC0", IF_8086|IF_FPU},
    /*  260 */ {I_FADD, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xC0", IF_8086|IF_FPU},
    /*  261 */ {I_FADDP, 1, {FPUREG,0,0,0}, "\1\xDE\10\xC0", IF_8086|IF_FPU},
    /*  262 */ {I_FADDP, 2, {FPUREG,FPU0,0,0}, "\1\xDE\10\xC0", IF_8086|IF_FPU},
    /*  263 */ {I_FBLD, 1, {MEMORY|BITS80,0,0,0}, "\1\xDF\204", IF_8086|IF_FPU},
    /*  264 */ {I_FBLD, 1, {MEMORY,0,0,0}, "\1\xDF\204", IF_8086|IF_FPU},
    /*  265 */ {I_FBSTP, 1, {MEMORY|BITS80,0,0,0}, "\1\xDF\206", IF_8086|IF_FPU},
    /*  266 */ {I_FBSTP, 1, {MEMORY,0,0,0}, "\1\xDF\206", IF_8086|IF_FPU},
    /*  267 */ {I_FCHS, 0, {0,0,0,0}, "\2\xD9\xE0", IF_8086|IF_FPU},
    /*  268 */ {I_FCLEX, 0, {0,0,0,0}, "\3\x9B\xDB\xE2", IF_8086|IF_FPU},
    /*  269 */ {I_FCMOVB, 1, {FPUREG,0,0,0}, "\1\xDA\10\xC0", IF_P6|IF_FPU},
    /*  270 */ {I_FCMOVB, 2, {FPU0,FPUREG,0,0}, "\1\xDA\11\xC0", IF_P6|IF_FPU},
    /*  271 */ {I_FCMOVBE, 1, {FPUREG,0,0,0}, "\1\xDA\10\xD0", IF_P6|IF_FPU},
    /*  272 */ {I_FCMOVBE, 2, {FPU0,FPUREG,0,0}, "\1\xDA\11\xD0", IF_P6|IF_FPU},
    /*  273 */ {I_FCMOVE, 1, {FPUREG,0,0,0}, "\1\xDA\10\xC8", IF_P6|IF_FPU},
    /*  274 */ {I_FCMOVE, 2, {FPU0,FPUREG,0,0}, "\1\xDA\11\xC8", IF_P6|IF_FPU},
    /*  275 */ {I_FCMOVNB, 1, {FPUREG,0,0,0}, "\1\xDB\10\xC0", IF_P6|IF_FPU},
    /*  276 */ {I_FCMOVNB, 2, {FPU0,FPUREG,0,0}, "\1\xDB\11\xC0", IF_P6|IF_FPU},
    /*  277 */ {I_FCMOVNBE, 1, {FPUREG,0,0,0}, "\1\xDB\10\xD0", IF_P6|IF_FPU},
    /*  278 */ {I_FCMOVNBE, 2, {FPU0,FPUREG,0,0}, "\1\xDB\11\xD0", IF_P6|IF_FPU},
    /*  279 */ {I_FCMOVNE, 1, {FPUREG,0,0,0}, "\1\xDB\10\xC8", IF_P6|IF_FPU},
    /*  280 */ {I_FCMOVNE, 2, {FPU0,FPUREG,0,0}, "\1\xDB\11\xC8", IF_P6|IF_FPU},
    /*  281 */ {I_FCMOVNU, 1, {FPUREG,0,0,0}, "\1\xDB\10\xD8", IF_P6|IF_FPU},
    /*  282 */ {I_FCMOVNU, 2, {FPU0,FPUREG,0,0}, "\1\xDB\11\xD8", IF_P6|IF_FPU},
    /*  283 */ {I_FCMOVU, 1, {FPUREG,0,0,0}, "\1\xDA\10\xD8", IF_P6|IF_FPU},
    /*  284 */ {I_FCMOVU, 2, {FPU0,FPUREG,0,0}, "\1\xDA\11\xD8", IF_P6|IF_FPU},
    /*  285 */ {I_FCOM, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\202", IF_8086|IF_FPU},
    /*  286 */ {I_FCOM, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\202", IF_8086|IF_FPU},
    /*  287 */ {I_FCOM, 1, {FPUREG,0,0,0}, "\1\xD8\10\xD0", IF_8086|IF_FPU},
    /*  288 */ {I_FCOM, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xD0", IF_8086|IF_FPU},
    /*  289 */ {I_FCOMI, 1, {FPUREG,0,0,0}, "\1\xDB\10\xF0", IF_P6|IF_FPU},
    /*  290 */ {I_FCOMI, 2, {FPU0,FPUREG,0,0}, "\1\xDB\11\xF0", IF_P6|IF_FPU},
    /*  291 */ {I_FCOMIP, 1, {FPUREG,0,0,0}, "\1\xDF\10\xF0", IF_P6|IF_FPU},
    /*  292 */ {I_FCOMIP, 2, {FPU0,FPUREG,0,0}, "\1\xDF\11\xF0", IF_P6|IF_FPU},
    /*  293 */ {I_FCOMP, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\203", IF_8086|IF_FPU},
    /*  294 */ {I_FCOMP, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\203", IF_8086|IF_FPU},
    /*  295 */ {I_FCOMP, 1, {FPUREG,0,0,0}, "\1\xD8\10\xD8", IF_8086|IF_FPU},
    /*  296 */ {I_FCOMP, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xD8", IF_8086|IF_FPU},
    /*  297 */ {I_FCOMPP, 0, {0,0,0,0}, "\2\xDE\xD9", IF_8086|IF_FPU},
    /*  298 */ {I_FCOS, 0, {0,0,0,0}, "\2\xD9\xFF", IF_386|IF_FPU},
    /*  299 */ {I_FDECSTP, 0, {0,0,0,0}, "\2\xD9\xF6", IF_8086|IF_FPU},
    /*  300 */ {I_FDISI, 0, {0,0,0,0}, "\3\x9B\xDB\xE1", IF_8086|IF_FPU},
    /*  301 */ {I_FDIV, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\206", IF_8086|IF_FPU},
    /*  302 */ {I_FDIV, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\206", IF_8086|IF_FPU},
    /*  303 */ {I_FDIV, 1, {FPUREG|TO,0,0,0}, "\1\xDC\10\xF8", IF_8086|IF_FPU},
    /*  304 */ {I_FDIV, 2, {FPUREG,FPU0,0,0}, "\1\xDC\10\xF8", IF_8086|IF_FPU},
    /*  305 */ {I_FDIV, 1, {FPUREG,0,0,0}, "\1\xD8\10\xF0", IF_8086|IF_FPU},
    /*  306 */ {I_FDIV, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xF0", IF_8086|IF_FPU},
    /*  307 */ {I_FDIVP, 2, {FPUREG,FPU0,0,0}, "\1\xDE\10\xF8", IF_8086|IF_FPU},
    /*  308 */ {I_FDIVP, 1, {FPUREG,0,0,0}, "\1\xDE\10\xF8", IF_8086|IF_FPU},
    /*  309 */ {I_FDIVR, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\207", IF_8086|IF_FPU},
    /*  310 */ {I_FDIVR, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\207", IF_8086|IF_FPU},
    /*  311 */ {I_FDIVR, 1, {FPUREG|TO,0,0,0}, "\1\xDC\10\xF0", IF_8086|IF_FPU},
    /*  312 */ {I_FDIVR, 2, {FPUREG,FPU0,0,0}, "\1\xDC\10\xF0", IF_8086|IF_FPU},
    /*  313 */ {I_FDIVR, 1, {FPUREG,0,0,0}, "\1\xD8\10\xF8", IF_8086|IF_FPU},
    /*  314 */ {I_FDIVR, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xF8", IF_8086|IF_FPU},
    /*  315 */ {I_FDIVRP, 1, {FPUREG,0,0,0}, "\1\xDE\10\xF0", IF_8086|IF_FPU},
    /*  316 */ {I_FDIVRP, 2, {FPUREG,FPU0,0,0}, "\1\xDE\10\xF0", IF_8086|IF_FPU},
    /*  317 */ {I_FEMMS, 0, {0,0,0,0}, "\2\x0F\x0E", IF_PENT|IF_3DNOW},
    /*  318 */ {I_FENI, 0, {0,0,0,0}, "\3\x9B\xDB\xE0", IF_8086|IF_FPU},
    /*  319 */ {I_FFREE, 1, {FPUREG,0,0,0}, "\1\xDD\10\xC0", IF_8086|IF_FPU},
    /*  320 */ {I_FFREEP, 1, {FPUREG,0,0,0}, "\1\xDF\10\xC0", IF_286|IF_FPU|IF_UNDOC},
    /*  321 */ {I_FIADD, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\200", IF_8086|IF_FPU},
    /*  322 */ {I_FIADD, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\200", IF_8086|IF_FPU},
    /*  323 */ {I_FICOM, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\202", IF_8086|IF_FPU},
    /*  324 */ {I_FICOM, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\202", IF_8086|IF_FPU},
    /*  325 */ {I_FICOMP, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\203", IF_8086|IF_FPU},
    /*  326 */ {I_FICOMP, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\203", IF_8086|IF_FPU},
    /*  327 */ {I_FIDIV, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\206", IF_8086|IF_FPU},
    /*  328 */ {I_FIDIV, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\206", IF_8086|IF_FPU},
    /*  329 */ {I_FIDIVR, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\207", IF_8086|IF_FPU},
    /*  330 */ {I_FIDIVR, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\207", IF_8086|IF_FPU},
    /*  331 */ {I_FILD, 1, {MEMORY|BITS32,0,0,0}, "\1\xDB\200", IF_8086|IF_FPU},
    /*  332 */ {I_FILD, 1, {MEMORY|BITS16,0,0,0}, "\1\xDF\200", IF_8086|IF_FPU},
    /*  333 */ {I_FILD, 1, {MEMORY|BITS64,0,0,0}, "\1\xDF\205", IF_8086|IF_FPU},
    /*  334 */ {I_FIMUL, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\201", IF_8086|IF_FPU},
    /*  335 */ {I_FIMUL, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\201", IF_8086|IF_FPU},
    /*  336 */ {I_FINCSTP, 0, {0,0,0,0}, "\2\xD9\xF7", IF_8086|IF_FPU},
    /*  337 */ {I_FINIT, 0, {0,0,0,0}, "\3\x9B\xDB\xE3", IF_8086|IF_FPU},
    /*  338 */ {I_FIST, 1, {MEMORY|BITS32,0,0,0}, "\1\xDB\202", IF_8086|IF_FPU},
    /*  339 */ {I_FIST, 1, {MEMORY|BITS16,0,0,0}, "\1\xDF\202", IF_8086|IF_FPU},
    /*  340 */ {I_FISTP, 1, {MEMORY|BITS32,0,0,0}, "\1\xDB\203", IF_8086|IF_FPU},
    /*  341 */ {I_FISTP, 1, {MEMORY|BITS16,0,0,0}, "\1\xDF\203", IF_8086|IF_FPU},
    /*  342 */ {I_FISTP, 1, {MEMORY|BITS64,0,0,0}, "\1\xDF\207", IF_8086|IF_FPU},
    /*  343 */ {I_FISTTP, 1, {MEMORY|BITS16,0,0,0}, "\1\xDF\201", IF_PRESCOTT|IF_FPU},
    /*  344 */ {I_FISTTP, 1, {MEMORY|BITS32,0,0,0}, "\1\xDB\201", IF_PRESCOTT|IF_FPU},
    /*  345 */ {I_FISTTP, 1, {MEMORY|BITS64,0,0,0}, "\1\xDD\201", IF_PRESCOTT|IF_FPU},
    /*  346 */ {I_FISUB, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\204", IF_8086|IF_FPU},
    /*  347 */ {I_FISUB, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\204", IF_8086|IF_FPU},
    /*  348 */ {I_FISUBR, 1, {MEMORY|BITS32,0,0,0}, "\1\xDA\205", IF_8086|IF_FPU},
    /*  349 */ {I_FISUBR, 1, {MEMORY|BITS16,0,0,0}, "\1\xDE\205", IF_8086|IF_FPU},
    /*  350 */ {I_FLD, 1, {MEMORY|BITS32,0,0,0}, "\1\xD9\200", IF_8086|IF_FPU},
    /*  351 */ {I_FLD, 1, {MEMORY|BITS64,0,0,0}, "\1\xDD\200", IF_8086|IF_FPU},
    /*  352 */ {I_FLD, 1, {MEMORY|BITS80,0,0,0}, "\1\xDB\205", IF_8086|IF_FPU},
    /*  353 */ {I_FLD, 1, {FPUREG,0,0,0}, "\1\xD9\10\xC0", IF_8086|IF_FPU},
    /*  354 */ {I_FLD1, 0, {0,0,0,0}, "\2\xD9\xE8", IF_8086|IF_FPU},
    /*  355 */ {I_FLDCW, 1, {MEMORY,0,0,0}, "\1\xD9\205", IF_8086|IF_FPU|IF_SW},
    /*  356 */ {I_FLDENV, 1, {MEMORY,0,0,0}, "\1\xD9\204", IF_8086|IF_FPU},
    /*  357 */ {I_FLDL2E, 0, {0,0,0,0}, "\2\xD9\xEA", IF_8086|IF_FPU},
    /*  358 */ {I_FLDL2T, 0, {0,0,0,0}, "\2\xD9\xE9", IF_8086|IF_FPU},
    /*  359 */ {I_FLDLG2, 0, {0,0,0,0}, "\2\xD9\xEC", IF_8086|IF_FPU},
    /*  360 */ {I_FLDLN2, 0, {0,0,0,0}, "\2\xD9\xED", IF_8086|IF_FPU},
    /*  361 */ {I_FLDPI, 0, {0,0,0,0}, "\2\xD9\xEB", IF_8086|IF_FPU},
    /*  362 */ {I_FLDZ, 0, {0,0,0,0}, "\2\xD9\xEE", IF_8086|IF_FPU},
    /*  363 */ {I_FMUL, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\201", IF_8086|IF_FPU},
    /*  364 */ {I_FMUL, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\201", IF_8086|IF_FPU},
    /*  365 */ {I_FMUL, 1, {FPUREG|TO,0,0,0}, "\1\xDC\10\xC8", IF_8086|IF_FPU},
    /*  366 */ {I_FMUL, 2, {FPUREG,FPU0,0,0}, "\1\xDC\10\xC8", IF_8086|IF_FPU},
    /*  367 */ {I_FMUL, 1, {FPUREG,0,0,0}, "\1\xD8\10\xC8", IF_8086|IF_FPU},
    /*  368 */ {I_FMUL, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xC8", IF_8086|IF_FPU},
    /*  369 */ {I_FMULP, 1, {FPUREG,0,0,0}, "\1\xDE\10\xC8", IF_8086|IF_FPU},
    /*  370 */ {I_FMULP, 2, {FPUREG,FPU0,0,0}, "\1\xDE\10\xC8", IF_8086|IF_FPU},
    /*  371 */ {I_FNCLEX, 0, {0,0,0,0}, "\2\xDB\xE2", IF_8086|IF_FPU},
    /*  372 */ {I_FNDISI, 0, {0,0,0,0}, "\2\xDB\xE1", IF_8086|IF_FPU},
    /*  373 */ {I_FNENI, 0, {0,0,0,0}, "\2\xDB\xE0", IF_8086|IF_FPU},
    /*  374 */ {I_FNINIT, 0, {0,0,0,0}, "\2\xDB\xE3", IF_8086|IF_FPU},
    /*  375 */ {I_FNOP, 0, {0,0,0,0}, "\2\xD9\xD0", IF_8086|IF_FPU},
    /*  376 */ {I_FNSAVE, 1, {MEMORY,0,0,0}, "\1\xDD\206", IF_8086|IF_FPU},
    /*  377 */ {I_FNSTCW, 1, {MEMORY,0,0,0}, "\1\xD9\207", IF_8086|IF_FPU|IF_SW},
    /*  378 */ {I_FNSTENV, 1, {MEMORY,0,0,0}, "\1\xD9\206", IF_8086|IF_FPU},
    /*  379 */ {I_FNSTSW, 1, {MEMORY,0,0,0}, "\1\xDD\207", IF_8086|IF_FPU|IF_SW},
    /*  380 */ {I_FNSTSW, 1, {REG_AX,0,0,0}, "\2\xDF\xE0", IF_286|IF_FPU},
    /*  381 */ {I_FPATAN, 0, {0,0,0,0}, "\2\xD9\xF3", IF_8086|IF_FPU},
    /*  382 */ {I_FPREM, 0, {0,0,0,0}, "\2\xD9\xF8", IF_8086|IF_FPU},
    /*  383 */ {I_FPREM1, 0, {0,0,0,0}, "\2\xD9\xF5", IF_386|IF_FPU},
    /*  384 */ {I_FPTAN, 0, {0,0,0,0}, "\2\xD9\xF2", IF_8086|IF_FPU},
    /*  385 */ {I_FRNDINT, 0, {0,0,0,0}, "\2\xD9\xFC", IF_8086|IF_FPU},
    /*  386 */ {I_FRSTOR, 1, {MEMORY,0,0,0}, "\1\xDD\204", IF_8086|IF_FPU},
    /*  387 */ {I_FSAVE, 1, {MEMORY,0,0,0}, "\2\x9B\xDD\206", IF_8086|IF_FPU},
    /*  388 */ {I_FSCALE, 0, {0,0,0,0}, "\2\xD9\xFD", IF_8086|IF_FPU},
    /*  389 */ {I_FSETPM, 0, {0,0,0,0}, "\2\xDB\xE4", IF_286|IF_FPU},
    /*  390 */ {I_FSIN, 0, {0,0,0,0}, "\2\xD9\xFE", IF_386|IF_FPU},
    /*  391 */ {I_FSINCOS, 0, {0,0,0,0}, "\2\xD9\xFB", IF_386|IF_FPU},
    /*  392 */ {I_FSQRT, 0, {0,0,0,0}, "\2\xD9\xFA", IF_8086|IF_FPU},
    /*  393 */ {I_FST, 1, {MEMORY|BITS32,0,0,0}, "\1\xD9\202", IF_8086|IF_FPU},
    /*  394 */ {I_FST, 1, {MEMORY|BITS64,0,0,0}, "\1\xDD\202", IF_8086|IF_FPU},
    /*  395 */ {I_FST, 1, {FPUREG,0,0,0}, "\1\xDD\10\xD0", IF_8086|IF_FPU},
    /*  396 */ {I_FSTCW, 1, {MEMORY,0,0,0}, "\2\x9B\xD9\207", IF_8086|IF_FPU|IF_SW},
    /*  397 */ {I_FSTENV, 1, {MEMORY,0,0,0}, "\2\x9B\xD9\206", IF_8086|IF_FPU},
    /*  398 */ {I_FSTP, 1, {MEMORY|BITS32,0,0,0}, "\1\xD9\203", IF_8086|IF_FPU},
    /*  399 */ {I_FSTP, 1, {MEMORY|BITS64,0,0,0}, "\1\xDD\203", IF_8086|IF_FPU},
    /*  400 */ {I_FSTP, 1, {MEMORY|BITS80,0,0,0}, "\1\xDB\207", IF_8086|IF_FPU},
    /*  401 */ {I_FSTP, 1, {FPUREG,0,0,0}, "\1\xDD\10\xD8", IF_8086|IF_FPU},
    /*  402 */ {I_FSTSW, 1, {MEMORY,0,0,0}, "\2\x9B\xDD\207", IF_8086|IF_FPU|IF_SW},
    /*  403 */ {I_FSTSW, 1, {REG_AX,0,0,0}, "\3\x9B\xDF\xE0", IF_286|IF_FPU},
    /*  404 */ {I_FSUB, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\204", IF_8086|IF_FPU},
    /*  405 */ {I_FSUB, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\204", IF_8086|IF_FPU},
    /*  406 */ {I_FSUB, 1, {FPUREG|TO,0,0,0}, "\1\xDC\10\xE8", IF_8086|IF_FPU},
    /*  407 */ {I_FSUB, 2, {FPUREG,FPU0,0,0}, "\1\xDC\10\xE8", IF_8086|IF_FPU},
    /*  408 */ {I_FSUB, 1, {FPUREG,0,0,0}, "\1\xD8\10\xE0", IF_8086|IF_FPU},
    /*  409 */ {I_FSUB, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xE0", IF_8086|IF_FPU},
    /*  410 */ {I_FSUBP, 1, {FPUREG,0,0,0}, "\1\xDE\10\xE8", IF_8086|IF_FPU},
    /*  411 */ {I_FSUBP, 2, {FPUREG,FPU0,0,0}, "\1\xDE\10\xE8", IF_8086|IF_FPU},
    /*  412 */ {I_FSUBR, 1, {MEMORY|BITS32,0,0,0}, "\1\xD8\205", IF_8086|IF_FPU},
    /*  413 */ {I_FSUBR, 1, {MEMORY|BITS64,0,0,0}, "\1\xDC\205", IF_8086|IF_FPU},
    /*  414 */ {I_FSUBR, 1, {FPUREG|TO,0,0,0}, "\1\xDC\10\xE0", IF_8086|IF_FPU},
    /*  415 */ {I_FSUBR, 2, {FPUREG,FPU0,0,0}, "\1\xDC\10\xE0", IF_8086|IF_FPU},
    /*  416 */ {I_FSUBR, 1, {FPUREG,0,0,0}, "\1\xD8\10\xE8", IF_8086|IF_FPU},
    /*  417 */ {I_FSUBR, 2, {FPU0,FPUREG,0,0}, "\1\xD8\11\xE8", IF_8086|IF_FPU},
    /*  418 */ {I_FSUBRP, 1, {FPUREG,0,0,0}, "\1\xDE\10\xE0", IF_8086|IF_FPU},
    /*  419 */ {I_FSUBRP, 2, {FPUREG,FPU0,0,0}, "\1\xDE\10\xE0", IF_8086|IF_FPU},
    /*  420 */ {I_FTST, 0, {0,0,0,0}, "\2\xD9\xE4", IF_8086|IF_FPU},
    /*  421 */ {I_FUCOM, 1, {FPUREG,0,0,0}, "\1\xDD\10\xE0", IF_386|IF_FPU},
    /*  422 */ {I_FUCOM, 2, {FPU0,FPUREG,0,0}, "\1\xDD\11\xE0", IF_386|IF_FPU},
    /*  423 */ {I_FUCOMI, 1, {FPUREG,0,0,0}, "\1\xDB\10\xE8", IF_P6|IF_FPU},
    /*  424 */ {I_FUCOMI, 2, {FPU0,FPUREG,0,0}, "\1\xDB\11\xE8", IF_P6|IF_FPU},
    /*  425 */ {I_FUCOMIP, 1, {FPUREG,0,0,0}, "\1\xDF\10\xE8", IF_P6|IF_FPU},
    /*  426 */ {I_FUCOMIP, 2, {FPU0,FPUREG,0,0}, "\1\xDF\11\xE8", IF_P6|IF_FPU},
    /*  427 */ {I_FUCOMP, 1, {FPUREG,0,0,0}, "\1\xDD\10\xE8", IF_386|IF_FPU},
    /*  428 */ {I_FUCOMP, 2, {FPU0,FPUREG,0,0}, "\1\xDD\11\xE8", IF_386|IF_FPU},
    /*  429 */ {I_FUCOMPP, 0, {0,0,0,0}, "\2\xDA\xE9", IF_386|IF_FPU},
    /*  430 */ {I_FXAM, 0, {0,0,0,0}, "\2\xD9\xE5", IF_8086|IF_FPU},
    /*  431 */ {I_FXCH, 0, {0,0,0,0}, "\2\xD9\xC9", IF_8086|IF_FPU},
    /*  432 */ {I_FXCH, 1, {FPUREG,0,0,0}, "\1\xD9\10\xC8", IF_8086|IF_FPU},
    /*  433 */ {I_FXCH, 2, {FPUREG,FPU0,0,0}, "\1\xD9\10\xC8", IF_8086|IF_FPU},
    /*  434 */ {I_FXCH, 2, {FPU0,FPUREG,0,0}, "\1\xD9\11\xC8", IF_8086|IF_FPU},
    /*  435 */ {I_FXTRACT, 0, {0,0,0,0}, "\2\xD9\xF4", IF_8086|IF_FPU},
    /*  436 */ {I_FYL2X, 0, {0,0,0,0}, "\2\xD9\xF1", IF_8086|IF_FPU},
    /*  437 */ {I_FYL2XP1, 0, {0,0,0,0}, "\2\xD9\xF9", IF_8086|IF_FPU},
    /*  438 */ {I_HLT, 0, {0,0,0,0}, "\1\xF4", IF_8086|IF_PRIV},
    /*  439 */ {I_IDIV, 1, {RM_GPR|BITS8,0,0,0}, "\1\xF6\207", IF_8086},
    /*  440 */ {I_IDIV, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xF7\207", IF_8086},
    /*  441 */ {I_IDIV, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xF7\207", IF_386},
    /*  442 */ {I_IDIV, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xF7\207", IF_X64},
    /*  443 */ {I_IMUL, 1, {RM_GPR|BITS8,0,0,0}, "\1\xF6\205", IF_8086},
    /*  444 */ {I_IMUL, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xF7\205", IF_8086},
    /*  445 */ {I_IMUL, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xF7\205", IF_386},
    /*  446 */ {I_IMUL, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xF7\205", IF_X64},
    /*  447 */ {I_IMUL, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xAF\110", IF_386|IF_SM},
    /*  448 */ {I_IMUL, 2, {REG16,REG16,0,0}, "\320\2\x0F\xAF\110", IF_386},
    /*  449 */ {I_IMUL, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\xAF\110", IF_386|IF_SM},
    /*  450 */ {I_IMUL, 2, {REG32,REG32,0,0}, "\321\2\x0F\xAF\110", IF_386},
    /*  451 */ {I_IMUL, 2, {REG64,MEMORY,0,0}, "\324\2\x0F\xAF\110", IF_X64|IF_SM},
    /*  452 */ {I_IMUL, 2, {REG64,REG64,0,0}, "\324\2\x0F\xAF\110", IF_X64},
    /*  453 */ {I_IMUL, 3, {REG16,MEMORY,IMMEDIATE|BITS8,0}, "\320\1\x6B\110\16", IF_186|IF_SM},
    /*  454 */ {I_IMUL, 3, {REG16,MEMORY,IMMEDIATE|BITS16,0}, "\320\1\x69\110\32", IF_186|IF_SM},
    /*  455 */ {I_IMUL, 3, {REG16,REG16,IMMEDIATE|BITS8,0}, "\320\1\x6B\110\16", IF_186},
    /*  456 */ {I_IMUL, 3, {REG16,REG16,IMMEDIATE|BITS16,0}, "\320\1\x69\110\32", IF_186},
    /*  457 */ {I_IMUL, 3, {REG32,MEMORY,IMMEDIATE|BITS8,0}, "\321\1\x6B\110\16", IF_386|IF_SM},
    /*  458 */ {I_IMUL, 3, {REG32,MEMORY,IMMEDIATE|BITS32,0}, "\321\1\x69\110\42", IF_386|IF_SM},
    /*  459 */ {I_IMUL, 3, {REG32,REG32,IMMEDIATE|BITS8,0}, "\321\1\x6B\110\16", IF_386},
    /*  460 */ {I_IMUL, 3, {REG32,REG32,IMMEDIATE|BITS32,0}, "\321\1\x69\110\42", IF_386},
    /*  461 */ {I_IMUL, 3, {REG64,MEMORY,IMMEDIATE|BITS8,0}, "\324\1\x6B\110\16", IF_X64|IF_SM},
    /*  462 */ {I_IMUL, 3, {REG64,MEMORY,IMMEDIATE|BITS32,0}, "\324\1\x69\110\42", IF_X64|IF_SM},
    /*  463 */ {I_IMUL, 3, {REG64,REG64,IMMEDIATE|BITS8,0}, "\324\1\x6B\110\16", IF_X64},
    /*  464 */ {I_IMUL, 3, {REG64,REG64,IMMEDIATE|BITS32,0}, "\324\1\x69\110\42", IF_X64},
    /*  465 */ {I_IMUL, 2, {REG16,IMMEDIATE|BITS8,0,0}, "\320\1\x6B\100\15", IF_186},
    /*  466 */ {I_IMUL, 2, {REG16,IMMEDIATE|BITS16,0,0}, "\320\1\x69\100\31", IF_186},
    /*  467 */ {I_IMUL, 2, {REG32,IMMEDIATE|BITS8,0,0}, "\321\1\x6B\100\15", IF_386},
    /*  468 */ {I_IMUL, 2, {REG32,IMMEDIATE|BITS32,0,0}, "\321\1\x69\100\41", IF_386},
    /*  469 */ {I_IMUL, 2, {REG64,IMMEDIATE|BITS32,0,0}, "\324\1\x69\100\41", IF_X64},
    /*  470 */ {I_IN, 2, {REG_AL,IMMEDIATE,0,0}, "\1\xE4\25", IF_8086|IF_SB},
    /*  471 */ {I_IN, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\xE5\25", IF_8086|IF_SB},
    /*  472 */ {I_IN, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\xE5\25", IF_386|IF_SB},
    /*  473 */ {I_IN, 2, {REG_AL,REG_DX,0,0}, "\1\xEC", IF_8086},
    /*  474 */ {I_IN, 2, {REG_AX,REG_DX,0,0}, "\320\1\xED", IF_8086},
    /*  475 */ {I_IN, 2, {REG_EAX,REG_DX,0,0}, "\321\1\xED", IF_386},
    /*  476 */ {I_INC, 1, {REG16,0,0,0}, "\320\10\x40", IF_8086|IF_NOLONG},
    /*  477 */ {I_INC, 1, {REG32,0,0,0}, "\321\10\x40", IF_386|IF_NOLONG},
    /*  478 */ {I_INC, 1, {RM_GPR|BITS8,0,0,0}, "\1\xFE\200", IF_8086},
    /*  479 */ {I_INC, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xFF\200", IF_8086},
    /*  480 */ {I_INC, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xFF\200", IF_386},
    /*  481 */ {I_INC, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xFF\200", IF_X64},
    /*  482 */ {I_INSB, 0, {0,0,0,0}, "\1\x6C", IF_186},
    /*  483 */ {I_INSD, 0, {0,0,0,0}, "\321\1\x6D", IF_386},
    /*  484 */ {I_INSW, 0, {0,0,0,0}, "\320\1\x6D", IF_186},
    /*  485 */ {I_INT, 1, {IMMEDIATE,0,0,0}, "\1\xCD\24", IF_8086|IF_SB},
    /*  486 */ {I_INT1, 0, {0,0,0,0}, "\1\xF1", IF_386},
    /*  487 */ {I_INT3, 0, {0,0,0,0}, "\1\xCC", IF_8086},
    /*  488 */ {I_INTO, 0, {0,0,0,0}, "\1\xCE", IF_8086|IF_NOLONG},
    /*  489 */ {I_INVD, 0, {0,0,0,0}, "\2\x0F\x08", IF_486|IF_PRIV},
    /*  490 */ {I_INVLPG, 1, {MEMORY,0,0,0}, "\2\x0F\x01\207", IF_486|IF_PRIV},
    /*  491 */ {I_INVLPGA, 2, {REG_AX,REG_ECX,0,0}, "\310\3\x0F\x01\xDF", IF_X86_64|IF_AMD|IF_NOLONG},
    /*  492 */ {I_INVLPGA, 2, {REG_EAX,REG_ECX,0,0}, "\311\3\x0F\x01\xDF", IF_X86_64|IF_AMD},
    /*  493 */ {I_INVLPGA, 2, {REG_RAX,REG_ECX,0,0}, "\313\3\x0F\x01\xDF", IF_X64|IF_AMD},
    /*  494 */ {I_INVLPGA, 0, {0,0,0,0}, "\3\x0F\x01\xDF", IF_X86_64|IF_AMD},
    /*  495 */ {I_IRET, 0, {0,0,0,0}, "\322\1\xCF", IF_8086},
    /*  496 */ {I_IRETD, 0, {0,0,0,0}, "\321\1\xCF", IF_386},
    /*  497 */ {I_IRETQ, 0, {0,0,0,0}, "\324\1\xCF", IF_X64},
    /*  498 */ {I_IRETW, 0, {0,0,0,0}, "\320\1\xCF", IF_8086},
    /*  499 */ {I_JCXZ, 1, {IMMEDIATE,0,0,0}, "\310\1\xE3\50", IF_8086|IF_NOLONG},
    /*  500 */ {I_JECXZ, 1, {IMMEDIATE,0,0,0}, "\311\1\xE3\50", IF_386},
    /*  501 */ {I_JMP, 1, {IMMEDIATE|SHORT,0,0,0}, "\1\xEB\50", IF_8086},
    /*  502 */ {I_JMP, 1, {IMMEDIATE,0,0,0}, "\322\1\xE9\64", IF_8086},
    /*  503 */ {I_JMP, 1, {IMMEDIATE|BITS16,0,0,0}, "\320\1\xE9\64", IF_8086},
    /*  504 */ {I_JMP, 1, {IMMEDIATE|BITS32,0,0,0}, "\321\1\xE9\64", IF_386},
    /*  505 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0}, "\322\1\xEA\35\30", IF_8086|IF_NOLONG},
    /*  506 */ {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0}, "\320\1\xEA\31\30", IF_8086|IF_NOLONG},
    /*  507 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0}, "\320\1\xEA\31\30", IF_8086|IF_NOLONG},
    /*  508 */ {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0}, "\321\1\xEA\41\30", IF_386|IF_NOLONG},
    /*  509 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0}, "\321\1\xEA\41\30", IF_386|IF_NOLONG},
    /*  510 */ {I_JMP, 1, {MEMORY|FAR,0,0,0}, "\322\1\xFF\205", IF_8086},
    /*  511 */ {I_JMP, 1, {MEMORY|BITS16|FAR,0,0,0}, "\320\1\xFF\205", IF_8086},
    /*  512 */ {I_JMP, 1, {MEMORY|BITS32|FAR,0,0,0}, "\321\1\xFF\205", IF_386},
    /*  513 */ {I_JMP, 1, {MEMORY|NEAR,0,0,0}, "\322\1\xFF\204", IF_8086},
    /*  514 */ {I_JMP, 1, {MEMORY|BITS16|NEAR,0,0,0}, "\320\1\xFF\204", IF_8086},
    /*  515 */ {I_JMP, 1, {MEMORY|BITS32|NEAR,0,0,0}, "\321\1\xFF\204", IF_386|IF_NOLONG},
    /*  516 */ {I_JMP, 1, {MEMORY|BITS64|NEAR,0,0,0}, "\324\1\xFF\204", IF_X64},
    /*  517 */ {I_JMP, 1, {REG16,0,0,0}, "\320\1\xFF\204", IF_8086},
    /*  518 */ {I_JMP, 1, {REG32,0,0,0}, "\321\1\xFF\204", IF_386|IF_NOLONG},
    /*  519 */ {I_JMP, 1, {REG64,0,0,0}, "\324\1\xFF\204", IF_X64},
    /*  520 */ {I_JMP, 1, {MEMORY,0,0,0}, "\322\1\xFF\204", IF_8086},
    /*  521 */ {I_JMP, 1, {MEMORY|BITS16,0,0,0}, "\320\1\xFF\204", IF_8086},
    /*  522 */ {I_JMP, 1, {MEMORY|BITS32,0,0,0}, "\321\1\xFF\204", IF_386|IF_NOLONG},
    /*  523 */ {I_JMP, 1, {MEMORY|BITS64,0,0,0}, "\324\1\xFF\204", IF_X64},
    /*  524 */ {I_JMPE, 1, {IMMEDIATE,0,0,0}, "\322\2\x0F\xB8\64", IF_IA64},
    /*  525 */ {I_JMPE, 1, {IMMEDIATE|BITS16,0,0,0}, "\320\2\x0F\xB8\64", IF_IA64},
    /*  526 */ {I_JMPE, 1, {IMMEDIATE|BITS32,0,0,0}, "\321\2\x0F\xB8\64", IF_IA64},
    /*  527 */ {I_JMPE, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x00\206", IF_IA64},
    /*  528 */ {I_JMPE, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x00\206", IF_IA64},
    /*  529 */ {I_JRCXZ, 1, {IMMEDIATE,0,0,0}, "\1\xE3\50", IF_X64},
    /*  530 */ {I_LAHF, 0, {0,0,0,0}, "\1\x9F", IF_8086},
    /*  531 */ {I_LAR, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\x02\110", IF_286|IF_PROT|IF_SW},
    /*  532 */ {I_LAR, 2, {REG16,REG16,0,0}, "\320\2\x0F\x02\110", IF_286|IF_PROT},
    /*  533 */ {I_LAR, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\x02\110", IF_386|IF_PROT|IF_SW},
    /*  534 */ {I_LAR, 2, {REG32,REG16,0,0}, "\321\2\x0F\x02\110", IF_386|IF_PROT},
    /*  535 */ {I_LAR, 2, {REG64,MEMORY,0,0}, "\324\2\x0F\x02\110", IF_X64|IF_PROT|IF_SW},
    /*  536 */ {I_LAR, 2, {REG64,REG16,0,0}, "\324\2\x0F\x02\110", IF_X64|IF_PROT},
    /*  537 */ {I_LDS, 2, {REG16,MEMORY,0,0}, "\320\1\xC5\110", IF_8086|IF_NOLONG},
    /*  538 */ {I_LDS, 2, {REG32,MEMORY,0,0}, "\321\1\xC5\110", IF_386|IF_NOLONG},
    /*  539 */ {I_LEA, 2, {REG16,MEMORY,0,0}, "\320\1\x8D\110", IF_8086},
    /*  540 */ {I_LEA, 2, {REG32,MEMORY,0,0}, "\321\1\x8D\110", IF_386},
    /*  541 */ {I_LEA, 2, {REG64,MEMORY,0,0}, "\324\1\x8D\110", IF_X64},
    /*  542 */ {I_LEAVE, 0, {0,0,0,0}, "\1\xC9", IF_186},
    /*  543 */ {I_LES, 2, {REG16,MEMORY,0,0}, "\320\1\xC4\110", IF_8086|IF_NOLONG},
    /*  544 */ {I_LES, 2, {REG32,MEMORY,0,0}, "\321\1\xC4\110", IF_386|IF_NOLONG},
    /*  545 */ {I_LFENCE, 0, {0,0,0,0}, "\3\x0F\xAE\xE8", IF_X64|IF_AMD},
    /*  546 */ {I_LFS, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xB4\110", IF_386},
    /*  547 */ {I_LFS, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\xB4\110", IF_386},
    /*  548 */ {I_LGDT, 1, {MEMORY,0,0,0}, "\2\x0F\x01\202", IF_286|IF_PRIV},
    /*  549 */ {I_LGS, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xB5\110", IF_386},
    /*  550 */ {I_LGS, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\xB5\110", IF_386},
    /*  551 */ {I_LIDT, 1, {MEMORY,0,0,0}, "\2\x0F\x01\203", IF_286|IF_PRIV},
    /*  552 */ {I_LLDT, 1, {MEMORY,0,0,0}, "\1\x0F\170\202", IF_286|IF_PROT|IF_PRIV},
    /*  553 */ {I_LLDT, 1, {MEMORY|BITS16,0,0,0}, "\1\x0F\170\202", IF_286|IF_PROT|IF_PRIV},
    /*  554 */ {I_LLDT, 1, {REG16,0,0,0}, "\1\x0F\170\202", IF_286|IF_PROT|IF_PRIV},
    /*  555 */ {I_LMSW, 1, {MEMORY,0,0,0}, "\2\x0F\x01\206", IF_286|IF_PRIV},
    /*  556 */ {I_LMSW, 1, {MEMORY|BITS16,0,0,0}, "\2\x0F\x01\206", IF_286|IF_PRIV},
    /*  557 */ {I_LMSW, 1, {REG16,0,0,0}, "\2\x0F\x01\206", IF_286|IF_PRIV},
    /*  558 */ {I_LOADALL, 0, {0,0,0,0}, "\2\x0F\x07", IF_386|IF_UNDOC},
    /*  559 */ {I_LOADALL286, 0, {0,0,0,0}, "\2\x0F\x05", IF_286|IF_UNDOC},
    /*  560 */ {I_LODSB, 0, {0,0,0,0}, "\1\xAC", IF_8086},
    /*  561 */ {I_LODSD, 0, {0,0,0,0}, "\321\1\xAD", IF_386},
    /*  562 */ {I_LODSQ, 0, {0,0,0,0}, "\324\1\xAD", IF_X64},
    /*  563 */ {I_LODSW, 0, {0,0,0,0}, "\320\1\xAD", IF_8086},
    /*  564 */ {I_LOOP, 1, {IMMEDIATE,0,0,0}, "\312\1\xE2\50", IF_8086},
    /*  565 */ {I_LOOP, 2, {IMMEDIATE,REG_CX,0,0}, "\310\1\xE2\50", IF_8086|IF_NOLONG},
    /*  566 */ {I_LOOP, 2, {IMMEDIATE,REG_ECX,0,0}, "\311\1\xE2\50", IF_386},
    /*  567 */ {I_LOOP, 2, {IMMEDIATE,REG_RCX,0,0}, "\313\1\xE2\50", IF_X64},
    /*  568 */ {I_LOOPE, 1, {IMMEDIATE,0,0,0}, "\312\1\xE1\50", IF_8086},
    /*  569 */ {I_LOOPE, 2, {IMMEDIATE,REG_CX,0,0}, "\310\1\xE1\50", IF_8086|IF_NOLONG},
    /*  570 */ {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0,0}, "\311\1\xE1\50", IF_386},
    /*  571 */ {I_LOOPE, 2, {IMMEDIATE,REG_RCX,0,0}, "\313\1\xE1\50", IF_X64},
    /*  572 */ {I_LOOPNE, 1, {IMMEDIATE,0,0,0}, "\312\1\xE0\50", IF_8086},
    /*  573 */ {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0,0}, "\310\1\xE0\50", IF_8086|IF_NOLONG},
    /*  574 */ {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0,0}, "\311\1\xE0\50", IF_386},
    /*  575 */ {I_LOOPNE, 2, {IMMEDIATE,REG_RCX,0,0}, "\313\1\xE0\50", IF_X64},
    /*  576 */ {I_LOOPNZ, 1, {IMMEDIATE,0,0,0}, "\312\1\xE0\50", IF_8086},
    /*  577 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0,0}, "\310\1\xE0\50", IF_8086|IF_NOLONG},
    /*  578 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0,0}, "\311\1\xE0\50", IF_386},
    /*  579 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_RCX,0,0}, "\313\1\xE0\50", IF_X64},
    /*  580 */ {I_LOOPZ, 1, {IMMEDIATE,0,0,0}, "\312\1\xE1\50", IF_8086},
    /*  581 */ {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0,0}, "\310\1\xE1\50", IF_8086|IF_NOLONG},
    /*  582 */ {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0,0}, "\311\1\xE1\50", IF_386},
    /*  583 */ {I_LOOPZ, 2, {IMMEDIATE,REG_RCX,0,0}, "\313\1\xE1\50", IF_X64},
    /*  584 */ {I_LSL, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\x03\110", IF_286|IF_PROT|IF_SW},
    /*  585 */ {I_LSL, 2, {REG16,REG16,0,0}, "\320\2\x0F\x03\110", IF_286|IF_PROT},
    /*  586 */ {I_LSL, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\x03\110", IF_386|IF_PROT|IF_SW},
    /*  587 */ {I_LSL, 2, {REG32,REG16,0,0}, "\321\2\x0F\x03\110", IF_386|IF_PROT},
    /*  588 */ {I_LSL, 2, {REG64,MEMORY,0,0}, "\324\2\x0F\x03\110", IF_X64|IF_PROT|IF_SW},
    /*  589 */ {I_LSL, 2, {REG64,REG16,0,0}, "\324\2\x0F\x03\110", IF_X64|IF_PROT},
    /*  590 */ {I_LSS, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xB2\110", IF_386},
    /*  591 */ {I_LSS, 2, {REG32,MEMORY,0,0}, "\321\2\x0F\xB2\110", IF_386},
    /*  592 */ {I_LTR, 1, {MEMORY,0,0,0}, "\1\x0F\170\203", IF_286|IF_PROT|IF_PRIV},
    /*  593 */ {I_LTR, 1, {MEMORY|BITS16,0,0,0}, "\1\x0F\170\203", IF_286|IF_PROT|IF_PRIV|IF_NOLONG},
    /*  594 */ {I_LTR, 1, {REG16,0,0,0}, "\1\x0F\170\203", IF_286|IF_PROT|IF_PRIV|IF_NOLONG},
    /*  595 */ {I_MFENCE, 0, {0,0,0,0}, "\3\x0F\xAE\xF0", IF_X64|IF_AMD},
    /*  596 */ {I_MONITOR, 0, {0,0,0,0}, "\3\x0F\x01\xC8", IF_PRESCOTT},
    /*  597 */ {I_MOV, 2, {MEMORY,REG_SREG,0,0}, "\1\x8C\101", IF_8086|IF_SM},
    /*  598 */ {I_MOV, 2, {REG16,REG_SREG,0,0}, "\320\1\x8C\101", IF_8086},
    /*  599 */ {I_MOV, 2, {REG32,REG_SREG,0,0}, "\321\1\x8C\101", IF_386},
    /*  600 */ {I_MOV, 2, {REG_SREG,MEMORY,0,0}, "\1\x8E\110", IF_8086|IF_SM},
    /*  601 */ {I_MOV, 2, {REG_SREG,REG16,0,0}, "\1\x8E\110", IF_8086},
    /*  602 */ {I_MOV, 2, {REG_SREG,REG32,0,0}, "\1\x8E\110", IF_386},
    /*  603 */ {I_MOV, 2, {REG_AL,MEM_OFFS,0,0}, "\1\xA0\45", IF_8086|IF_SM},
    /*  604 */ {I_MOV, 2, {REG_AX,MEM_OFFS,0,0}, "\320\1\xA1\45", IF_8086|IF_SM},
    /*  605 */ {I_MOV, 2, {REG_EAX,MEM_OFFS,0,0}, "\321\1\xA1\45", IF_386|IF_SM},
    /*  606 */ {I_MOV, 2, {REG_RAX,MEM_OFFS,0,0}, "\324\1\xA1\45", IF_X64|IF_SM},
    /*  607 */ {I_MOV, 2, {MEM_OFFS,REG_AL,0,0}, "\1\xA2\44", IF_8086|IF_SM},
    /*  608 */ {I_MOV, 2, {MEM_OFFS,REG_AX,0,0}, "\320\1\xA3\44", IF_8086|IF_SM},
    /*  609 */ {I_MOV, 2, {MEM_OFFS,REG_EAX,0,0}, "\321\1\xA3\44", IF_386|IF_SM},
    /*  610 */ {I_MOV, 2, {MEM_OFFS,REG_RAX,0,0}, "\324\1\xA3\44", IF_X64|IF_SM},
    /*  611 */ {I_MOV, 2, {REG32,REG_CREG,0,0}, "\334\2\x0F\x20\101", IF_386|IF_PRIV|IF_NOLONG},
    /*  612 */ {I_MOV, 2, {REG64,REG_CREG,0,0}, "\323\2\x0F\x20\101", IF_X64|IF_PRIV},
    /*  613 */ {I_MOV, 2, {REG_CREG,REG32,0,0}, "\334\2\x0F\x22\110", IF_386|IF_PRIV|IF_NOLONG},
    /*  614 */ {I_MOV, 2, {REG_CREG,REG64,0,0}, "\323\2\x0F\x22\110", IF_X64|IF_PRIV},
    /*  615 */ {I_MOV, 2, {REG32,REG_DREG,0,0}, "\2\x0F\x21\101", IF_386|IF_PRIV},
    /*  616 */ {I_MOV, 2, {REG64,REG_DREG,0,0}, "\323\2\x0F\x21\101", IF_X64|IF_PRIV},
    /*  617 */ {I_MOV, 2, {REG_DREG,REG32,0,0}, "\2\x0F\x23\110", IF_386|IF_PRIV},
    /*  618 */ {I_MOV, 2, {REG_DREG,REG64,0,0}, "\323\2\x0F\x23\110", IF_X64|IF_PRIV},
    /*  619 */ {I_MOV, 2, {REG32,REG_TREG,0,0}, "\2\x0F\x24\101", IF_386|IF_NOLONG},
    /*  620 */ {I_MOV, 2, {REG_TREG,REG32,0,0}, "\2\x0F\x26\110", IF_386|IF_NOLONG},
    /*  621 */ {I_MOV, 2, {MEMORY,REG8,0,0}, "\1\x88\101", IF_8086|IF_SM},
    /*  622 */ {I_MOV, 2, {REG8,REG8,0,0}, "\1\x88\101", IF_8086},
    /*  623 */ {I_MOV, 2, {MEMORY,REG16,0,0}, "\320\1\x89\101", IF_8086|IF_SM},
    /*  624 */ {I_MOV, 2, {REG16,REG16,0,0}, "\320\1\x89\101", IF_8086},
    /*  625 */ {I_MOV, 2, {MEMORY,REG32,0,0}, "\321\1\x89\101", IF_386|IF_SM},
    /*  626 */ {I_MOV, 2, {REG32,REG32,0,0}, "\321\1\x89\101", IF_386},
    /*  627 */ {I_MOV, 2, {MEMORY,REG64,0,0}, "\324\1\x89\101", IF_X64|IF_SM},
    /*  628 */ {I_MOV, 2, {REG64,REG64,0,0}, "\324\1\x89\101", IF_X64},
    /*  629 */ {I_MOV, 2, {REG8,MEMORY,0,0}, "\1\x8A\110", IF_8086|IF_SM},
    /*  630 */ {I_MOV, 2, {REG8,REG8,0,0}, "\1\x8A\110", IF_8086},
    /*  631 */ {I_MOV, 2, {REG16,MEMORY,0,0}, "\320\1\x8B\110", IF_8086|IF_SM},
    /*  632 */ {I_MOV, 2, {REG16,REG16,0,0}, "\320\1\x8B\110", IF_8086},
    /*  633 */ {I_MOV, 2, {REG32,MEMORY,0,0}, "\321\1\x8B\110", IF_386|IF_SM},
    /*  634 */ {I_MOV, 2, {REG32,REG32,0,0}, "\321\1\x8B\110", IF_386},
    /*  635 */ {I_MOV, 2, {REG64,MEMORY,0,0}, "\324\1\x8B\110", IF_X64|IF_SM},
    /*  636 */ {I_MOV, 2, {REG64,REG64,0,0}, "\324\1\x8B\110", IF_X64|IF_SM},
    /*  637 */ {I_MOV, 2, {REG8,IMMEDIATE,0,0}, "\10\xB0\21", IF_8086|IF_SM},
    /*  638 */ {I_MOV, 2, {REG16,IMMEDIATE,0,0}, "\320\10\xB8\31", IF_8086|IF_SM},
    /*  639 */ {I_MOV, 2, {REG32,IMMEDIATE,0,0}, "\321\10\xB8\41", IF_386|IF_SM},
    /*  640 */ {I_MOV, 2, {REG64,IMMEDIATE,0,0}, "\324\10\xB8\55", IF_X64|IF_SQ},
    /*  641 */ {I_MOV, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC6\200\21", IF_8086|IF_SM},
    /*  642 */ {I_MOV, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC7\200\31", IF_8086|IF_SM},
    /*  643 */ {I_MOV, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC7\200\41", IF_386|IF_SM},
    /*  644 */ {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC7\200\41", IF_X64|IF_SD},
    /*  645 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\xC6\200\21", IF_8086|IF_SM},
    /*  646 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\1\xC7\200\31", IF_8086|IF_SM},
    /*  647 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\1\xC7\200\41", IF_386|IF_SM},
    /*  648 */ {I_MOVD, 2, {MMXREG,MEMORY,0,0}, "\2\x0F\x6E\110", IF_PENT|IF_MMX|IF_SD},
    /*  649 */ {I_MOVD, 2, {MMXREG,REG32,0,0}, "\2\x0F\x6E\110", IF_PENT|IF_MMX},
    /*  650 */ {I_MOVD, 2, {MEMORY,MMXREG,0,0}, "\2\x0F\x7E\101", IF_PENT|IF_MMX|IF_SD},
    /*  651 */ {I_MOVD, 2, {REG32,MMXREG,0,0}, "\2\x0F\x7E\101", IF_PENT|IF_MMX},
    /*  652 */ {I_MOVD, 2, {XMMREG,MEMORY,0,0}, "\320\2\x0F\x6E\110", IF_X64|IF_SD},
    /*  653 */ {I_MOVD, 2, {XMMREG,REG32,0,0}, "\320\2\x0F\x6E\110", IF_X64},
    /*  654 */ {I_MOVD, 2, {MEMORY,XMMREG,0,0}, "\320\2\x0F\x7E\101", IF_X64|IF_SD},
    /*  655 */ {I_MOVD, 2, {REG32,XMMREG,0,0}, "\320\2\x0F\x7E\101", IF_X64|IF_SSE},
    /*  656 */ {I_MOVQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x6F\110", IF_PENT|IF_MMX|IF_SQ},
    /*  657 */ {I_MOVQ, 2, {RM_MMX,MMXREG,0,0}, "\2\x0F\x7F\101", IF_PENT|IF_MMX|IF_SQ},
    /*  658 */ {I_MOVQ, 2, {MMXREG,RM_GPR|BITS64,0,0}, "\2\x0F\x6E\110", IF_X64|IF_MMX},
    /*  659 */ {I_MOVQ, 2, {RM_GPR|BITS64,MMXREG,0,0}, "\2\x0F\x7E\101", IF_X64|IF_MMX},
    /*  660 */ {I_MOVSB, 0, {0,0,0,0}, "\1\xA4", IF_8086},
    /*  661 */ {I_MOVSD, 0, {0,0,0,0}, "\321\1\xA5", IF_386},
    /*  662 */ {I_MOVSQ, 0, {0,0,0,0}, "\324\1\xA5", IF_X64},
    /*  663 */ {I_MOVSW, 0, {0,0,0,0}, "\320\1\xA5", IF_8086},
    /*  664 */ {I_MOVSX, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xBE\110", IF_386|IF_SB},
    /*  665 */ {I_MOVSX, 2, {REG16,REG8,0,0}, "\320\2\x0F\xBE\110", IF_386},
    /*  666 */ {I_MOVSX, 2, {REG32,RM_GPR|BITS8,0,0}, "\321\2\x0F\xBE\110", IF_386},
    /*  667 */ {I_MOVSX, 2, {REG32,RM_GPR|BITS16,0,0}, "\321\2\x0F\xBF\110", IF_386},
    /*  668 */ {I_MOVSX, 2, {REG64,RM_GPR|BITS8,0,0}, "\324\2\x0F\xBE\110", IF_X64},
    /*  669 */ {I_MOVSX, 2, {REG64,RM_GPR|BITS16,0,0}, "\324\2\x0F\xBF\110", IF_X64},
    /*  670 */ {I_MOVSX, 2, {REG64,RM_GPR|BITS32,0,0}, "\324\1\x63\110", IF_X64},
    /*  671 */ {I_MOVZX, 2, {REG16,MEMORY,0,0}, "\320\2\x0F\xB6\110", IF_386|IF_SB},
    /*  672 */ {I_MOVZX, 2, {REG16,REG8,0,0}, "\320\2\x0F\xB6\110", IF_386},
    /*  673 */ {I_MOVZX, 2, {REG32,RM_GPR|BITS8,0,0}, "\321\2\x0F\xB6\110", IF_386},
    /*  674 */ {I_MOVZX, 2, {REG32,RM_GPR|BITS16,0,0}, "\321\2\x0F\xB7\110", IF_386},
    /*  675 */ {I_MOVZX, 2, {REG64,RM_GPR|BITS8,0,0}, "\324\2\x0F\xB6\110", IF_X64},
    /*  676 */ {I_MOVZX, 2, {REG64,RM_GPR|BITS16,0,0}, "\324\2\x0F\xB7\110", IF_X64},
    /*  677 */ {I_MUL, 1, {RM_GPR|BITS8,0,0,0}, "\1\xF6\204", IF_8086},
    /*  678 */ {I_MUL, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xF7\204", IF_8086},
    /*  679 */ {I_MUL, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xF7\204", IF_386},
    /*  680 */ {I_MUL, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xF7\204", IF_X64},
    /*  681 */ {I_MWAIT, 0, {0,0,0,0}, "\3\x0F\x01\xC9", IF_PRESCOTT},
    /*  682 */ {I_NEG, 1, {RM_GPR|BITS8,0,0,0}, "\1\xF6\203", IF_8086},
    /*  683 */ {I_NEG, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xF7\203", IF_8086},
    /*  684 */ {I_NEG, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xF7\203", IF_386},
    /*  685 */ {I_NEG, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xF7\203", IF_X64},
    /*  686 */ {I_NOP, 0, {0,0,0,0}, "\1\x90", IF_8086},
    /*  687 */ {I_NOP, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\200", IF_P6},
    /*  688 */ {I_NOP, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\200", IF_P6},
    /*  689 */ {I_NOP, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\200", IF_X64},
    /*  690 */ {I_NOT, 1, {RM_GPR|BITS8,0,0,0}, "\1\xF6\202", IF_8086},
    /*  691 */ {I_NOT, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xF7\202", IF_8086},
    /*  692 */ {I_NOT, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xF7\202", IF_386},
    /*  693 */ {I_NOT, 1, {RM_GPR|BITS64,0,0,0}, "\324\1\xF7\202", IF_X64},
    /*  694 */ {I_OR, 2, {MEMORY,REG8,0,0}, "\1\x08\101", IF_8086|IF_SM},
    /*  695 */ {I_OR, 2, {REG8,REG8,0,0}, "\1\x08\101", IF_8086},
    /*  696 */ {I_OR, 2, {MEMORY,REG16,0,0}, "\320\1\x09\101", IF_8086|IF_SM},
    /*  697 */ {I_OR, 2, {REG16,REG16,0,0}, "\320\1\x09\101", IF_8086},
    /*  698 */ {I_OR, 2, {MEMORY,REG32,0,0}, "\321\1\x09\101", IF_386|IF_SM},
    /*  699 */ {I_OR, 2, {REG32,REG32,0,0}, "\321\1\x09\101", IF_386},
    /*  700 */ {I_OR, 2, {MEMORY,REG64,0,0}, "\324\1\x09\101", IF_X64|IF_SM},
    /*  701 */ {I_OR, 2, {REG64,REG64,0,0}, "\324\1\x09\101", IF_X64},
    /*  702 */ {I_OR, 2, {REG8,MEMORY,0,0}, "\1\x0A\110", IF_8086|IF_SM},
    /*  703 */ {I_OR, 2, {REG8,REG8,0,0}, "\1\x0A\110", IF_8086},
    /*  704 */ {I_OR, 2, {REG16,MEMORY,0,0}, "\320\1\x0B\110", IF_8086|IF_SM},
    /*  705 */ {I_OR, 2, {REG16,REG16,0,0}, "\320\1\x0B\110", IF_8086},
    /*  706 */ {I_OR, 2, {REG32,MEMORY,0,0}, "\321\1\x0B\110", IF_386|IF_SM},
    /*  707 */ {I_OR, 2, {REG32,REG32,0,0}, "\321\1\x0B\110", IF_386},
    /*  708 */ {I_OR, 2, {REG64,MEMORY,0,0}, "\324\1\x0B\110", IF_X64|IF_SM},
    /*  709 */ {I_OR, 2, {REG64,REG64,0,0}, "\324\1\x0B\110", IF_X64},
    /*  710 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\201\15", IF_8086},
    /*  711 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\201\15", IF_386},
    /*  712 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\201\15", IF_X64},
    /*  713 */ {I_OR, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x0C\21", IF_8086|IF_SM},
    /*  714 */ {I_OR, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x0D\31", IF_8086|IF_SM},
    /*  715 */ {I_OR, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x0D\41", IF_386|IF_SM},
    /*  716 */ {I_OR, 2, {REG_RAX,IMMEDIATE,0,0}, "\321\1\x0D\41", IF_X64|IF_SM},
    /*  717 */ {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\201\21", IF_8086|IF_SM},
    /*  718 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\201\141", IF_8086|IF_SM},
    /*  719 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\201\151", IF_386|IF_SM},
    /*  720 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\201\151", IF_X64|IF_SM},
    /*  721 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\201\21", IF_8086|IF_SM},
    /*  722 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\201\141", IF_8086|IF_SM},
    /*  723 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\201\151", IF_386|IF_SM},
    /*  724 */ {I_OUT, 2, {IMMEDIATE,REG_AL,0,0}, "\1\xE6\24", IF_8086|IF_SB},
    /*  725 */ {I_OUT, 2, {IMMEDIATE,REG_AX,0,0}, "\320\1\xE7\24", IF_8086|IF_SB},
    /*  726 */ {I_OUT, 2, {IMMEDIATE,REG_EAX,0,0}, "\321\1\xE7\24", IF_386|IF_SB},
    /*  727 */ {I_OUT, 2, {REG_DX,REG_AL,0,0}, "\1\xEE", IF_8086},
    /*  728 */ {I_OUT, 2, {REG_DX,REG_AX,0,0}, "\320\1\xEF", IF_8086},
    /*  729 */ {I_OUT, 2, {REG_DX,REG_EAX,0,0}, "\321\1\xEF", IF_386},
    /*  730 */ {I_OUTSB, 0, {0,0,0,0}, "\1\x6E", IF_186},
    /*  731 */ {I_OUTSD, 0, {0,0,0,0}, "\321\1\x6F", IF_386},
    /*  732 */ {I_OUTSW, 0, {0,0,0,0}, "\320\1\x6F", IF_186},
    /*  733 */ {I_PACKSSDW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x6B\110", IF_PENT|IF_MMX|IF_SM},
    /*  734 */ {I_PACKSSWB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x63\110", IF_PENT|IF_MMX|IF_SM},
    /*  735 */ {I_PACKUSWB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x67\110", IF_PENT|IF_MMX|IF_SM},
    /*  736 */ {I_PADDB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xFC\110", IF_PENT|IF_MMX|IF_SM},
    /*  737 */ {I_PADDD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xFE\110", IF_PENT|IF_MMX|IF_SM},
    /*  738 */ {I_PADDSB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xEC\110", IF_PENT|IF_MMX|IF_SM},
    /*  739 */ {I_PADDSIW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x51\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  740 */ {I_PADDSW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xED\110", IF_PENT|IF_MMX|IF_SM},
    /*  741 */ {I_PADDUSB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xDC\110", IF_PENT|IF_MMX|IF_SM},
    /*  742 */ {I_PADDUSW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xDD\110", IF_PENT|IF_MMX|IF_SM},
    /*  743 */ {I_PADDW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xFD\110", IF_PENT|IF_MMX|IF_SM},
    /*  744 */ {I_PAND, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xDB\110", IF_PENT|IF_MMX|IF_SM},
    /*  745 */ {I_PANDN, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xDF\110", IF_PENT|IF_MMX|IF_SM},
    /*  746 */ {I_PAUSE, 0, {0,0,0,0}, "\333\1\x90", IF_8086},
    /*  747 */ {I_PAVEB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x50\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  748 */ {I_PAVGUSB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xBF", IF_PENT|IF_3DNOW|IF_SM},
    /*  749 */ {I_PCMPEQB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x74\110", IF_PENT|IF_MMX|IF_SM},
    /*  750 */ {I_PCMPEQD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x76\110", IF_PENT|IF_MMX|IF_SM},
    /*  751 */ {I_PCMPEQW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x75\110", IF_PENT|IF_MMX|IF_SM},
    /*  752 */ {I_PCMPGTB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x64\110", IF_PENT|IF_MMX|IF_SM},
    /*  753 */ {I_PCMPGTD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x66\110", IF_PENT|IF_MMX|IF_SM},
    /*  754 */ {I_PCMPGTW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x65\110", IF_PENT|IF_MMX|IF_SM},
    /*  755 */ {I_PDISTIB, 2, {MMXREG,MEMORY,0,0}, "\2\x0F\x54\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  756 */ {I_PF2ID, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x1D", IF_PENT|IF_3DNOW|IF_SM},
    /*  757 */ {I_PFACC, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xAE", IF_PENT|IF_3DNOW|IF_SM},
    /*  758 */ {I_PFADD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x9E", IF_PENT|IF_3DNOW|IF_SM},
    /*  759 */ {I_PFCMPEQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xB0", IF_PENT|IF_3DNOW|IF_SM},
    /*  760 */ {I_PFCMPGE, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x90", IF_PENT|IF_3DNOW|IF_SM},
    /*  761 */ {I_PFCMPGT, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xA0", IF_PENT|IF_3DNOW|IF_SM},
    /*  762 */ {I_PFMAX, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xA4", IF_PENT|IF_3DNOW|IF_SM},
    /*  763 */ {I_PFMIN, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x94", IF_PENT|IF_3DNOW|IF_SM},
    /*  764 */ {I_PFMUL, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xB4", IF_PENT|IF_3DNOW|IF_SM},
    /*  765 */ {I_PFRCP, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x96", IF_PENT|IF_3DNOW|IF_SM},
    /*  766 */ {I_PFRCPIT1, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xA6", IF_PENT|IF_3DNOW|IF_SM},
    /*  767 */ {I_PFRCPIT2, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xB6", IF_PENT|IF_3DNOW|IF_SM},
    /*  768 */ {I_PFRSQIT1, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xA7", IF_PENT|IF_3DNOW|IF_SM},
    /*  769 */ {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x97", IF_PENT|IF_3DNOW|IF_SM},
    /*  770 */ {I_PFSUB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x9A", IF_PENT|IF_3DNOW|IF_SM},
    /*  771 */ {I_PFSUBR, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xAA", IF_PENT|IF_3DNOW|IF_SM},
    /*  772 */ {I_PI2FD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x0D", IF_PENT|IF_3DNOW|IF_SM},
    /*  773 */ {I_PMACHRIW, 2, {MMXREG,MEMORY,0,0}, "\2\x0F\x5E\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  774 */ {I_PMADDWD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF5\110", IF_PENT|IF_MMX|IF_SM},
    /*  775 */ {I_PMAGW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x52\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  776 */ {I_PMULHRIW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x5D\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  777 */ {I_PMULHRWA, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\1\xB7", IF_PENT|IF_3DNOW|IF_SM},
    /*  778 */ {I_PMULHRWC, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x59\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  779 */ {I_PMULHW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE5\110", IF_PENT|IF_MMX|IF_SM},
    /*  780 */ {I_PMULLW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xD5\110", IF_PENT|IF_MMX|IF_SM},
    /*  781 */ {I_PMVGEZB, 2, {MMXREG,MEMORY,0,0}, "\2\x0F\x5C\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  782 */ {I_PMVLZB, 2, {MMXREG,MEMORY,0,0}, "\2\x0F\x5B\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  783 */ {I_PMVNZB, 2, {MMXREG,MEMORY,0,0}, "\2\x0F\x5A\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  784 */ {I_PMVZB, 2, {MMXREG,MEMORY,0,0}, "\2\x0F\x58\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  785 */ {I_POP, 1, {REG16,0,0,0}, "\320\10\x58", IF_8086},
    /*  786 */ {I_POP, 1, {REG32,0,0,0}, "\321\10\x58", IF_386|IF_NOLONG},
    /*  787 */ {I_POP, 1, {REG64,0,0,0}, "\323\10\x58", IF_X64},
    /*  788 */ {I_POP, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\x8F\200", IF_8086},
    /*  789 */ {I_POP, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\x8F\200", IF_386|IF_NOLONG},
    /*  790 */ {I_POP, 1, {RM_GPR|BITS64,0,0,0}, "\323\1\x8F\200", IF_X64},
    /*  791 */ {I_POP, 1, {REG_DESS,0,0,0}, "\4", IF_8086|IF_NOLONG},
    /*  792 */ {I_POP, 1, {REG_FSGS,0,0,0}, "\1\x0F\5", IF_386},
    /*  793 */ {I_POPA, 0, {0,0,0,0}, "\322\1\x61", IF_186|IF_NOLONG},
    /*  794 */ {I_POPAD, 0, {0,0,0,0}, "\321\1\x61", IF_386|IF_NOLONG},
    /*  795 */ {I_POPAW, 0, {0,0,0,0}, "\320\1\x61", IF_186|IF_NOLONG},
    /*  796 */ {I_POPF, 0, {0,0,0,0}, "\322\1\x9D", IF_8086},
    /*  797 */ {I_POPFD, 0, {0,0,0,0}, "\321\1\x9D", IF_386|IF_NOLONG},
    /*  798 */ {I_POPFQ, 0, {0,0,0,0}, "\321\1\x9D", IF_X64},
    /*  799 */ {I_POPFW, 0, {0,0,0,0}, "\320\1\x9D", IF_8086},
    /*  800 */ {I_POR, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xEB\110", IF_PENT|IF_MMX|IF_SM},
    /*  801 */ {I_PREFETCH, 1, {MEMORY,0,0,0}, "\2\x0F\x0D\200", IF_PENT|IF_3DNOW|IF_SM},
    /*  802 */ {I_PREFETCHW, 1, {MEMORY,0,0,0}, "\2\x0F\x0D\201", IF_PENT|IF_3DNOW|IF_SM},
    /*  803 */ {I_PREFETCHNTA, 1, {MEMORY,0,0,0}, "\2\x0F\x18\200", IF_X64|IF_AMD|IF_SM},
    /*  804 */ {I_PREFETCHT0, 1, {MEMORY,0,0,0}, "\2\x0F\x18\200", IF_X64|IF_AMD|IF_SM},
    /*  805 */ {I_PREFETCHT1, 1, {MEMORY,0,0,0}, "\2\x0F\x18\201", IF_X64|IF_AMD|IF_SM},
    /*  806 */ {I_PREFETCHT2, 1, {MEMORY,0,0,0}, "\2\x0F\x18\202", IF_X64|IF_AMD|IF_SM},
    /*  807 */ {I_PSLLD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF2\110", IF_PENT|IF_MMX|IF_SM},
    /*  808 */ {I_PSLLD, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x72\206\25", IF_PENT|IF_MMX},
    /*  809 */ {I_PSLLQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF3\110", IF_PENT|IF_MMX|IF_SM},
    /*  810 */ {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x73\206\25", IF_PENT|IF_MMX},
    /*  811 */ {I_PSLLW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF1\110", IF_PENT|IF_MMX|IF_SM},
    /*  812 */ {I_PSLLW, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x71\206\25", IF_PENT|IF_MMX},
    /*  813 */ {I_PSRAD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE2\110", IF_PENT|IF_MMX|IF_SM},
    /*  814 */ {I_PSRAD, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x72\204\25", IF_PENT|IF_MMX},
    /*  815 */ {I_PSRAW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE1\110", IF_PENT|IF_MMX|IF_SM},
    /*  816 */ {I_PSRAW, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x71\204\25", IF_PENT|IF_MMX},
    /*  817 */ {I_PSRLD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xD2\110", IF_PENT|IF_MMX|IF_SM},
    /*  818 */ {I_PSRLD, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x72\202\25", IF_PENT|IF_MMX},
    /*  819 */ {I_PSRLQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xD3\110", IF_PENT|IF_MMX|IF_SM},
    /*  820 */ {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x73\202\25", IF_PENT|IF_MMX},
    /*  821 */ {I_PSRLW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xD1\110", IF_PENT|IF_MMX|IF_SM},
    /*  822 */ {I_PSRLW, 2, {MMXREG,IMMEDIATE,0,0}, "\2\x0F\x71\202\25", IF_PENT|IF_MMX},
    /*  823 */ {I_PSUBB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF8\110", IF_PENT|IF_MMX|IF_SM},
    /*  824 */ {I_PSUBD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xFA\110", IF_PENT|IF_MMX|IF_SM},
    /*  825 */ {I_PSUBSB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE8\110", IF_PENT|IF_MMX|IF_SM},
    /*  826 */ {I_PSUBSIW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x55\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /*  827 */ {I_PSUBSW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE9\110", IF_PENT|IF_MMX|IF_SM},
    /*  828 */ {I_PSUBUSB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xD8\110", IF_PENT|IF_MMX|IF_SM},
    /*  829 */ {I_PSUBUSW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xD9\110", IF_PENT|IF_MMX|IF_SM},
    /*  830 */ {I_PSUBW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF9\110", IF_PENT|IF_MMX|IF_SM},
    /*  831 */ {I_PUNPCKHBW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x68\110", IF_PENT|IF_MMX|IF_SM},
    /*  832 */ {I_PUNPCKHDQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x6A\110", IF_PENT|IF_MMX|IF_SM},
    /*  833 */ {I_PUNPCKHWD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x69\110", IF_PENT|IF_MMX|IF_SM},
    /*  834 */ {I_PUNPCKLBW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x60\110", IF_PENT|IF_MMX|IF_SM},
    /*  835 */ {I_PUNPCKLDQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x62\110", IF_PENT|IF_MMX|IF_SM},
    /*  836 */ {I_PUNPCKLWD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x61\110", IF_PENT|IF_MMX|IF_SM},
    /*  837 */ {I_PUSH, 1, {REG16,0,0,0}, "\320\10\x50", IF_8086},
    /*  838 */ {I_PUSH, 1, {REG32,0,0,0}, "\321\10\x50", IF_386|IF_NOLONG},
    /*  839 */ {I_PUSH, 1, {REG64,0,0,0}, "\323\10\x50", IF_X64},
    /*  840 */ {I_PUSH, 1, {RM_GPR|BITS16,0,0,0}, "\320\1\xFF\206", IF_8086},
    /*  841 */ {I_PUSH, 1, {RM_GPR|BITS32,0,0,0}, "\321\1\xFF\206", IF_386|IF_NOLONG},
    /*  842 */ {I_PUSH, 1, {RM_GPR|BITS64,0,0,0}, "\323\1\xFF\206", IF_X64},
    /*  843 */ {I_PUSH, 1, {REG_CS,0,0,0}, "\6", IF_8086|IF_NOLONG},
    /*  844 */ {I_PUSH, 1, {REG_DESS,0,0,0}, "\6", IF_8086|IF_NOLONG},
    /*  845 */ {I_PUSH, 1, {REG_FSGS,0,0,0}, "\1\x0F\7", IF_386},
    /*  846 */ {I_PUSH, 1, {IMMEDIATE|BITS8,0,0,0}, "\1\x6A\14", IF_186},
    /*  847 */ {I_PUSH, 1, {IMMEDIATE|BITS16,0,0,0}, "\320\144\1\x68\140", IF_186},
    /*  848 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0}, "\321\154\1\x68\150", IF_386|IF_NOLONG},
    /*  849 */ {I_PUSH, 1, {IMMEDIATE|BITS64,0,0,0}, "\321\154\1\x68\150", IF_X64},
    /*  850 */ {I_PUSH, 1, {IMMEDIATE,0,0,0}, "\1\x68\34", IF_186},
    /*  851 */ {I_PUSHA, 0, {0,0,0,0}, "\322\1\x60", IF_186|IF_NOLONG},
    /*  852 */ {I_PUSHAD, 0, {0,0,0,0}, "\321\1\x60", IF_386|IF_NOLONG},
    /*  853 */ {I_PUSHAW, 0, {0,0,0,0}, "\320\1\x60", IF_186|IF_NOLONG},
    /*  854 */ {I_PUSHF, 0, {0,0,0,0}, "\322\1\x9C", IF_8086},
    /*  855 */ {I_PUSHFD, 0, {0,0,0,0}, "\321\1\x9C", IF_386|IF_NOLONG},
    /*  856 */ {I_PUSHFQ, 0, {0,0,0,0}, "\321\1\x9C", IF_X64},
    /*  857 */ {I_PUSHFW, 0, {0,0,0,0}, "\320\1\x9C", IF_8086},
    /*  858 */ {I_PXOR, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xEF\110", IF_PENT|IF_MMX|IF_SM},
    /*  859 */ {I_RCL, 2, {RM_GPR|BITS8,UNITY,0,0}, "\1\xD0\202", IF_8086},
    /*  860 */ {I_RCL, 2, {RM_GPR|BITS8,REG_CL,0,0}, "\1\xD2\202", IF_8086},
    /*  861 */ {I_RCL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC0\202\25", IF_186|IF_SB},
    /*  862 */ {I_RCL, 2, {RM_GPR|BITS16,UNITY,0,0}, "\320\1\xD1\202", IF_8086},
    /*  863 */ {I_RCL, 2, {RM_GPR|BITS16,REG_CL,0,0}, "\320\1\xD3\202", IF_8086},
    /*  864 */ {I_RCL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC1\202\25", IF_186|IF_SB},
    /*  865 */ {I_RCL, 2, {RM_GPR|BITS32,UNITY,0,0}, "\321\1\xD1\202", IF_386},
    /*  866 */ {I_RCL, 2, {RM_GPR|BITS32,REG_CL,0,0}, "\321\1\xD3\202", IF_386},
    /*  867 */ {I_RCL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC1\202\25", IF_386|IF_SB},
    /*  868 */ {I_RCL, 2, {RM_GPR|BITS64,UNITY,0,0}, "\324\1\xD1\202", IF_X64},
    /*  869 */ {I_RCL, 2, {RM_GPR|BITS64,REG_CL,0,0}, "\324\1\xD3\202", IF_X64},
    /*  870 */ {I_RCL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC1\202\25", IF_X64|IF_SB},
    /*  871 */ {I_RCR, 2, {RM_GPR|BITS8,UNITY,0,0}, "\1\xD0\203", IF_8086},
    /*  872 */ {I_RCR, 2, {RM_GPR|BITS8,REG_CL,0,0}, "\1\xD2\203", IF_8086},
    /*  873 */ {I_RCR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC0\203\25", IF_186|IF_SB},
    /*  874 */ {I_RCR, 2, {RM_GPR|BITS16,UNITY,0,0}, "\320\1\xD1\203", IF_8086},
    /*  875 */ {I_RCR, 2, {RM_GPR|BITS16,REG_CL,0,0}, "\320\1\xD3\203", IF_8086},
    /*  876 */ {I_RCR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC1\203\25", IF_186|IF_SB},
    /*  877 */ {I_RCR, 2, {RM_GPR|BITS32,UNITY,0,0}, "\321\1\xD1\203", IF_386},
    /*  878 */ {I_RCR, 2, {RM_GPR|BITS32,REG_CL,0,0}, "\321\1\xD3\203", IF_386},
    /*  879 */ {I_RCR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC1\203\25", IF_386|IF_SB},
    /*  880 */ {I_RCR, 2, {RM_GPR|BITS64,UNITY,0,0}, "\324\1\xD1\203", IF_X64},
    /*  881 */ {I_RCR, 2, {RM_GPR|BITS64,REG_CL,0,0}, "\324\1\xD3\203", IF_X64},
    /*  882 */ {I_RCR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC1\203\25", IF_X64|IF_SB},
    /*  883 */ {I_RDSHR, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x36\200", IF_P6|IF_CYRIX|IF_SMM},
    /*  884 */ {I_RDMSR, 0, {0,0,0,0}, "\2\x0F\x32", IF_PENT|IF_PRIV},
    /*  885 */ {I_RDPMC, 0, {0,0,0,0}, "\2\x0F\x33", IF_P6},
    /*  886 */ {I_RDTSC, 0, {0,0,0,0}, "\2\x0F\x31", IF_PENT},
    /*  887 */ {I_RDTSCP, 0, {0,0,0,0}, "\3\x0F\x01\xF9", IF_X86_64},
    /*  888 */ {I_RET, 0, {0,0,0,0}, "\1\xC3", IF_8086},
    /*  889 */ {I_RET, 1, {IMMEDIATE,0,0,0}, "\1\xC2\30", IF_8086|IF_SW},
    /*  890 */ {I_RETF, 0, {0,0,0,0}, "\1\xCB", IF_8086},
    /*  891 */ {I_RETF, 1, {IMMEDIATE,0,0,0}, "\1\xCA\30", IF_8086|IF_SW},
    /*  892 */ {I_RETN, 0, {0,0,0,0}, "\1\xC3", IF_8086},
    /*  893 */ {I_RETN, 1, {IMMEDIATE,0,0,0}, "\1\xC2\30", IF_8086|IF_SW},
    /*  894 */ {I_ROL, 2, {RM_GPR|BITS8,UNITY,0,0}, "\1\xD0\200", IF_8086},
    /*  895 */ {I_ROL, 2, {RM_GPR|BITS8,REG_CL,0,0}, "\1\xD2\200", IF_8086},
    /*  896 */ {I_ROL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC0\200\25", IF_186|IF_SB},
    /*  897 */ {I_ROL, 2, {RM_GPR|BITS16,UNITY,0,0}, "\320\1\xD1\200", IF_8086},
    /*  898 */ {I_ROL, 2, {RM_GPR|BITS16,REG_CL,0,0}, "\320\1\xD3\200", IF_8086},
    /*  899 */ {I_ROL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC1\200\25", IF_186|IF_SB},
    /*  900 */ {I_ROL, 2, {RM_GPR|BITS32,UNITY,0,0}, "\321\1\xD1\200", IF_386},
    /*  901 */ {I_ROL, 2, {RM_GPR|BITS32,REG_CL,0,0}, "\321\1\xD3\200", IF_386},
    /*  902 */ {I_ROL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC1\200\25", IF_386|IF_SB},
    /*  903 */ {I_ROL, 2, {RM_GPR|BITS64,UNITY,0,0}, "\324\1\xD1\200", IF_X64},
    /*  904 */ {I_ROL, 2, {RM_GPR|BITS64,REG_CL,0,0}, "\324\1\xD3\200", IF_X64},
    /*  905 */ {I_ROL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC1\200\25", IF_X64|IF_SB},
    /*  906 */ {I_ROR, 2, {RM_GPR|BITS8,UNITY,0,0}, "\1\xD0\201", IF_8086},
    /*  907 */ {I_ROR, 2, {RM_GPR|BITS8,REG_CL,0,0}, "\1\xD2\201", IF_8086},
    /*  908 */ {I_ROR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC0\201\25", IF_186|IF_SB},
    /*  909 */ {I_ROR, 2, {RM_GPR|BITS16,UNITY,0,0}, "\320\1\xD1\201", IF_8086},
    /*  910 */ {I_ROR, 2, {RM_GPR|BITS16,REG_CL,0,0}, "\320\1\xD3\201", IF_8086},
    /*  911 */ {I_ROR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC1\201\25", IF_186|IF_SB},
    /*  912 */ {I_ROR, 2, {RM_GPR|BITS32,UNITY,0,0}, "\321\1\xD1\201", IF_386},
    /*  913 */ {I_ROR, 2, {RM_GPR|BITS32,REG_CL,0,0}, "\321\1\xD3\201", IF_386},
    /*  914 */ {I_ROR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC1\201\25", IF_386|IF_SB},
    /*  915 */ {I_ROR, 2, {RM_GPR|BITS64,UNITY,0,0}, "\324\1\xD1\201", IF_X64},
    /*  916 */ {I_ROR, 2, {RM_GPR|BITS64,REG_CL,0,0}, "\324\1\xD3\201", IF_X64},
    /*  917 */ {I_ROR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC1\201\25", IF_X64|IF_SB},
    /*  918 */ {I_RDM, 0, {0,0,0,0}, "\2\x0F\x3A", IF_P6|IF_CYRIX},
    /*  919 */ {I_RSDC, 2, {REG_SREG,MEMORY|BITS80,0,0}, "\2\x0F\x79\110", IF_486|IF_CYRIX|IF_SMM},
    /*  920 */ {I_RSLDT, 1, {MEMORY|BITS80,0,0,0}, "\2\x0F\x7B\200", IF_486|IF_CYRIX|IF_SMM},
    /*  921 */ {I_RSM, 0, {0,0,0,0}, "\2\x0F\xAA", IF_PENT|IF_SMM},
    /*  922 */ {I_RSTS, 1, {MEMORY|BITS80,0,0,0}, "\2\x0F\x7D\200", IF_486|IF_CYRIX|IF_SMM},
    /*  923 */ {I_SAHF, 0, {0,0,0,0}, "\1\x9E", IF_8086},
    /*  924 */ {I_SALC, 0, {0,0,0,0}, "\1\xD6", IF_8086|IF_UNDOC},
    /*  925 */ {I_SAR, 2, {RM_GPR|BITS8,UNITY,0,0}, "\1\xD0\207", IF_8086},
    /*  926 */ {I_SAR, 2, {RM_GPR|BITS8,REG_CL,0,0}, "\1\xD2\207", IF_8086},
    /*  927 */ {I_SAR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC0\207\25", IF_186|IF_SB},
    /*  928 */ {I_SAR, 2, {RM_GPR|BITS16,UNITY,0,0}, "\320\1\xD1\207", IF_8086},
    /*  929 */ {I_SAR, 2, {RM_GPR|BITS16,REG_CL,0,0}, "\320\1\xD3\207", IF_8086},
    /*  930 */ {I_SAR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC1\207\25", IF_186|IF_SB},
    /*  931 */ {I_SAR, 2, {RM_GPR|BITS32,UNITY,0,0}, "\321\1\xD1\207", IF_386},
    /*  932 */ {I_SAR, 2, {RM_GPR|BITS32,REG_CL,0,0}, "\321\1\xD3\207", IF_386},
    /*  933 */ {I_SAR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC1\207\25", IF_386|IF_SB},
    /*  934 */ {I_SAR, 2, {RM_GPR|BITS64,UNITY,0,0}, "\324\1\xD1\207", IF_X64},
    /*  935 */ {I_SAR, 2, {RM_GPR|BITS64,REG_CL,0,0}, "\324\1\xD3\207", IF_X64},
    /*  936 */ {I_SAR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC1\207\25", IF_X64|IF_SB},
    /*  937 */ {I_SBB, 2, {MEMORY,REG8,0,0}, "\1\x18\101", IF_8086|IF_SM},
    /*  938 */ {I_SBB, 2, {REG8,REG8,0,0}, "\1\x18\101", IF_8086},
    /*  939 */ {I_SBB, 2, {MEMORY,REG16,0,0}, "\320\1\x19\101", IF_8086|IF_SM},
    /*  940 */ {I_SBB, 2, {REG16,REG16,0,0}, "\320\1\x19\101", IF_8086},
    /*  941 */ {I_SBB, 2, {MEMORY,REG32,0,0}, "\321\1\x19\101", IF_386|IF_SM},
    /*  942 */ {I_SBB, 2, {REG32,REG32,0,0}, "\321\1\x19\101", IF_386},
    /*  943 */ {I_SBB, 2, {MEMORY,REG64,0,0}, "\324\1\x19\101", IF_X64|IF_SM},
    /*  944 */ {I_SBB, 2, {REG64,REG64,0,0}, "\324\1\x19\101", IF_X64},
    /*  945 */ {I_SBB, 2, {REG8,MEMORY,0,0}, "\1\x1A\110", IF_8086|IF_SM},
    /*  946 */ {I_SBB, 2, {REG8,REG8,0,0}, "\1\x1A\110", IF_8086},
    /*  947 */ {I_SBB, 2, {REG16,MEMORY,0,0}, "\320\1\x1B\110", IF_8086|IF_SM},
    /*  948 */ {I_SBB, 2, {REG16,REG16,0,0}, "\320\1\x1B\110", IF_8086},
    /*  949 */ {I_SBB, 2, {REG32,MEMORY,0,0}, "\321\1\x1B\110", IF_386|IF_SM},
    /*  950 */ {I_SBB, 2, {REG32,REG32,0,0}, "\321\1\x1B\110", IF_386},
    /*  951 */ {I_SBB, 2, {REG64,MEMORY,0,0}, "\324\1\x1B\110", IF_X64|IF_SM},
    /*  952 */ {I_SBB, 2, {REG64,REG64,0,0}, "\324\1\x1B\110", IF_X64},
    /*  953 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\203\15", IF_8086},
    /*  954 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\203\15", IF_386},
    /*  955 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\203\15", IF_X64},
    /*  956 */ {I_SBB, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x1C\21", IF_8086|IF_SM},
    /*  957 */ {I_SBB, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x1D\31", IF_8086|IF_SM},
    /*  958 */ {I_SBB, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x1D\41", IF_386|IF_SM},
    /*  959 */ {I_SBB, 2, {REG_RAX,IMMEDIATE,0,0}, "\321\1\x1D\41", IF_X64|IF_SM},
    /*  960 */ {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\203\21", IF_8086|IF_SM},
    /*  961 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\203\141", IF_8086|IF_SM},
    /*  962 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\203\151", IF_386|IF_SM},
    /*  963 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\203\151", IF_X64|IF_SM},
    /*  964 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\203\21", IF_8086|IF_SM},
    /*  965 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\203\141", IF_8086|IF_SM},
    /*  966 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\203\151", IF_386|IF_SM},
    /*  967 */ {I_SCASB, 0, {0,0,0,0}, "\335\1\xAE", IF_8086},
    /*  968 */ {I_SCASD, 0, {0,0,0,0}, "\335\321\1\xAF", IF_386},
    /*  969 */ {I_SCASQ, 0, {0,0,0,0}, "\335\324\1\xAF", IF_X64},
    /*  970 */ {I_SCASW, 0, {0,0,0,0}, "\335\320\1\xAF", IF_8086},
    /*  971 */ {I_SFENCE, 0, {0,0,0,0}, "\3\x0F\xAE\xF8", IF_X64|IF_AMD},
    /*  972 */ {I_SGDT, 1, {MEMORY,0,0,0}, "\2\x0F\x01\200", IF_286},
    /*  973 */ {I_SHL, 2, {RM_GPR|BITS8,UNITY,0,0}, "\1\xD0\204", IF_8086},
    /*  974 */ {I_SHL, 2, {RM_GPR|BITS8,REG_CL,0,0}, "\1\xD2\204", IF_8086},
    /*  975 */ {I_SHL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC0\204\25", IF_186|IF_SB},
    /*  976 */ {I_SHL, 2, {RM_GPR|BITS16,UNITY,0,0}, "\320\1\xD1\204", IF_8086},
    /*  977 */ {I_SHL, 2, {RM_GPR|BITS16,REG_CL,0,0}, "\320\1\xD3\204", IF_8086},
    /*  978 */ {I_SHL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC1\204\25", IF_186|IF_SB},
    /*  979 */ {I_SHL, 2, {RM_GPR|BITS32,UNITY,0,0}, "\321\1\xD1\204", IF_386},
    /*  980 */ {I_SHL, 2, {RM_GPR|BITS32,REG_CL,0,0}, "\321\1\xD3\204", IF_386},
    /*  981 */ {I_SHL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC1\204\25", IF_386|IF_SB},
    /*  982 */ {I_SHL, 2, {RM_GPR|BITS64,UNITY,0,0}, "\324\1\xD1\204", IF_X64},
    /*  983 */ {I_SHL, 2, {RM_GPR|BITS64,REG_CL,0,0}, "\324\1\xD3\204", IF_X64},
    /*  984 */ {I_SHL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC1\204\25", IF_X64|IF_SB},
    /*  985 */ {I_SHLD, 3, {MEMORY,REG16,IMMEDIATE,0}, "\320\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /*  986 */ {I_SHLD, 3, {REG16,REG16,IMMEDIATE,0}, "\320\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /*  987 */ {I_SHLD, 3, {MEMORY,REG32,IMMEDIATE,0}, "\321\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /*  988 */ {I_SHLD, 3, {REG32,REG32,IMMEDIATE,0}, "\321\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /*  989 */ {I_SHLD, 3, {MEMORY,REG64,IMMEDIATE,0}, "\324\2\x0F\xA4\101\26", IF_X64|IF_SM2|IF_SB|IF_AR2},
    /*  990 */ {I_SHLD, 3, {REG64,REG64,IMMEDIATE,0}, "\324\2\x0F\xA4\101\26", IF_X64|IF_SM2|IF_SB|IF_AR2},
    /*  991 */ {I_SHLD, 3, {MEMORY,REG16,REG_CL,0}, "\320\2\x0F\xA5\101", IF_386|IF_SM},
    /*  992 */ {I_SHLD, 3, {REG16,REG16,REG_CL,0}, "\320\2\x0F\xA5\101", IF_386},
    /*  993 */ {I_SHLD, 3, {MEMORY,REG32,REG_CL,0}, "\321\2\x0F\xA5\101", IF_386|IF_SM},
    /*  994 */ {I_SHLD, 3, {REG32,REG32,REG_CL,0}, "\321\2\x0F\xA5\101", IF_386},
    /*  995 */ {I_SHLD, 3, {MEMORY,REG64,REG_CL,0}, "\324\2\x0F\xA5\101", IF_X64|IF_SM},
    /*  996 */ {I_SHLD, 3, {REG64,REG64,REG_CL,0}, "\324\2\x0F\xA5\101", IF_X64},
    /*  997 */ {I_SHR, 2, {RM_GPR|BITS8,UNITY,0,0}, "\1\xD0\205", IF_8086},
    /*  998 */ {I_SHR, 2, {RM_GPR|BITS8,REG_CL,0,0}, "\1\xD2\205", IF_8086},
    /*  999 */ {I_SHR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xC0\205\25", IF_186|IF_SB},
    /* 1000 */ {I_SHR, 2, {RM_GPR|BITS16,UNITY,0,0}, "\320\1\xD1\205", IF_8086},
    /* 1001 */ {I_SHR, 2, {RM_GPR|BITS16,REG_CL,0,0}, "\320\1\xD3\205", IF_8086},
    /* 1002 */ {I_SHR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xC1\205\25", IF_186|IF_SB},
    /* 1003 */ {I_SHR, 2, {RM_GPR|BITS32,UNITY,0,0}, "\321\1\xD1\205", IF_386},
    /* 1004 */ {I_SHR, 2, {RM_GPR|BITS32,REG_CL,0,0}, "\321\1\xD3\205", IF_386},
    /* 1005 */ {I_SHR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xC1\205\25", IF_386|IF_SB},
    /* 1006 */ {I_SHR, 2, {RM_GPR|BITS64,UNITY,0,0}, "\324\1\xD1\205", IF_X64},
    /* 1007 */ {I_SHR, 2, {RM_GPR|BITS64,REG_CL,0,0}, "\324\1\xD3\205", IF_X64},
    /* 1008 */ {I_SHR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xC1\205\25", IF_X64|IF_SB},
    /* 1009 */ {I_SHRD, 3, {MEMORY,REG16,IMMEDIATE,0}, "\320\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 1010 */ {I_SHRD, 3, {REG16,REG16,IMMEDIATE,0}, "\320\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 1011 */ {I_SHRD, 3, {MEMORY,REG32,IMMEDIATE,0}, "\321\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 1012 */ {I_SHRD, 3, {REG32,REG32,IMMEDIATE,0}, "\321\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 1013 */ {I_SHRD, 3, {MEMORY,REG64,IMMEDIATE,0}, "\324\2\x0F\xAC\101\26", IF_X64|IF_SM2|IF_SB|IF_AR2},
    /* 1014 */ {I_SHRD, 3, {REG64,REG64,IMMEDIATE,0}, "\324\2\x0F\xAC\101\26", IF_X64|IF_SM2|IF_SB|IF_AR2},
    /* 1015 */ {I_SHRD, 3, {MEMORY,REG16,REG_CL,0}, "\320\2\x0F\xAD\101", IF_386|IF_SM},
    /* 1016 */ {I_SHRD, 3, {REG16,REG16,REG_CL,0}, "\320\2\x0F\xAD\101", IF_386},
    /* 1017 */ {I_SHRD, 3, {MEMORY,REG32,REG_CL,0}, "\321\2\x0F\xAD\101", IF_386|IF_SM},
    /* 1018 */ {I_SHRD, 3, {REG32,REG32,REG_CL,0}, "\321\2\x0F\xAD\101", IF_386},
    /* 1019 */ {I_SHRD, 3, {MEMORY,REG64,REG_CL,0}, "\324\2\x0F\xAD\101", IF_X64|IF_SM},
    /* 1020 */ {I_SHRD, 3, {REG64,REG64,REG_CL,0}, "\324\2\x0F\xAD\101", IF_X64},
    /* 1021 */ {I_SIDT, 1, {MEMORY,0,0,0}, "\2\x0F\x01\201", IF_286},
    /* 1022 */ {I_SLDT, 1, {MEMORY,0,0,0}, "\1\x0F\170\200", IF_286},
    /* 1023 */ {I_SLDT, 1, {MEMORY|BITS16,0,0,0}, "\1\x0F\170\200", IF_286},
    /* 1024 */ {I_SLDT, 1, {REG16,0,0,0}, "\320\1\x0F\170\200", IF_286},
    /* 1025 */ {I_SLDT, 1, {REG32,0,0,0}, "\321\1\x0F\170\200", IF_386},
    /* 1026 */ {I_SKINIT, 0, {0,0,0,0}, "\3\x0F\x01\xDE", IF_X64},
    /* 1027 */ {I_SMI, 0, {0,0,0,0}, "\1\xF1", IF_386|IF_UNDOC},
    /* 1028 */ {I_SMSW, 1, {MEMORY,0,0,0}, "\2\x0F\x01\204", IF_286},
    /* 1029 */ {I_SMSW, 1, {MEMORY|BITS16,0,0,0}, "\2\x0F\x01\204", IF_286},
    /* 1030 */ {I_SMSW, 1, {REG16,0,0,0}, "\320\2\x0F\x01\204", IF_286},
    /* 1031 */ {I_SMSW, 1, {REG32,0,0,0}, "\321\2\x0F\x01\204", IF_386},
    /* 1032 */ {I_STC, 0, {0,0,0,0}, "\1\xF9", IF_8086},
    /* 1033 */ {I_STD, 0, {0,0,0,0}, "\1\xFD", IF_8086},
    /* 1034 */ {I_STGI, 0, {0,0,0,0}, "\3\x0F\x01\xDC", IF_X64},
    /* 1035 */ {I_STI, 0, {0,0,0,0}, "\1\xFB", IF_8086},
    /* 1036 */ {I_STOSB, 0, {0,0,0,0}, "\1\xAA", IF_8086},
    /* 1037 */ {I_STOSD, 0, {0,0,0,0}, "\321\1\xAB", IF_386},
    /* 1038 */ {I_STOSQ, 0, {0,0,0,0}, "\324\1\xAB", IF_X64},
    /* 1039 */ {I_STOSW, 0, {0,0,0,0}, "\320\1\xAB", IF_8086},
    /* 1040 */ {I_STR, 1, {MEMORY,0,0,0}, "\1\x0F\170\201", IF_286|IF_PROT},
    /* 1041 */ {I_STR, 1, {MEMORY|BITS16,0,0,0}, "\1\x0F\170\201", IF_286|IF_PROT},
    /* 1042 */ {I_STR, 1, {REG16,0,0,0}, "\320\1\x0F\170\201", IF_286|IF_PROT},
    /* 1043 */ {I_STR, 1, {REG32,0,0,0}, "\321\1\x0F\170\201", IF_386|IF_PROT},
    /* 1044 */ {I_STR, 1, {REG64,0,0,0}, "\324\1\x0F\170\201", IF_X64},
    /* 1045 */ {I_SUB, 2, {MEMORY,REG8,0,0}, "\1\x28\101", IF_8086|IF_SM},
    /* 1046 */ {I_SUB, 2, {REG8,REG8,0,0}, "\1\x28\101", IF_8086},
    /* 1047 */ {I_SUB, 2, {MEMORY,REG16,0,0}, "\320\1\x29\101", IF_8086|IF_SM},
    /* 1048 */ {I_SUB, 2, {REG16,REG16,0,0}, "\320\1\x29\101", IF_8086},
    /* 1049 */ {I_SUB, 2, {MEMORY,REG32,0,0}, "\321\1\x29\101", IF_386|IF_SM},
    /* 1050 */ {I_SUB, 2, {REG32,REG32,0,0}, "\321\1\x29\101", IF_386},
    /* 1051 */ {I_SUB, 2, {MEMORY,REG64,0,0}, "\324\1\x29\101", IF_X64|IF_SM},
    /* 1052 */ {I_SUB, 2, {REG64,REG64,0,0}, "\324\1\x29\101", IF_X64},
    /* 1053 */ {I_SUB, 2, {REG8,MEMORY,0,0}, "\1\x2A\110", IF_8086|IF_SM},
    /* 1054 */ {I_SUB, 2, {REG8,REG8,0,0}, "\1\x2A\110", IF_8086},
    /* 1055 */ {I_SUB, 2, {REG16,MEMORY,0,0}, "\320\1\x2B\110", IF_8086|IF_SM},
    /* 1056 */ {I_SUB, 2, {REG16,REG16,0,0}, "\320\1\x2B\110", IF_8086},
    /* 1057 */ {I_SUB, 2, {REG32,MEMORY,0,0}, "\321\1\x2B\110", IF_386|IF_SM},
    /* 1058 */ {I_SUB, 2, {REG32,REG32,0,0}, "\321\1\x2B\110", IF_386},
    /* 1059 */ {I_SUB, 2, {REG64,MEMORY,0,0}, "\324\1\x2B\110", IF_X64|IF_SM},
    /* 1060 */ {I_SUB, 2, {REG64,REG64,0,0}, "\324\1\x2B\110", IF_X64},
    /* 1061 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\205\15", IF_8086},
    /* 1062 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\205\15", IF_386},
    /* 1063 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\205\15", IF_X64},
    /* 1064 */ {I_SUB, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x2C\21", IF_8086|IF_SM},
    /* 1065 */ {I_SUB, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x2D\31", IF_8086|IF_SM},
    /* 1066 */ {I_SUB, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x2D\41", IF_386|IF_SM},
    /* 1067 */ {I_SUB, 2, {REG_RAX,IMMEDIATE,0,0}, "\321\1\x2D\41", IF_X64|IF_SM},
    /* 1068 */ {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\205\21", IF_8086|IF_SM},
    /* 1069 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\205\141", IF_8086|IF_SM},
    /* 1070 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\205\151", IF_386|IF_SM},
    /* 1071 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\205\151", IF_X64|IF_SM},
    /* 1072 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\205\21", IF_8086|IF_SM},
    /* 1073 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\205\141", IF_8086|IF_SM},
    /* 1074 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\205\151", IF_386|IF_SM},
    /* 1075 */ {I_SVDC, 2, {MEMORY|BITS80,REG_SREG,0,0}, "\2\x0F\x78\101", IF_486|IF_CYRIX|IF_SMM},
    /* 1076 */ {I_SVLDT, 1, {MEMORY|BITS80,0,0,0}, "\2\x0F\x7A\200", IF_486|IF_CYRIX|IF_SMM},
    /* 1077 */ {I_SVTS, 1, {MEMORY|BITS80,0,0,0}, "\2\x0F\x7C\200", IF_486|IF_CYRIX|IF_SMM},
    /* 1078 */ {I_SWAPGS, 0, {0,0,0,0}, "\3\x0F\x01\xF8", IF_X64},
    /* 1079 */ {I_SYSCALL, 0, {0,0,0,0}, "\2\x0F\x05", IF_P6|IF_AMD},
    /* 1080 */ {I_SYSENTER, 0, {0,0,0,0}, "\2\x0F\x34", IF_P6},
    /* 1081 */ {I_SYSEXIT, 0, {0,0,0,0}, "\2\x0F\x35", IF_P6|IF_PRIV},
    /* 1082 */ {I_SYSRET, 0, {0,0,0,0}, "\2\x0F\x07", IF_P6|IF_PRIV|IF_AMD},
    /* 1083 */ {I_TEST, 2, {MEMORY,REG8,0,0}, "\1\x84\101", IF_8086|IF_SM},
    /* 1084 */ {I_TEST, 2, {REG8,REG8,0,0}, "\1\x84\101", IF_8086},
    /* 1085 */ {I_TEST, 2, {MEMORY,REG16,0,0}, "\320\1\x85\101", IF_8086|IF_SM},
    /* 1086 */ {I_TEST, 2, {REG16,REG16,0,0}, "\320\1\x85\101", IF_8086},
    /* 1087 */ {I_TEST, 2, {MEMORY,REG32,0,0}, "\321\1\x85\101", IF_386|IF_SM},
    /* 1088 */ {I_TEST, 2, {REG32,REG32,0,0}, "\321\1\x85\101", IF_386},
    /* 1089 */ {I_TEST, 2, {MEMORY,REG64,0,0}, "\324\1\x85\101", IF_X64|IF_SM},
    /* 1090 */ {I_TEST, 2, {REG64,REG64,0,0}, "\324\1\x85\101", IF_X64},
    /* 1091 */ {I_TEST, 2, {REG8,MEMORY,0,0}, "\1\x84\110", IF_8086|IF_SM},
    /* 1092 */ {I_TEST, 2, {REG16,MEMORY,0,0}, "\320\1\x85\110", IF_8086|IF_SM},
    /* 1093 */ {I_TEST, 2, {REG32,MEMORY,0,0}, "\321\1\x85\110", IF_386|IF_SM},
    /* 1094 */ {I_TEST, 2, {REG64,MEMORY,0,0}, "\324\1\x85\110", IF_X64|IF_SM},
    /* 1095 */ {I_TEST, 2, {REG_AL,IMMEDIATE,0,0}, "\1\xA8\21", IF_8086|IF_SM},
    /* 1096 */ {I_TEST, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\xA9\31", IF_8086|IF_SM},
    /* 1097 */ {I_TEST, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\xA9\41", IF_386|IF_SM},
    /* 1098 */ {I_TEST, 2, {REG_RAX,IMMEDIATE,0,0}, "\321\1\xA9\41", IF_X64|IF_SM},
    /* 1099 */ {I_TEST, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\xF6\200\21", IF_8086|IF_SM},
    /* 1100 */ {I_TEST, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\1\xF7\200\31", IF_8086|IF_SM},
    /* 1101 */ {I_TEST, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\1\xF7\200\41", IF_386|IF_SM},
    /* 1102 */ {I_TEST, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\1\xF7\200\41", IF_X64|IF_SM},
    /* 1103 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\xF6\200\21", IF_8086|IF_SM},
    /* 1104 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\1\xF7\200\31", IF_8086|IF_SM},
    /* 1105 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\1\xF7\200\41", IF_386|IF_SM},
    /* 1106 */ {I_UD0, 0, {0,0,0,0}, "\2\x0F\xFF", IF_286|IF_UNDOC},
    /* 1107 */ {I_UD1, 0, {0,0,0,0}, "\2\x0F\xB9", IF_286|IF_UNDOC},
    /* 1108 */ {I_UD2, 0, {0,0,0,0}, "\2\x0F\x0B", IF_286},
    /* 1109 */ {I_VERR, 1, {MEMORY,0,0,0}, "\1\x0F\170\204", IF_286|IF_PROT},
    /* 1110 */ {I_VERR, 1, {MEMORY|BITS16,0,0,0}, "\1\x0F\170\204", IF_286|IF_PROT},
    /* 1111 */ {I_VERR, 1, {REG16,0,0,0}, "\1\x0F\170\204", IF_286|IF_PROT},
    /* 1112 */ {I_VERW, 1, {MEMORY,0,0,0}, "\1\x0F\170\205", IF_286|IF_PROT},
    /* 1113 */ {I_VERW, 1, {MEMORY|BITS16,0,0,0}, "\1\x0F\170\205", IF_286|IF_PROT},
    /* 1114 */ {I_VERW, 1, {REG16,0,0,0}, "\1\x0F\170\205", IF_286|IF_PROT},
    /* 1115 */ {I_WAIT, 0, {0,0,0,0}, "\1\x9B", IF_8086},
    /* 1116 */ {I_FWAIT, 0, {0,0,0,0}, "\1\x9B", IF_8086},
    /* 1117 */ {I_WBINVD, 0, {0,0,0,0}, "\2\x0F\x09", IF_486|IF_PRIV},
    /* 1118 */ {I_WRSHR, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x37\200", IF_P6|IF_CYRIX|IF_SMM},
    /* 1119 */ {I_WRMSR, 0, {0,0,0,0}, "\2\x0F\x30", IF_PENT|IF_PRIV},
    /* 1120 */ {I_XADD, 2, {MEMORY,REG8,0,0}, "\2\x0F\xC0\101", IF_486|IF_SM},
    /* 1121 */ {I_XADD, 2, {REG8,REG8,0,0}, "\2\x0F\xC0\101", IF_486},
    /* 1122 */ {I_XADD, 2, {MEMORY,REG16,0,0}, "\320\2\x0F\xC1\101", IF_486|IF_SM},
    /* 1123 */ {I_XADD, 2, {REG16,REG16,0,0}, "\320\2\x0F\xC1\101", IF_486},
    /* 1124 */ {I_XADD, 2, {MEMORY,REG32,0,0}, "\321\2\x0F\xC1\101", IF_486|IF_SM},
    /* 1125 */ {I_XADD, 2, {REG32,REG32,0,0}, "\321\2\x0F\xC1\101", IF_486},
    /* 1126 */ {I_XADD, 2, {MEMORY,REG64,0,0}, "\324\2\x0F\xC1\101", IF_X64|IF_SM},
    /* 1127 */ {I_XADD, 2, {REG64,REG64,0,0}, "\324\2\x0F\xC1\101", IF_X64},
    /* 1128 */ {I_XCHG, 2, {REG_AX,REG16,0,0}, "\320\11\x90", IF_8086|IF_NOLONG},
    /* 1129 */ {I_XCHG, 2, {REG_EAX,REG32,0,0}, "\321\11\x90", IF_386|IF_NOLONG},
    /* 1130 */ {I_XCHG, 2, {REG16,REG_AX,0,0}, "\320\10\x90", IF_8086|IF_NOLONG},
    /* 1131 */ {I_XCHG, 2, {REG32,REG_EAX,0,0}, "\321\10\x90", IF_386|IF_NOLONG},
    /* 1132 */ {I_XCHG, 2, {REG_RAX,REG_RAX,0,0}, "\321\11\x90", IF_X64},
    /* 1133 */ {I_XCHG, 2, {REG8,MEMORY,0,0}, "\1\x86\110", IF_8086|IF_SM},
    /* 1134 */ {I_XCHG, 2, {REG8,REG8,0,0}, "\1\x86\110", IF_8086},
    /* 1135 */ {I_XCHG, 2, {REG16,MEMORY,0,0}, "\320\1\x87\110", IF_8086|IF_SM},
    /* 1136 */ {I_XCHG, 2, {REG16,REG16,0,0}, "\320\1\x87\110", IF_8086},
    /* 1137 */ {I_XCHG, 2, {REG32,MEMORY,0,0}, "\321\1\x87\110", IF_386|IF_SM},
    /* 1138 */ {I_XCHG, 2, {REG32,REG32,0,0}, "\321\1\x87\110", IF_386},
    /* 1139 */ {I_XCHG, 2, {REG64,MEMORY,0,0}, "\324\1\x87\110", IF_X64|IF_SM},
    /* 1140 */ {I_XCHG, 2, {REG64,REG64,0,0}, "\324\1\x87\110", IF_X64},
    /* 1141 */ {I_XCHG, 2, {MEMORY,REG8,0,0}, "\1\x86\101", IF_8086|IF_SM},
    /* 1142 */ {I_XCHG, 2, {REG8,REG8,0,0}, "\1\x86\101", IF_8086},
    /* 1143 */ {I_XCHG, 2, {MEMORY,REG16,0,0}, "\320\1\x87\101", IF_8086|IF_SM},
    /* 1144 */ {I_XCHG, 2, {REG16,REG16,0,0}, "\320\1\x87\101", IF_8086},
    /* 1145 */ {I_XCHG, 2, {MEMORY,REG32,0,0}, "\321\1\x87\101", IF_386|IF_SM},
    /* 1146 */ {I_XCHG, 2, {REG32,REG32,0,0}, "\321\1\x87\101", IF_386},
    /* 1147 */ {I_XCHG, 2, {MEMORY,REG64,0,0}, "\324\1\x87\101", IF_X64|IF_SM},
    /* 1148 */ {I_XCHG, 2, {REG64,REG64,0,0}, "\324\1\x87\101", IF_X64},
    /* 1149 */ {I_XLATB, 0, {0,0,0,0}, "\1\xD7", IF_8086},
    /* 1150 */ {I_XLAT, 0, {0,0,0,0}, "\1\xD7", IF_8086},
    /* 1151 */ {I_XOR, 2, {MEMORY,REG8,0,0}, "\1\x30\101", IF_8086|IF_SM},
    /* 1152 */ {I_XOR, 2, {REG8,REG8,0,0}, "\1\x30\101", IF_8086},
    /* 1153 */ {I_XOR, 2, {MEMORY,REG16,0,0}, "\320\1\x31\101", IF_8086|IF_SM},
    /* 1154 */ {I_XOR, 2, {REG16,REG16,0,0}, "\320\1\x31\101", IF_8086},
    /* 1155 */ {I_XOR, 2, {MEMORY,REG32,0,0}, "\321\1\x31\101", IF_386|IF_SM},
    /* 1156 */ {I_XOR, 2, {REG32,REG32,0,0}, "\321\1\x31\101", IF_386},
    /* 1157 */ {I_XOR, 2, {MEMORY,REG64,0,0}, "\324\1\x31\101", IF_X64|IF_SM},
    /* 1158 */ {I_XOR, 2, {REG64,REG64,0,0}, "\324\1\x31\101", IF_X64},
    /* 1159 */ {I_XOR, 2, {REG8,MEMORY,0,0}, "\1\x32\110", IF_8086|IF_SM},
    /* 1160 */ {I_XOR, 2, {REG8,REG8,0,0}, "\1\x32\110", IF_8086},
    /* 1161 */ {I_XOR, 2, {REG16,MEMORY,0,0}, "\320\1\x33\110", IF_8086|IF_SM},
    /* 1162 */ {I_XOR, 2, {REG16,REG16,0,0}, "\320\1\x33\110", IF_8086},
    /* 1163 */ {I_XOR, 2, {REG32,MEMORY,0,0}, "\321\1\x33\110", IF_386|IF_SM},
    /* 1164 */ {I_XOR, 2, {REG32,REG32,0,0}, "\321\1\x33\110", IF_386},
    /* 1165 */ {I_XOR, 2, {REG64,MEMORY,0,0}, "\324\1\x33\110", IF_X64|IF_SM},
    /* 1166 */ {I_XOR, 2, {REG64,REG64,0,0}, "\324\1\x33\110", IF_X64},
    /* 1167 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, "\320\1\x83\206\15", IF_8086},
    /* 1168 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, "\321\1\x83\206\15", IF_386},
    /* 1169 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, "\324\1\x83\206\15", IF_X64},
    /* 1170 */ {I_XOR, 2, {REG_AL,IMMEDIATE,0,0}, "\1\x34\21", IF_8086|IF_SM},
    /* 1171 */ {I_XOR, 2, {REG_AX,IMMEDIATE,0,0}, "\320\1\x35\31", IF_8086|IF_SM},
    /* 1172 */ {I_XOR, 2, {REG_EAX,IMMEDIATE,0,0}, "\321\1\x35\41", IF_386|IF_SM},
    /* 1173 */ {I_XOR, 2, {REG_RAX,IMMEDIATE,0,0}, "\321\1\x35\41", IF_X64|IF_SM},
    /* 1174 */ {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0}, "\1\x80\206\21", IF_8086|IF_SM},
    /* 1175 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0}, "\320\145\1\x81\206\141", IF_8086|IF_SM},
    /* 1176 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0}, "\321\155\1\x81\206\151", IF_386|IF_SM},
    /* 1177 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0}, "\324\155\1\x81\206\151", IF_X64|IF_SM},
    /* 1178 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0}, "\1\x80\206\21", IF_8086|IF_SM},
    /* 1179 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0,0}, "\320\145\1\x81\206\141", IF_8086|IF_SM},
    /* 1180 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0,0}, "\321\155\1\x81\206\151", IF_386|IF_SM},
    /* 1181 */ {I_CMOVcc, 2, {REG16,MEMORY,0,0}, "\320\1\x0F\330\x40\110", IF_P6|IF_SM},
    /* 1182 */ {I_CMOVcc, 2, {REG16,REG16,0,0}, "\320\1\x0F\330\x40\110", IF_P6},
    /* 1183 */ {I_CMOVcc, 2, {REG32,MEMORY,0,0}, "\321\1\x0F\330\x40\110", IF_P6|IF_SM},
    /* 1184 */ {I_CMOVcc, 2, {REG32,REG32,0,0}, "\321\1\x0F\330\x40\110", IF_P6},
    /* 1185 */ {I_CMOVcc, 2, {REG64,MEMORY,0,0}, "\324\1\x0F\330\x40\110", IF_X64|IF_SM},
    /* 1186 */ {I_CMOVcc, 2, {REG64,REG64,0,0}, "\324\1\x0F\330\x40\110", IF_X64},
    /* 1187 */ {I_Jcc, 1, {IMMEDIATE|NEAR,0,0,0}, "\322\1\x0F\330\x80\64", IF_386},
    /* 1188 */ {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0,0}, "\320\1\x0F\330\x80\64", IF_386},
    /* 1189 */ {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0,0}, "\321\1\x0F\330\x80\64", IF_386},
    /* 1190 */ {I_Jcc, 1, {IMMEDIATE,0,0,0}, "\330\x70\50", IF_8086},
    /* 1191 */ {I_SETcc, 1, {MEMORY,0,0,0}, "\1\x0F\330\x90\200", IF_386|IF_SB},
    /* 1192 */ {I_SETcc, 1, {REG8,0,0,0}, "\1\x0F\330\x90\200", IF_386},
    /* 1193 */ {I_ADDPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x58\110", IF_KATMAI|IF_SSE},
    /* 1194 */ {I_ADDSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x58\110", IF_KATMAI|IF_SSE},
    /* 1195 */ {I_ANDNPS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x55\110", IF_KATMAI|IF_SSE},
    /* 1196 */ {I_ANDPS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x54\110", IF_KATMAI|IF_SSE},
    /* 1197 */ {I_CMPEQPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x00", IF_KATMAI|IF_SSE},
    /* 1198 */ {I_CMPEQSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x00", IF_KATMAI|IF_SSE},
    /* 1199 */ {I_CMPLEPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x02", IF_KATMAI|IF_SSE},
    /* 1200 */ {I_CMPLESS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x02", IF_KATMAI|IF_SSE},
    /* 1201 */ {I_CMPLTPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x01", IF_KATMAI|IF_SSE},
    /* 1202 */ {I_CMPLTSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x01", IF_KATMAI|IF_SSE},
    /* 1203 */ {I_CMPNEQPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x04", IF_KATMAI|IF_SSE},
    /* 1204 */ {I_CMPNEQSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x04", IF_KATMAI|IF_SSE},
    /* 1205 */ {I_CMPNLEPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x06", IF_KATMAI|IF_SSE},
    /* 1206 */ {I_CMPNLESS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x06", IF_KATMAI|IF_SSE},
    /* 1207 */ {I_CMPNLTPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x05", IF_KATMAI|IF_SSE},
    /* 1208 */ {I_CMPNLTSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x05", IF_KATMAI|IF_SSE},
    /* 1209 */ {I_CMPORDPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x07", IF_KATMAI|IF_SSE},
    /* 1210 */ {I_CMPORDSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x07", IF_KATMAI|IF_SSE},
    /* 1211 */ {I_CMPUNORDPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\xC2\110\1\x03", IF_KATMAI|IF_SSE},
    /* 1212 */ {I_CMPUNORDSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xC2\110\1\x03", IF_KATMAI|IF_SSE},
    /* 1213 */ {I_CMPPS, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\331\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /* 1214 */ {I_CMPPS, 3, {XMMREG,XMMREG,IMMEDIATE,0}, "\331\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /* 1215 */ {I_CMPSS, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\333\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /* 1216 */ {I_CMPSS, 3, {XMMREG,XMMREG,IMMEDIATE,0}, "\333\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /* 1217 */ {I_COMISS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x2F\110", IF_KATMAI|IF_SSE},
    /* 1218 */ {I_CVTPI2PS, 2, {XMMREG,RM_MMX,0,0}, "\331\2\x0F\x2A\110", IF_KATMAI|IF_SSE|IF_MMX},
    /* 1219 */ {I_CVTPS2PI, 2, {MMXREG,RM_XMM,0,0}, "\331\2\x0F\x2D\110", IF_KATMAI|IF_SSE|IF_MMX},
    /* 1220 */ {I_CVTSI2SS, 2, {XMMREG,MEMORY,0,0}, "\333\2\x0F\x2A\110", IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    /* 1221 */ {I_CVTSI2SS, 2, {XMMREG,REG32,0,0}, "\333\2\x0F\x2A\110", IF_KATMAI|IF_SSE},
    /* 1222 */ {I_CVTSS2SI, 2, {REG32,RM_XMM,0,0}, "\333\2\x0F\x2D\110", IF_KATMAI|IF_SSE},
    /* 1223 */ {I_CVTTPS2PI, 2, {MMXREG,RM_XMM,0,0}, "\331\2\x0F\x2C\110", IF_KATMAI|IF_SSE|IF_MMX},
    /* 1224 */ {I_CVTTSS2SI, 2, {REG32,RM_XMM,0,0}, "\333\2\x0F\x2C\110", IF_KATMAI|IF_SSE},
    /* 1225 */ {I_DIVPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x5E\110", IF_KATMAI|IF_SSE},
    /* 1226 */ {I_DIVSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x5E\110", IF_KATMAI|IF_SSE},
    /* 1227 */ {I_LDMXCSR, 1, {MEMORY,0,0,0}, "\2\x0F\xAE\202", IF_KATMAI|IF_SSE|IF_SD},
    /* 1228 */ {I_MAXPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x5F\110", IF_KATMAI|IF_SSE},
    /* 1229 */ {I_MAXSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x5F\110", IF_KATMAI|IF_SSE},
    /* 1230 */ {I_MINPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x5D\110", IF_KATMAI|IF_SSE},
    /* 1231 */ {I_MINSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x5D\110", IF_KATMAI|IF_SSE},
    /* 1232 */ {I_MOVAPS, 2, {XMMREG,MEMORY,0,0}, "\2\x0F\x28\110", IF_KATMAI|IF_SSE},
    /* 1233 */ {I_MOVAPS, 2, {MEMORY,XMMREG,0,0}, "\2\x0F\x29\101", IF_KATMAI|IF_SSE},
    /* 1234 */ {I_MOVAPS, 2, {XMMREG,XMMREG,0,0}, "\2\x0F\x28\110", IF_KATMAI|IF_SSE},
    /* 1235 */ {I_MOVAPS, 2, {XMMREG,XMMREG,0,0}, "\2\x0F\x29\101", IF_KATMAI|IF_SSE},
    /* 1236 */ {I_MOVHPS, 2, {XMMREG,MEMORY,0,0}, "\2\x0F\x16\110", IF_KATMAI|IF_SSE},
    /* 1237 */ {I_MOVHPS, 2, {MEMORY,XMMREG,0,0}, "\2\x0F\x17\101", IF_KATMAI|IF_SSE},
    /* 1238 */ {I_MOVLHPS, 2, {XMMREG,XMMREG,0,0}, "\2\x0F\x16\110", IF_KATMAI|IF_SSE},
    /* 1239 */ {I_MOVLPS, 2, {XMMREG,MEMORY,0,0}, "\2\x0F\x12\110", IF_KATMAI|IF_SSE},
    /* 1240 */ {I_MOVLPS, 2, {MEMORY,XMMREG,0,0}, "\2\x0F\x13\101", IF_KATMAI|IF_SSE},
    /* 1241 */ {I_MOVHLPS, 2, {XMMREG,XMMREG,0,0}, "\2\x0F\x12\110", IF_KATMAI|IF_SSE},
    /* 1242 */ {I_MOVMSKPS, 2, {REG32,XMMREG,0,0}, "\364\2\x0F\x50\110", IF_KATMAI|IF_SSE},
    /* 1243 */ {I_MOVMSKPS, 2, {REG64,XMMREG,0,0}, "\364\324\2\x0F\x50\110", IF_X64|IF_SSE},
    /* 1244 */ {I_MOVNTPS, 2, {MEMORY,XMMREG,0,0}, "\2\x0F\x2B\101", IF_KATMAI|IF_SSE},
    /* 1245 */ {I_MOVSS, 2, {XMMREG,MEMORY,0,0}, "\333\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /* 1246 */ {I_MOVSS, 2, {MEMORY,XMMREG,0,0}, "\333\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /* 1247 */ {I_MOVSS, 2, {XMMREG,XMMREG,0,0}, "\333\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /* 1248 */ {I_MOVSS, 2, {XMMREG,XMMREG,0,0}, "\333\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /* 1249 */ {I_MOVUPS, 2, {XMMREG,MEMORY,0,0}, "\331\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /* 1250 */ {I_MOVUPS, 2, {MEMORY,XMMREG,0,0}, "\331\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /* 1251 */ {I_MOVUPS, 2, {XMMREG,XMMREG,0,0}, "\331\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /* 1252 */ {I_MOVUPS, 2, {XMMREG,XMMREG,0,0}, "\331\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /* 1253 */ {I_MULPS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x59\110", IF_KATMAI|IF_SSE},
    /* 1254 */ {I_MULSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x59\110", IF_KATMAI|IF_SSE},
    /* 1255 */ {I_ORPS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x56\110", IF_KATMAI|IF_SSE},
    /* 1256 */ {I_RCPPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x53\110", IF_KATMAI|IF_SSE},
    /* 1257 */ {I_RCPSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x53\110", IF_KATMAI|IF_SSE},
    /* 1258 */ {I_RSQRTPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x52\110", IF_KATMAI|IF_SSE},
    /* 1259 */ {I_RSQRTSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x52\110", IF_KATMAI|IF_SSE},
    /* 1260 */ {I_SHUFPS, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\2\x0F\xC6\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /* 1261 */ {I_SHUFPS, 3, {XMMREG,XMMREG,IMMEDIATE,0}, "\2\x0F\xC6\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /* 1262 */ {I_SQRTPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x51\110", IF_KATMAI|IF_SSE},
    /* 1263 */ {I_SQRTSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x51\110", IF_KATMAI|IF_SSE},
    /* 1264 */ {I_STMXCSR, 1, {MEMORY,0,0,0}, "\2\x0F\xAE\203", IF_KATMAI|IF_SSE|IF_SD},
    /* 1265 */ {I_SUBPS, 2, {XMMREG,RM_XMM,0,0}, "\331\2\x0F\x5C\110", IF_KATMAI|IF_SSE},
    /* 1266 */ {I_SUBSS, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x5C\110", IF_KATMAI|IF_SSE},
    /* 1267 */ {I_UCOMISS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x2E\110", IF_KATMAI|IF_SSE},
    /* 1268 */ {I_UNPCKHPS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x15\110", IF_KATMAI|IF_SSE},
    /* 1269 */ {I_UNPCKLPS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x14\110", IF_KATMAI|IF_SSE},
    /* 1270 */ {I_XORPS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x57\110", IF_KATMAI|IF_SSE},
    /* 1271 */ {I_FXRSTOR, 1, {MEMORY,0,0,0}, "\2\x0F\xAE\201", IF_P6|IF_SSE|IF_FPU},
    /* 1272 */ {I_FXSAVE, 1, {MEMORY,0,0,0}, "\2\x0F\xAE\200", IF_P6|IF_SSE|IF_FPU},
    /* 1273 */ {I_PREFETCHNTA, 1, {MEMORY,0,0,0}, "\2\x0F\x18\200", IF_KATMAI},
    /* 1274 */ {I_PREFETCHT0, 1, {MEMORY,0,0,0}, "\2\x0F\x18\201", IF_KATMAI},
    /* 1275 */ {I_PREFETCHT1, 1, {MEMORY,0,0,0}, "\2\x0F\x18\202", IF_KATMAI},
    /* 1276 */ {I_PREFETCHT2, 1, {MEMORY,0,0,0}, "\2\x0F\x18\203", IF_KATMAI},
    /* 1277 */ {I_SFENCE, 0, {0,0,0,0}, "\3\x0F\xAE\xF8", IF_KATMAI},
    /* 1278 */ {I_MASKMOVQ, 2, {MMXREG,MMXREG,0,0}, "\2\x0F\xF7\110", IF_KATMAI|IF_MMX},
    /* 1279 */ {I_MOVNTQ, 2, {MEMORY,MMXREG,0,0}, "\2\x0F\xE7\101", IF_KATMAI|IF_MMX|IF_SM},
    /* 1280 */ {I_PAVGB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE0\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1281 */ {I_PAVGW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE3\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1282 */ {I_PEXTRW, 3, {REG32,MMXREG,IMMEDIATE,0}, "\2\x0F\xC5\110\26", IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    /* 1283 */ {I_PINSRW, 3, {MMXREG,REG16,IMMEDIATE,0}, "\2\x0F\xC4\110\26", IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    /* 1284 */ {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE,0}, "\2\x0F\xC4\110\26", IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    /* 1285 */ {I_PMAXSW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xEE\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1286 */ {I_PMAXUB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xDE\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1287 */ {I_PMINSW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xEA\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1288 */ {I_PMINUB, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xDA\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1289 */ {I_PMOVMSKB, 2, {REG32,MMXREG,0,0}, "\2\x0F\xD7\110", IF_KATMAI|IF_MMX},
    /* 1290 */ {I_PMULHUW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xE4\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1291 */ {I_PSADBW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF6\110", IF_KATMAI|IF_MMX|IF_SM},
    /* 1292 */ {I_PSHUFW, 3, {MMXREG,RM_MMX,IMMEDIATE,0}, "\2\x0F\x70\110\22", IF_KATMAI|IF_MMX|IF_SM2|IF_SB|IF_AR2},
    /* 1293 */ {I_PF2IW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x1C", IF_PENT|IF_3DNOW|IF_SM},
    /* 1294 */ {I_PFNACC, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x8A", IF_PENT|IF_3DNOW|IF_SM},
    /* 1295 */ {I_PFPNACC, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x8E", IF_PENT|IF_3DNOW|IF_SM},
    /* 1296 */ {I_PI2FW, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\x0C", IF_PENT|IF_3DNOW|IF_SM},
    /* 1297 */ {I_PSWAPD, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\01\xBB", IF_PENT|IF_3DNOW|IF_SM},
    /* 1298 */ {I_MASKMOVDQU, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\xF7\110", IF_WILLAMETTE|IF_SSE2},
    /* 1299 */ {I_CLFLUSH, 1, {MEMORY,0,0,0}, "\2\x0F\xAE\207", IF_WILLAMETTE|IF_SSE2},
    /* 1300 */ {I_MOVNTDQ, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\xE7\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1301 */ {I_MOVNTI, 2, {MEMORY,REG32,0,0}, "\2\x0F\xC3\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1302 */ {I_MOVNTPD, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\x2B\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1303 */ {I_PAUSE, 0, {0,0,0,0}, "\333\1\x90", IF_WILLAMETTE|IF_SSE2},
    /* 1304 */ {I_LFENCE, 0, {0,0,0,0}, "\3\x0F\xAE\xE8", IF_WILLAMETTE|IF_SSE2},
    /* 1305 */ {I_MFENCE, 0, {0,0,0,0}, "\3\x0F\xAE\xF0", IF_WILLAMETTE|IF_SSE2},
    /* 1306 */ {I_MOVD, 2, {XMMREG,REG32,0,0}, "\366\2\x0F\x6E\110", IF_WILLAMETTE|IF_SSE2},
    /* 1307 */ {I_MOVD, 2, {REG32,XMMREG,0,0}, "\366\2\x0F\x7E\101", IF_WILLAMETTE|IF_SSE2},
    /* 1308 */ {I_MOVD, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\x7E\101", IF_WILLAMETTE|IF_SSE2|IF_SD},
    /* 1309 */ {I_MOVD, 2, {XMMREG,MEMORY,0,0}, "\366\2\x0F\x6E\110", IF_WILLAMETTE|IF_SSE2|IF_SD},
    /* 1310 */ {I_MOVDQA, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2},
    /* 1311 */ {I_MOVDQA, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\x7F\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1312 */ {I_MOVDQA, 2, {XMMREG,MEMORY,0,0}, "\366\2\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1313 */ {I_MOVDQA, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\x7F\110", IF_WILLAMETTE|IF_SSE2},
    /* 1314 */ {I_MOVDQU, 2, {XMMREG,XMMREG,0,0}, "\333\2\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2},
    /* 1315 */ {I_MOVDQU, 2, {MEMORY,XMMREG,0,0}, "\333\2\x0F\x7F\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1316 */ {I_MOVDQU, 2, {XMMREG,MEMORY,0,0}, "\333\2\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1317 */ {I_MOVDQU, 2, {XMMREG,XMMREG,0,0}, "\333\2\x0F\x7F\110", IF_WILLAMETTE|IF_SSE2},
    /* 1318 */ {I_MOVDQ2Q, 2, {MMXREG,XMMREG,0,0}, "\332\2\x0F\xD6\110", IF_WILLAMETTE|IF_SSE2},
    /* 1319 */ {I_MOVQ, 2, {XMMREG,XMMREG,0,0}, "\333\2\x0F\x7E\110", IF_WILLAMETTE|IF_SSE2},
    /* 1320 */ {I_MOVQ, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\xD6\110", IF_WILLAMETTE|IF_SSE2},
    /* 1321 */ {I_MOVQ, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\xD6\101", IF_WILLAMETTE|IF_SSE2|IF_SQ},
    /* 1322 */ {I_MOVQ, 2, {XMMREG,MEMORY,0,0}, "\333\2\x0F\x7E\110", IF_WILLAMETTE|IF_SSE2|IF_SQ},
    /* 1323 */ {I_MOVQ, 2, {XMMREG,RM_GPR|BITS64,0,0}, "\366\324\2\x0F\x6E\110", IF_X64|IF_SSE2},
    /* 1324 */ {I_MOVQ, 2, {RM_GPR|BITS64,XMMREG,0,0}, "\366\324\2\x0F\x7E\101", IF_X64|IF_SSE2},
    /* 1325 */ {I_MOVQ2DQ, 2, {XMMREG,MMXREG,0,0}, "\333\2\x0F\xD6\110", IF_WILLAMETTE|IF_SSE2},
    /* 1326 */ {I_PACKSSWB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x63\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1327 */ {I_PACKSSDW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x6B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1328 */ {I_PACKUSWB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x67\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1329 */ {I_PADDB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xFC\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1330 */ {I_PADDW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xFD\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1331 */ {I_PADDD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xFE\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1332 */ {I_PADDQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xD4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1333 */ {I_PADDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1334 */ {I_PADDSB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xEC\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1335 */ {I_PADDSW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xED\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1336 */ {I_PADDUSB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xDC\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1337 */ {I_PADDUSW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xDD\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1338 */ {I_PAND, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xDB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1339 */ {I_PANDN, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xDF\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1340 */ {I_PAVGB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE0\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1341 */ {I_PAVGW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE3\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1342 */ {I_PCMPEQB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x74\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1343 */ {I_PCMPEQW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x75\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1344 */ {I_PCMPEQD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x76\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1345 */ {I_PCMPGTB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x64\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1346 */ {I_PCMPGTW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x65\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1347 */ {I_PCMPGTD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x66\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1348 */ {I_PEXTRW, 3, {REG32,XMMREG,IMMEDIATE,0}, "\366\2\x0F\xC5\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1349 */ {I_PINSRW, 3, {XMMREG,REG16,IMMEDIATE,0}, "\366\2\x0F\xC4\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1350 */ {I_PINSRW, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\366\2\x0F\xC4\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1351 */ {I_PMADDWD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF5\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1352 */ {I_PMAXSW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xEE\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1353 */ {I_PMAXUB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xDE\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1354 */ {I_PMINSW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xEA\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1355 */ {I_PMINUB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xDA\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1356 */ {I_PMOVMSKB, 2, {REG32,XMMREG,0,0}, "\366\2\x0F\xD7\110", IF_WILLAMETTE|IF_SSE2},
    /* 1357 */ {I_PMULHUW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1358 */ {I_PMULHW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE5\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1359 */ {I_PMULLW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD5\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1360 */ {I_PMULUDQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xF4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1361 */ {I_PMULUDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1362 */ {I_POR, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xEB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1363 */ {I_PSADBW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF6\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1364 */ {I_PSHUFD, 3, {XMMREG,XMMREG,IMMEDIATE,0}, "\366\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1365 */ {I_PSHUFD, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\366\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /* 1366 */ {I_PSHUFHW, 3, {XMMREG,XMMREG,IMMEDIATE,0}, "\333\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1367 */ {I_PSHUFHW, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\333\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /* 1368 */ {I_PSHUFLW, 3, {XMMREG,XMMREG,IMMEDIATE,0}, "\332\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1369 */ {I_PSHUFLW, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\332\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /* 1370 */ {I_PSLLDQ, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x73\207\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1371 */ {I_PSLLW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF1\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1372 */ {I_PSLLW, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x71\206\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1373 */ {I_PSLLD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF2\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1374 */ {I_PSLLD, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x72\206\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1375 */ {I_PSLLQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF3\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1376 */ {I_PSLLQ, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x73\206\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1377 */ {I_PSRAW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE1\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1378 */ {I_PSRAW, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x71\204\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1379 */ {I_PSRAD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE2\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1380 */ {I_PSRAD, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x72\204\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1381 */ {I_PSRLDQ, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x73\203\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1382 */ {I_PSRLW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD1\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1383 */ {I_PSRLW, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x71\202\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1384 */ {I_PSRLD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD2\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1385 */ {I_PSRLD, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x72\202\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1386 */ {I_PSRLQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD3\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1387 */ {I_PSRLQ, 2, {XMMREG,IMMEDIATE,0,0}, "\366\2\x0F\x73\202\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /* 1388 */ {I_PSUBB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF8\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1389 */ {I_PSUBW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xF9\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1390 */ {I_PSUBD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xFA\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1391 */ {I_PSUBQ, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\xFB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1392 */ {I_PSUBQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xFB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1393 */ {I_PSUBSB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE8\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1394 */ {I_PSUBSW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE9\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1395 */ {I_PSUBUSB, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD8\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1396 */ {I_PSUBUSW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD9\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1397 */ {I_PUNPCKHBW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x68\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1398 */ {I_PUNPCKHWD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x69\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1399 */ {I_PUNPCKHDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x6A\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1400 */ {I_PUNPCKHQDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x6D\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1401 */ {I_PUNPCKLBW, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x60\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1402 */ {I_PUNPCKLWD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x61\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1403 */ {I_PUNPCKLDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x62\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1404 */ {I_PUNPCKLQDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x6C\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1405 */ {I_PXOR, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xEF\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1406 */ {I_ADDPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\x58\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1407 */ {I_ADDSD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\x58\110", IF_WILLAMETTE|IF_SSE2},
    /* 1408 */ {I_ANDNPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\x55\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1409 */ {I_ANDPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\x54\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1410 */ {I_CMPEQPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x00", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1411 */ {I_CMPEQSD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x00", IF_WILLAMETTE|IF_SSE2},
    /* 1412 */ {I_CMPLEPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x02", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1413 */ {I_CMPLESD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x02", IF_WILLAMETTE|IF_SSE2},
    /* 1414 */ {I_CMPLTPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x01", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1415 */ {I_CMPLTSD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x01", IF_WILLAMETTE|IF_SSE2},
    /* 1416 */ {I_CMPNEQPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x04", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1417 */ {I_CMPNEQSD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x04", IF_WILLAMETTE|IF_SSE2},
    /* 1418 */ {I_CMPNLEPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x06", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1419 */ {I_CMPNLESD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x06", IF_WILLAMETTE|IF_SSE2},
    /* 1420 */ {I_CMPNLTPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x05", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1421 */ {I_CMPNLTSD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x05", IF_WILLAMETTE|IF_SSE2},
    /* 1422 */ {I_CMPORDPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x07", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1423 */ {I_CMPORDSD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x07", IF_WILLAMETTE|IF_SSE2},
    /* 1424 */ {I_CMPUNORDPD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\xC2\110\1\x03", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1425 */ {I_CMPUNORDSD, 2, {XMMREG,RM_XMM,0,0}, "\331\332\2\x0F\xC2\110\1\x03", IF_WILLAMETTE|IF_SSE2},
    /* 1426 */ {I_CMPPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\331\366\2\x0F\xC2\110\26", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /* 1427 */ {I_CMPSD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\331\332\2\x0F\xC2\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1428 */ {I_COMISD, 2, {XMMREG,RM_XMM,0,0}, "\331\366\2\x0F\x2F\110", IF_WILLAMETTE|IF_SSE2},
    /* 1429 */ {I_CVTDQ2PD, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2},
    /* 1430 */ {I_CVTDQ2PS, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1431 */ {I_CVTPD2DQ, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1432 */ {I_CVTPD2PI, 2, {MMXREG,RM_XMM,0,0}, "\366\2\x0F\x2D\110", IF_WILLAMETTE|IF_SSE2},
    /* 1433 */ {I_CVTPD2PS, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1434 */ {I_CVTPI2PD, 2, {XMMREG,RM_MMX,0,0}, "\366\2\x0F\x2A\110", IF_WILLAMETTE|IF_SSE2},
    /* 1435 */ {I_CVTPS2DQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1436 */ {I_CVTPS2PD, 2, {XMMREG,RM_XMM,0,0}, "\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /* 1437 */ {I_CVTSD2SI, 2, {REG32,RM_XMM,0,0}, "\332\2\x0F\x2D\110", IF_WILLAMETTE|IF_SSE2},
    /* 1438 */ {I_CVTSD2SS, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /* 1439 */ {I_CVTSI2SD, 2, {XMMREG,REG32,0,0}, "\332\2\x0F\x2A\110", IF_WILLAMETTE|IF_SSE2},
    /* 1440 */ {I_CVTSI2SD, 2, {XMMREG,MEMORY,0,0}, "\332\2\x0F\x2A\110", IF_WILLAMETTE|IF_SSE2},
    /* 1441 */ {I_CVTSS2SD, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /* 1442 */ {I_CVTTPD2PI, 2, {MMXREG,RM_XMM,0,0}, "\366\2\x0F\x2C\110", IF_WILLAMETTE|IF_SSE2},
    /* 1443 */ {I_CVTTPD2DQ, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1444 */ {I_CVTTPS2DQ, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1445 */ {I_CVTTSD2SI, 2, {REG32,RM_XMM,0,0}, "\332\2\x0F\x2C\110", IF_WILLAMETTE|IF_SSE2},
    /* 1446 */ {I_DIVPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x5E\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1447 */ {I_DIVSD, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x5E\110", IF_WILLAMETTE|IF_SSE2},
    /* 1448 */ {I_MAXPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x5F\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1449 */ {I_MAXSD, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x5F\110", IF_WILLAMETTE|IF_SSE2},
    /* 1450 */ {I_MINPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x5D\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1451 */ {I_MINSD, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x5D\110", IF_WILLAMETTE|IF_SSE2},
    /* 1452 */ {I_MOVAPD, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\x28\110", IF_WILLAMETTE|IF_SSE2},
    /* 1453 */ {I_MOVAPD, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\x29\110", IF_WILLAMETTE|IF_SSE2},
    /* 1454 */ {I_MOVAPD, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\x29\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1455 */ {I_MOVAPD, 2, {XMMREG,MEMORY,0,0}, "\366\2\x0F\x28\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1456 */ {I_MOVHPD, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\x17\101", IF_WILLAMETTE|IF_SSE2},
    /* 1457 */ {I_MOVHPD, 2, {XMMREG,MEMORY,0,0}, "\366\2\x0F\x16\110", IF_WILLAMETTE|IF_SSE2},
    /* 1458 */ {I_MOVLPD, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\x13\101", IF_WILLAMETTE|IF_SSE2},
    /* 1459 */ {I_MOVLPD, 2, {XMMREG,MEMORY,0,0}, "\366\2\x0F\x12\110", IF_WILLAMETTE|IF_SSE2},
    /* 1460 */ {I_MOVMSKPD, 2, {REG32,XMMREG,0,0}, "\366\2\x0F\x50\110", IF_WILLAMETTE|IF_SSE2},
    /* 1461 */ {I_MOVMSKPD, 2, {REG64,XMMREG,0,0}, "\366\324\2\x0F\x50\110", IF_X64|IF_SSE2},
    /* 1462 */ {I_MOVSD, 2, {XMMREG,XMMREG,0,0}, "\332\2\x0F\x10\110", IF_WILLAMETTE|IF_SSE2},
    /* 1463 */ {I_MOVSD, 2, {XMMREG,XMMREG,0,0}, "\332\2\x0F\x11\110", IF_WILLAMETTE|IF_SSE2},
    /* 1464 */ {I_MOVSD, 2, {MEMORY,XMMREG,0,0}, "\332\2\x0F\x11\101", IF_WILLAMETTE|IF_SSE2},
    /* 1465 */ {I_MOVSD, 2, {XMMREG,MEMORY,0,0}, "\332\2\x0F\x10\110", IF_WILLAMETTE|IF_SSE2},
    /* 1466 */ {I_MOVUPD, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\x10\110", IF_WILLAMETTE|IF_SSE2},
    /* 1467 */ {I_MOVUPD, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\x11\110", IF_WILLAMETTE|IF_SSE2},
    /* 1468 */ {I_MOVUPD, 2, {MEMORY,XMMREG,0,0}, "\366\2\x0F\x11\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1469 */ {I_MOVUPD, 2, {XMMREG,MEMORY,0,0}, "\366\2\x0F\x10\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1470 */ {I_MULPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x59\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1471 */ {I_MULSD, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x59\110", IF_WILLAMETTE|IF_SSE2},
    /* 1472 */ {I_ORPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x56\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1473 */ {I_SHUFPD, 3, {XMMREG,XMMREG,IMMEDIATE,0}, "\366\2\x0F\xC6\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /* 1474 */ {I_SHUFPD, 3, {XMMREG,MEMORY,IMMEDIATE,0}, "\366\2\x0F\xC6\110\26", IF_WILLAMETTE|IF_SSE2|IF_SM|IF_SB|IF_AR2},
    /* 1475 */ {I_SQRTPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x51\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1476 */ {I_SQRTSD, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x51\110", IF_WILLAMETTE|IF_SSE2},
    /* 1477 */ {I_SUBPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x5C\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1478 */ {I_SUBSD, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x5C\110", IF_WILLAMETTE|IF_SSE2},
    /* 1479 */ {I_UCOMISD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x2E\110", IF_WILLAMETTE|IF_SSE2},
    /* 1480 */ {I_UNPCKHPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x15\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1481 */ {I_UNPCKLPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x14\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1482 */ {I_XORPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x57\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /* 1483 */ {I_ADDSUBPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\xD0\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /* 1484 */ {I_ADDSUBPS, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\xD0\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /* 1485 */ {I_HADDPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x7C\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /* 1486 */ {I_HADDPS, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x7C\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /* 1487 */ {I_HSUBPD, 2, {XMMREG,RM_XMM,0,0}, "\366\2\x0F\x7D\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /* 1488 */ {I_HSUBPS, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x7D\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /* 1489 */ {I_LDDQU, 2, {XMMREG,MEMORY,0,0}, "\332\2\x0F\xF0\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /* 1490 */ {I_MOVDDUP, 2, {XMMREG,RM_XMM,0,0}, "\332\2\x0F\x12\110", IF_PRESCOTT|IF_SSE3},
    /* 1491 */ {I_MOVSHDUP, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x16\110", IF_PRESCOTT|IF_SSE3},
    /* 1492 */ {I_MOVSLDUP, 2, {XMMREG,RM_XMM,0,0}, "\333\2\x0F\x12\110", IF_PRESCOTT|IF_SSE3},
    /* 1493 */ {I_VMCALL, 0, {0,0,0,0}, "\3\x0F\x01\xC1", IF_VMX},
    /* 1494 */ {I_VMCLEAR, 1, {MEMORY,0,0,0}, "\366\2\x0F\xC7\206", IF_VMX},
    /* 1495 */ {I_VMLAUNCH, 0, {0,0,0,0}, "\3\x0F\x01\xC2", IF_VMX},
    /* 1496 */ {I_VMLOAD, 0, {0,0,0,0}, "\3\x0F\x01\xDA", IF_X64|IF_VMX},
    /* 1497 */ {I_VMMCALL, 0, {0,0,0,0}, "\3\x0F\x01\xD9", IF_X64|IF_VMX},
    /* 1498 */ {I_VMPTRLD, 1, {MEMORY,0,0,0}, "\2\x0F\xC7\206", IF_VMX},
    /* 1499 */ {I_VMPTRST, 1, {MEMORY,0,0,0}, "\2\x0F\xC7\207", IF_VMX},
    /* 1500 */ {I_VMREAD, 2, {RM_GPR|BITS32,REG32,0,0}, "\2\x0F\x78\101", IF_VMX},
    /* 1501 */ {I_VMRESUME, 0, {0,0,0,0}, "\3\x0F\x01\xC3", IF_VMX},
    /* 1502 */ {I_VMRUN, 0, {0,0,0,0}, "\3\x0F\x01\xD8", IF_X64|IF_VMX},
    /* 1503 */ {I_VMSAVE, 0, {0,0,0,0}, "\3\x0F\x01\xDB", IF_X64|IF_VMX},
    /* 1504 */ {I_VMWRITE, 2, {REG32,RM_GPR|BITS32,0,0}, "\2\x0F\x79\110", IF_VMX},
    /* 1505 */ {I_VMXOFF, 0, {0,0,0,0}, "\3\x0F\x01\xC4", IF_VMX},
    /* 1506 */ {I_VMXON, 1, {MEMORY,0,0,0}, "\333\2\x0F\xC7\206", IF_VMX},
    /* 1507 */ {I_PABSB, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x1C\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1508 */ {I_PABSB, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x1C\110", IF_SSSE3},
    /* 1509 */ {I_PABSW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x1D\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1510 */ {I_PABSW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x1D\110", IF_SSSE3},
    /* 1511 */ {I_PABSD, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x1E\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1512 */ {I_PABSD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x1E\110", IF_SSSE3},
    /* 1513 */ {I_PALIGNR, 3, {MMXREG,RM_MMX,IMMEDIATE,0}, "\364\3\x0F\x3A\x0F\110\26", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1514 */ {I_PALIGNR, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x0F\110\26", IF_SSSE3},
    /* 1515 */ {I_PHADDW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x01\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1516 */ {I_PHADDW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x01\110", IF_SSSE3},
    /* 1517 */ {I_PHADDD, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x02\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1518 */ {I_PHADDD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x02\110", IF_SSSE3},
    /* 1519 */ {I_PHADDSW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x03\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1520 */ {I_PHADDSW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x03\110", IF_SSSE3},
    /* 1521 */ {I_PHSUBW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x05\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1522 */ {I_PHSUBW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x05\110", IF_SSSE3},
    /* 1523 */ {I_PHSUBD, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x06\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1524 */ {I_PHSUBD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x06\110", IF_SSSE3},
    /* 1525 */ {I_PHSUBSW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x07\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1526 */ {I_PHSUBSW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x07\110", IF_SSSE3},
    /* 1527 */ {I_PMADDUBSW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x04\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1528 */ {I_PMADDUBSW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x04\110", IF_SSSE3},
    /* 1529 */ {I_PMULHRSW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x0B\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1530 */ {I_PMULHRSW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x0B\110", IF_SSSE3},
    /* 1531 */ {I_PSHUFB, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x00\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1532 */ {I_PSHUFB, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x00\110", IF_SSSE3},
    /* 1533 */ {I_PSIGNB, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x08\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1534 */ {I_PSIGNB, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x08\110", IF_SSSE3},
    /* 1535 */ {I_PSIGNW, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x09\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1536 */ {I_PSIGNW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x09\110", IF_SSSE3},
    /* 1537 */ {I_PSIGND, 2, {MMXREG,RM_MMX,0,0}, "\364\3\x0F\x38\x0A\110", IF_SSSE3|IF_MMX|IF_SQ},
    /* 1538 */ {I_PSIGND, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x0A\110", IF_SSSE3},
    /* 1539 */ {I_EXTRQ, 3, {XMMREG,IMMEDIATE,IMMEDIATE,0}, "\366\2\x0F\x78\200\25\26", IF_SSE4A|IF_AMD},
    /* 1540 */ {I_EXTRQ, 2, {XMMREG,XMMREG,0,0}, "\366\2\x0F\x79\110", IF_SSE4A|IF_AMD},
    /* 1541 */ {I_INSERTQ, 4, {XMMREG,XMMREG,IMMEDIATE,IMMEDIATE}, "\332\2\x0F\x78\110\26\27", IF_SSE4A|IF_AMD},
    /* 1542 */ {I_INSERTQ, 2, {XMMREG,XMMREG,0,0}, "\332\2\x0F\x79\110", IF_SSE4A|IF_AMD},
    /* 1543 */ {I_MOVNTSD, 2, {MEMORY,XMMREG,0,0}, "\332\2\x0F\x2B\101", IF_SSE4A|IF_AMD|IF_SQ},
    /* 1544 */ {I_MOVNTSS, 2, {MEMORY,XMMREG,0,0}, "\333\2\x0F\x2B\101", IF_SSE4A|IF_AMD|IF_SD},
    /* 1545 */ {I_LZCNT, 2, {REG16,RM_GPR|BITS16,0,0}, "\320\333\2\x0F\xBD\110", IF_P6|IF_AMD},
    /* 1546 */ {I_LZCNT, 2, {REG32,RM_GPR|BITS32,0,0}, "\321\333\2\x0F\xBD\110", IF_P6|IF_AMD},
    /* 1547 */ {I_LZCNT, 2, {REG64,RM_GPR|BITS64,0,0}, "\324\333\2\x0F\xBD\110", IF_P6|IF_AMD},
    /* 1548 */ {I_BLENDPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x0D\110\26", IF_SSE41},
    /* 1549 */ {I_BLENDPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x0C\110\26", IF_SSE41},
    /* 1550 */ {I_BLENDVPD, 3, {XMMREG,RM_XMM,XMM0,0}, "\366\3\x0F\x38\x15\110", IF_SSE41},
    /* 1551 */ {I_BLENDVPS, 3, {XMMREG,RM_XMM,XMM0,0}, "\366\3\x0F\x38\x14\110", IF_SSE41},
    /* 1552 */ {I_DPPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x41\110\26", IF_SSE41},
    /* 1553 */ {I_DPPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x40\110\26", IF_SSE41},
    /* 1554 */ {I_EXTRACTPS, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE,0}, "\366\3\x0F\x3A\x17\101\26", IF_SSE41},
    /* 1555 */ {I_EXTRACTPS, 3, {REG64,XMMREG,IMMEDIATE,0}, "\324\366\3\x0F\x3A\x17\101\26", IF_SSE41|IF_X64},
    /* 1556 */ {I_INSERTPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x21\110\26", IF_SSE41|IF_SD},
    /* 1557 */ {I_MOVNTDQA, 2, {XMMREG,MEMORY,0,0}, "\366\3\x0F\x38\x2A\110", IF_SSE41},
    /* 1558 */ {I_MPSADBW, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x42\110\26", IF_SSE41},
    /* 1559 */ {I_PACKUSDW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x2B\110", IF_SSE41},
    /* 1560 */ {I_PBLENDVB, 3, {XMMREG,RM_XMM,XMM0,0}, "\366\3\x0F\x38\x10\110", IF_SSE41},
    /* 1561 */ {I_PBLENDW, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x0E\110\26", IF_SSE41},
    /* 1562 */ {I_PCMPEQQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x29\110", IF_SSE41},
    /* 1563 */ {I_PEXTRB, 3, {REG32,XMMREG,IMMEDIATE,0}, "\366\3\x0F\x3A\x14\101\26", IF_SSE41},
    /* 1564 */ {I_PEXTRB, 3, {MEMORY|BITS8,XMMREG,IMMEDIATE,0}, "\366\3\x0F\x3A\x14\101\26", IF_SSE41},
    /* 1565 */ {I_PEXTRB, 3, {REG64,XMMREG,IMMEDIATE,0}, "\324\366\3\x0F\x3A\x14\101\26", IF_SSE41|IF_X64},
    /* 1566 */ {I_PEXTRD, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE,0}, "\366\3\x0F\x3A\x16\101\26", IF_SSE41},
    /* 1567 */ {I_PEXTRQ, 3, {RM_GPR|BITS64,XMMREG,IMMEDIATE,0}, "\366\3\x0F\x3A\x16\101\26", IF_SSE41|IF_X64},
    /* 1568 */ {I_PEXTRW, 3, {REG32,XMMREG,IMMEDIATE,0}, "\366\3\x0F\x3A\x15\101\26", IF_SSE41},
    /* 1569 */ {I_PEXTRW, 3, {MEMORY|BITS16,XMMREG,IMMEDIATE,0}, "\366\3\x0F\x3A\x15\101\26", IF_SSE41},
    /* 1570 */ {I_PEXTRW, 3, {REG64,XMMREG,IMMEDIATE,0}, "\324\366\3\x0F\x3A\x15\101\26", IF_SSE41|IF_X64},
    /* 1571 */ {I_PHMINPOSUW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x41\110", IF_SSE41},
    /* 1572 */ {I_PINSRB, 3, {XMMREG,REG32,IMMEDIATE,0}, "\366\3\x0F\x3A\x20\110\26", IF_SSE41},
    /* 1573 */ {I_PINSRB, 3, {XMMREG,MEMORY|BITS8,IMMEDIATE,0}, "\366\3\x0F\x3A\x20\110\26", IF_SSE41},
    /* 1574 */ {I_PINSRD, 3, {XMMREG,RM_GPR|BITS32,IMMEDIATE,0}, "\366\3\x0F\x3A\x22\110\26", IF_SSE41},
    /* 1575 */ {I_PINSRQ, 3, {XMMREG,RM_GPR|BITS64,IMMEDIATE,0}, "\324\366\3\x0F\x3A\x22\110\26", IF_SSE41|IF_X64},
    /* 1576 */ {I_PMAXSB, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x3C\110", IF_SSE41},
    /* 1577 */ {I_PMAXSD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x3D\110", IF_SSE41},
    /* 1578 */ {I_PMAXUD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x3F\110", IF_SSE41},
    /* 1579 */ {I_PMAXUW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x3E\110", IF_SSE41},
    /* 1580 */ {I_PMINSB, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x38\110", IF_SSE41},
    /* 1581 */ {I_PMINSD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x39\110", IF_SSE41},
    /* 1582 */ {I_PMINUD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x3B\110", IF_SSE41},
    /* 1583 */ {I_PMINUW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x3A\110", IF_SSE41},
    /* 1584 */ {I_PMOVSXBW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x20\110", IF_SSE41|IF_SQ},
    /* 1585 */ {I_PMOVSXBD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x21\110", IF_SSE41|IF_SD},
    /* 1586 */ {I_PMOVSXBQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x22\110", IF_SSE41|IF_SW},
    /* 1587 */ {I_PMOVSXWD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x23\110", IF_SSE41|IF_SQ},
    /* 1588 */ {I_PMOVSXWQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x24\110", IF_SSE41|IF_SD},
    /* 1589 */ {I_PMOVSXDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x25\110", IF_SSE41|IF_SQ},
    /* 1590 */ {I_PMOVZXBW, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x30\110", IF_SSE41|IF_SQ},
    /* 1591 */ {I_PMOVZXBD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x31\110", IF_SSE41|IF_SD},
    /* 1592 */ {I_PMOVZXBQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x32\110", IF_SSE41|IF_SW},
    /* 1593 */ {I_PMOVZXWD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x33\110", IF_SSE41|IF_SQ},
    /* 1594 */ {I_PMOVZXWQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x34\110", IF_SSE41|IF_SD},
    /* 1595 */ {I_PMOVZXDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x35\110", IF_SSE41|IF_SQ},
    /* 1596 */ {I_PMULDQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x28\110", IF_SSE41},
    /* 1597 */ {I_PMULLD, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x40\110", IF_SSE41},
    /* 1598 */ {I_PTEST, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x17\110", IF_SSE41},
    /* 1599 */ {I_ROUNDPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x09\110\26", IF_SSE41},
    /* 1600 */ {I_ROUNDPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x08\110\26", IF_SSE41},
    /* 1601 */ {I_ROUNDSD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x0B\110\26", IF_SSE41},
    /* 1602 */ {I_ROUNDSS, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x0A\110\26", IF_SSE41},
    /* 1603 */ {I_CRC32, 2, {REG32,RM_GPR|BITS8,0,0}, "\332\3\x0F\x38\1\xF0\110", IF_SSE42},
    /* 1604 */ {I_CRC32, 2, {REG32,RM_GPR|BITS16,0,0}, "\332\3\x0F\x38\1\xF1\110", IF_SSE42},
    /* 1605 */ {I_CRC32, 2, {REG32,RM_GPR|BITS32,0,0}, "\332\3\x0F\x38\1\xF1\110", IF_SSE42},
    /* 1606 */ {I_CRC32, 2, {REG64,RM_GPR|BITS8,0,0}, "\324\332\3\x0F\x38\1\xF0\110", IF_SSE42|IF_X64},
    /* 1607 */ {I_CRC32, 2, {REG64,RM_GPR|BITS64,0,0}, "\324\332\3\x0F\x38\1\xF1\110", IF_SSE42|IF_X64},
    /* 1608 */ {I_PCMPESTRI, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x61\110\26", IF_SSE42},
    /* 1609 */ {I_PCMPESTRM, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x60\110\26", IF_SSE42},
    /* 1610 */ {I_PCMPISTRI, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x63\110\26", IF_SSE42},
    /* 1611 */ {I_PCMPISTRM, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x62\110\26", IF_SSE42},
    /* 1612 */ {I_PCMPGTQ, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x37\110", IF_SSE42},
    /* 1613 */ {I_POPCNT, 2, {REG16,RM_GPR|BITS16,0,0}, "\320\333\2\x0F\xB8\110", IF_NEHALEM},
    /* 1614 */ {I_POPCNT, 2, {REG32,RM_GPR|BITS32,0,0}, "\321\333\2\x0F\xB8\110", IF_NEHALEM},
    /* 1615 */ {I_POPCNT, 2, {REG64,RM_GPR|BITS32,0,0}, "\324\333\2\x0F\xB8\110", IF_NEHALEM|IF_X64},
    /* 1616 */ {I_FMADDPS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\2\x0F\x24\170\132", IF_SSE5|IF_AMD},
    /* 1617 */ {I_FMADDPS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\2\x0F\x24\170\123", IF_SSE5|IF_AMD},
    /* 1618 */ {I_FMADDPS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x04\121", IF_SSE5|IF_AMD},
    /* 1619 */ {I_FMADDPS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x04\112", IF_SSE5|IF_AMD},
    /* 1620 */ {I_FMADDPD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x01\132", IF_SSE5|IF_AMD},
    /* 1621 */ {I_FMADDPD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x01\123", IF_SSE5|IF_AMD},
    /* 1622 */ {I_FMADDPD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x05\121", IF_SSE5|IF_AMD},
    /* 1623 */ {I_FMADDPD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x05\112", IF_SSE5|IF_AMD},
    /* 1624 */ {I_FMADDSS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x02\132", IF_SSE5|IF_AMD},
    /* 1625 */ {I_FMADDSS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x02\123", IF_SSE5|IF_AMD},
    /* 1626 */ {I_FMADDSS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x06\121", IF_SSE5|IF_AMD},
    /* 1627 */ {I_FMADDSS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x06\112", IF_SSE5|IF_AMD},
    /* 1628 */ {I_FMADDSD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x03\132", IF_SSE5|IF_AMD},
    /* 1629 */ {I_FMADDSD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x03\123", IF_SSE5|IF_AMD},
    /* 1630 */ {I_FMADDSD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x07\121", IF_SSE5|IF_AMD},
    /* 1631 */ {I_FMADDSD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x07\112", IF_SSE5|IF_AMD},
    /* 1632 */ {I_FMSUBPS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x08\132", IF_SSE5|IF_AMD},
    /* 1633 */ {I_FMSUBPS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x08\123", IF_SSE5|IF_AMD},
    /* 1634 */ {I_FMSUBPS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x0C\121", IF_SSE5|IF_AMD},
    /* 1635 */ {I_FMSUBPS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x0C\112", IF_SSE5|IF_AMD},
    /* 1636 */ {I_FMSUBPD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x09\132", IF_SSE5|IF_AMD},
    /* 1637 */ {I_FMSUBPD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x09\123", IF_SSE5|IF_AMD},
    /* 1638 */ {I_FMSUBPD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x0D\121", IF_SSE5|IF_AMD},
    /* 1639 */ {I_FMSUBPD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x0D\112", IF_SSE5|IF_AMD},
    /* 1640 */ {I_FMSUBSS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x0A\132", IF_SSE5|IF_AMD},
    /* 1641 */ {I_FMSUBSS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x0A\123", IF_SSE5|IF_AMD},
    /* 1642 */ {I_FMSUBSS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x0E\121", IF_SSE5|IF_AMD},
    /* 1643 */ {I_FMSUBSS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x0E\112", IF_SSE5|IF_AMD},
    /* 1644 */ {I_FMSUBSD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x0B\132", IF_SSE5|IF_AMD},
    /* 1645 */ {I_FMSUBSD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x0B\123", IF_SSE5|IF_AMD},
    /* 1646 */ {I_FMSUBSD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x0F\121", IF_SSE5|IF_AMD},
    /* 1647 */ {I_FMSUBSD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x0F\112", IF_SSE5|IF_AMD},
    /* 1648 */ {I_FMNADDPS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x10\132", IF_SSE5|IF_AMD},
    /* 1649 */ {I_FMNADDPS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x10\123", IF_SSE5|IF_AMD},
    /* 1650 */ {I_FMNADDPS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x14\121", IF_SSE5|IF_AMD},
    /* 1651 */ {I_FMNADDPS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x14\112", IF_SSE5|IF_AMD},
    /* 1652 */ {I_FMNADDPD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x11\132", IF_SSE5|IF_AMD},
    /* 1653 */ {I_FMNADDPD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x11\123", IF_SSE5|IF_AMD},
    /* 1654 */ {I_FMNADDPD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x15\121", IF_SSE5|IF_AMD},
    /* 1655 */ {I_FMNADDPD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x15\112", IF_SSE5|IF_AMD},
    /* 1656 */ {I_FMNADDSS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x12\132", IF_SSE5|IF_AMD},
    /* 1657 */ {I_FMNADDSS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x12\123", IF_SSE5|IF_AMD},
    /* 1658 */ {I_FMNADDSS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x16\121", IF_SSE5|IF_AMD},
    /* 1659 */ {I_FMNADDSS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x16\112", IF_SSE5|IF_AMD},
    /* 1660 */ {I_FMNADDSD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x13\132", IF_SSE5|IF_AMD},
    /* 1661 */ {I_FMNADDSD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x13\123", IF_SSE5|IF_AMD},
    /* 1662 */ {I_FMNADDSD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x17\121", IF_SSE5|IF_AMD},
    /* 1663 */ {I_FMNADDSD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x17\112", IF_SSE5|IF_AMD},
    /* 1664 */ {I_FMNSUBPS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x18\132", IF_SSE5|IF_AMD},
    /* 1665 */ {I_FMNSUBPS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x18\123", IF_SSE5|IF_AMD},
    /* 1666 */ {I_FMNSUBPS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x1C\121", IF_SSE5|IF_AMD},
    /* 1667 */ {I_FMNSUBPS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x1C\112", IF_SSE5|IF_AMD},
    /* 1668 */ {I_FMNSUBPD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x19\132", IF_SSE5|IF_AMD},
    /* 1669 */ {I_FMNSUBPD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x19\123", IF_SSE5|IF_AMD},
    /* 1670 */ {I_FMNSUBPD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x1D\121", IF_SSE5|IF_AMD},
    /* 1671 */ {I_FMNSUBPD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x1D\112", IF_SSE5|IF_AMD},
    /* 1672 */ {I_FMNSUBSS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x1A\132", IF_SSE5|IF_AMD},
    /* 1673 */ {I_FMNSUBSS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x1A\123", IF_SSE5|IF_AMD},
    /* 1674 */ {I_FMNSUBSS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x1E\121", IF_SSE5|IF_AMD},
    /* 1675 */ {I_FMNSUBSS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x1E\112", IF_SSE5|IF_AMD},
    /* 1676 */ {I_FMNSUBSD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x1B\132", IF_SSE5|IF_AMD},
    /* 1677 */ {I_FMNSUBSD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x1B\123", IF_SSE5|IF_AMD},
    /* 1678 */ {I_FMNSUBSD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x1F\121", IF_SSE5|IF_AMD},
    /* 1679 */ {I_FMNSUBSD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x1F\112", IF_SSE5|IF_AMD},
    /* 1680 */ {I_COMPS, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x2C\121\27", IF_SSE5|IF_AMD},
    /* 1681 */ {I_COMPD, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x2D\121\27", IF_SSE5|IF_AMD},
    /* 1682 */ {I_COMSS, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x2E\121\27", IF_SSE5|IF_AMD},
    /* 1683 */ {I_COMSD, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x2F\121\27", IF_SSE5|IF_AMD},
    /* 1684 */ {I_PCOMB, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x4C\121\27", IF_SSE5|IF_AMD},
    /* 1685 */ {I_PCOMW, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x4D\121\27", IF_SSE5|IF_AMD},
    /* 1686 */ {I_PCOMD, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x4E\121\27", IF_SSE5|IF_AMD},
    /* 1687 */ {I_PCOMQ, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x4F\121\27", IF_SSE5|IF_AMD},
    /* 1688 */ {I_PCOMUB, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x6C\121\27", IF_SSE5|IF_AMD},
    /* 1689 */ {I_PCOMUW, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x6D\121\27", IF_SSE5|IF_AMD},
    /* 1690 */ {I_PCOMUD, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x6E\121\27", IF_SSE5|IF_AMD},
    /* 1691 */ {I_PCOMUQ, 4, {XMMREG,XMMREG,RM_XMM,IMMEDIATE}, "\160\3\x0F\x25\x6F\121\27", IF_SSE5|IF_AMD},
    /* 1692 */ {I_PERMPS, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x20\132", IF_SSE5|IF_AMD},
    /* 1693 */ {I_PERMPS, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x20\123", IF_SSE5|IF_AMD},
    /* 1694 */ {I_PERMPS, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x24\121", IF_SSE5|IF_AMD},
    /* 1695 */ {I_PERMPS, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x24\112", IF_SSE5|IF_AMD},
    /* 1696 */ {I_PERMPD, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x21\132", IF_SSE5|IF_AMD},
    /* 1697 */ {I_PERMPD, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x21\123", IF_SSE5|IF_AMD},
    /* 1698 */ {I_PERMPD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x25\121", IF_SSE5|IF_AMD},
    /* 1699 */ {I_PERMPD, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x25\112", IF_SSE5|IF_AMD},
    /* 1700 */ {I_PCMOV, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x22\132", IF_SSE5|IF_AMD},
    /* 1701 */ {I_PCMOV, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x22\123", IF_SSE5|IF_AMD},
    /* 1702 */ {I_PCMOV, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x26\121", IF_SSE5|IF_AMD},
    /* 1703 */ {I_PCMOV, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x26\112", IF_SSE5|IF_AMD},
    /* 1704 */ {I_PPERM, 4, {XMMREG,SAME_AS|0,XMMREG,RM_XMM}, "\160\3\x0F\x24\x23\132", IF_SSE5|IF_AMD},
    /* 1705 */ {I_PPERM, 4, {XMMREG,SAME_AS|0,RM_XMM,XMMREG}, "\164\3\x0F\x24\x23\123", IF_SSE5|IF_AMD},
    /* 1706 */ {I_PPERM, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x27\121", IF_SSE5|IF_AMD},
    /* 1707 */ {I_PPERM, 4, {XMMREG,RM_XMM,XMMREG,SAME_AS|0}, "\164\3\x0F\x24\x27\112", IF_SSE5|IF_AMD},
    /* 1708 */ {I_PMACSSWW, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x85\121", IF_SSE5|IF_AMD},
    /* 1709 */ {I_PMACSWW, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x95\121", IF_SSE5|IF_AMD},
    /* 1710 */ {I_PMACSSWD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x86\121", IF_SSE5|IF_AMD},
    /* 1711 */ {I_PMACSWD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x96\121", IF_SSE5|IF_AMD},
    /* 1712 */ {I_PMACSSDD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x8E\121", IF_SSE5|IF_AMD},
    /* 1713 */ {I_PMACSDD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x9E\121", IF_SSE5|IF_AMD},
    /* 1714 */ {I_PMACSSDQL, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x87\121", IF_SSE5|IF_AMD},
    /* 1715 */ {I_PMACSDQL, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x97\121", IF_SSE5|IF_AMD},
    /* 1716 */ {I_PMACSSDQH, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x8F\121", IF_SSE5|IF_AMD},
    /* 1717 */ {I_PMACSDQH, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\x9F\121", IF_SSE5|IF_AMD},
    /* 1718 */ {I_PMADCSSWD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\xA6\121", IF_SSE5|IF_AMD},
    /* 1719 */ {I_PMADCSWD, 4, {XMMREG,XMMREG,RM_XMM,SAME_AS|0}, "\160\3\x0F\x24\xB6\121", IF_SSE5|IF_AMD},
    /* 1720 */ {I_PROTB, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x40\121", IF_SSE5|IF_AMD},
    /* 1721 */ {I_PROTB, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x40\112", IF_SSE5|IF_AMD},
    /* 1722 */ {I_PROTW, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x41\121", IF_SSE5|IF_AMD},
    /* 1723 */ {I_PROTW, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x41\112", IF_SSE5|IF_AMD},
    /* 1724 */ {I_PROTD, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x42\121", IF_SSE5|IF_AMD},
    /* 1725 */ {I_PROTD, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x42\112", IF_SSE5|IF_AMD},
    /* 1726 */ {I_PROTQ, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x43\121", IF_SSE5|IF_AMD},
    /* 1727 */ {I_PROTQ, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x43\112", IF_SSE5|IF_AMD},
    /* 1728 */ {I_PSHLB, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x44\121", IF_SSE5|IF_AMD},
    /* 1729 */ {I_PSHLB, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x44\112", IF_SSE5|IF_AMD},
    /* 1730 */ {I_PSHLW, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x45\121", IF_SSE5|IF_AMD},
    /* 1731 */ {I_PSHLW, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x45\112", IF_SSE5|IF_AMD},
    /* 1732 */ {I_PSHLD, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x46\121", IF_SSE5|IF_AMD},
    /* 1733 */ {I_PSHLD, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x46\112", IF_SSE5|IF_AMD},
    /* 1734 */ {I_PSHLQ, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x47\121", IF_SSE5|IF_AMD},
    /* 1735 */ {I_PSHLQ, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x47\112", IF_SSE5|IF_AMD},
    /* 1736 */ {I_PSHAB, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x48\121", IF_SSE5|IF_AMD},
    /* 1737 */ {I_PSHAB, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x48\112", IF_SSE5|IF_AMD},
    /* 1738 */ {I_PSHAW, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x49\121", IF_SSE5|IF_AMD},
    /* 1739 */ {I_PSHAW, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x49\112", IF_SSE5|IF_AMD},
    /* 1740 */ {I_PSHAD, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x4A\121", IF_SSE5|IF_AMD},
    /* 1741 */ {I_PSHAD, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x4A\112", IF_SSE5|IF_AMD},
    /* 1742 */ {I_PSHAQ, 3, {XMMREG,XMMREG,RM_XMM,0}, "\160\3\x0F\x24\x4B\121", IF_SSE5|IF_AMD},
    /* 1743 */ {I_PSHAQ, 3, {XMMREG,RM_XMM,XMMREG,0}, "\164\3\x0F\x24\x4B\112", IF_SSE5|IF_AMD},
    /* 1744 */ {I_FRCZPS, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x10\110", IF_SSE5|IF_AMD},
    /* 1745 */ {I_FRCZPD, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x11\110", IF_SSE5|IF_AMD},
    /* 1746 */ {I_FRCZSS, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x12\110", IF_SSE5|IF_AMD},
    /* 1747 */ {I_FRCZSD, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x13\110", IF_SSE5|IF_AMD},
    /* 1748 */ {I_CVTPH2PS, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x30\110", IF_SSE5|IF_AMD|IF_SQ},
    /* 1749 */ {I_CVTPS2PH, 2, {RM_XMM,XMMREG,0,0}, "\3\x0F\x7A\x31\101", IF_SSE5|IF_AMD|IF_SQ},
    /* 1750 */ {I_PHADDBW, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x41\110", IF_SSE5|IF_AMD},
    /* 1751 */ {I_PHADDBD, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x42\110", IF_SSE5|IF_AMD},
    /* 1752 */ {I_PHADDBQ, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x43\110", IF_SSE5|IF_AMD},
    /* 1753 */ {I_PHADDWD, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x46\110", IF_SSE5|IF_AMD},
    /* 1754 */ {I_PHADDWQ, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x47\110", IF_SSE5|IF_AMD},
    /* 1755 */ {I_PHADDDQ, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x4B\110", IF_SSE5|IF_AMD},
    /* 1756 */ {I_PHADDUBW, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x51\110", IF_SSE5|IF_AMD},
    /* 1757 */ {I_PHADDUBD, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x52\110", IF_SSE5|IF_AMD},
    /* 1758 */ {I_PHADDUBQ, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x53\110", IF_SSE5|IF_AMD},
    /* 1759 */ {I_PHADDUWD, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x56\110", IF_SSE5|IF_AMD},
    /* 1760 */ {I_PHADDUWQ, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x57\110", IF_SSE5|IF_AMD},
    /* 1761 */ {I_PHADDUDQ, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x5B\110", IF_SSE5|IF_AMD},
    /* 1762 */ {I_PHSUBBW, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x61\110", IF_SSE5|IF_AMD},
    /* 1763 */ {I_PHSUBWD, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x62\110", IF_SSE5|IF_AMD},
    /* 1764 */ {I_PHSUBDQ, 2, {XMMREG,RM_XMM,0,0}, "\3\x0F\x7A\x63\110", IF_SSE5|IF_AMD},
    /* 1765 */ {I_PROTB, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\3\x0F\x7B\x40\110\26", IF_SSE5|IF_AMD},
    /* 1766 */ {I_PROTW, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\3\x0F\x7B\x41\110\26", IF_SSE5|IF_AMD},
    /* 1767 */ {I_PROTD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\3\x0F\x7B\x42\110\26", IF_SSE5|IF_AMD},
    /* 1768 */ {I_PROTQ, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\3\x0F\x7B\x43\110\26", IF_SSE5|IF_AMD},
    /* 1769 */ {I_PTEST, 2, {XMMREG,RM_XMM,0,0}, "\366\3\x0F\x38\x17\110", IF_SSE5|IF_AMD},
    /* 1770 */ {I_ROUNDPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x08\110\26", IF_SSE5|IF_AMD},
    /* 1771 */ {I_ROUNDPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x08\110\26", IF_SSE5|IF_AMD},
    /* 1772 */ {I_ROUNDSS, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x08\110\26", IF_SSE5|IF_AMD},
    /* 1773 */ {I_ROUNDSD, 3, {XMMREG,RM_XMM,IMMEDIATE,0}, "\366\3\x0F\x3A\x08\110\26", IF_SSE5|IF_AMD},
    /* 1774 */ {I_GETSEC, 0, {0,0,0,0}, "\2\x0F\x37", IF_KATMAI},
    /* 1775 */ {I_PFRCP, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\1\x86", IF_PENT|IF_3DNOW|IF_SM|IF_CYRIX},
    /* 1776 */ {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0}, "\2\x0F\x0F\110\1\x87", IF_PENT|IF_3DNOW|IF_SM|IF_CYRIX},
    /* 1777 */ {I_XSTORE, 0, {0,0,0,0}, "\3\x0F\xA7\xC0", IF_PENT|IF_CYRIX},
    /* 1778 */ {I_XCRYPTECB, 0, {0,0,0,0}, "\333\3\x0F\xA7\xC8", IF_PENT|IF_CYRIX},
    /* 1779 */ {I_XCRYPTCBC, 0, {0,0,0,0}, "\333\3\x0F\xA7\xD0", IF_PENT|IF_CYRIX},
    /* 1780 */ {I_XCRYPTCFB, 0, {0,0,0,0}, "\333\3\x0F\xA7\xE0", IF_PENT|IF_CYRIX},
    /* 1781 */ {I_XCRYPTOFB, 0, {0,0,0,0}, "\333\3\x0F\xA7\xE8", IF_PENT|IF_CYRIX},
    /* 1782 */ {I_MONTMUL, 0, {0,0,0,0}, "\333\3\x0F\xA6\xC0", IF_PENT|IF_CYRIX},
    /* 1783 */ {I_XSHA1, 0, {0,0,0,0}, "\333\3\x0F\xA6\xC8", IF_PENT|IF_CYRIX},
    /* 1784 */ {I_XSHA256, 0, {0,0,0,0}, "\333\3\x0F\xA6\xD0", IF_PENT|IF_CYRIX},
    /* 1785 */ {I_HINT_NOP0, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\200", IF_P6|IF_UNDOC},
    /* 1786 */ {I_HINT_NOP0, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\200", IF_P6|IF_UNDOC},
    /* 1787 */ {I_HINT_NOP0, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\200", IF_X64|IF_UNDOC},
    /* 1788 */ {I_HINT_NOP1, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\201", IF_P6|IF_UNDOC},
    /* 1789 */ {I_HINT_NOP1, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\201", IF_P6|IF_UNDOC},
    /* 1790 */ {I_HINT_NOP1, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\201", IF_X64|IF_UNDOC},
    /* 1791 */ {I_HINT_NOP2, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\202", IF_P6|IF_UNDOC},
    /* 1792 */ {I_HINT_NOP2, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\202", IF_P6|IF_UNDOC},
    /* 1793 */ {I_HINT_NOP2, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\202", IF_X64|IF_UNDOC},
    /* 1794 */ {I_HINT_NOP3, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\203", IF_P6|IF_UNDOC},
    /* 1795 */ {I_HINT_NOP3, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\203", IF_P6|IF_UNDOC},
    /* 1796 */ {I_HINT_NOP3, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\203", IF_X64|IF_UNDOC},
    /* 1797 */ {I_HINT_NOP4, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\204", IF_P6|IF_UNDOC},
    /* 1798 */ {I_HINT_NOP4, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\204", IF_P6|IF_UNDOC},
    /* 1799 */ {I_HINT_NOP4, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\204", IF_X64|IF_UNDOC},
    /* 1800 */ {I_HINT_NOP5, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\205", IF_P6|IF_UNDOC},
    /* 1801 */ {I_HINT_NOP5, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\205", IF_P6|IF_UNDOC},
    /* 1802 */ {I_HINT_NOP5, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\205", IF_X64|IF_UNDOC},
    /* 1803 */ {I_HINT_NOP6, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\206", IF_P6|IF_UNDOC},
    /* 1804 */ {I_HINT_NOP6, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\206", IF_P6|IF_UNDOC},
    /* 1805 */ {I_HINT_NOP6, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\206", IF_X64|IF_UNDOC},
    /* 1806 */ {I_HINT_NOP7, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x18\207", IF_P6|IF_UNDOC},
    /* 1807 */ {I_HINT_NOP7, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x18\207", IF_P6|IF_UNDOC},
    /* 1808 */ {I_HINT_NOP7, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x18\207", IF_X64|IF_UNDOC},
    /* 1809 */ {I_HINT_NOP8, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\200", IF_P6|IF_UNDOC},
    /* 1810 */ {I_HINT_NOP8, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\200", IF_P6|IF_UNDOC},
    /* 1811 */ {I_HINT_NOP8, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\200", IF_X64|IF_UNDOC},
    /* 1812 */ {I_HINT_NOP9, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\201", IF_P6|IF_UNDOC},
    /* 1813 */ {I_HINT_NOP9, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\201", IF_P6|IF_UNDOC},
    /* 1814 */ {I_HINT_NOP9, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\201", IF_X64|IF_UNDOC},
    /* 1815 */ {I_HINT_NOP10, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\202", IF_P6|IF_UNDOC},
    /* 1816 */ {I_HINT_NOP10, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\202", IF_P6|IF_UNDOC},
    /* 1817 */ {I_HINT_NOP10, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\202", IF_X64|IF_UNDOC},
    /* 1818 */ {I_HINT_NOP11, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\203", IF_P6|IF_UNDOC},
    /* 1819 */ {I_HINT_NOP11, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\203", IF_P6|IF_UNDOC},
    /* 1820 */ {I_HINT_NOP11, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\203", IF_X64|IF_UNDOC},
    /* 1821 */ {I_HINT_NOP12, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\204", IF_P6|IF_UNDOC},
    /* 1822 */ {I_HINT_NOP12, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\204", IF_P6|IF_UNDOC},
    /* 1823 */ {I_HINT_NOP12, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\204", IF_X64|IF_UNDOC},
    /* 1824 */ {I_HINT_NOP13, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\205", IF_P6|IF_UNDOC},
    /* 1825 */ {I_HINT_NOP13, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\205", IF_P6|IF_UNDOC},
    /* 1826 */ {I_HINT_NOP13, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\205", IF_X64|IF_UNDOC},
    /* 1827 */ {I_HINT_NOP14, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\206", IF_P6|IF_UNDOC},
    /* 1828 */ {I_HINT_NOP14, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\206", IF_P6|IF_UNDOC},
    /* 1829 */ {I_HINT_NOP14, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\206", IF_X64|IF_UNDOC},
    /* 1830 */ {I_HINT_NOP15, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x19\207", IF_P6|IF_UNDOC},
    /* 1831 */ {I_HINT_NOP15, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x19\207", IF_P6|IF_UNDOC},
    /* 1832 */ {I_HINT_NOP15, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x19\207", IF_X64|IF_UNDOC},
    /* 1833 */ {I_HINT_NOP16, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\200", IF_P6|IF_UNDOC},
    /* 1834 */ {I_HINT_NOP16, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\200", IF_P6|IF_UNDOC},
    /* 1835 */ {I_HINT_NOP16, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\200", IF_X64|IF_UNDOC},
    /* 1836 */ {I_HINT_NOP17, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\201", IF_P6|IF_UNDOC},
    /* 1837 */ {I_HINT_NOP17, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\201", IF_P6|IF_UNDOC},
    /* 1838 */ {I_HINT_NOP17, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\201", IF_X64|IF_UNDOC},
    /* 1839 */ {I_HINT_NOP18, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\202", IF_P6|IF_UNDOC},
    /* 1840 */ {I_HINT_NOP18, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\202", IF_P6|IF_UNDOC},
    /* 1841 */ {I_HINT_NOP18, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\202", IF_X64|IF_UNDOC},
    /* 1842 */ {I_HINT_NOP19, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\203", IF_P6|IF_UNDOC},
    /* 1843 */ {I_HINT_NOP19, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\203", IF_P6|IF_UNDOC},
    /* 1844 */ {I_HINT_NOP19, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\203", IF_X64|IF_UNDOC},
    /* 1845 */ {I_HINT_NOP20, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\204", IF_P6|IF_UNDOC},
    /* 1846 */ {I_HINT_NOP20, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\204", IF_P6|IF_UNDOC},
    /* 1847 */ {I_HINT_NOP20, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\204", IF_X64|IF_UNDOC},
    /* 1848 */ {I_HINT_NOP21, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\205", IF_P6|IF_UNDOC},
    /* 1849 */ {I_HINT_NOP21, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\205", IF_P6|IF_UNDOC},
    /* 1850 */ {I_HINT_NOP21, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\205", IF_X64|IF_UNDOC},
    /* 1851 */ {I_HINT_NOP22, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\206", IF_P6|IF_UNDOC},
    /* 1852 */ {I_HINT_NOP22, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\206", IF_P6|IF_UNDOC},
    /* 1853 */ {I_HINT_NOP22, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\206", IF_X64|IF_UNDOC},
    /* 1854 */ {I_HINT_NOP23, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1A\207", IF_P6|IF_UNDOC},
    /* 1855 */ {I_HINT_NOP23, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1A\207", IF_P6|IF_UNDOC},
    /* 1856 */ {I_HINT_NOP23, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1A\207", IF_X64|IF_UNDOC},
    /* 1857 */ {I_HINT_NOP24, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\200", IF_P6|IF_UNDOC},
    /* 1858 */ {I_HINT_NOP24, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\200", IF_P6|IF_UNDOC},
    /* 1859 */ {I_HINT_NOP24, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\200", IF_X64|IF_UNDOC},
    /* 1860 */ {I_HINT_NOP25, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\201", IF_P6|IF_UNDOC},
    /* 1861 */ {I_HINT_NOP25, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\201", IF_P6|IF_UNDOC},
    /* 1862 */ {I_HINT_NOP25, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\201", IF_X64|IF_UNDOC},
    /* 1863 */ {I_HINT_NOP26, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\202", IF_P6|IF_UNDOC},
    /* 1864 */ {I_HINT_NOP26, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\202", IF_P6|IF_UNDOC},
    /* 1865 */ {I_HINT_NOP26, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\202", IF_X64|IF_UNDOC},
    /* 1866 */ {I_HINT_NOP27, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\203", IF_P6|IF_UNDOC},
    /* 1867 */ {I_HINT_NOP27, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\203", IF_P6|IF_UNDOC},
    /* 1868 */ {I_HINT_NOP27, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\203", IF_X64|IF_UNDOC},
    /* 1869 */ {I_HINT_NOP28, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\204", IF_P6|IF_UNDOC},
    /* 1870 */ {I_HINT_NOP28, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\204", IF_P6|IF_UNDOC},
    /* 1871 */ {I_HINT_NOP28, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\204", IF_X64|IF_UNDOC},
    /* 1872 */ {I_HINT_NOP29, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\205", IF_P6|IF_UNDOC},
    /* 1873 */ {I_HINT_NOP29, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\205", IF_P6|IF_UNDOC},
    /* 1874 */ {I_HINT_NOP29, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\205", IF_X64|IF_UNDOC},
    /* 1875 */ {I_HINT_NOP30, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\206", IF_P6|IF_UNDOC},
    /* 1876 */ {I_HINT_NOP30, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\206", IF_P6|IF_UNDOC},
    /* 1877 */ {I_HINT_NOP30, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\206", IF_X64|IF_UNDOC},
    /* 1878 */ {I_HINT_NOP31, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1B\207", IF_P6|IF_UNDOC},
    /* 1879 */ {I_HINT_NOP31, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1B\207", IF_P6|IF_UNDOC},
    /* 1880 */ {I_HINT_NOP31, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1B\207", IF_X64|IF_UNDOC},
    /* 1881 */ {I_HINT_NOP32, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\200", IF_P6|IF_UNDOC},
    /* 1882 */ {I_HINT_NOP32, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\200", IF_P6|IF_UNDOC},
    /* 1883 */ {I_HINT_NOP32, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\200", IF_X64|IF_UNDOC},
    /* 1884 */ {I_HINT_NOP33, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\201", IF_P6|IF_UNDOC},
    /* 1885 */ {I_HINT_NOP33, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\201", IF_P6|IF_UNDOC},
    /* 1886 */ {I_HINT_NOP33, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\201", IF_X64|IF_UNDOC},
    /* 1887 */ {I_HINT_NOP34, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\202", IF_P6|IF_UNDOC},
    /* 1888 */ {I_HINT_NOP34, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\202", IF_P6|IF_UNDOC},
    /* 1889 */ {I_HINT_NOP34, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\202", IF_X64|IF_UNDOC},
    /* 1890 */ {I_HINT_NOP35, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\203", IF_P6|IF_UNDOC},
    /* 1891 */ {I_HINT_NOP35, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\203", IF_P6|IF_UNDOC},
    /* 1892 */ {I_HINT_NOP35, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\203", IF_X64|IF_UNDOC},
    /* 1893 */ {I_HINT_NOP36, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\204", IF_P6|IF_UNDOC},
    /* 1894 */ {I_HINT_NOP36, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\204", IF_P6|IF_UNDOC},
    /* 1895 */ {I_HINT_NOP36, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\204", IF_X64|IF_UNDOC},
    /* 1896 */ {I_HINT_NOP37, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\205", IF_P6|IF_UNDOC},
    /* 1897 */ {I_HINT_NOP37, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\205", IF_P6|IF_UNDOC},
    /* 1898 */ {I_HINT_NOP37, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\205", IF_X64|IF_UNDOC},
    /* 1899 */ {I_HINT_NOP38, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\206", IF_P6|IF_UNDOC},
    /* 1900 */ {I_HINT_NOP38, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\206", IF_P6|IF_UNDOC},
    /* 1901 */ {I_HINT_NOP38, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\206", IF_X64|IF_UNDOC},
    /* 1902 */ {I_HINT_NOP39, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1C\207", IF_P6|IF_UNDOC},
    /* 1903 */ {I_HINT_NOP39, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1C\207", IF_P6|IF_UNDOC},
    /* 1904 */ {I_HINT_NOP39, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1C\207", IF_X64|IF_UNDOC},
    /* 1905 */ {I_HINT_NOP40, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\200", IF_P6|IF_UNDOC},
    /* 1906 */ {I_HINT_NOP40, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\200", IF_P6|IF_UNDOC},
    /* 1907 */ {I_HINT_NOP40, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\200", IF_X64|IF_UNDOC},
    /* 1908 */ {I_HINT_NOP41, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\201", IF_P6|IF_UNDOC},
    /* 1909 */ {I_HINT_NOP41, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\201", IF_P6|IF_UNDOC},
    /* 1910 */ {I_HINT_NOP41, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\201", IF_X64|IF_UNDOC},
    /* 1911 */ {I_HINT_NOP42, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\202", IF_P6|IF_UNDOC},
    /* 1912 */ {I_HINT_NOP42, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\202", IF_P6|IF_UNDOC},
    /* 1913 */ {I_HINT_NOP42, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\202", IF_X64|IF_UNDOC},
    /* 1914 */ {I_HINT_NOP43, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\203", IF_P6|IF_UNDOC},
    /* 1915 */ {I_HINT_NOP43, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\203", IF_P6|IF_UNDOC},
    /* 1916 */ {I_HINT_NOP43, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\203", IF_X64|IF_UNDOC},
    /* 1917 */ {I_HINT_NOP44, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\204", IF_P6|IF_UNDOC},
    /* 1918 */ {I_HINT_NOP44, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\204", IF_P6|IF_UNDOC},
    /* 1919 */ {I_HINT_NOP44, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\204", IF_X64|IF_UNDOC},
    /* 1920 */ {I_HINT_NOP45, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\205", IF_P6|IF_UNDOC},
    /* 1921 */ {I_HINT_NOP45, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\205", IF_P6|IF_UNDOC},
    /* 1922 */ {I_HINT_NOP45, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\205", IF_X64|IF_UNDOC},
    /* 1923 */ {I_HINT_NOP46, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\206", IF_P6|IF_UNDOC},
    /* 1924 */ {I_HINT_NOP46, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\206", IF_P6|IF_UNDOC},
    /* 1925 */ {I_HINT_NOP46, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\206", IF_X64|IF_UNDOC},
    /* 1926 */ {I_HINT_NOP47, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1D\207", IF_P6|IF_UNDOC},
    /* 1927 */ {I_HINT_NOP47, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1D\207", IF_P6|IF_UNDOC},
    /* 1928 */ {I_HINT_NOP47, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1D\207", IF_X64|IF_UNDOC},
    /* 1929 */ {I_HINT_NOP48, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\200", IF_P6|IF_UNDOC},
    /* 1930 */ {I_HINT_NOP48, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\200", IF_P6|IF_UNDOC},
    /* 1931 */ {I_HINT_NOP48, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\200", IF_X64|IF_UNDOC},
    /* 1932 */ {I_HINT_NOP49, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\201", IF_P6|IF_UNDOC},
    /* 1933 */ {I_HINT_NOP49, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\201", IF_P6|IF_UNDOC},
    /* 1934 */ {I_HINT_NOP49, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\201", IF_X64|IF_UNDOC},
    /* 1935 */ {I_HINT_NOP50, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\202", IF_P6|IF_UNDOC},
    /* 1936 */ {I_HINT_NOP50, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\202", IF_P6|IF_UNDOC},
    /* 1937 */ {I_HINT_NOP50, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\202", IF_X64|IF_UNDOC},
    /* 1938 */ {I_HINT_NOP51, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\203", IF_P6|IF_UNDOC},
    /* 1939 */ {I_HINT_NOP51, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\203", IF_P6|IF_UNDOC},
    /* 1940 */ {I_HINT_NOP51, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\203", IF_X64|IF_UNDOC},
    /* 1941 */ {I_HINT_NOP52, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\204", IF_P6|IF_UNDOC},
    /* 1942 */ {I_HINT_NOP52, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\204", IF_P6|IF_UNDOC},
    /* 1943 */ {I_HINT_NOP52, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\204", IF_X64|IF_UNDOC},
    /* 1944 */ {I_HINT_NOP53, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\205", IF_P6|IF_UNDOC},
    /* 1945 */ {I_HINT_NOP53, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\205", IF_P6|IF_UNDOC},
    /* 1946 */ {I_HINT_NOP53, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\205", IF_X64|IF_UNDOC},
    /* 1947 */ {I_HINT_NOP54, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\206", IF_P6|IF_UNDOC},
    /* 1948 */ {I_HINT_NOP54, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\206", IF_P6|IF_UNDOC},
    /* 1949 */ {I_HINT_NOP54, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\206", IF_X64|IF_UNDOC},
    /* 1950 */ {I_HINT_NOP55, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1E\207", IF_P6|IF_UNDOC},
    /* 1951 */ {I_HINT_NOP55, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1E\207", IF_P6|IF_UNDOC},
    /* 1952 */ {I_HINT_NOP55, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1E\207", IF_X64|IF_UNDOC},
    /* 1953 */ {I_HINT_NOP56, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\200", IF_P6|IF_UNDOC},
    /* 1954 */ {I_HINT_NOP56, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\200", IF_P6|IF_UNDOC},
    /* 1955 */ {I_HINT_NOP56, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\200", IF_X64|IF_UNDOC},
    /* 1956 */ {I_HINT_NOP57, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\201", IF_P6|IF_UNDOC},
    /* 1957 */ {I_HINT_NOP57, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\201", IF_P6|IF_UNDOC},
    /* 1958 */ {I_HINT_NOP57, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\201", IF_X64|IF_UNDOC},
    /* 1959 */ {I_HINT_NOP58, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\202", IF_P6|IF_UNDOC},
    /* 1960 */ {I_HINT_NOP58, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\202", IF_P6|IF_UNDOC},
    /* 1961 */ {I_HINT_NOP58, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\202", IF_X64|IF_UNDOC},
    /* 1962 */ {I_HINT_NOP59, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\203", IF_P6|IF_UNDOC},
    /* 1963 */ {I_HINT_NOP59, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\203", IF_P6|IF_UNDOC},
    /* 1964 */ {I_HINT_NOP59, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\203", IF_X64|IF_UNDOC},
    /* 1965 */ {I_HINT_NOP60, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\204", IF_P6|IF_UNDOC},
    /* 1966 */ {I_HINT_NOP60, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\204", IF_P6|IF_UNDOC},
    /* 1967 */ {I_HINT_NOP60, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\204", IF_X64|IF_UNDOC},
    /* 1968 */ {I_HINT_NOP61, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\205", IF_P6|IF_UNDOC},
    /* 1969 */ {I_HINT_NOP61, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\205", IF_P6|IF_UNDOC},
    /* 1970 */ {I_HINT_NOP61, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\205", IF_X64|IF_UNDOC},
    /* 1971 */ {I_HINT_NOP62, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\206", IF_P6|IF_UNDOC},
    /* 1972 */ {I_HINT_NOP62, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\206", IF_P6|IF_UNDOC},
    /* 1973 */ {I_HINT_NOP62, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\206", IF_X64|IF_UNDOC},
    /* 1974 */ {I_HINT_NOP63, 1, {RM_GPR|BITS16,0,0,0}, "\320\2\x0F\x1F\207", IF_P6|IF_UNDOC},
    /* 1975 */ {I_HINT_NOP63, 1, {RM_GPR|BITS32,0,0,0}, "\321\2\x0F\x1F\207", IF_P6|IF_UNDOC},
    /* 1976 */ {I_HINT_NOP63, 1, {RM_GPR|BITS64,0,0,0}, "\324\2\x0F\x1F\207", IF_X64|IF_UNDOC},
};

static const struct itemplate * const itable_00[] = {
    instrux + 37,
    instrux + 38,
};

static const struct itemplate * const itable_01[] = {
    instrux + 39,
    instrux + 40,
    instrux + 41,
    instrux + 42,
    instrux + 43,
    instrux + 44,
};

static const struct itemplate * const itable_02[] = {
    instrux + 45,
    instrux + 46,
};

static const struct itemplate * const itable_03[] = {
    instrux + 47,
    instrux + 48,
    instrux + 49,
    instrux + 50,
    instrux + 51,
    instrux + 52,
};

static const struct itemplate * const itable_04[] = {
    instrux + 56,
};

static const struct itemplate * const itable_05[] = {
    instrux + 57,
    instrux + 58,
    instrux + 59,
};

static const struct itemplate * const itable_06[] = {
    instrux + 843,
    instrux + 844,
};

static const struct itemplate * const itable_07[] = {
    instrux + 791,
};

static const struct itemplate * const itable_08[] = {
    instrux + 694,
    instrux + 695,
};

static const struct itemplate * const itable_09[] = {
    instrux + 696,
    instrux + 697,
    instrux + 698,
    instrux + 699,
    instrux + 700,
    instrux + 701,
};

static const struct itemplate * const itable_0A[] = {
    instrux + 702,
    instrux + 703,
};

static const struct itemplate * const itable_0B[] = {
    instrux + 704,
    instrux + 705,
    instrux + 706,
    instrux + 707,
    instrux + 708,
    instrux + 709,
};

static const struct itemplate * const itable_0C[] = {
    instrux + 713,
};

static const struct itemplate * const itable_0D[] = {
    instrux + 714,
    instrux + 715,
    instrux + 716,
};

static const struct itemplate * const itable_0E[] = {
    instrux + 843,
    instrux + 844,
};

static const struct itemplate * const itable_0F00[] = {
    instrux + 527,
    instrux + 528,
    instrux + 552,
    instrux + 553,
    instrux + 554,
    instrux + 592,
    instrux + 593,
    instrux + 594,
    instrux + 1022,
    instrux + 1023,
    instrux + 1024,
    instrux + 1025,
    instrux + 1040,
    instrux + 1041,
    instrux + 1042,
    instrux + 1043,
    instrux + 1044,
    instrux + 1109,
    instrux + 1110,
    instrux + 1111,
    instrux + 1112,
    instrux + 1113,
    instrux + 1114,
};

static const struct itemplate * const itable_0F01[] = {
    instrux + 182,
    instrux + 490,
    instrux + 491,
    instrux + 492,
    instrux + 493,
    instrux + 494,
    instrux + 548,
    instrux + 551,
    instrux + 555,
    instrux + 556,
    instrux + 557,
    instrux + 596,
    instrux + 681,
    instrux + 887,
    instrux + 972,
    instrux + 1021,
    instrux + 1026,
    instrux + 1028,
    instrux + 1029,
    instrux + 1030,
    instrux + 1031,
    instrux + 1034,
    instrux + 1078,
    instrux + 1493,
    instrux + 1495,
    instrux + 1496,
    instrux + 1497,
    instrux + 1501,
    instrux + 1502,
    instrux + 1503,
    instrux + 1505,
};

static const struct itemplate * const itable_0F02[] = {
    instrux + 531,
    instrux + 532,
    instrux + 533,
    instrux + 534,
    instrux + 535,
    instrux + 536,
};

static const struct itemplate * const itable_0F03[] = {
    instrux + 584,
    instrux + 585,
    instrux + 586,
    instrux + 587,
    instrux + 588,
    instrux + 589,
};

static const struct itemplate * const itable_0F05[] = {
    instrux + 559,
    instrux + 1079,
};

static const struct itemplate * const itable_0F06[] = {
    instrux + 184,
};

static const struct itemplate * const itable_0F07[] = {
    instrux + 558,
    instrux + 1082,
};

static const struct itemplate * const itable_0F08[] = {
    instrux + 489,
};

static const struct itemplate * const itable_0F09[] = {
    instrux + 1117,
};

static const struct itemplate * const itable_0F0B[] = {
    instrux + 1108,
};

static const struct itemplate * const itable_0F0D[] = {
    instrux + 801,
    instrux + 802,
};

static const struct itemplate * const itable_0F0E[] = {
    instrux + 317,
};

static const struct itemplate * const itable_0F0F[] = {
    instrux + 748,
    instrux + 756,
    instrux + 757,
    instrux + 758,
    instrux + 759,
    instrux + 760,
    instrux + 761,
    instrux + 762,
    instrux + 763,
    instrux + 764,
    instrux + 765,
    instrux + 766,
    instrux + 767,
    instrux + 768,
    instrux + 769,
    instrux + 770,
    instrux + 771,
    instrux + 772,
    instrux + 777,
    instrux + 1293,
    instrux + 1294,
    instrux + 1295,
    instrux + 1296,
    instrux + 1297,
    instrux + 1775,
    instrux + 1776,
};

static const struct itemplate * const itable_0F10[] = {
    instrux + 1245,
    instrux + 1247,
    instrux + 1249,
    instrux + 1251,
    instrux + 1462,
    instrux + 1465,
    instrux + 1466,
    instrux + 1469,
};

static const struct itemplate * const itable_0F11[] = {
    instrux + 1246,
    instrux + 1248,
    instrux + 1250,
    instrux + 1252,
    instrux + 1463,
    instrux + 1464,
    instrux + 1467,
    instrux + 1468,
};

static const struct itemplate * const itable_0F12[] = {
    instrux + 1239,
    instrux + 1241,
    instrux + 1459,
    instrux + 1490,
    instrux + 1492,
};

static const struct itemplate * const itable_0F13[] = {
    instrux + 1240,
    instrux + 1458,
};

static const struct itemplate * const itable_0F14[] = {
    instrux + 1269,
    instrux + 1481,
};

static const struct itemplate * const itable_0F15[] = {
    instrux + 1268,
    instrux + 1480,
};

static const struct itemplate * const itable_0F16[] = {
    instrux + 1236,
    instrux + 1238,
    instrux + 1457,
    instrux + 1491,
};

static const struct itemplate * const itable_0F17[] = {
    instrux + 1237,
    instrux + 1456,
};

static const struct itemplate * const itable_0F18[] = {
    instrux + 803,
    instrux + 804,
    instrux + 805,
    instrux + 806,
    instrux + 1273,
    instrux + 1274,
    instrux + 1275,
    instrux + 1276,
    instrux + 1785,
    instrux + 1786,
    instrux + 1787,
    instrux + 1788,
    instrux + 1789,
    instrux + 1790,
    instrux + 1791,
    instrux + 1792,
    instrux + 1793,
    instrux + 1794,
    instrux + 1795,
    instrux + 1796,
    instrux + 1797,
    instrux + 1798,
    instrux + 1799,
    instrux + 1800,
    instrux + 1801,
    instrux + 1802,
    instrux + 1803,
    instrux + 1804,
    instrux + 1805,
    instrux + 1806,
    instrux + 1807,
    instrux + 1808,
};

static const struct itemplate * const itable_0F19[] = {
    instrux + 1809,
    instrux + 1810,
    instrux + 1811,
    instrux + 1812,
    instrux + 1813,
    instrux + 1814,
    instrux + 1815,
    instrux + 1816,
    instrux + 1817,
    instrux + 1818,
    instrux + 1819,
    instrux + 1820,
    instrux + 1821,
    instrux + 1822,
    instrux + 1823,
    instrux + 1824,
    instrux + 1825,
    instrux + 1826,
    instrux + 1827,
    instrux + 1828,
    instrux + 1829,
    instrux + 1830,
    instrux + 1831,
    instrux + 1832,
};

static const struct itemplate * const itable_0F1A[] = {
    instrux + 1833,
    instrux + 1834,
    instrux + 1835,
    instrux + 1836,
    instrux + 1837,
    instrux + 1838,
    instrux + 1839,
    instrux + 1840,
    instrux + 1841,
    instrux + 1842,
    instrux + 1843,
    instrux + 1844,
    instrux + 1845,
    instrux + 1846,
    instrux + 1847,
    instrux + 1848,
    instrux + 1849,
    instrux + 1850,
    instrux + 1851,
    instrux + 1852,
    instrux + 1853,
    instrux + 1854,
    instrux + 1855,
    instrux + 1856,
};

static const struct itemplate * const itable_0F1B[] = {
    instrux + 1857,
    instrux + 1858,
    instrux + 1859,
    instrux + 1860,
    instrux + 1861,
    instrux + 1862,
    instrux + 1863,
    instrux + 1864,
    instrux + 1865,
    instrux + 1866,
    instrux + 1867,
    instrux + 1868,
    instrux + 1869,
    instrux + 1870,
    instrux + 1871,
    instrux + 1872,
    instrux + 1873,
    instrux + 1874,
    instrux + 1875,
    instrux + 1876,
    instrux + 1877,
    instrux + 1878,
    instrux + 1879,
    instrux + 1880,
};

static const struct itemplate * const itable_0F1C[] = {
    instrux + 1881,
    instrux + 1882,
    instrux + 1883,
    instrux + 1884,
    instrux + 1885,
    instrux + 1886,
    instrux + 1887,
    instrux + 1888,
    instrux + 1889,
    instrux + 1890,
    instrux + 1891,
    instrux + 1892,
    instrux + 1893,
    instrux + 1894,
    instrux + 1895,
    instrux + 1896,
    instrux + 1897,
    instrux + 1898,
    instrux + 1899,
    instrux + 1900,
    instrux + 1901,
    instrux + 1902,
    instrux + 1903,
    instrux + 1904,
};

static const struct itemplate * const itable_0F1D[] = {
    instrux + 1905,
    instrux + 1906,
    instrux + 1907,
    instrux + 1908,
    instrux + 1909,
    instrux + 1910,
    instrux + 1911,
    instrux + 1912,
    instrux + 1913,
    instrux + 1914,
    instrux + 1915,
    instrux + 1916,
    instrux + 1917,
    instrux + 1918,
    instrux + 1919,
    instrux + 1920,
    instrux + 1921,
    instrux + 1922,
    instrux + 1923,
    instrux + 1924,
    instrux + 1925,
    instrux + 1926,
    instrux + 1927,
    instrux + 1928,
};

static const struct itemplate * const itable_0F1E[] = {
    instrux + 1929,
    instrux + 1930,
    instrux + 1931,
    instrux + 1932,
    instrux + 1933,
    instrux + 1934,
    instrux + 1935,
    instrux + 1936,
    instrux + 1937,
    instrux + 1938,
    instrux + 1939,
    instrux + 1940,
    instrux + 1941,
    instrux + 1942,
    instrux + 1943,
    instrux + 1944,
    instrux + 1945,
    instrux + 1946,
    instrux + 1947,
    instrux + 1948,
    instrux + 1949,
    instrux + 1950,
    instrux + 1951,
    instrux + 1952,
};

static const struct itemplate * const itable_0F1F[] = {
    instrux + 687,
    instrux + 688,
    instrux + 689,
    instrux + 1953,
    instrux + 1954,
    instrux + 1955,
    instrux + 1956,
    instrux + 1957,
    instrux + 1958,
    instrux + 1959,
    instrux + 1960,
    instrux + 1961,
    instrux + 1962,
    instrux + 1963,
    instrux + 1964,
    instrux + 1965,
    instrux + 1966,
    instrux + 1967,
    instrux + 1968,
    instrux + 1969,
    instrux + 1970,
    instrux + 1971,
    instrux + 1972,
    instrux + 1973,
    instrux + 1974,
    instrux + 1975,
    instrux + 1976,
};

static const struct itemplate * const itable_0F20[] = {
    instrux + 611,
    instrux + 612,
};

static const struct itemplate * const itable_0F21[] = {
    instrux + 615,
    instrux + 616,
};

static const struct itemplate * const itable_0F22[] = {
    instrux + 613,
    instrux + 614,
};

static const struct itemplate * const itable_0F23[] = {
    instrux + 617,
    instrux + 618,
};

static const struct itemplate * const itable_0F2400[] = {
    instrux + 1616,
    instrux + 1617,
};

static const struct itemplate * const itable_0F2401[] = {
    instrux + 1620,
    instrux + 1621,
};

static const struct itemplate * const itable_0F2402[] = {
    instrux + 1624,
    instrux + 1625,
};

static const struct itemplate * const itable_0F2403[] = {
    instrux + 1628,
    instrux + 1629,
};

static const struct itemplate * const itable_0F2404[] = {
    instrux + 1618,
    instrux + 1619,
};

static const struct itemplate * const itable_0F2405[] = {
    instrux + 1622,
    instrux + 1623,
};

static const struct itemplate * const itable_0F2406[] = {
    instrux + 1626,
    instrux + 1627,
};

static const struct itemplate * const itable_0F2407[] = {
    instrux + 1630,
    instrux + 1631,
};

static const struct itemplate * const itable_0F2408[] = {
    instrux + 1632,
    instrux + 1633,
};

static const struct itemplate * const itable_0F2409[] = {
    instrux + 1636,
    instrux + 1637,
};

static const struct itemplate * const itable_0F240A[] = {
    instrux + 1640,
    instrux + 1641,
};

static const struct itemplate * const itable_0F240B[] = {
    instrux + 1644,
    instrux + 1645,
};

static const struct itemplate * const itable_0F240C[] = {
    instrux + 1634,
    instrux + 1635,
};

static const struct itemplate * const itable_0F240D[] = {
    instrux + 1638,
    instrux + 1639,
};

static const struct itemplate * const itable_0F240E[] = {
    instrux + 1642,
    instrux + 1643,
};

static const struct itemplate * const itable_0F240F[] = {
    instrux + 1646,
    instrux + 1647,
};

static const struct itemplate * const itable_0F2410[] = {
    instrux + 1648,
    instrux + 1649,
};

static const struct itemplate * const itable_0F2411[] = {
    instrux + 1652,
    instrux + 1653,
};

static const struct itemplate * const itable_0F2412[] = {
    instrux + 1656,
    instrux + 1657,
};

static const struct itemplate * const itable_0F2413[] = {
    instrux + 1660,
    instrux + 1661,
};

static const struct itemplate * const itable_0F2414[] = {
    instrux + 1650,
    instrux + 1651,
};

static const struct itemplate * const itable_0F2415[] = {
    instrux + 1654,
    instrux + 1655,
};

static const struct itemplate * const itable_0F2416[] = {
    instrux + 1658,
    instrux + 1659,
};

static const struct itemplate * const itable_0F2417[] = {
    instrux + 1662,
    instrux + 1663,
};

static const struct itemplate * const itable_0F2418[] = {
    instrux + 1664,
    instrux + 1665,
};

static const struct itemplate * const itable_0F2419[] = {
    instrux + 1668,
    instrux + 1669,
};

static const struct itemplate * const itable_0F241A[] = {
    instrux + 1672,
    instrux + 1673,
};

static const struct itemplate * const itable_0F241B[] = {
    instrux + 1676,
    instrux + 1677,
};

static const struct itemplate * const itable_0F241C[] = {
    instrux + 1666,
    instrux + 1667,
};

static const struct itemplate * const itable_0F241D[] = {
    instrux + 1670,
    instrux + 1671,
};

static const struct itemplate * const itable_0F241E[] = {
    instrux + 1674,
    instrux + 1675,
};

static const struct itemplate * const itable_0F241F[] = {
    instrux + 1678,
    instrux + 1679,
};

static const struct itemplate * const itable_0F2420[] = {
    instrux + 1692,
    instrux + 1693,
};

static const struct itemplate * const itable_0F2421[] = {
    instrux + 1696,
    instrux + 1697,
};

static const struct itemplate * const itable_0F2422[] = {
    instrux + 1700,
    instrux + 1701,
};

static const struct itemplate * const itable_0F2423[] = {
    instrux + 1704,
    instrux + 1705,
};

static const struct itemplate * const itable_0F2424[] = {
    instrux + 1694,
    instrux + 1695,
};

static const struct itemplate * const itable_0F2425[] = {
    instrux + 1698,
    instrux + 1699,
};

static const struct itemplate * const itable_0F2426[] = {
    instrux + 1702,
    instrux + 1703,
};

static const struct itemplate * const itable_0F2427[] = {
    instrux + 1706,
    instrux + 1707,
};

static const struct itemplate * const itable_0F2440[] = {
    instrux + 1720,
    instrux + 1721,
};

static const struct itemplate * const itable_0F2441[] = {
    instrux + 1722,
    instrux + 1723,
};

static const struct itemplate * const itable_0F2442[] = {
    instrux + 1724,
    instrux + 1725,
};

static const struct itemplate * const itable_0F2443[] = {
    instrux + 1726,
    instrux + 1727,
};

static const struct itemplate * const itable_0F2444[] = {
    instrux + 1728,
    instrux + 1729,
};

static const struct itemplate * const itable_0F2445[] = {
    instrux + 1730,
    instrux + 1731,
};

static const struct itemplate * const itable_0F2446[] = {
    instrux + 1732,
    instrux + 1733,
};

static const struct itemplate * const itable_0F2447[] = {
    instrux + 1734,
    instrux + 1735,
};

static const struct itemplate * const itable_0F2448[] = {
    instrux + 1736,
    instrux + 1737,
};

static const struct itemplate * const itable_0F2449[] = {
    instrux + 1738,
    instrux + 1739,
};

static const struct itemplate * const itable_0F244A[] = {
    instrux + 1740,
    instrux + 1741,
};

static const struct itemplate * const itable_0F244B[] = {
    instrux + 1742,
    instrux + 1743,
};

static const struct itemplate * const itable_0F2485[] = {
    instrux + 1708,
};

static const struct itemplate * const itable_0F2486[] = {
    instrux + 1710,
};

static const struct itemplate * const itable_0F2487[] = {
    instrux + 1714,
};

static const struct itemplate * const itable_0F248E[] = {
    instrux + 1712,
};

static const struct itemplate * const itable_0F248F[] = {
    instrux + 1716,
};

static const struct itemplate * const itable_0F2495[] = {
    instrux + 1709,
};

static const struct itemplate * const itable_0F2496[] = {
    instrux + 1711,
};

static const struct itemplate * const itable_0F2497[] = {
    instrux + 1715,
};

static const struct itemplate * const itable_0F249E[] = {
    instrux + 1713,
};

static const struct itemplate * const itable_0F249F[] = {
    instrux + 1717,
};

static const struct itemplate * const itable_0F24A6[] = {
    instrux + 1718,
};

static const struct itemplate * const itable_0F24B6[] = {
    instrux + 1719,
};

static const struct itemplate * const itable_0F252C[] = {
    instrux + 1680,
};

static const struct itemplate * const itable_0F252D[] = {
    instrux + 1681,
};

static const struct itemplate * const itable_0F252E[] = {
    instrux + 1682,
};

static const struct itemplate * const itable_0F252F[] = {
    instrux + 1683,
};

static const struct itemplate * const itable_0F254C[] = {
    instrux + 1684,
};

static const struct itemplate * const itable_0F254D[] = {
    instrux + 1685,
};

static const struct itemplate * const itable_0F254E[] = {
    instrux + 1686,
};

static const struct itemplate * const itable_0F254F[] = {
    instrux + 1687,
};

static const struct itemplate * const itable_0F256C[] = {
    instrux + 1688,
};

static const struct itemplate * const itable_0F256D[] = {
    instrux + 1689,
};

static const struct itemplate * const itable_0F256E[] = {
    instrux + 1690,
};

static const struct itemplate * const itable_0F256F[] = {
    instrux + 1691,
};

static const struct itemplate * const itable_0F26[] = {
    instrux + 620,
};

static const struct itemplate * const itable_0F28[] = {
    instrux + 1232,
    instrux + 1234,
    instrux + 1452,
    instrux + 1455,
};

static const struct itemplate * const itable_0F29[] = {
    instrux + 1233,
    instrux + 1235,
    instrux + 1453,
    instrux + 1454,
};

static const struct itemplate * const itable_0F2A[] = {
    instrux + 1218,
    instrux + 1220,
    instrux + 1221,
    instrux + 1434,
    instrux + 1439,
    instrux + 1440,
};

static const struct itemplate * const itable_0F2B[] = {
    instrux + 1244,
    instrux + 1302,
    instrux + 1543,
    instrux + 1544,
};

static const struct itemplate * const itable_0F2C[] = {
    instrux + 1223,
    instrux + 1224,
    instrux + 1442,
    instrux + 1445,
};

static const struct itemplate * const itable_0F2D[] = {
    instrux + 1219,
    instrux + 1222,
    instrux + 1432,
    instrux + 1437,
};

static const struct itemplate * const itable_0F2E[] = {
    instrux + 1267,
    instrux + 1479,
};

static const struct itemplate * const itable_0F2F[] = {
    instrux + 1217,
    instrux + 1428,
};

static const struct itemplate * const itable_0F30[] = {
    instrux + 1119,
};

static const struct itemplate * const itable_0F31[] = {
    instrux + 886,
};

static const struct itemplate * const itable_0F32[] = {
    instrux + 884,
};

static const struct itemplate * const itable_0F33[] = {
    instrux + 885,
};

static const struct itemplate * const itable_0F34[] = {
    instrux + 1080,
};

static const struct itemplate * const itable_0F35[] = {
    instrux + 1081,
};

static const struct itemplate * const itable_0F36[] = {
    instrux + 883,
};

static const struct itemplate * const itable_0F37[] = {
    instrux + 1118,
    instrux + 1774,
};

static const struct itemplate * const itable_0F3800[] = {
    instrux + 1531,
    instrux + 1532,
};

static const struct itemplate * const itable_0F3801[] = {
    instrux + 1515,
    instrux + 1516,
    instrux + 1603,
    instrux + 1604,
    instrux + 1605,
    instrux + 1606,
    instrux + 1607,
};

static const struct itemplate * const itable_0F3802[] = {
    instrux + 1517,
    instrux + 1518,
};

static const struct itemplate * const itable_0F3803[] = {
    instrux + 1519,
    instrux + 1520,
};

static const struct itemplate * const itable_0F3804[] = {
    instrux + 1527,
    instrux + 1528,
};

static const struct itemplate * const itable_0F3805[] = {
    instrux + 1521,
    instrux + 1522,
};

static const struct itemplate * const itable_0F3806[] = {
    instrux + 1523,
    instrux + 1524,
};

static const struct itemplate * const itable_0F3807[] = {
    instrux + 1525,
    instrux + 1526,
};

static const struct itemplate * const itable_0F3808[] = {
    instrux + 1533,
    instrux + 1534,
};

static const struct itemplate * const itable_0F3809[] = {
    instrux + 1535,
    instrux + 1536,
};

static const struct itemplate * const itable_0F380A[] = {
    instrux + 1537,
    instrux + 1538,
};

static const struct itemplate * const itable_0F380B[] = {
    instrux + 1529,
    instrux + 1530,
};

static const struct itemplate * const itable_0F3810[] = {
    instrux + 1560,
};

static const struct itemplate * const itable_0F3814[] = {
    instrux + 1551,
};

static const struct itemplate * const itable_0F3815[] = {
    instrux + 1550,
};

static const struct itemplate * const itable_0F3817[] = {
    instrux + 1598,
    instrux + 1769,
};

static const struct itemplate * const itable_0F381C[] = {
    instrux + 1507,
    instrux + 1508,
};

static const struct itemplate * const itable_0F381D[] = {
    instrux + 1509,
    instrux + 1510,
};

static const struct itemplate * const itable_0F381E[] = {
    instrux + 1511,
    instrux + 1512,
};

static const struct itemplate * const itable_0F3820[] = {
    instrux + 1584,
};

static const struct itemplate * const itable_0F3821[] = {
    instrux + 1585,
};

static const struct itemplate * const itable_0F3822[] = {
    instrux + 1586,
};

static const struct itemplate * const itable_0F3823[] = {
    instrux + 1587,
};

static const struct itemplate * const itable_0F3824[] = {
    instrux + 1588,
};

static const struct itemplate * const itable_0F3825[] = {
    instrux + 1589,
};

static const struct itemplate * const itable_0F3828[] = {
    instrux + 1596,
};

static const struct itemplate * const itable_0F3829[] = {
    instrux + 1562,
};

static const struct itemplate * const itable_0F382A[] = {
    instrux + 1557,
};

static const struct itemplate * const itable_0F382B[] = {
    instrux + 1559,
};

static const struct itemplate * const itable_0F3830[] = {
    instrux + 1590,
};

static const struct itemplate * const itable_0F3831[] = {
    instrux + 1591,
};

static const struct itemplate * const itable_0F3832[] = {
    instrux + 1592,
};

static const struct itemplate * const itable_0F3833[] = {
    instrux + 1593,
};

static const struct itemplate * const itable_0F3834[] = {
    instrux + 1594,
};

static const struct itemplate * const itable_0F3835[] = {
    instrux + 1595,
};

static const struct itemplate * const itable_0F3837[] = {
    instrux + 1612,
};

static const struct itemplate * const itable_0F3838[] = {
    instrux + 1580,
};

static const struct itemplate * const itable_0F3839[] = {
    instrux + 1581,
};

static const struct itemplate * const itable_0F383A[] = {
    instrux + 1583,
};

static const struct itemplate * const itable_0F383B[] = {
    instrux + 1582,
};

static const struct itemplate * const itable_0F383C[] = {
    instrux + 1576,
};

static const struct itemplate * const itable_0F383D[] = {
    instrux + 1577,
};

static const struct itemplate * const itable_0F383E[] = {
    instrux + 1579,
};

static const struct itemplate * const itable_0F383F[] = {
    instrux + 1578,
};

static const struct itemplate * const itable_0F3840[] = {
    instrux + 1597,
};

static const struct itemplate * const itable_0F3841[] = {
    instrux + 1571,
};

static const struct itemplate * const itable_0F39[] = {
    instrux + 248,
};

static const struct itemplate * const itable_0F3A08[] = {
    instrux + 1600,
    instrux + 1770,
    instrux + 1771,
    instrux + 1772,
    instrux + 1773,
};

static const struct itemplate * const itable_0F3A09[] = {
    instrux + 1599,
};

static const struct itemplate * const itable_0F3A0A[] = {
    instrux + 1602,
};

static const struct itemplate * const itable_0F3A0B[] = {
    instrux + 1601,
};

static const struct itemplate * const itable_0F3A0C[] = {
    instrux + 1549,
};

static const struct itemplate * const itable_0F3A0D[] = {
    instrux + 1548,
};

static const struct itemplate * const itable_0F3A0E[] = {
    instrux + 1561,
};

static const struct itemplate * const itable_0F3A0F[] = {
    instrux + 1513,
    instrux + 1514,
};

static const struct itemplate * const itable_0F3A14[] = {
    instrux + 1563,
    instrux + 1564,
    instrux + 1565,
};

static const struct itemplate * const itable_0F3A15[] = {
    instrux + 1568,
    instrux + 1569,
    instrux + 1570,
};

static const struct itemplate * const itable_0F3A16[] = {
    instrux + 1566,
    instrux + 1567,
};

static const struct itemplate * const itable_0F3A17[] = {
    instrux + 1554,
    instrux + 1555,
};

static const struct itemplate * const itable_0F3A20[] = {
    instrux + 1572,
    instrux + 1573,
};

static const struct itemplate * const itable_0F3A21[] = {
    instrux + 1556,
};

static const struct itemplate * const itable_0F3A22[] = {
    instrux + 1574,
    instrux + 1575,
};

static const struct itemplate * const itable_0F3A40[] = {
    instrux + 1553,
};

static const struct itemplate * const itable_0F3A41[] = {
    instrux + 1552,
};

static const struct itemplate * const itable_0F3A42[] = {
    instrux + 1558,
};

static const struct itemplate * const itable_0F3A60[] = {
    instrux + 1609,
};

static const struct itemplate * const itable_0F3A61[] = {
    instrux + 1608,
};

static const struct itemplate * const itable_0F3A62[] = {
    instrux + 1611,
};

static const struct itemplate * const itable_0F3A63[] = {
    instrux + 1610,
};

static const struct itemplate * const itable_0F3C[] = {
    instrux + 232,
};

static const struct itemplate * const itable_0F3D[] = {
    instrux + 231,
};

static const struct itemplate * const itable_0F50[] = {
    instrux + 747,
    instrux + 1242,
    instrux + 1243,
    instrux + 1460,
    instrux + 1461,
};

static const struct itemplate * const itable_0F51[] = {
    instrux + 739,
    instrux + 1262,
    instrux + 1263,
    instrux + 1475,
    instrux + 1476,
};

static const struct itemplate * const itable_0F52[] = {
    instrux + 775,
    instrux + 1258,
    instrux + 1259,
};

static const struct itemplate * const itable_0F53[] = {
    instrux + 1256,
    instrux + 1257,
};

static const struct itemplate * const itable_0F54[] = {
    instrux + 755,
    instrux + 1196,
    instrux + 1409,
};

static const struct itemplate * const itable_0F55[] = {
    instrux + 826,
    instrux + 1195,
    instrux + 1408,
};

static const struct itemplate * const itable_0F56[] = {
    instrux + 1255,
    instrux + 1472,
};

static const struct itemplate * const itable_0F57[] = {
    instrux + 1270,
    instrux + 1482,
};

static const struct itemplate * const itable_0F58[] = {
    instrux + 784,
    instrux + 1193,
    instrux + 1194,
    instrux + 1406,
    instrux + 1407,
};

static const struct itemplate * const itable_0F59[] = {
    instrux + 778,
    instrux + 1253,
    instrux + 1254,
    instrux + 1470,
    instrux + 1471,
};

static const struct itemplate * const itable_0F5A[] = {
    instrux + 783,
    instrux + 1433,
    instrux + 1436,
    instrux + 1438,
    instrux + 1441,
};

static const struct itemplate * const itable_0F5B[] = {
    instrux + 782,
    instrux + 1430,
    instrux + 1435,
    instrux + 1444,
};

static const struct itemplate * const itable_0F5C[] = {
    instrux + 781,
    instrux + 1265,
    instrux + 1266,
    instrux + 1477,
    instrux + 1478,
};

static const struct itemplate * const itable_0F5D[] = {
    instrux + 776,
    instrux + 1230,
    instrux + 1231,
    instrux + 1450,
    instrux + 1451,
};

static const struct itemplate * const itable_0F5E[] = {
    instrux + 773,
    instrux + 1225,
    instrux + 1226,
    instrux + 1446,
    instrux + 1447,
};

static const struct itemplate * const itable_0F5F[] = {
    instrux + 1228,
    instrux + 1229,
    instrux + 1448,
    instrux + 1449,
};

static const struct itemplate * const itable_0F60[] = {
    instrux + 834,
    instrux + 1401,
};

static const struct itemplate * const itable_0F61[] = {
    instrux + 836,
    instrux + 1402,
};

static const struct itemplate * const itable_0F62[] = {
    instrux + 835,
    instrux + 1403,
};

static const struct itemplate * const itable_0F63[] = {
    instrux + 734,
    instrux + 1326,
};

static const struct itemplate * const itable_0F64[] = {
    instrux + 752,
    instrux + 1345,
};

static const struct itemplate * const itable_0F65[] = {
    instrux + 754,
    instrux + 1346,
};

static const struct itemplate * const itable_0F66[] = {
    instrux + 753,
    instrux + 1347,
};

static const struct itemplate * const itable_0F67[] = {
    instrux + 735,
    instrux + 1328,
};

static const struct itemplate * const itable_0F68[] = {
    instrux + 831,
    instrux + 1397,
};

static const struct itemplate * const itable_0F69[] = {
    instrux + 833,
    instrux + 1398,
};

static const struct itemplate * const itable_0F6A[] = {
    instrux + 832,
    instrux + 1399,
};

static const struct itemplate * const itable_0F6B[] = {
    instrux + 733,
    instrux + 1327,
};

static const struct itemplate * const itable_0F6C[] = {
    instrux + 1404,
};

static const struct itemplate * const itable_0F6D[] = {
    instrux + 1400,
};

static const struct itemplate * const itable_0F6E[] = {
    instrux + 648,
    instrux + 649,
    instrux + 652,
    instrux + 653,
    instrux + 658,
    instrux + 1306,
    instrux + 1309,
    instrux + 1323,
};

static const struct itemplate * const itable_0F6F[] = {
    instrux + 656,
    instrux + 1310,
    instrux + 1312,
    instrux + 1314,
    instrux + 1316,
};

static const struct itemplate * const itable_0F70[] = {
    instrux + 1292,
    instrux + 1364,
    instrux + 1365,
    instrux + 1366,
    instrux + 1367,
    instrux + 1368,
    instrux + 1369,
};

static const struct itemplate * const itable_0F71[] = {
    instrux + 812,
    instrux + 816,
    instrux + 822,
    instrux + 1372,
    instrux + 1378,
    instrux + 1383,
};

static const struct itemplate * const itable_0F72[] = {
    instrux + 808,
    instrux + 814,
    instrux + 818,
    instrux + 1374,
    instrux + 1380,
    instrux + 1385,
};

static const struct itemplate * const itable_0F73[] = {
    instrux + 810,
    instrux + 820,
    instrux + 1370,
    instrux + 1376,
    instrux + 1381,
    instrux + 1387,
};

static const struct itemplate * const itable_0F74[] = {
    instrux + 749,
    instrux + 1342,
};

static const struct itemplate * const itable_0F75[] = {
    instrux + 751,
    instrux + 1343,
};

static const struct itemplate * const itable_0F76[] = {
    instrux + 750,
    instrux + 1344,
};

static const struct itemplate * const itable_0F77[] = {
    instrux + 249,
};

static const struct itemplate * const itable_0F78[] = {
    instrux + 1075,
    instrux + 1500,
    instrux + 1539,
    instrux + 1541,
};

static const struct itemplate * const itable_0F79[] = {
    instrux + 919,
    instrux + 1504,
    instrux + 1540,
    instrux + 1542,
};

static const struct itemplate * const itable_0F7A10[] = {
    instrux + 1744,
};

static const struct itemplate * const itable_0F7A11[] = {
    instrux + 1745,
};

static const struct itemplate * const itable_0F7A12[] = {
    instrux + 1746,
};

static const struct itemplate * const itable_0F7A13[] = {
    instrux + 1747,
};

static const struct itemplate * const itable_0F7A30[] = {
    instrux + 1748,
};

static const struct itemplate * const itable_0F7A31[] = {
    instrux + 1749,
};

static const struct itemplate * const itable_0F7A41[] = {
    instrux + 1750,
};

static const struct itemplate * const itable_0F7A42[] = {
    instrux + 1751,
};

static const struct itemplate * const itable_0F7A43[] = {
    instrux + 1752,
};

static const struct itemplate * const itable_0F7A46[] = {
    instrux + 1753,
};

static const struct itemplate * const itable_0F7A47[] = {
    instrux + 1754,
};

static const struct itemplate * const itable_0F7A4B[] = {
    instrux + 1755,
};

static const struct itemplate * const itable_0F7A51[] = {
    instrux + 1756,
};

static const struct itemplate * const itable_0F7A52[] = {
    instrux + 1757,
};

static const struct itemplate * const itable_0F7A53[] = {
    instrux + 1758,
};

static const struct itemplate * const itable_0F7A56[] = {
    instrux + 1759,
};

static const struct itemplate * const itable_0F7A57[] = {
    instrux + 1760,
};

static const struct itemplate * const itable_0F7A5B[] = {
    instrux + 1761,
};

static const struct itemplate * const itable_0F7A61[] = {
    instrux + 1762,
};

static const struct itemplate * const itable_0F7A62[] = {
    instrux + 1763,
};

static const struct itemplate * const itable_0F7A63[] = {
    instrux + 1764,
};

static const struct itemplate * const itable_0F7B[] = {
    instrux + 920,
    instrux + 1765,
    instrux + 1766,
    instrux + 1767,
    instrux + 1768,
};

static const struct itemplate * const itable_0F7C[] = {
    instrux + 1077,
    instrux + 1485,
    instrux + 1486,
};

static const struct itemplate * const itable_0F7D[] = {
    instrux + 922,
    instrux + 1487,
    instrux + 1488,
};

static const struct itemplate * const itable_0F7E[] = {
    instrux + 650,
    instrux + 651,
    instrux + 654,
    instrux + 655,
    instrux + 659,
    instrux + 1307,
    instrux + 1308,
    instrux + 1319,
    instrux + 1322,
    instrux + 1324,
};

static const struct itemplate * const itable_0F7F[] = {
    instrux + 657,
    instrux + 1311,
    instrux + 1313,
    instrux + 1315,
    instrux + 1317,
};

static const struct itemplate * const itable_0F80[] = {
    instrux + 181,
};

static const struct itemplate * const itable_0FA2[] = {
    instrux + 230,
};

static const struct itemplate * const itable_0FA3[] = {
    instrux + 115,
    instrux + 116,
    instrux + 117,
    instrux + 118,
    instrux + 119,
    instrux + 120,
};

static const struct itemplate * const itable_0FA4[] = {
    instrux + 985,
    instrux + 986,
    instrux + 987,
    instrux + 988,
    instrux + 989,
    instrux + 990,
};

static const struct itemplate * const itable_0FA5[] = {
    instrux + 991,
    instrux + 992,
    instrux + 993,
    instrux + 994,
    instrux + 995,
    instrux + 996,
};

static const struct itemplate * const itable_0FA6C0[] = {
    instrux + 1782,
};

static const struct itemplate * const itable_0FA6C8[] = {
    instrux + 1783,
};

static const struct itemplate * const itable_0FA6D0[] = {
    instrux + 1784,
};

static const struct itemplate * const itable_0FA7C0[] = {
    instrux + 1777,
};

static const struct itemplate * const itable_0FA7C8[] = {
    instrux + 1778,
};

static const struct itemplate * const itable_0FA7D0[] = {
    instrux + 1779,
};

static const struct itemplate * const itable_0FA7E0[] = {
    instrux + 1780,
};

static const struct itemplate * const itable_0FA7E8[] = {
    instrux + 1781,
};

static const struct itemplate * const itable_0FAA[] = {
    instrux + 921,
};

static const struct itemplate * const itable_0FAB[] = {
    instrux + 142,
    instrux + 143,
    instrux + 144,
    instrux + 145,
    instrux + 146,
    instrux + 147,
};

static const struct itemplate * const itable_0FAC[] = {
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    instrux + 1013,
    instrux + 1014,
};

static const struct itemplate * const itable_0FAD[] = {
    instrux + 1015,
    instrux + 1016,
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
};

static const struct itemplate * const itable_0FAE[] = {
    instrux + 545,
    instrux + 595,
    instrux + 971,
    instrux + 1227,
    instrux + 1264,
    instrux + 1271,
    instrux + 1272,
    instrux + 1277,
    instrux + 1299,
    instrux + 1304,
    instrux + 1305,
};

static const struct itemplate * const itable_0FAF[] = {
    instrux + 447,
    instrux + 448,
    instrux + 449,
    instrux + 450,
    instrux + 451,
    instrux + 452,
};

static const struct itemplate * const itable_0FB0[] = {
    instrux + 220,
    instrux + 221,
};

static const struct itemplate * const itable_0FB1[] = {
    instrux + 222,
    instrux + 223,
    instrux + 224,
    instrux + 225,
    instrux + 226,
    instrux + 227,
};

static const struct itemplate * const itable_0FB2[] = {
    instrux + 590,
    instrux + 591,
};

static const struct itemplate * const itable_0FB3[] = {
    instrux + 133,
    instrux + 134,
    instrux + 135,
    instrux + 136,
    instrux + 137,
    instrux + 138,
};

static const struct itemplate * const itable_0FB4[] = {
    instrux + 546,
    instrux + 547,
};

static const struct itemplate * const itable_0FB5[] = {
    instrux + 549,
    instrux + 550,
};

static const struct itemplate * const itable_0FB6[] = {
    instrux + 671,
    instrux + 672,
    instrux + 673,
    instrux + 675,
};

static const struct itemplate * const itable_0FB7[] = {
    instrux + 674,
    instrux + 676,
};

static const struct itemplate * const itable_0FB8[] = {
    instrux + 524,
    instrux + 525,
    instrux + 526,
    instrux + 1613,
    instrux + 1614,
    instrux + 1615,
};

static const struct itemplate * const itable_0FB9[] = {
    instrux + 1107,
};

static const struct itemplate * const itable_0FBA[] = {
    instrux + 121,
    instrux + 122,
    instrux + 123,
    instrux + 130,
    instrux + 131,
    instrux + 132,
    instrux + 139,
    instrux + 140,
    instrux + 141,
    instrux + 148,
    instrux + 149,
    instrux + 150,
};

static const struct itemplate * const itable_0FBB[] = {
    instrux + 124,
    instrux + 125,
    instrux + 126,
    instrux + 127,
    instrux + 128,
    instrux + 129,
};

static const struct itemplate * const itable_0FBC[] = {
    instrux + 101,
    instrux + 102,
    instrux + 103,
    instrux + 104,
    instrux + 105,
    instrux + 106,
};

static const struct itemplate * const itable_0FBD[] = {
    instrux + 107,
    instrux + 108,
    instrux + 109,
    instrux + 110,
    instrux + 111,
    instrux + 112,
    instrux + 1545,
    instrux + 1546,
    instrux + 1547,
};

static const struct itemplate * const itable_0FBE[] = {
    instrux + 664,
    instrux + 665,
    instrux + 666,
    instrux + 668,
};

static const struct itemplate * const itable_0FBF[] = {
    instrux + 667,
    instrux + 669,
};

static const struct itemplate * const itable_0FC0[] = {
    instrux + 1120,
    instrux + 1121,
};

static const struct itemplate * const itable_0FC1[] = {
    instrux + 1122,
    instrux + 1123,
    instrux + 1124,
    instrux + 1125,
    instrux + 1126,
    instrux + 1127,
};

static const struct itemplate * const itable_0FC2[] = {
    instrux + 1197,
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
    instrux + 1213,
    instrux + 1214,
    instrux + 1215,
    instrux + 1216,
    instrux + 1410,
    instrux + 1411,
    instrux + 1412,
    instrux + 1413,
    instrux + 1414,
    instrux + 1415,
    instrux + 1416,
    instrux + 1417,
    instrux + 1418,
    instrux + 1419,
    instrux + 1420,
    instrux + 1421,
    instrux + 1422,
    instrux + 1423,
    instrux + 1424,
    instrux + 1425,
    instrux + 1426,
    instrux + 1427,
};

static const struct itemplate * const itable_0FC3[] = {
    instrux + 1301,
};

static const struct itemplate * const itable_0FC4[] = {
    instrux + 1283,
    instrux + 1284,
    instrux + 1349,
    instrux + 1350,
};

static const struct itemplate * const itable_0FC5[] = {
    instrux + 1282,
    instrux + 1348,
};

static const struct itemplate * const itable_0FC6[] = {
    instrux + 1260,
    instrux + 1261,
    instrux + 1473,
    instrux + 1474,
};

static const struct itemplate * const itable_0FC7[] = {
    instrux + 228,
    instrux + 229,
    instrux + 1494,
    instrux + 1498,
    instrux + 1499,
    instrux + 1506,
};

static const struct itemplate * const itable_0FD0[] = {
    instrux + 1483,
    instrux + 1484,
};

static const struct itemplate * const itable_0FD1[] = {
    instrux + 821,
    instrux + 1382,
};

static const struct itemplate * const itable_0FD2[] = {
    instrux + 817,
    instrux + 1384,
};

static const struct itemplate * const itable_0FD3[] = {
    instrux + 819,
    instrux + 1386,
};

static const struct itemplate * const itable_0FD4[] = {
    instrux + 1332,
    instrux + 1333,
};

static const struct itemplate * const itable_0FD5[] = {
    instrux + 780,
    instrux + 1359,
};

static const struct itemplate * const itable_0FD6[] = {
    instrux + 1318,
    instrux + 1320,
    instrux + 1321,
    instrux + 1325,
};

static const struct itemplate * const itable_0FD7[] = {
    instrux + 1289,
    instrux + 1356,
};

static const struct itemplate * const itable_0FD8[] = {
    instrux + 828,
    instrux + 1395,
};

static const struct itemplate * const itable_0FD9[] = {
    instrux + 829,
    instrux + 1396,
};

static const struct itemplate * const itable_0FDA[] = {
    instrux + 1288,
    instrux + 1355,
};

static const struct itemplate * const itable_0FDB[] = {
    instrux + 744,
    instrux + 1338,
};

static const struct itemplate * const itable_0FDC[] = {
    instrux + 741,
    instrux + 1336,
};

static const struct itemplate * const itable_0FDD[] = {
    instrux + 742,
    instrux + 1337,
};

static const struct itemplate * const itable_0FDE[] = {
    instrux + 1286,
    instrux + 1353,
};

static const struct itemplate * const itable_0FDF[] = {
    instrux + 745,
    instrux + 1339,
};

static const struct itemplate * const itable_0FE0[] = {
    instrux + 1280,
    instrux + 1340,
};

static const struct itemplate * const itable_0FE1[] = {
    instrux + 815,
    instrux + 1377,
};

static const struct itemplate * const itable_0FE2[] = {
    instrux + 813,
    instrux + 1379,
};

static const struct itemplate * const itable_0FE3[] = {
    instrux + 1281,
    instrux + 1341,
};

static const struct itemplate * const itable_0FE4[] = {
    instrux + 1290,
    instrux + 1357,
};

static const struct itemplate * const itable_0FE5[] = {
    instrux + 779,
    instrux + 1358,
};

static const struct itemplate * const itable_0FE6[] = {
    instrux + 1429,
    instrux + 1431,
    instrux + 1443,
};

static const struct itemplate * const itable_0FE7[] = {
    instrux + 1279,
    instrux + 1300,
};

static const struct itemplate * const itable_0FE8[] = {
    instrux + 825,
    instrux + 1393,
};

static const struct itemplate * const itable_0FE9[] = {
    instrux + 827,
    instrux + 1394,
};

static const struct itemplate * const itable_0FEA[] = {
    instrux + 1287,
    instrux + 1354,
};

static const struct itemplate * const itable_0FEB[] = {
    instrux + 800,
    instrux + 1362,
};

static const struct itemplate * const itable_0FEC[] = {
    instrux + 738,
    instrux + 1334,
};

static const struct itemplate * const itable_0FED[] = {
    instrux + 740,
    instrux + 1335,
};

static const struct itemplate * const itable_0FEE[] = {
    instrux + 1285,
    instrux + 1352,
};

static const struct itemplate * const itable_0FEF[] = {
    instrux + 858,
    instrux + 1405,
};

static const struct itemplate * const itable_0FF0[] = {
    instrux + 1489,
};

static const struct itemplate * const itable_0FF1[] = {
    instrux + 811,
    instrux + 1371,
};

static const struct itemplate * const itable_0FF2[] = {
    instrux + 807,
    instrux + 1373,
};

static const struct itemplate * const itable_0FF3[] = {
    instrux + 809,
    instrux + 1375,
};

static const struct itemplate * const itable_0FF4[] = {
    instrux + 1360,
    instrux + 1361,
};

static const struct itemplate * const itable_0FF5[] = {
    instrux + 774,
    instrux + 1351,
};

static const struct itemplate * const itable_0FF6[] = {
    instrux + 1291,
    instrux + 1363,
};

static const struct itemplate * const itable_0FF7[] = {
    instrux + 1278,
    instrux + 1298,
};

static const struct itemplate * const itable_0FF8[] = {
    instrux + 823,
    instrux + 1388,
};

static const struct itemplate * const itable_0FF9[] = {
    instrux + 830,
    instrux + 1389,
};

static const struct itemplate * const itable_0FFA[] = {
    instrux + 824,
    instrux + 1390,
};

static const struct itemplate * const itable_0FFB[] = {
    instrux + 1391,
    instrux + 1392,
};

static const struct itemplate * const itable_0FFC[] = {
    instrux + 736,
    instrux + 1329,
};

static const struct itemplate * const itable_0FFD[] = {
    instrux + 743,
    instrux + 1330,
};

static const struct itemplate * const itable_0FFE[] = {
    instrux + 737,
    instrux + 1331,
};

static const struct itemplate * const itable_0FFF[] = {
    instrux + 1106,
};

static const struct itemplate * const itable_10[] = {
    instrux + 7,
    instrux + 8,
};

static const struct itemplate * const itable_11[] = {
    instrux + 9,
    instrux + 10,
    instrux + 11,
    instrux + 12,
    instrux + 13,
    instrux + 14,
};

static const struct itemplate * const itable_12[] = {
    instrux + 15,
    instrux + 16,
};

static const struct itemplate * const itable_13[] = {
    instrux + 17,
    instrux + 18,
    instrux + 19,
    instrux + 20,
    instrux + 21,
    instrux + 22,
};

static const struct itemplate * const itable_14[] = {
    instrux + 26,
};

static const struct itemplate * const itable_15[] = {
    instrux + 27,
    instrux + 28,
    instrux + 29,
};

static const struct itemplate * const itable_16[] = {
    instrux + 843,
    instrux + 844,
};

static const struct itemplate * const itable_17[] = {
    instrux + 791,
};

static const struct itemplate * const itable_18[] = {
    instrux + 937,
    instrux + 938,
};

static const struct itemplate * const itable_19[] = {
    instrux + 939,
    instrux + 940,
    instrux + 941,
    instrux + 942,
    instrux + 943,
    instrux + 944,
};

static const struct itemplate * const itable_1A[] = {
    instrux + 945,
    instrux + 946,
};

static const struct itemplate * const itable_1B[] = {
    instrux + 947,
    instrux + 948,
    instrux + 949,
    instrux + 950,
    instrux + 951,
    instrux + 952,
};

static const struct itemplate * const itable_1C[] = {
    instrux + 956,
};

static const struct itemplate * const itable_1D[] = {
    instrux + 957,
    instrux + 958,
    instrux + 959,
};

static const struct itemplate * const itable_1E[] = {
    instrux + 843,
    instrux + 844,
};

static const struct itemplate * const itable_1F[] = {
    instrux + 791,
};

static const struct itemplate * const itable_20[] = {
    instrux + 67,
    instrux + 68,
};

static const struct itemplate * const itable_21[] = {
    instrux + 69,
    instrux + 70,
    instrux + 71,
    instrux + 72,
    instrux + 73,
    instrux + 74,
};

static const struct itemplate * const itable_22[] = {
    instrux + 75,
    instrux + 76,
};

static const struct itemplate * const itable_23[] = {
    instrux + 77,
    instrux + 78,
    instrux + 79,
    instrux + 80,
    instrux + 81,
    instrux + 82,
};

static const struct itemplate * const itable_24[] = {
    instrux + 86,
};

static const struct itemplate * const itable_25[] = {
    instrux + 87,
    instrux + 88,
    instrux + 89,
};

static const struct itemplate * const itable_27[] = {
    instrux + 236,
};

static const struct itemplate * const itable_28[] = {
    instrux + 1045,
    instrux + 1046,
};

static const struct itemplate * const itable_29[] = {
    instrux + 1047,
    instrux + 1048,
    instrux + 1049,
    instrux + 1050,
    instrux + 1051,
    instrux + 1052,
};

static const struct itemplate * const itable_2A[] = {
    instrux + 1053,
    instrux + 1054,
};

static const struct itemplate * const itable_2B[] = {
    instrux + 1055,
    instrux + 1056,
    instrux + 1057,
    instrux + 1058,
    instrux + 1059,
    instrux + 1060,
};

static const struct itemplate * const itable_2C[] = {
    instrux + 1064,
};

static const struct itemplate * const itable_2D[] = {
    instrux + 1065,
    instrux + 1066,
    instrux + 1067,
};

static const struct itemplate * const itable_2F[] = {
    instrux + 237,
};

static const struct itemplate * const itable_30[] = {
    instrux + 1151,
    instrux + 1152,
};

static const struct itemplate * const itable_31[] = {
    instrux + 1153,
    instrux + 1154,
    instrux + 1155,
    instrux + 1156,
    instrux + 1157,
    instrux + 1158,
};

static const struct itemplate * const itable_32[] = {
    instrux + 1159,
    instrux + 1160,
};

static const struct itemplate * const itable_33[] = {
    instrux + 1161,
    instrux + 1162,
    instrux + 1163,
    instrux + 1164,
    instrux + 1165,
    instrux + 1166,
};

static const struct itemplate * const itable_34[] = {
    instrux + 1170,
};

static const struct itemplate * const itable_35[] = {
    instrux + 1171,
    instrux + 1172,
    instrux + 1173,
};

static const struct itemplate * const itable_37[] = {
    instrux + 1,
};

static const struct itemplate * const itable_38[] = {
    instrux + 186,
    instrux + 187,
};

static const struct itemplate * const itable_39[] = {
    instrux + 188,
    instrux + 189,
    instrux + 190,
    instrux + 191,
    instrux + 192,
    instrux + 193,
};

static const struct itemplate * const itable_3A[] = {
    instrux + 194,
    instrux + 195,
};

static const struct itemplate * const itable_3B[] = {
    instrux + 196,
    instrux + 197,
    instrux + 198,
    instrux + 199,
    instrux + 200,
    instrux + 201,
};

static const struct itemplate * const itable_3C[] = {
    instrux + 205,
};

static const struct itemplate * const itable_3D[] = {
    instrux + 206,
    instrux + 207,
    instrux + 208,
};

static const struct itemplate * const itable_3F[] = {
    instrux + 6,
};

static const struct itemplate * const itable_40[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_41[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_42[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_43[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_44[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_45[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_46[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_47[] = {
    instrux + 476,
    instrux + 477,
};

static const struct itemplate * const itable_48[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_49[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_4A[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_4B[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_4C[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_4D[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_4E[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_4F[] = {
    instrux + 238,
    instrux + 239,
};

static const struct itemplate * const itable_50[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_51[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_52[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_53[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_54[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_55[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_56[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_57[] = {
    instrux + 837,
    instrux + 838,
    instrux + 839,
};

static const struct itemplate * const itable_58[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_59[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_5A[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_5B[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_5C[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_5D[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_5E[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_5F[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_60[] = {
    instrux + 851,
    instrux + 852,
    instrux + 853,
};

static const struct itemplate * const itable_61[] = {
    instrux + 793,
    instrux + 794,
    instrux + 795,
};

static const struct itemplate * const itable_62[] = {
    instrux + 99,
    instrux + 100,
};

static const struct itemplate * const itable_63[] = {
    instrux + 97,
    instrux + 98,
    instrux + 670,
};

static const struct itemplate * const itable_68[] = {
    instrux + 847,
    instrux + 848,
    instrux + 849,
    instrux + 850,
};

static const struct itemplate * const itable_69[] = {
    instrux + 454,
    instrux + 456,
    instrux + 458,
    instrux + 460,
    instrux + 462,
    instrux + 464,
    instrux + 466,
    instrux + 468,
    instrux + 469,
};

static const struct itemplate * const itable_6A[] = {
    instrux + 846,
};

static const struct itemplate * const itable_6B[] = {
    instrux + 453,
    instrux + 455,
    instrux + 457,
    instrux + 459,
    instrux + 461,
    instrux + 463,
    instrux + 465,
    instrux + 467,
};

static const struct itemplate * const itable_6C[] = {
    instrux + 482,
};

static const struct itemplate * const itable_6D[] = {
    instrux + 483,
    instrux + 484,
};

static const struct itemplate * const itable_6E[] = {
    instrux + 730,
};

static const struct itemplate * const itable_6F[] = {
    instrux + 731,
    instrux + 732,
};

static const struct itemplate * const itable_70[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_71[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_72[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_73[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_74[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_75[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_76[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_77[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_78[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_79[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_7A[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_7B[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_7C[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_7D[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_7E[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_7F[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_80[] = {
    instrux + 30,
    instrux + 34,
    instrux + 60,
    instrux + 64,
    instrux + 90,
    instrux + 94,
    instrux + 209,
    instrux + 213,
    instrux + 717,
    instrux + 721,
    instrux + 960,
    instrux + 964,
    instrux + 1068,
    instrux + 1072,
    instrux + 1174,
    instrux + 1178,
};

static const struct itemplate * const itable_81[] = {
    instrux + 31,
    instrux + 32,
    instrux + 33,
    instrux + 35,
    instrux + 36,
    instrux + 61,
    instrux + 62,
    instrux + 63,
    instrux + 65,
    instrux + 66,
    instrux + 91,
    instrux + 92,
    instrux + 93,
    instrux + 95,
    instrux + 96,
    instrux + 210,
    instrux + 211,
    instrux + 212,
    instrux + 214,
    instrux + 215,
    instrux + 718,
    instrux + 719,
    instrux + 720,
    instrux + 722,
    instrux + 723,
    instrux + 961,
    instrux + 962,
    instrux + 963,
    instrux + 965,
    instrux + 966,
    instrux + 1069,
    instrux + 1070,
    instrux + 1071,
    instrux + 1073,
    instrux + 1074,
    instrux + 1175,
    instrux + 1176,
    instrux + 1177,
    instrux + 1179,
    instrux + 1180,
};

static const struct itemplate * const itable_83[] = {
    instrux + 23,
    instrux + 24,
    instrux + 25,
    instrux + 53,
    instrux + 54,
    instrux + 55,
    instrux + 83,
    instrux + 84,
    instrux + 85,
    instrux + 202,
    instrux + 203,
    instrux + 204,
    instrux + 710,
    instrux + 711,
    instrux + 712,
    instrux + 953,
    instrux + 954,
    instrux + 955,
    instrux + 1061,
    instrux + 1062,
    instrux + 1063,
    instrux + 1167,
    instrux + 1168,
    instrux + 1169,
};

static const struct itemplate * const itable_84[] = {
    instrux + 1083,
    instrux + 1084,
    instrux + 1091,
};

static const struct itemplate * const itable_85[] = {
    instrux + 1085,
    instrux + 1086,
    instrux + 1087,
    instrux + 1088,
    instrux + 1089,
    instrux + 1090,
    instrux + 1092,
    instrux + 1093,
    instrux + 1094,
};

static const struct itemplate * const itable_86[] = {
    instrux + 1133,
    instrux + 1134,
    instrux + 1141,
    instrux + 1142,
};

static const struct itemplate * const itable_87[] = {
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
    instrux + 1138,
    instrux + 1139,
    instrux + 1140,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
};

static const struct itemplate * const itable_88[] = {
    instrux + 621,
    instrux + 622,
};

static const struct itemplate * const itable_89[] = {
    instrux + 623,
    instrux + 624,
    instrux + 625,
    instrux + 626,
    instrux + 627,
    instrux + 628,
};

static const struct itemplate * const itable_8A[] = {
    instrux + 629,
    instrux + 630,
};

static const struct itemplate * const itable_8B[] = {
    instrux + 631,
    instrux + 632,
    instrux + 633,
    instrux + 634,
    instrux + 635,
    instrux + 636,
};

static const struct itemplate * const itable_8C[] = {
    instrux + 597,
    instrux + 598,
    instrux + 599,
};

static const struct itemplate * const itable_8D[] = {
    instrux + 539,
    instrux + 540,
    instrux + 541,
};

static const struct itemplate * const itable_8E[] = {
    instrux + 600,
    instrux + 601,
    instrux + 602,
};

static const struct itemplate * const itable_8F[] = {
    instrux + 788,
    instrux + 789,
    instrux + 790,
};

static const struct itemplate * const itable_90[] = {
    instrux + 686,
    instrux + 746,
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
    instrux + 1303,
};

static const struct itemplate * const itable_91[] = {
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
};

static const struct itemplate * const itable_92[] = {
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
};

static const struct itemplate * const itable_93[] = {
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
};

static const struct itemplate * const itable_94[] = {
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
};

static const struct itemplate * const itable_95[] = {
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
};

static const struct itemplate * const itable_96[] = {
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
};

static const struct itemplate * const itable_97[] = {
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
};

static const struct itemplate * const itable_98[] = {
    instrux + 176,
    instrux + 178,
    instrux + 235,
};

static const struct itemplate * const itable_99[] = {
    instrux + 177,
    instrux + 233,
    instrux + 234,
};

static const struct itemplate * const itable_9A[] = {
    instrux + 157,
    instrux + 158,
    instrux + 159,
    instrux + 160,
    instrux + 161,
};

static const struct itemplate * const itable_9B[] = {
    instrux + 268,
    instrux + 300,
    instrux + 318,
    instrux + 337,
    instrux + 387,
    instrux + 396,
    instrux + 397,
    instrux + 402,
    instrux + 403,
    instrux + 1115,
    instrux + 1116,
};

static const struct itemplate * const itable_9C[] = {
    instrux + 854,
    instrux + 855,
    instrux + 856,
    instrux + 857,
};

static const struct itemplate * const itable_9D[] = {
    instrux + 796,
    instrux + 797,
    instrux + 798,
    instrux + 799,
};

static const struct itemplate * const itable_9E[] = {
    instrux + 923,
};

static const struct itemplate * const itable_9F[] = {
    instrux + 530,
};

static const struct itemplate * const itable_A0[] = {
    instrux + 603,
};

static const struct itemplate * const itable_A1[] = {
    instrux + 604,
    instrux + 605,
    instrux + 606,
};

static const struct itemplate * const itable_A2[] = {
    instrux + 607,
};

static const struct itemplate * const itable_A3[] = {
    instrux + 608,
    instrux + 609,
    instrux + 610,
};

static const struct itemplate * const itable_A4[] = {
    instrux + 660,
};

static const struct itemplate * const itable_A5[] = {
    instrux + 661,
    instrux + 662,
    instrux + 663,
};

static const struct itemplate * const itable_A6[] = {
    instrux + 216,
};

static const struct itemplate * const itable_A7[] = {
    instrux + 217,
    instrux + 218,
    instrux + 219,
};

static const struct itemplate * const itable_A8[] = {
    instrux + 1095,
};

static const struct itemplate * const itable_A9[] = {
    instrux + 1096,
    instrux + 1097,
    instrux + 1098,
};

static const struct itemplate * const itable_AA[] = {
    instrux + 1036,
};

static const struct itemplate * const itable_AB[] = {
    instrux + 1037,
    instrux + 1038,
    instrux + 1039,
};

static const struct itemplate * const itable_AC[] = {
    instrux + 560,
};

static const struct itemplate * const itable_AD[] = {
    instrux + 561,
    instrux + 562,
    instrux + 563,
};

static const struct itemplate * const itable_AE[] = {
    instrux + 967,
};

static const struct itemplate * const itable_AF[] = {
    instrux + 968,
    instrux + 969,
    instrux + 970,
};

static const struct itemplate * const itable_B0[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B1[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B2[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B3[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B4[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B5[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B6[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B7[] = {
    instrux + 637,
};

static const struct itemplate * const itable_B8[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_B9[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_BA[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_BB[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_BC[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_BD[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_BE[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_BF[] = {
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_C0[] = {
    instrux + 861,
    instrux + 873,
    instrux + 896,
    instrux + 908,
    instrux + 927,
    instrux + 975,
    instrux + 999,
};

static const struct itemplate * const itable_C1[] = {
    instrux + 864,
    instrux + 867,
    instrux + 870,
    instrux + 876,
    instrux + 879,
    instrux + 882,
    instrux + 899,
    instrux + 902,
    instrux + 905,
    instrux + 911,
    instrux + 914,
    instrux + 917,
    instrux + 930,
    instrux + 933,
    instrux + 936,
    instrux + 978,
    instrux + 981,
    instrux + 984,
    instrux + 1002,
    instrux + 1005,
    instrux + 1008,
};

static const struct itemplate * const itable_C2[] = {
    instrux + 889,
    instrux + 893,
};

static const struct itemplate * const itable_C3[] = {
    instrux + 888,
    instrux + 892,
};

static const struct itemplate * const itable_C4[] = {
    instrux + 543,
    instrux + 544,
};

static const struct itemplate * const itable_C5[] = {
    instrux + 537,
    instrux + 538,
};

static const struct itemplate * const itable_C6[] = {
    instrux + 641,
    instrux + 645,
};

static const struct itemplate * const itable_C7[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
    instrux + 646,
    instrux + 647,
};

static const struct itemplate * const itable_C8[] = {
    instrux + 250,
};

static const struct itemplate * const itable_C9[] = {
    instrux + 542,
};

static const struct itemplate * const itable_CA[] = {
    instrux + 891,
};

static const struct itemplate * const itable_CB[] = {
    instrux + 890,
};

static const struct itemplate * const itable_CC[] = {
    instrux + 487,
};

static const struct itemplate * const itable_CD[] = {
    instrux + 485,
};

static const struct itemplate * const itable_CE[] = {
    instrux + 488,
};

static const struct itemplate * const itable_CF[] = {
    instrux + 495,
    instrux + 496,
    instrux + 497,
    instrux + 498,
};

static const struct itemplate * const itable_D0[] = {
    instrux + 859,
    instrux + 871,
    instrux + 894,
    instrux + 906,
    instrux + 925,
    instrux + 973,
    instrux + 997,
};

static const struct itemplate * const itable_D1[] = {
    instrux + 862,
    instrux + 865,
    instrux + 868,
    instrux + 874,
    instrux + 877,
    instrux + 880,
    instrux + 897,
    instrux + 900,
    instrux + 903,
    instrux + 909,
    instrux + 912,
    instrux + 915,
    instrux + 928,
    instrux + 931,
    instrux + 934,
    instrux + 976,
    instrux + 979,
    instrux + 982,
    instrux + 1000,
    instrux + 1003,
    instrux + 1006,
};

static const struct itemplate * const itable_D2[] = {
    instrux + 860,
    instrux + 872,
    instrux + 895,
    instrux + 907,
    instrux + 926,
    instrux + 974,
    instrux + 998,
};

static const struct itemplate * const itable_D3[] = {
    instrux + 863,
    instrux + 866,
    instrux + 869,
    instrux + 875,
    instrux + 878,
    instrux + 881,
    instrux + 898,
    instrux + 901,
    instrux + 904,
    instrux + 910,
    instrux + 913,
    instrux + 916,
    instrux + 929,
    instrux + 932,
    instrux + 935,
    instrux + 977,
    instrux + 980,
    instrux + 983,
    instrux + 1001,
    instrux + 1004,
    instrux + 1007,
};

static const struct itemplate * const itable_D4[] = {
    instrux + 4,
    instrux + 5,
};

static const struct itemplate * const itable_D5[] = {
    instrux + 2,
    instrux + 3,
};

static const struct itemplate * const itable_D6[] = {
    instrux + 924,
};

static const struct itemplate * const itable_D7[] = {
    instrux + 1149,
    instrux + 1150,
};

static const struct itemplate * const itable_D8[] = {
    instrux + 255,
    instrux + 258,
    instrux + 260,
    instrux + 285,
    instrux + 287,
    instrux + 288,
    instrux + 293,
    instrux + 295,
    instrux + 296,
    instrux + 301,
    instrux + 305,
    instrux + 306,
    instrux + 309,
    instrux + 313,
    instrux + 314,
    instrux + 363,
    instrux + 367,
    instrux + 368,
    instrux + 404,
    instrux + 408,
    instrux + 409,
    instrux + 412,
    instrux + 416,
    instrux + 417,
};

static const struct itemplate * const itable_D9[] = {
    instrux + 253,
    instrux + 254,
    instrux + 267,
    instrux + 298,
    instrux + 299,
    instrux + 336,
    instrux + 350,
    instrux + 353,
    instrux + 354,
    instrux + 355,
    instrux + 356,
    instrux + 357,
    instrux + 358,
    instrux + 359,
    instrux + 360,
    instrux + 361,
    instrux + 362,
    instrux + 375,
    instrux + 377,
    instrux + 378,
    instrux + 381,
    instrux + 382,
    instrux + 383,
    instrux + 384,
    instrux + 385,
    instrux + 388,
    instrux + 390,
    instrux + 391,
    instrux + 392,
    instrux + 393,
    instrux + 398,
    instrux + 420,
    instrux + 430,
    instrux + 431,
    instrux + 432,
    instrux + 433,
    instrux + 434,
    instrux + 435,
    instrux + 436,
    instrux + 437,
};

static const struct itemplate * const itable_DA[] = {
    instrux + 269,
    instrux + 270,
    instrux + 271,
    instrux + 272,
    instrux + 273,
    instrux + 274,
    instrux + 283,
    instrux + 284,
    instrux + 321,
    instrux + 323,
    instrux + 325,
    instrux + 327,
    instrux + 329,
    instrux + 334,
    instrux + 346,
    instrux + 348,
    instrux + 429,
};

static const struct itemplate * const itable_DB[] = {
    instrux + 275,
    instrux + 276,
    instrux + 277,
    instrux + 278,
    instrux + 279,
    instrux + 280,
    instrux + 281,
    instrux + 282,
    instrux + 289,
    instrux + 290,
    instrux + 331,
    instrux + 338,
    instrux + 340,
    instrux + 344,
    instrux + 352,
    instrux + 371,
    instrux + 372,
    instrux + 373,
    instrux + 374,
    instrux + 389,
    instrux + 400,
    instrux + 423,
    instrux + 424,
};

static const struct itemplate * const itable_DC[] = {
    instrux + 256,
    instrux + 257,
    instrux + 259,
    instrux + 286,
    instrux + 294,
    instrux + 302,
    instrux + 303,
    instrux + 304,
    instrux + 310,
    instrux + 311,
    instrux + 312,
    instrux + 364,
    instrux + 365,
    instrux + 366,
    instrux + 405,
    instrux + 406,
    instrux + 407,
    instrux + 413,
    instrux + 414,
    instrux + 415,
};

static const struct itemplate * const itable_DD[] = {
    instrux + 319,
    instrux + 345,
    instrux + 351,
    instrux + 376,
    instrux + 379,
    instrux + 386,
    instrux + 394,
    instrux + 395,
    instrux + 399,
    instrux + 401,
    instrux + 421,
    instrux + 422,
    instrux + 427,
    instrux + 428,
};

static const struct itemplate * const itable_DE[] = {
    instrux + 261,
    instrux + 262,
    instrux + 297,
    instrux + 307,
    instrux + 308,
    instrux + 315,
    instrux + 316,
    instrux + 322,
    instrux + 324,
    instrux + 326,
    instrux + 328,
    instrux + 330,
    instrux + 335,
    instrux + 347,
    instrux + 349,
    instrux + 369,
    instrux + 370,
    instrux + 410,
    instrux + 411,
    instrux + 418,
    instrux + 419,
};

static const struct itemplate * const itable_DF[] = {
    instrux + 263,
    instrux + 264,
    instrux + 265,
    instrux + 266,
    instrux + 291,
    instrux + 292,
    instrux + 320,
    instrux + 332,
    instrux + 333,
    instrux + 339,
    instrux + 341,
    instrux + 342,
    instrux + 343,
    instrux + 380,
    instrux + 425,
    instrux + 426,
};

static const struct itemplate * const itable_E0[] = {
    instrux + 572,
    instrux + 573,
    instrux + 574,
    instrux + 575,
    instrux + 576,
    instrux + 577,
    instrux + 578,
    instrux + 579,
};

static const struct itemplate * const itable_E1[] = {
    instrux + 568,
    instrux + 569,
    instrux + 570,
    instrux + 571,
    instrux + 580,
    instrux + 581,
    instrux + 582,
    instrux + 583,
};

static const struct itemplate * const itable_E2[] = {
    instrux + 564,
    instrux + 565,
    instrux + 566,
    instrux + 567,
};

static const struct itemplate * const itable_E3[] = {
    instrux + 499,
    instrux + 500,
    instrux + 529,
};

static const struct itemplate * const itable_E4[] = {
    instrux + 470,
};

static const struct itemplate * const itable_E5[] = {
    instrux + 471,
    instrux + 472,
};

static const struct itemplate * const itable_E6[] = {
    instrux + 724,
};

static const struct itemplate * const itable_E7[] = {
    instrux + 725,
    instrux + 726,
};

static const struct itemplate * const itable_E8[] = {
    instrux + 151,
    instrux + 152,
    instrux + 153,
    instrux + 154,
    instrux + 155,
    instrux + 156,
};

static const struct itemplate * const itable_E9[] = {
    instrux + 502,
    instrux + 503,
    instrux + 504,
};

static const struct itemplate * const itable_EA[] = {
    instrux + 505,
    instrux + 506,
    instrux + 507,
    instrux + 508,
    instrux + 509,
};

static const struct itemplate * const itable_EB[] = {
    instrux + 501,
};

static const struct itemplate * const itable_EC[] = {
    instrux + 473,
};

static const struct itemplate * const itable_ED[] = {
    instrux + 474,
    instrux + 475,
};

static const struct itemplate * const itable_EE[] = {
    instrux + 727,
};

static const struct itemplate * const itable_EF[] = {
    instrux + 728,
    instrux + 729,
};

static const struct itemplate * const itable_F1[] = {
    instrux + 486,
    instrux + 1027,
};

static const struct itemplate * const itable_F4[] = {
    instrux + 438,
};

static const struct itemplate * const itable_F5[] = {
    instrux + 185,
};

static const struct itemplate * const itable_F6[] = {
    instrux + 244,
    instrux + 439,
    instrux + 443,
    instrux + 677,
    instrux + 682,
    instrux + 690,
    instrux + 1099,
    instrux + 1103,
};

static const struct itemplate * const itable_F7[] = {
    instrux + 245,
    instrux + 246,
    instrux + 247,
    instrux + 440,
    instrux + 441,
    instrux + 442,
    instrux + 444,
    instrux + 445,
    instrux + 446,
    instrux + 678,
    instrux + 679,
    instrux + 680,
    instrux + 683,
    instrux + 684,
    instrux + 685,
    instrux + 691,
    instrux + 692,
    instrux + 693,
    instrux + 1100,
    instrux + 1101,
    instrux + 1102,
    instrux + 1104,
    instrux + 1105,
};

static const struct itemplate * const itable_F8[] = {
    instrux + 179,
};

static const struct itemplate * const itable_F9[] = {
    instrux + 1032,
};

static const struct itemplate * const itable_FA[] = {
    instrux + 183,
};

static const struct itemplate * const itable_FB[] = {
    instrux + 1035,
};

static const struct itemplate * const itable_FC[] = {
    instrux + 180,
};

static const struct itemplate * const itable_FD[] = {
    instrux + 1033,
};

static const struct itemplate * const itable_FE[] = {
    instrux + 240,
    instrux + 478,
};

static const struct itemplate * const itable_FF[] = {
    instrux + 162,
    instrux + 163,
    instrux + 164,
    instrux + 165,
    instrux + 166,
    instrux + 167,
    instrux + 168,
    instrux + 169,
    instrux + 170,
    instrux + 171,
    instrux + 172,
    instrux + 173,
    instrux + 174,
    instrux + 175,
    instrux + 241,
    instrux + 242,
    instrux + 243,
    instrux + 479,
    instrux + 480,
    instrux + 481,
    instrux + 510,
    instrux + 511,
    instrux + 512,
    instrux + 513,
    instrux + 514,
    instrux + 515,
    instrux + 516,
    instrux + 517,
    instrux + 518,
    instrux + 519,
    instrux + 520,
    instrux + 521,
    instrux + 522,
    instrux + 523,
    instrux + 840,
    instrux + 841,
    instrux + 842,
};

static const struct disasm_index itable_0F24[256] = {
    { itable_0F2400, 2 },
    { itable_0F2401, 2 },
    { itable_0F2402, 2 },
    { itable_0F2403, 2 },
    { itable_0F2404, 2 },
    { itable_0F2405, 2 },
    { itable_0F2406, 2 },
    { itable_0F2407, 2 },
    { itable_0F2408, 2 },
    { itable_0F2409, 2 },
    { itable_0F240A, 2 },
    { itable_0F240B, 2 },
    { itable_0F240C, 2 },
    { itable_0F240D, 2 },
    { itable_0F240E, 2 },
    { itable_0F240F, 2 },
    { itable_0F2410, 2 },
    { itable_0F2411, 2 },
    { itable_0F2412, 2 },
    { itable_0F2413, 2 },
    { itable_0F2414, 2 },
    { itable_0F2415, 2 },
    { itable_0F2416, 2 },
    { itable_0F2417, 2 },
    { itable_0F2418, 2 },
    { itable_0F2419, 2 },
    { itable_0F241A, 2 },
    { itable_0F241B, 2 },
    { itable_0F241C, 2 },
    { itable_0F241D, 2 },
    { itable_0F241E, 2 },
    { itable_0F241F, 2 },
    { itable_0F2420, 2 },
    { itable_0F2421, 2 },
    { itable_0F2422, 2 },
    { itable_0F2423, 2 },
    { itable_0F2424, 2 },
    { itable_0F2425, 2 },
    { itable_0F2426, 2 },
    { itable_0F2427, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F2440, 2 },
    { itable_0F2441, 2 },
    { itable_0F2442, 2 },
    { itable_0F2443, 2 },
    { itable_0F2444, 2 },
    { itable_0F2445, 2 },
    { itable_0F2446, 2 },
    { itable_0F2447, 2 },
    { itable_0F2448, 2 },
    { itable_0F2449, 2 },
    { itable_0F244A, 2 },
    { itable_0F244B, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F2485, 1 },
    { itable_0F2486, 1 },
    { itable_0F2487, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F248E, 1 },
    { itable_0F248F, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F2495, 1 },
    { itable_0F2496, 1 },
    { itable_0F2497, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F249E, 1 },
    { itable_0F249F, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F24A6, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F24B6, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
};

static const struct disasm_index itable_0F25[256] = {
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F252C, 1 },
    { itable_0F252D, 1 },
    { itable_0F252E, 1 },
    { itable_0F252F, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F254C, 1 },
    { itable_0F254D, 1 },
    { itable_0F254E, 1 },
    { itable_0F254F, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F256C, 1 },
    { itable_0F256D, 1 },
    { itable_0F256E, 1 },
    { itable_0F256F, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
};

static const struct disasm_index itable_0F38[256] = {
    { itable_0F3800, 2 },
    { itable_0F3801, 7 },
    { itable_0F3802, 2 },
    { itable_0F3803, 2 },
    { itable_0F3804, 2 },
    { itable_0F3805, 2 },
    { itable_0F3806, 2 },
    { itable_0F3807, 2 },
    { itable_0F3808, 2 },
    { itable_0F3809, 2 },
    { itable_0F380A, 2 },
    { itable_0F380B, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3810, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3814, 1 },
    { itable_0F3815, 1 },
    { NULL, 0 },
    { itable_0F3817, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F381C, 2 },
    { itable_0F381D, 2 },
    { itable_0F381E, 2 },
    { NULL, 0 },
    { itable_0F3820, 1 },
    { itable_0F3821, 1 },
    { itable_0F3822, 1 },
    { itable_0F3823, 1 },
    { itable_0F3824, 1 },
    { itable_0F3825, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3828, 1 },
    { itable_0F3829, 1 },
    { itable_0F382A, 1 },
    { itable_0F382B, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3830, 1 },
    { itable_0F3831, 1 },
    { itable_0F3832, 1 },
    { itable_0F3833, 1 },
    { itable_0F3834, 1 },
    { itable_0F3835, 1 },
    { NULL, 0 },
    { itable_0F3837, 1 },
    { itable_0F3838, 1 },
    { itable_0F3839, 1 },
    { itable_0F383A, 1 },
    { itable_0F383B, 1 },
    { itable_0F383C, 1 },
    { itable_0F383D, 1 },
    { itable_0F383E, 1 },
    { itable_0F383F, 1 },
    { itable_0F3840, 1 },
    { itable_0F3841, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
};

static const struct disasm_index itable_0F3A[256] = {
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3A08, 5 },
    { itable_0F3A09, 1 },
    { itable_0F3A0A, 1 },
    { itable_0F3A0B, 1 },
    { itable_0F3A0C, 1 },
    { itable_0F3A0D, 1 },
    { itable_0F3A0E, 1 },
    { itable_0F3A0F, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3A14, 3 },
    { itable_0F3A15, 3 },
    { itable_0F3A16, 2 },
    { itable_0F3A17, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3A20, 2 },
    { itable_0F3A21, 1 },
    { itable_0F3A22, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3A40, 1 },
    { itable_0F3A41, 1 },
    { itable_0F3A42, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F3A60, 1 },
    { itable_0F3A61, 1 },
    { itable_0F3A62, 1 },
    { itable_0F3A63, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
};

static const struct disasm_index itable_0F7A[256] = {
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A10, 1 },
    { itable_0F7A11, 1 },
    { itable_0F7A12, 1 },
    { itable_0F7A13, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A30, 1 },
    { itable_0F7A31, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A41, 1 },
    { itable_0F7A42, 1 },
    { itable_0F7A43, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A46, 1 },
    { itable_0F7A47, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A4B, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A51, 1 },
    { itable_0F7A52, 1 },
    { itable_0F7A53, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A56, 1 },
    { itable_0F7A57, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A5B, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F7A61, 1 },
    { itable_0F7A62, 1 },
    { itable_0F7A63, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
};

static const struct disasm_index itable_0FA6[256] = {
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA6C0, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA6C8, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA6D0, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
};

static const struct disasm_index itable_0FA7[256] = {
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA7C0, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA7C8, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA7D0, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA7E0, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA7E8, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
};

static const struct disasm_index itable_0F[256] = {
    { itable_0F00, 23 },
    { itable_0F01, 31 },
    { itable_0F02, 6 },
    { itable_0F03, 6 },
    { NULL, 0 },
    { itable_0F05, 2 },
    { itable_0F06, 1 },
    { itable_0F07, 2 },
    { itable_0F08, 1 },
    { itable_0F09, 1 },
    { NULL, 0 },
    { itable_0F0B, 1 },
    { NULL, 0 },
    { itable_0F0D, 2 },
    { itable_0F0E, 1 },
    { itable_0F0F, 26 },
    { itable_0F10, 8 },
    { itable_0F11, 8 },
    { itable_0F12, 5 },
    { itable_0F13, 2 },
    { itable_0F14, 2 },
    { itable_0F15, 2 },
    { itable_0F16, 4 },
    { itable_0F17, 2 },
    { itable_0F18, 32 },
    { itable_0F19, 24 },
    { itable_0F1A, 24 },
    { itable_0F1B, 24 },
    { itable_0F1C, 24 },
    { itable_0F1D, 24 },
    { itable_0F1E, 24 },
    { itable_0F1F, 27 },
    { itable_0F20, 2 },
    { itable_0F21, 2 },
    { itable_0F22, 2 },
    { itable_0F23, 2 },
    { itable_0F24, -1 },
    { itable_0F25, -1 },
    { itable_0F26, 1 },
    { NULL, 0 },
    { itable_0F28, 4 },
    { itable_0F29, 4 },
    { itable_0F2A, 6 },
    { itable_0F2B, 4 },
    { itable_0F2C, 4 },
    { itable_0F2D, 4 },
    { itable_0F2E, 2 },
    { itable_0F2F, 2 },
    { itable_0F30, 1 },
    { itable_0F31, 1 },
    { itable_0F32, 1 },
    { itable_0F33, 1 },
    { itable_0F34, 1 },
    { itable_0F35, 1 },
    { itable_0F36, 1 },
    { itable_0F37, 2 },
    { itable_0F38, -1 },
    { itable_0F39, 1 },
    { itable_0F3A, -1 },
    { NULL, 0 },
    { itable_0F3C, 1 },
    { itable_0F3D, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0F50, 5 },
    { itable_0F51, 5 },
    { itable_0F52, 3 },
    { itable_0F53, 2 },
    { itable_0F54, 3 },
    { itable_0F55, 3 },
    { itable_0F56, 2 },
    { itable_0F57, 2 },
    { itable_0F58, 5 },
    { itable_0F59, 5 },
    { itable_0F5A, 5 },
    { itable_0F5B, 4 },
    { itable_0F5C, 5 },
    { itable_0F5D, 5 },
    { itable_0F5E, 5 },
    { itable_0F5F, 4 },
    { itable_0F60, 2 },
    { itable_0F61, 2 },
    { itable_0F62, 2 },
    { itable_0F63, 2 },
    { itable_0F64, 2 },
    { itable_0F65, 2 },
    { itable_0F66, 2 },
    { itable_0F67, 2 },
    { itable_0F68, 2 },
    { itable_0F69, 2 },
    { itable_0F6A, 2 },
    { itable_0F6B, 2 },
    { itable_0F6C, 1 },
    { itable_0F6D, 1 },
    { itable_0F6E, 8 },
    { itable_0F6F, 5 },
    { itable_0F70, 7 },
    { itable_0F71, 6 },
    { itable_0F72, 6 },
    { itable_0F73, 6 },
    { itable_0F74, 2 },
    { itable_0F75, 2 },
    { itable_0F76, 2 },
    { itable_0F77, 1 },
    { itable_0F78, 4 },
    { itable_0F79, 4 },
    { itable_0F7A, -1 },
    { itable_0F7B, 5 },
    { itable_0F7C, 3 },
    { itable_0F7D, 3 },
    { itable_0F7E, 10 },
    { itable_0F7F, 5 },
    { itable_0F80, 1 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FA2, 1 },
    { itable_0FA3, 6 },
    { itable_0FA4, 6 },
    { itable_0FA5, 6 },
    { itable_0FA6, -1 },
    { itable_0FA7, -1 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FAA, 1 },
    { itable_0FAB, 6 },
    { itable_0FAC, 6 },
    { itable_0FAD, 6 },
    { itable_0FAE, 11 },
    { itable_0FAF, 6 },
    { itable_0FB0, 2 },
    { itable_0FB1, 6 },
    { itable_0FB2, 2 },
    { itable_0FB3, 6 },
    { itable_0FB4, 2 },
    { itable_0FB5, 2 },
    { itable_0FB6, 4 },
    { itable_0FB7, 2 },
    { itable_0FB8, 6 },
    { itable_0FB9, 1 },
    { itable_0FBA, 12 },
    { itable_0FBB, 6 },
    { itable_0FBC, 6 },
    { itable_0FBD, 9 },
    { itable_0FBE, 4 },
    { itable_0FBF, 2 },
    { itable_0FC0, 2 },
    { itable_0FC1, 6 },
    { itable_0FC2, 38 },
    { itable_0FC3, 1 },
    { itable_0FC4, 4 },
    { itable_0FC5, 2 },
    { itable_0FC6, 4 },
    { itable_0FC7, 6 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_0FD0, 2 },
    { itable_0FD1, 2 },
    { itable_0FD2, 2 },
    { itable_0FD3, 2 },
    { itable_0FD4, 2 },
    { itable_0FD5, 2 },
    { itable_0FD6, 4 },
    { itable_0FD7, 2 },
    { itable_0FD8, 2 },
    { itable_0FD9, 2 },
    { itable_0FDA, 2 },
    { itable_0FDB, 2 },
    { itable_0FDC, 2 },
    { itable_0FDD, 2 },
    { itable_0FDE, 2 },
    { itable_0FDF, 2 },
    { itable_0FE0, 2 },
    { itable_0FE1, 2 },
    { itable_0FE2, 2 },
    { itable_0FE3, 2 },
    { itable_0FE4, 2 },
    { itable_0FE5, 2 },
    { itable_0FE6, 3 },
    { itable_0FE7, 2 },
    { itable_0FE8, 2 },
    { itable_0FE9, 2 },
    { itable_0FEA, 2 },
    { itable_0FEB, 2 },
    { itable_0FEC, 2 },
    { itable_0FED, 2 },
    { itable_0FEE, 2 },
    { itable_0FEF, 2 },
    { itable_0FF0, 1 },
    { itable_0FF1, 2 },
    { itable_0FF2, 2 },
    { itable_0FF3, 2 },
    { itable_0FF4, 2 },
    { itable_0FF5, 2 },
    { itable_0FF6, 2 },
    { itable_0FF7, 2 },
    { itable_0FF8, 2 },
    { itable_0FF9, 2 },
    { itable_0FFA, 2 },
    { itable_0FFB, 2 },
    { itable_0FFC, 2 },
    { itable_0FFD, 2 },
    { itable_0FFE, 2 },
    { itable_0FFF, 1 },
};

const struct disasm_index itable[256] = {
    { itable_00, 2 },
    { itable_01, 6 },
    { itable_02, 2 },
    { itable_03, 6 },
    { itable_04, 1 },
    { itable_05, 3 },
    { itable_06, 2 },
    { itable_07, 1 },
    { itable_08, 2 },
    { itable_09, 6 },
    { itable_0A, 2 },
    { itable_0B, 6 },
    { itable_0C, 1 },
    { itable_0D, 3 },
    { itable_0E, 2 },
    { itable_0F, -1 },
    { itable_10, 2 },
    { itable_11, 6 },
    { itable_12, 2 },
    { itable_13, 6 },
    { itable_14, 1 },
    { itable_15, 3 },
    { itable_16, 2 },
    { itable_17, 1 },
    { itable_18, 2 },
    { itable_19, 6 },
    { itable_1A, 2 },
    { itable_1B, 6 },
    { itable_1C, 1 },
    { itable_1D, 3 },
    { itable_1E, 2 },
    { itable_1F, 1 },
    { itable_20, 2 },
    { itable_21, 6 },
    { itable_22, 2 },
    { itable_23, 6 },
    { itable_24, 1 },
    { itable_25, 3 },
    { NULL, 0 },
    { itable_27, 1 },
    { itable_28, 2 },
    { itable_29, 6 },
    { itable_2A, 2 },
    { itable_2B, 6 },
    { itable_2C, 1 },
    { itable_2D, 3 },
    { NULL, 0 },
    { itable_2F, 1 },
    { itable_30, 2 },
    { itable_31, 6 },
    { itable_32, 2 },
    { itable_33, 6 },
    { itable_34, 1 },
    { itable_35, 3 },
    { NULL, 0 },
    { itable_37, 1 },
    { itable_38, 2 },
    { itable_39, 6 },
    { itable_3A, 2 },
    { itable_3B, 6 },
    { itable_3C, 1 },
    { itable_3D, 3 },
    { NULL, 0 },
    { itable_3F, 1 },
    { itable_40, 2 },
    { itable_41, 2 },
    { itable_42, 2 },
    { itable_43, 2 },
    { itable_44, 2 },
    { itable_45, 2 },
    { itable_46, 2 },
    { itable_47, 2 },
    { itable_48, 2 },
    { itable_49, 2 },
    { itable_4A, 2 },
    { itable_4B, 2 },
    { itable_4C, 2 },
    { itable_4D, 2 },
    { itable_4E, 2 },
    { itable_4F, 2 },
    { itable_50, 3 },
    { itable_51, 3 },
    { itable_52, 3 },
    { itable_53, 3 },
    { itable_54, 3 },
    { itable_55, 3 },
    { itable_56, 3 },
    { itable_57, 3 },
    { itable_58, 3 },
    { itable_59, 3 },
    { itable_5A, 3 },
    { itable_5B, 3 },
    { itable_5C, 3 },
    { itable_5D, 3 },
    { itable_5E, 3 },
    { itable_5F, 3 },
    { itable_60, 3 },
    { itable_61, 3 },
    { itable_62, 2 },
    { itable_63, 3 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_68, 4 },
    { itable_69, 9 },
    { itable_6A, 1 },
    { itable_6B, 8 },
    { itable_6C, 1 },
    { itable_6D, 2 },
    { itable_6E, 1 },
    { itable_6F, 2 },
    { itable_70, 1 },
    { itable_71, 1 },
    { itable_72, 1 },
    { itable_73, 1 },
    { itable_74, 1 },
    { itable_75, 1 },
    { itable_76, 1 },
    { itable_77, 1 },
    { itable_78, 1 },
    { itable_79, 1 },
    { itable_7A, 1 },
    { itable_7B, 1 },
    { itable_7C, 1 },
    { itable_7D, 1 },
    { itable_7E, 1 },
    { itable_7F, 1 },
    { itable_80, 16 },
    { itable_81, 40 },
    { NULL, 0 },
    { itable_83, 24 },
    { itable_84, 3 },
    { itable_85, 9 },
    { itable_86, 4 },
    { itable_87, 12 },
    { itable_88, 2 },
    { itable_89, 6 },
    { itable_8A, 2 },
    { itable_8B, 6 },
    { itable_8C, 3 },
    { itable_8D, 3 },
    { itable_8E, 3 },
    { itable_8F, 3 },
    { itable_90, 8 },
    { itable_91, 5 },
    { itable_92, 5 },
    { itable_93, 5 },
    { itable_94, 5 },
    { itable_95, 5 },
    { itable_96, 5 },
    { itable_97, 5 },
    { itable_98, 3 },
    { itable_99, 3 },
    { itable_9A, 5 },
    { itable_9B, 11 },
    { itable_9C, 4 },
    { itable_9D, 4 },
    { itable_9E, 1 },
    { itable_9F, 1 },
    { itable_A0, 1 },
    { itable_A1, 3 },
    { itable_A2, 1 },
    { itable_A3, 3 },
    { itable_A4, 1 },
    { itable_A5, 3 },
    { itable_A6, 1 },
    { itable_A7, 3 },
    { itable_A8, 1 },
    { itable_A9, 3 },
    { itable_AA, 1 },
    { itable_AB, 3 },
    { itable_AC, 1 },
    { itable_AD, 3 },
    { itable_AE, 1 },
    { itable_AF, 3 },
    { itable_B0, 1 },
    { itable_B1, 1 },
    { itable_B2, 1 },
    { itable_B3, 1 },
    { itable_B4, 1 },
    { itable_B5, 1 },
    { itable_B6, 1 },
    { itable_B7, 1 },
    { itable_B8, 3 },
    { itable_B9, 3 },
    { itable_BA, 3 },
    { itable_BB, 3 },
    { itable_BC, 3 },
    { itable_BD, 3 },
    { itable_BE, 3 },
    { itable_BF, 3 },
    { itable_C0, 7 },
    { itable_C1, 21 },
    { itable_C2, 2 },
    { itable_C3, 2 },
    { itable_C4, 2 },
    { itable_C5, 2 },
    { itable_C6, 2 },
    { itable_C7, 5 },
    { itable_C8, 1 },
    { itable_C9, 1 },
    { itable_CA, 1 },
    { itable_CB, 1 },
    { itable_CC, 1 },
    { itable_CD, 1 },
    { itable_CE, 1 },
    { itable_CF, 4 },
    { itable_D0, 7 },
    { itable_D1, 21 },
    { itable_D2, 7 },
    { itable_D3, 21 },
    { itable_D4, 2 },
    { itable_D5, 2 },
    { itable_D6, 1 },
    { itable_D7, 2 },
    { itable_D8, 24 },
    { itable_D9, 40 },
    { itable_DA, 17 },
    { itable_DB, 23 },
    { itable_DC, 20 },
    { itable_DD, 14 },
    { itable_DE, 21 },
    { itable_DF, 16 },
    { itable_E0, 8 },
    { itable_E1, 8 },
    { itable_E2, 4 },
    { itable_E3, 3 },
    { itable_E4, 1 },
    { itable_E5, 2 },
    { itable_E6, 1 },
    { itable_E7, 2 },
    { itable_E8, 6 },
    { itable_E9, 3 },
    { itable_EA, 5 },
    { itable_EB, 1 },
    { itable_EC, 1 },
    { itable_ED, 2 },
    { itable_EE, 1 },
    { itable_EF, 2 },
    { NULL, 0 },
    { itable_F1, 2 },
    { NULL, 0 },
    { NULL, 0 },
    { itable_F4, 1 },
    { itable_F5, 1 },
    { itable_F6, 8 },
    { itable_F7, 23 },
    { itable_F8, 1 },
    { itable_F9, 1 },
    { itable_FA, 1 },
    { itable_FB, 1 },
    { itable_FC, 1 },
    { itable_FD, 1 },
    { itable_FE, 2 },
    { itable_FF, 37 },
};
