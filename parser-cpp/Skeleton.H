#ifndef FIRRTLFRONTEND_SKELETON_HEADER
#define FIRRTLFRONTEND_SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.H"

namespace FIRRTLFrontend
{
class Skeleton : public Visitor
{
public:
  void visitCircuit(Circuit *p);
  void visitModule(Module *p);
  void visitPort(Port *p);
  void visitDir(Dir *p);
  void visitType(Type *p);
  void visitField(Field *p);
  void visitFlipliteral(Flipliteral *p);
  void visitStmt(Stmt *p);
  void visitReader(Reader *p);
  void visitWriter(Writer *p);
  void visitReadwriter(Readwriter *p);
  void visitColonid(Colonid *p);
  void visitElsestmt(Elsestmt *p);
  void visitWithreset(Withreset *p);
  void visitRuw(Ruw *p);
  void visitInfo(Info *p);
  void visitExp(Exp *p);
  void visitPrimop(Primop *p);
  void visitId(Id *p);
  void visitSString(SString *p);
  void visitIntsize(Intsize *p);
  void visitIntsizefixed(Intsizefixed *p);
  void visitInt(Int *p);
  void visitECircuit(ECircuit *p);
  void visitModule1(Module1 *p);
  void visitModule2(Module2 *p);
  void visitEPort(EPort *p);
  void visitDir_input(Dir_input *p);
  void visitDir_output(Dir_output *p);
  void visitType1(Type1 *p);
  void visitType2(Type2 *p);
  void visitType3(Type3 *p);
  void visitType_Clock(Type_Clock *p);
  void visitType4(Type4 *p);
  void visitType5(Type5 *p);
  void visitType6(Type6 *p);
  void visitEField(EField *p);
  void visitFlipliteral_flip(Flipliteral_flip *p);
  void visitFlipliteral_(Flipliteral_ *p);
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
  void visitEReader(EReader *p);
  void visitEWriter(EWriter *p);
  void visitEReadWriter(EReadWriter *p);
  void visitColonid1(Colonid1 *p);
  void visitColonid_(Colonid_ *p);
  void visitElsestmt1(Elsestmt1 *p);
  void visitElsestmt_(Elsestmt_ *p);
  void visitWithreset1(Withreset1 *p);
  void visitWithreset_(Withreset_ *p);
  void visitRuw_old(Ruw_old *p);
  void visitRuw_new(Ruw_new *p);
  void visitRuw_undefined(Ruw_undefined *p);
  void visitInfo1(Info1 *p);
  void visitInfo_(Info_ *p);
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
  void visitEid(Eid *p);
  void visitEstring(Estring *p);
  void visitIntsize1(Intsize1 *p);
  void visitIntsize_(Intsize_ *p);
  void visitIntsizefixed1(Intsizefixed1 *p);
  void visitIntsizefixed_(Intsizefixed_ *p);
  void visitEint(Eint *p);
  void visitListModule(ListModule *p);
  void visitListPort(ListPort *p);
  void visitListField(ListField *p);
  void visitListReader(ListReader *p);
  void visitListWriter(ListWriter *p);
  void visitListReadwriter(ListReadwriter *p);
  void visitListStmt(ListStmt *p);
  void visitListExp(ListExp *p);
  void visitListInt(ListInt *p);

  void visitInteger(Integer x);
  void visitChar(Char x);
  void visitDouble(Double x);
  void visitString(String x);
  void visitIdent(Ident x);

};
}

#endif
