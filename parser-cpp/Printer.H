#ifndef FIRRTLFRONTEND_PRINTER_HEADER
#define FIRRTLFRONTEND_PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

namespace FIRRTLFrontend
{
/* Certain applications may improve performance by changing the buffer size */
#define FIRRTLFRONTEND_BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define FIRRTLFRONTEND__L_PAREN '('
#define FIRRTLFRONTEND__R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void render(const char *s);
  void indent(void);
  void backup(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char *print(Visitable *v);

  void visitCircuit(Circuit *p); /* abstract class */
  void visitECircuit(ECircuit *p);
  void visitListModule(ListModule *p);
  void visitModule(Module *p); /* abstract class */
  void visitModule1(Module1 *p);
  void visitModule2(Module2 *p);
  void visitListPort(ListPort *p);
  void visitPort(Port *p); /* abstract class */
  void visitEPort(EPort *p);
  void visitDir(Dir *p); /* abstract class */
  void visitDir_input(Dir_input *p);
  void visitDir_output(Dir_output *p);
  void visitType(Type *p); /* abstract class */
  void visitType1(Type1 *p);
  void visitType2(Type2 *p);
  void visitType3(Type3 *p);
  void visitType_Clock(Type_Clock *p);
  void visitType4(Type4 *p);
  void visitType5(Type5 *p);
  void visitType6(Type6 *p);
  void visitListField(ListField *p);
  void visitField(Field *p); /* abstract class */
  void visitEField(EField *p);
  void visitFlipliteral(Flipliteral *p); /* abstract class */
  void visitFlipliteral_flip(Flipliteral_flip *p);
  void visitFlipliteral_(Flipliteral_ *p);
  void visitStmt(Stmt *p); /* abstract class */
  void visitStmt1(Stmt1 *p);
  void visitStmt2(Stmt2 *p);
  void visitStmt3(Stmt3 *p);
  void visitStmt4(Stmt4 *p);
  void visitStmt5(Stmt5 *p);
  void visitStmt6(Stmt6 *p);
  void visitStmt7(Stmt7 *p);
  void visitStmt8(Stmt8 *p);
  void visitStmt9(Stmt9 *p);
  void visitStmt10(Stmt10 *p);
  void visitStmt11(Stmt11 *p);
  void visitStmt12(Stmt12 *p);
  void visitStmt13(Stmt13 *p);
  void visitStmt14(Stmt14 *p);
  void visitListReader(ListReader *p);
  void visitListWriter(ListWriter *p);
  void visitListReadwriter(ListReadwriter *p);
  void visitListStmt(ListStmt *p);
  void visitReader(Reader *p); /* abstract class */
  void visitEReader(EReader *p);
  void visitWriter(Writer *p); /* abstract class */
  void visitEWriter(EWriter *p);
  void visitReadwriter(Readwriter *p); /* abstract class */
  void visitEReadWriter(EReadWriter *p);
  void visitColonid(Colonid *p); /* abstract class */
  void visitColonid1(Colonid1 *p);
  void visitColonid_(Colonid_ *p);
  void visitElsestmt(Elsestmt *p); /* abstract class */
  void visitElsestmt1(Elsestmt1 *p);
  void visitElsestmt_(Elsestmt_ *p);
  void visitWithreset(Withreset *p); /* abstract class */
  void visitWithreset1(Withreset1 *p);
  void visitWithreset_(Withreset_ *p);
  void visitRuw(Ruw *p); /* abstract class */
  void visitRuw_old(Ruw_old *p);
  void visitRuw_new(Ruw_new *p);
  void visitRuw_undefined(Ruw_undefined *p);
  void visitInfo(Info *p); /* abstract class */
  void visitInfo1(Info1 *p);
  void visitInfo_(Info_ *p);
  void visitExp(Exp *p); /* abstract class */
  void visitExp1(Exp1 *p);
  void visitExp2(Exp2 *p);
  void visitExp3(Exp3 *p);
  void visitExp4(Exp4 *p);
  void visitExpId(ExpId *p);
  void visitExp5(Exp5 *p);
  void visitExp6(Exp6 *p);
  void visitExp7(Exp7 *p);
  void visitExp8(Exp8 *p);
  void visitExp9(Exp9 *p);
  void visitExp10(Exp10 *p);
  void visitListExp(ListExp *p);
  void visitListInt(ListInt *p);
  void visitPrimop(Primop *p); /* abstract class */
  void visitPrimop_add(Primop_add *p);
  void visitPrimop_sub(Primop_sub *p);
  void visitPrimop_mul(Primop_mul *p);
  void visitPrimop_div(Primop_div *p);
  void visitPrimop_mod(Primop_mod *p);
  void visitPrimop_lt(Primop_lt *p);
  void visitPrimop_leq(Primop_leq *p);
  void visitPrimop_gt(Primop_gt *p);
  void visitPrimop_geq(Primop_geq *p);
  void visitPrimop_eq(Primop_eq *p);
  void visitPrimop_neq(Primop_neq *p);
  void visitPrimop_pad(Primop_pad *p);
  void visitPrimop_asUInt(Primop_asUInt *p);
  void visitPrimop_asSInt(Primop_asSInt *p);
  void visitPrimop_asClock(Primop_asClock *p);
  void visitPrimop_shl(Primop_shl *p);
  void visitPrimop_shr(Primop_shr *p);
  void visitPrimop_dshl(Primop_dshl *p);
  void visitPrimop_dshr(Primop_dshr *p);
  void visitPrimop_cvt(Primop_cvt *p);
  void visitPrimop_neg(Primop_neg *p);
  void visitPrimop_not(Primop_not *p);
  void visitPrimop_and(Primop_and *p);
  void visitPrimop_or(Primop_or *p);
  void visitPrimop_xor(Primop_xor *p);
  void visitPrimop_andr(Primop_andr *p);
  void visitPrimop_orr(Primop_orr *p);
  void visitPrimop_xorr(Primop_xorr *p);
  void visitPrimop_cat(Primop_cat *p);
  void visitPrimop_bits(Primop_bits *p);
  void visitPrimop_head(Primop_head *p);
  void visitPrimop_tail(Primop_tail *p);
  void visitId(Id *p); /* abstract class */
  void visitEid(Eid *p);
  void visitSString(SString *p); /* abstract class */
  void visitEstring(Estring *p);
  void visitIntsize(Intsize *p); /* abstract class */
  void visitIntsize1(Intsize1 *p);
  void visitIntsize_(Intsize_ *p);
  void visitIntsizefixed(Intsizefixed *p); /* abstract class */
  void visitIntsizefixed1(Intsizefixed1 *p);
  void visitIntsizefixed_(Intsizefixed_ *p);
  void visitInt(Int *p); /* abstract class */
  void visitEint(Eint *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = FIRRTLFRONTEND_BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char *show(Visitable *v);

  void visitCircuit(Circuit *p); /* abstract class */
  void visitECircuit(ECircuit *p);
  void visitListModule(ListModule *p);
  void visitModule(Module *p); /* abstract class */
  void visitModule1(Module1 *p);
  void visitModule2(Module2 *p);
  void visitListPort(ListPort *p);
  void visitPort(Port *p); /* abstract class */
  void visitEPort(EPort *p);
  void visitDir(Dir *p); /* abstract class */
  void visitDir_input(Dir_input *p);
  void visitDir_output(Dir_output *p);
  void visitType(Type *p); /* abstract class */
  void visitType1(Type1 *p);
  void visitType2(Type2 *p);
  void visitType3(Type3 *p);
  void visitType_Clock(Type_Clock *p);
  void visitType4(Type4 *p);
  void visitType5(Type5 *p);
  void visitType6(Type6 *p);
  void visitListField(ListField *p);
  void visitField(Field *p); /* abstract class */
  void visitEField(EField *p);
  void visitFlipliteral(Flipliteral *p); /* abstract class */
  void visitFlipliteral_flip(Flipliteral_flip *p);
  void visitFlipliteral_(Flipliteral_ *p);
  void visitStmt(Stmt *p); /* abstract class */
  void visitStmt1(Stmt1 *p);
  void visitStmt2(Stmt2 *p);
  void visitStmt3(Stmt3 *p);
  void visitStmt4(Stmt4 *p);
  void visitStmt5(Stmt5 *p);
  void visitStmt6(Stmt6 *p);
  void visitStmt7(Stmt7 *p);
  void visitStmt8(Stmt8 *p);
  void visitStmt9(Stmt9 *p);
  void visitStmt10(Stmt10 *p);
  void visitStmt11(Stmt11 *p);
  void visitStmt12(Stmt12 *p);
  void visitStmt13(Stmt13 *p);
  void visitStmt14(Stmt14 *p);
  void visitListReader(ListReader *p);
  void visitListWriter(ListWriter *p);
  void visitListReadwriter(ListReadwriter *p);
  void visitListStmt(ListStmt *p);
  void visitReader(Reader *p); /* abstract class */
  void visitEReader(EReader *p);
  void visitWriter(Writer *p); /* abstract class */
  void visitEWriter(EWriter *p);
  void visitReadwriter(Readwriter *p); /* abstract class */
  void visitEReadWriter(EReadWriter *p);
  void visitColonid(Colonid *p); /* abstract class */
  void visitColonid1(Colonid1 *p);
  void visitColonid_(Colonid_ *p);
  void visitElsestmt(Elsestmt *p); /* abstract class */
  void visitElsestmt1(Elsestmt1 *p);
  void visitElsestmt_(Elsestmt_ *p);
  void visitWithreset(Withreset *p); /* abstract class */
  void visitWithreset1(Withreset1 *p);
  void visitWithreset_(Withreset_ *p);
  void visitRuw(Ruw *p); /* abstract class */
  void visitRuw_old(Ruw_old *p);
  void visitRuw_new(Ruw_new *p);
  void visitRuw_undefined(Ruw_undefined *p);
  void visitInfo(Info *p); /* abstract class */
  void visitInfo1(Info1 *p);
  void visitInfo_(Info_ *p);
  void visitExp(Exp *p); /* abstract class */
  void visitExp1(Exp1 *p);
  void visitExp2(Exp2 *p);
  void visitExp3(Exp3 *p);
  void visitExp4(Exp4 *p);
  void visitExpId(ExpId *p);
  void visitExp5(Exp5 *p);
  void visitExp6(Exp6 *p);
  void visitExp7(Exp7 *p);
  void visitExp8(Exp8 *p);
  void visitExp9(Exp9 *p);
  void visitExp10(Exp10 *p);
  void visitListExp(ListExp *p);
  void visitListInt(ListInt *p);
  void visitPrimop(Primop *p); /* abstract class */
  void visitPrimop_add(Primop_add *p);
  void visitPrimop_sub(Primop_sub *p);
  void visitPrimop_mul(Primop_mul *p);
  void visitPrimop_div(Primop_div *p);
  void visitPrimop_mod(Primop_mod *p);
  void visitPrimop_lt(Primop_lt *p);
  void visitPrimop_leq(Primop_leq *p);
  void visitPrimop_gt(Primop_gt *p);
  void visitPrimop_geq(Primop_geq *p);
  void visitPrimop_eq(Primop_eq *p);
  void visitPrimop_neq(Primop_neq *p);
  void visitPrimop_pad(Primop_pad *p);
  void visitPrimop_asUInt(Primop_asUInt *p);
  void visitPrimop_asSInt(Primop_asSInt *p);
  void visitPrimop_asClock(Primop_asClock *p);
  void visitPrimop_shl(Primop_shl *p);
  void visitPrimop_shr(Primop_shr *p);
  void visitPrimop_dshl(Primop_dshl *p);
  void visitPrimop_dshr(Primop_dshr *p);
  void visitPrimop_cvt(Primop_cvt *p);
  void visitPrimop_neg(Primop_neg *p);
  void visitPrimop_not(Primop_not *p);
  void visitPrimop_and(Primop_and *p);
  void visitPrimop_or(Primop_or *p);
  void visitPrimop_xor(Primop_xor *p);
  void visitPrimop_andr(Primop_andr *p);
  void visitPrimop_orr(Primop_orr *p);
  void visitPrimop_xorr(Primop_xorr *p);
  void visitPrimop_cat(Primop_cat *p);
  void visitPrimop_bits(Primop_bits *p);
  void visitPrimop_head(Primop_head *p);
  void visitPrimop_tail(Primop_tail *p);
  void visitId(Id *p); /* abstract class */
  void visitEid(Eid *p);
  void visitSString(SString *p); /* abstract class */
  void visitEstring(Estring *p);
  void visitIntsize(Intsize *p); /* abstract class */
  void visitIntsize1(Intsize1 *p);
  void visitIntsize_(Intsize_ *p);
  void visitIntsizefixed(Intsizefixed *p); /* abstract class */
  void visitIntsizefixed1(Intsizefixed1 *p);
  void visitIntsizefixed_(Intsizefixed_ *p);
  void visitInt(Int *p); /* abstract class */
  void visitEint(Eint *p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  char *buf_;
  int cur_, buf_size;

  void inline bufAppend(const char *s)
  {
    int end = cur_ + strlen(s);
    if (end >= buf_size) {
      do buf_size *= 2; /* Double the buffer size */
      while (end >= buf_size);
      resizeBuffer();
    }
    strcpy(&buf_[cur_], s);
    cur_ = end;
  }

  void inline bufAppend(const char c)
  {
    if (cur_ + 1 >= buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    buf_[++cur_] = 0;
  }

  void inline bufAppend(String str)
  {
    const char *s = str.c_str();
    bufAppend(s);
  }
  void inline bufReset(void)
  {
    if (buf_) free(buf_);
    buf_size = FIRRTLFRONTEND_BUFFER_INITIAL;
    buf_ = (char *) malloc(buf_size);
    if (!buf_) {
      fprintf(stderr, "Error: Out of memory while allocating buffer!\n");
      exit(1);
    }
    memset(buf_, 0, buf_size);
    cur_ = 0;
  }

  void inline resizeBuffer(void)
  {
    char *temp = (char *) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
};


}

#endif

