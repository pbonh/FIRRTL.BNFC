#ifndef FIRRTLFRONTEND_PARSER_HEADER_FILE
#define FIRRTLFRONTEND_PARSER_HEADER_FILE

#include<vector>
#include<string>

namespace FIRRTLFrontend
{
class Circuit;
class ListModule;
class Module;
class ListPort;
class Port;
class Dir;
class Type;
class ListField;
class Field;
class Flipliteral;
class Stmt;
class ListReader;
class ListWriter;
class ListReadwriter;
class ListStmt;
class Reader;
class Writer;
class Readwriter;
class Colonid;
class Elsestmt;
class Withreset;
class Ruw;
class Info;
class Exp;
class ListExp;
class ListInt;
class Primop;
class Id;
class SString;
class Intsize;
class Intsizefixed;
class Int;
typedef union
{
  int    _int;
  char   _char;
  double _double;
  char*  _string;
  Circuit* circuit_;
  ListModule* listmodule_;
  Module* module_;
  ListPort* listport_;
  Port* port_;
  Dir* dir_;
  Type* type_;
  ListField* listfield_;
  Field* field_;
  Flipliteral* flipliteral_;
  Stmt* stmt_;
  ListReader* listreader_;
  ListWriter* listwriter_;
  ListReadwriter* listreadwriter_;
  ListStmt* liststmt_;
  Reader* reader_;
  Writer* writer_;
  Readwriter* readwriter_;
  Colonid* colonid_;
  Elsestmt* elsestmt_;
  Withreset* withreset_;
  Ruw* ruw_;
  Info* info_;
  Exp* exp_;
  ListExp* listexp_;
  ListInt* listint_;
  Primop* primop_;
  Id* id_;
  SString* sstring_;
  Intsize* intsize_;
  Intsizefixed* intsizefixed_;
  Int* int_;
} YYSTYPE;

Circuit* pCircuit(FILE *inp);
Circuit* pCircuit(const char *str);
ListModule* pListModule(FILE *inp);
ListModule* pListModule(const char *str);
Module* pModule(FILE *inp);
Module* pModule(const char *str);
ListPort* pListPort(FILE *inp);
ListPort* pListPort(const char *str);
Port* pPort(FILE *inp);
Port* pPort(const char *str);
Dir* pDir(FILE *inp);
Dir* pDir(const char *str);
Type* pType(FILE *inp);
Type* pType(const char *str);
ListField* pListField(FILE *inp);
ListField* pListField(const char *str);
Field* pField(FILE *inp);
Field* pField(const char *str);
Flipliteral* pFlipliteral(FILE *inp);
Flipliteral* pFlipliteral(const char *str);
Stmt* pStmt(FILE *inp);
Stmt* pStmt(const char *str);
ListReader* pListReader(FILE *inp);
ListReader* pListReader(const char *str);
ListWriter* pListWriter(FILE *inp);
ListWriter* pListWriter(const char *str);
ListReadwriter* pListReadwriter(FILE *inp);
ListReadwriter* pListReadwriter(const char *str);
ListStmt* pListStmt(FILE *inp);
ListStmt* pListStmt(const char *str);
Reader* pReader(FILE *inp);
Reader* pReader(const char *str);
Writer* pWriter(FILE *inp);
Writer* pWriter(const char *str);
Readwriter* pReadwriter(FILE *inp);
Readwriter* pReadwriter(const char *str);
Colonid* pColonid(FILE *inp);
Colonid* pColonid(const char *str);
Elsestmt* pElsestmt(FILE *inp);
Elsestmt* pElsestmt(const char *str);
Withreset* pWithreset(FILE *inp);
Withreset* pWithreset(const char *str);
Ruw* pRuw(FILE *inp);
Ruw* pRuw(const char *str);
Info* pInfo(FILE *inp);
Info* pInfo(const char *str);
Exp* pExp(FILE *inp);
Exp* pExp(const char *str);
ListExp* pListExp(FILE *inp);
ListExp* pListExp(const char *str);
ListInt* pListInt(FILE *inp);
ListInt* pListInt(const char *str);
Primop* pPrimop(FILE *inp);
Primop* pPrimop(const char *str);
Id* pId(FILE *inp);
Id* pId(const char *str);
SString* pSString(FILE *inp);
SString* pSString(const char *str);
Intsize* pIntsize(FILE *inp);
Intsize* pIntsize(const char *str);
Intsizefixed* pIntsizefixed(FILE *inp);
Intsizefixed* pIntsizefixed(const char *str);
Int* pInt(FILE *inp);
Int* pInt(const char *str);
}

#define FIRRTLFRONTEND__ERROR_ 258
#define _SYMB_1 259
#define _SYMB_2 260
#define _SYMB_15 261
#define _SYMB_17 262
#define _SYMB_0 263
#define _SYMB_18 264
#define _SYMB_14 265
#define _SYMB_20 266
#define _SYMB_13 267
#define _SYMB_12 268
#define _SYMB_8 269
#define _SYMB_19 270
#define _SYMB_21 271
#define _SYMB_16 272
#define _SYMB_22 273
#define _SYMB_23 274
#define _SYMB_24 275
#define _SYMB_25 276
#define _SYMB_26 277
#define _SYMB_5 278
#define _SYMB_6 279
#define _SYMB_27 280
#define _SYMB_28 281
#define _SYMB_29 282
#define _SYMB_30 283
#define _SYMB_31 284
#define _SYMB_32 285
#define _SYMB_33 286
#define _SYMB_34 287
#define _SYMB_35 288
#define _SYMB_36 289
#define _SYMB_37 290
#define _SYMB_7 291
#define _SYMB_38 292
#define _SYMB_39 293
#define _SYMB_40 294
#define _SYMB_41 295
#define _SYMB_42 296
#define _SYMB_43 297
#define _SYMB_44 298
#define _SYMB_45 299
#define _SYMB_46 300
#define _SYMB_47 301
#define _SYMB_48 302
#define _SYMB_49 303
#define _SYMB_50 304
#define _SYMB_51 305
#define _SYMB_52 306
#define _SYMB_53 307
#define _SYMB_54 308
#define _SYMB_55 309
#define _SYMB_56 310
#define _SYMB_57 311
#define _SYMB_58 312
#define _SYMB_59 313
#define _SYMB_60 314
#define _SYMB_61 315
#define _SYMB_62 316
#define _SYMB_63 317
#define _SYMB_64 318
#define _SYMB_65 319
#define _SYMB_66 320
#define _SYMB_67 321
#define _SYMB_68 322
#define _SYMB_69 323
#define _SYMB_70 324
#define _SYMB_71 325
#define _SYMB_9 326
#define _SYMB_11 327
#define _SYMB_72 328
#define _SYMB_73 329
#define _SYMB_74 330
#define _SYMB_75 331
#define _SYMB_76 332
#define _SYMB_77 333
#define _SYMB_78 334
#define _SYMB_79 335
#define _SYMB_80 336
#define _SYMB_81 337
#define _SYMB_82 338
#define _SYMB_83 339
#define _SYMB_84 340
#define _SYMB_85 341
#define _SYMB_86 342
#define _SYMB_10 343
#define _SYMB_87 344
#define _SYMB_88 345
#define _SYMB_89 346
#define _SYMB_3 347
#define _SYMB_4 348
#define FIRRTLFRONTEND__STRING_ 349
#define FIRRTLFRONTEND__INTEGER_ 350
#define FIRRTLFRONTEND__IDENT_ 351

extern FIRRTLFrontend::YYSTYPE FIRRTLFrontendyylval;

#endif
