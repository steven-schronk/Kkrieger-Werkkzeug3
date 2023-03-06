#ifndef __WERKCLASS_HPP__
#define __WERKCLASS_HPP__

#include "_types.hpp"

#define WERK_CLASS_COL_NEW   1
#define WERK_CLASS_COL_MOD   2
#define WERK_CLASS_COL_ADD   3
#define WERK_CLASS_COL_XTR   4
#define WERK_CLASS_COL_ALL   5
#define WERK_CLASS_COL_HIDE  6

typedef void (*WerkClassEdit)(class WerkkzeugApp*, class WerkOp*);
typedef void (*WerkClassCalc)(struct KOp*);

struct WerkClass2
{
  sChar* Name;                              // name of operator
  sInt Id;                                  // id for load/save (please keep if 8 bit)
  sInt Output;                              // KC_?? of object generated
  sInt MinInput, MaxInput;                  // input count for 
  sU32 Convention;                          // calling convention: 0xm00slipp (modify,0,strings,links,inputs,para)
  sInt Column;                              // column in editor
  sU32 Shortcut;                            // shortcut in palette
  sChar* Packing;                           // "iiffbc" type information for packing
  sChar* EditHandler;                       // set up for editing this operator
  sChar* InitHandler;                       // initialize Object
  sChar* ExecHandler;                       // execute Object
  sInt Inputs[256];                         // KC_?? of inputs
  sInt Links[16];                           // KC_?? of links
};

WerkClass2* FindWerkClass2(sInt id);

WerkClass2 WerkClasses2[];

#endif