/*** BNFC-Generated Visitor Design Pattern Skeleton. ***/
/* This implements the common visitor design pattern.
   Note that this method uses Visitor-traversal of lists, so
   List->accept() does NOT traverse the list. This allows different
   algorithms to use context information differently. */

#include "Skeleton.H"


namespace FIRRTLFrontend
{
void Skeleton::visitCircuit(Circuit *t) {} //abstract class
void Skeleton::visitModule(Module *t) {} //abstract class
void Skeleton::visitPort(Port *t) {} //abstract class
void Skeleton::visitDir(Dir *t) {} //abstract class
void Skeleton::visitType(Type *t) {} //abstract class
void Skeleton::visitField(Field *t) {} //abstract class
void Skeleton::visitFlipliteral(Flipliteral *t) {} //abstract class
void Skeleton::visitStmt(Stmt *t) {} //abstract class
void Skeleton::visitReader(Reader *t) {} //abstract class
void Skeleton::visitWriter(Writer *t) {} //abstract class
void Skeleton::visitReadwriter(Readwriter *t) {} //abstract class
void Skeleton::visitColonid(Colonid *t) {} //abstract class
void Skeleton::visitElsestmt(Elsestmt *t) {} //abstract class
void Skeleton::visitWithreset(Withreset *t) {} //abstract class
void Skeleton::visitRuw(Ruw *t) {} //abstract class
void Skeleton::visitInfo(Info *t) {} //abstract class
void Skeleton::visitExp(Exp *t) {} //abstract class
void Skeleton::visitPrimop(Primop *t) {} //abstract class
void Skeleton::visitId(Id *t) {} //abstract class
void Skeleton::visitSString(SString *t) {} //abstract class
void Skeleton::visitIntsize(Intsize *t) {} //abstract class
void Skeleton::visitIntsizefixed(Intsizefixed *t) {} //abstract class
void Skeleton::visitInt(Int *t) {} //abstract class

void Skeleton::visitECircuit(ECircuit *e_circuit)
{
  /* Code For ECircuit Goes Here */

  if (e_circuit->id_) e_circuit->id_->accept(this);
  if (e_circuit->info_) e_circuit->info_->accept(this);
  if (e_circuit->listmodule_) e_circuit->listmodule_->accept(this);

}

void Skeleton::visitModule1(Module1 *module)
{
  /* Code For Module1 Goes Here */

  if (module->id_) module->id_->accept(this);
  if (module->info_) module->info_->accept(this);
  if (module->listport_) module->listport_->accept(this);
  if (module->stmt_) module->stmt_->accept(this);

}

void Skeleton::visitModule2(Module2 *module)
{
  /* Code For Module2 Goes Here */

  if (module->id_) module->id_->accept(this);
  if (module->info_) module->info_->accept(this);
  if (module->listport_) module->listport_->accept(this);

}

void Skeleton::visitEPort(EPort *e_port)
{
  /* Code For EPort Goes Here */

  if (e_port->dir_) e_port->dir_->accept(this);
  if (e_port->id_) e_port->id_->accept(this);
  if (e_port->type_) e_port->type_->accept(this);
  if (e_port->info_) e_port->info_->accept(this);

}

void Skeleton::visitDir_input(Dir_input *dir_input)
{
  /* Code For Dir_input Goes Here */


}

void Skeleton::visitDir_output(Dir_output *dir_output)
{
  /* Code For Dir_output Goes Here */


}

void Skeleton::visitType1(Type1 *type)
{
  /* Code For Type1 Goes Here */

  if (type->intsize_) type->intsize_->accept(this);

}

void Skeleton::visitType2(Type2 *type)
{
  /* Code For Type2 Goes Here */

  if (type->intsize_) type->intsize_->accept(this);

}

void Skeleton::visitType3(Type3 *type)
{
  /* Code For Type3 Goes Here */

  if (type->intsize_) type->intsize_->accept(this);
  if (type->intsizefixed_) type->intsizefixed_->accept(this);

}

void Skeleton::visitType_Clock(Type_Clock *type_clock)
{
  /* Code For Type_Clock Goes Here */


}

void Skeleton::visitType4(Type4 *type)
{
  /* Code For Type4 Goes Here */

  if (type->intsize_) type->intsize_->accept(this);

}

void Skeleton::visitType5(Type5 *type)
{
  /* Code For Type5 Goes Here */

  if (type->listfield_) type->listfield_->accept(this);

}

void Skeleton::visitType6(Type6 *type)
{
  /* Code For Type6 Goes Here */

  if (type->type_) type->type_->accept(this);
  if (type->int_) type->int_->accept(this);

}

void Skeleton::visitEField(EField *e_field)
{
  /* Code For EField Goes Here */

  if (e_field->flipliteral_) e_field->flipliteral_->accept(this);
  if (e_field->id_) e_field->id_->accept(this);
  if (e_field->type_) e_field->type_->accept(this);

}

void Skeleton::visitFlipliteral_flip(Flipliteral_flip *flipliteral_flip)
{
  /* Code For Flipliteral_flip Goes Here */


}

void Skeleton::visitFlipliteral_(Flipliteral_ *flipliteral)
{
  /* Code For Flipliteral_ Goes Here */


}

void Skeleton::visitStmt1(Stmt1 *stmt)
{
  /* Code For Stmt1 Goes Here */

  if (stmt->id_) stmt->id_->accept(this);
  if (stmt->type_) stmt->type_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt2(Stmt2 *stmt)
{
  /* Code For Stmt2 Goes Here */

  if (stmt->id_) stmt->id_->accept(this);
  if (stmt->type_) stmt->type_->accept(this);
  if (stmt->exp_) stmt->exp_->accept(this);
  if (stmt->withreset_) stmt->withreset_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt3(Stmt3 *stmt)
{
  /* Code For Stmt3 Goes Here */

  if (stmt->id_) stmt->id_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);
  if (stmt->type_) stmt->type_->accept(this);
  if (stmt->int_1) stmt->int_1->accept(this);
  if (stmt->int_2) stmt->int_2->accept(this);
  if (stmt->int_3) stmt->int_3->accept(this);
  if (stmt->ruw_) stmt->ruw_->accept(this);
  if (stmt->listreader_) stmt->listreader_->accept(this);
  if (stmt->listwriter_) stmt->listwriter_->accept(this);
  if (stmt->listreadwriter_) stmt->listreadwriter_->accept(this);

}

void Skeleton::visitStmt4(Stmt4 *stmt)
{
  /* Code For Stmt4 Goes Here */

  if (stmt->id_1) stmt->id_1->accept(this);
  if (stmt->id_2) stmt->id_2->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt5(Stmt5 *stmt)
{
  /* Code For Stmt5 Goes Here */

  if (stmt->id_) stmt->id_->accept(this);
  if (stmt->exp_) stmt->exp_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt6(Stmt6 *stmt)
{
  /* Code For Stmt6 Goes Here */

  if (stmt->exp_1) stmt->exp_1->accept(this);
  if (stmt->exp_2) stmt->exp_2->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt7(Stmt7 *stmt)
{
  /* Code For Stmt7 Goes Here */

  if (stmt->exp_1) stmt->exp_1->accept(this);
  if (stmt->exp_2) stmt->exp_2->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt8(Stmt8 *stmt)
{
  /* Code For Stmt8 Goes Here */

  if (stmt->exp_) stmt->exp_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt9(Stmt9 *stmt)
{
  /* Code For Stmt9 Goes Here */

  if (stmt->listexp_) stmt->listexp_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt10(Stmt10 *stmt)
{
  /* Code For Stmt10 Goes Here */

  if (stmt->exp_) stmt->exp_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);
  if (stmt->stmt_) stmt->stmt_->accept(this);
  if (stmt->elsestmt_) stmt->elsestmt_->accept(this);

}

void Skeleton::visitStmt11(Stmt11 *stmt)
{
  /* Code For Stmt11 Goes Here */

  if (stmt->exp_1) stmt->exp_1->accept(this);
  if (stmt->exp_2) stmt->exp_2->accept(this);
  if (stmt->int_) stmt->int_->accept(this);
  if (stmt->colonid_) stmt->colonid_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt12(Stmt12 *stmt)
{
  /* Code For Stmt12 Goes Here */

  if (stmt->exp_1) stmt->exp_1->accept(this);
  if (stmt->exp_2) stmt->exp_2->accept(this);
  if (stmt->sstring_) stmt->sstring_->accept(this);
  if (stmt->listexp_) stmt->listexp_->accept(this);
  if (stmt->colonid_) stmt->colonid_->accept(this);
  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt13(Stmt13 *stmt)
{
  /* Code For Stmt13 Goes Here */

  if (stmt->info_) stmt->info_->accept(this);

}

void Skeleton::visitStmt14(Stmt14 *stmt)
{
  /* Code For Stmt14 Goes Here */

  if (stmt->liststmt_) stmt->liststmt_->accept(this);

}

void Skeleton::visitEReader(EReader *e_reader)
{
  /* Code For EReader Goes Here */

  if (e_reader->id_) e_reader->id_->accept(this);

}

void Skeleton::visitEWriter(EWriter *e_writer)
{
  /* Code For EWriter Goes Here */

  if (e_writer->id_) e_writer->id_->accept(this);

}

void Skeleton::visitEReadWriter(EReadWriter *e_read_writer)
{
  /* Code For EReadWriter Goes Here */

  if (e_read_writer->id_) e_read_writer->id_->accept(this);

}

void Skeleton::visitColonid1(Colonid1 *colonid)
{
  /* Code For Colonid1 Goes Here */

  if (colonid->id_) colonid->id_->accept(this);

}

void Skeleton::visitColonid_(Colonid_ *colonid)
{
  /* Code For Colonid_ Goes Here */


}

void Skeleton::visitElsestmt1(Elsestmt1 *elsestmt)
{
  /* Code For Elsestmt1 Goes Here */

  if (elsestmt->stmt_) elsestmt->stmt_->accept(this);

}

void Skeleton::visitElsestmt_(Elsestmt_ *elsestmt)
{
  /* Code For Elsestmt_ Goes Here */


}

void Skeleton::visitWithreset1(Withreset1 *withreset)
{
  /* Code For Withreset1 Goes Here */

  if (withreset->exp_1) withreset->exp_1->accept(this);
  if (withreset->exp_2) withreset->exp_2->accept(this);

}

void Skeleton::visitWithreset_(Withreset_ *withreset)
{
  /* Code For Withreset_ Goes Here */


}

void Skeleton::visitRuw_old(Ruw_old *ruw_old)
{
  /* Code For Ruw_old Goes Here */


}

void Skeleton::visitRuw_new(Ruw_new *ruw_new)
{
  /* Code For Ruw_new Goes Here */


}

void Skeleton::visitRuw_undefined(Ruw_undefined *ruw_undefined)
{
  /* Code For Ruw_undefined Goes Here */


}

void Skeleton::visitInfo1(Info1 *info)
{
  /* Code For Info1 Goes Here */

  if (info->sstring_) info->sstring_->accept(this);

}

void Skeleton::visitInfo_(Info_ *info)
{
  /* Code For Info_ Goes Here */


}

void Skeleton::visitExp1(Exp1 *exp)
{
  /* Code For Exp1 Goes Here */

  if (exp->intsize_) exp->intsize_->accept(this);
  if (exp->int_) exp->int_->accept(this);

}

void Skeleton::visitExp2(Exp2 *exp)
{
  /* Code For Exp2 Goes Here */

  if (exp->intsize_) exp->intsize_->accept(this);
  if (exp->sstring_) exp->sstring_->accept(this);

}

void Skeleton::visitExp3(Exp3 *exp)
{
  /* Code For Exp3 Goes Here */

  if (exp->intsize_) exp->intsize_->accept(this);
  if (exp->int_) exp->int_->accept(this);

}

void Skeleton::visitExp4(Exp4 *exp)
{
  /* Code For Exp4 Goes Here */

  if (exp->intsize_) exp->intsize_->accept(this);
  if (exp->sstring_) exp->sstring_->accept(this);

}

void Skeleton::visitExpId(ExpId *exp_id)
{
  /* Code For ExpId Goes Here */

  if (exp_id->id_) exp_id->id_->accept(this);

}

void Skeleton::visitExp5(Exp5 *exp)
{
  /* Code For Exp5 Goes Here */

  if (exp->exp_) exp->exp_->accept(this);
  if (exp->id_) exp->id_->accept(this);

}

void Skeleton::visitExp6(Exp6 *exp)
{
  /* Code For Exp6 Goes Here */

  if (exp->exp_) exp->exp_->accept(this);
  if (exp->int_) exp->int_->accept(this);

}

void Skeleton::visitExp7(Exp7 *exp)
{
  /* Code For Exp7 Goes Here */

  if (exp->exp_1) exp->exp_1->accept(this);
  if (exp->exp_2) exp->exp_2->accept(this);

}

void Skeleton::visitExp8(Exp8 *exp)
{
  /* Code For Exp8 Goes Here */

  if (exp->exp_1) exp->exp_1->accept(this);
  if (exp->exp_2) exp->exp_2->accept(this);
  if (exp->exp_3) exp->exp_3->accept(this);

}

void Skeleton::visitExp9(Exp9 *exp)
{
  /* Code For Exp9 Goes Here */

  if (exp->exp_1) exp->exp_1->accept(this);
  if (exp->exp_2) exp->exp_2->accept(this);

}

void Skeleton::visitExp10(Exp10 *exp)
{
  /* Code For Exp10 Goes Here */

  if (exp->primop_) exp->primop_->accept(this);
  if (exp->listexp_) exp->listexp_->accept(this);
  if (exp->listint_) exp->listint_->accept(this);

}

void Skeleton::visitPrimop_add(Primop_add *primop_add)
{
  /* Code For Primop_add Goes Here */


}

void Skeleton::visitPrimop_sub(Primop_sub *primop_sub)
{
  /* Code For Primop_sub Goes Here */


}

void Skeleton::visitPrimop_mul(Primop_mul *primop_mul)
{
  /* Code For Primop_mul Goes Here */


}

void Skeleton::visitPrimop_div(Primop_div *primop_div)
{
  /* Code For Primop_div Goes Here */


}

void Skeleton::visitPrimop_mod(Primop_mod *primop_mod)
{
  /* Code For Primop_mod Goes Here */


}

void Skeleton::visitPrimop_lt(Primop_lt *primop_lt)
{
  /* Code For Primop_lt Goes Here */


}

void Skeleton::visitPrimop_leq(Primop_leq *primop_leq)
{
  /* Code For Primop_leq Goes Here */


}

void Skeleton::visitPrimop_gt(Primop_gt *primop_gt)
{
  /* Code For Primop_gt Goes Here */


}

void Skeleton::visitPrimop_geq(Primop_geq *primop_geq)
{
  /* Code For Primop_geq Goes Here */


}

void Skeleton::visitPrimop_eq(Primop_eq *primop_eq)
{
  /* Code For Primop_eq Goes Here */


}

void Skeleton::visitPrimop_neq(Primop_neq *primop_neq)
{
  /* Code For Primop_neq Goes Here */


}

void Skeleton::visitPrimop_pad(Primop_pad *primop_pad)
{
  /* Code For Primop_pad Goes Here */


}

void Skeleton::visitPrimop_asUInt(Primop_asUInt *primop_as_u_int)
{
  /* Code For Primop_asUInt Goes Here */


}

void Skeleton::visitPrimop_asSInt(Primop_asSInt *primop_as_s_int)
{
  /* Code For Primop_asSInt Goes Here */


}

void Skeleton::visitPrimop_asClock(Primop_asClock *primop_as_clock)
{
  /* Code For Primop_asClock Goes Here */


}

void Skeleton::visitPrimop_shl(Primop_shl *primop_shl)
{
  /* Code For Primop_shl Goes Here */


}

void Skeleton::visitPrimop_shr(Primop_shr *primop_shr)
{
  /* Code For Primop_shr Goes Here */


}

void Skeleton::visitPrimop_dshl(Primop_dshl *primop_dshl)
{
  /* Code For Primop_dshl Goes Here */


}

void Skeleton::visitPrimop_dshr(Primop_dshr *primop_dshr)
{
  /* Code For Primop_dshr Goes Here */


}

void Skeleton::visitPrimop_cvt(Primop_cvt *primop_cvt)
{
  /* Code For Primop_cvt Goes Here */


}

void Skeleton::visitPrimop_neg(Primop_neg *primop_neg)
{
  /* Code For Primop_neg Goes Here */


}

void Skeleton::visitPrimop_not(Primop_not *primop_not)
{
  /* Code For Primop_not Goes Here */


}

void Skeleton::visitPrimop_and(Primop_and *primop_and)
{
  /* Code For Primop_and Goes Here */


}

void Skeleton::visitPrimop_or(Primop_or *primop_or)
{
  /* Code For Primop_or Goes Here */


}

void Skeleton::visitPrimop_xor(Primop_xor *primop_xor)
{
  /* Code For Primop_xor Goes Here */


}

void Skeleton::visitPrimop_andr(Primop_andr *primop_andr)
{
  /* Code For Primop_andr Goes Here */


}

void Skeleton::visitPrimop_orr(Primop_orr *primop_orr)
{
  /* Code For Primop_orr Goes Here */


}

void Skeleton::visitPrimop_xorr(Primop_xorr *primop_xorr)
{
  /* Code For Primop_xorr Goes Here */


}

void Skeleton::visitPrimop_cat(Primop_cat *primop_cat)
{
  /* Code For Primop_cat Goes Here */


}

void Skeleton::visitPrimop_bits(Primop_bits *primop_bits)
{
  /* Code For Primop_bits Goes Here */


}

void Skeleton::visitPrimop_head(Primop_head *primop_head)
{
  /* Code For Primop_head Goes Here */


}

void Skeleton::visitPrimop_tail(Primop_tail *primop_tail)
{
  /* Code For Primop_tail Goes Here */


}

void Skeleton::visitEid(Eid *eid)
{
  /* Code For Eid Goes Here */

  visitIdent(eid->ident_);

}

void Skeleton::visitEstring(Estring *estring)
{
  /* Code For Estring Goes Here */

  visitString(estring->string_);

}

void Skeleton::visitIntsize1(Intsize1 *intsize)
{
  /* Code For Intsize1 Goes Here */

  if (intsize->int_) intsize->int_->accept(this);

}

void Skeleton::visitIntsize_(Intsize_ *intsize)
{
  /* Code For Intsize_ Goes Here */


}

void Skeleton::visitIntsizefixed1(Intsizefixed1 *intsizefixed)
{
  /* Code For Intsizefixed1 Goes Here */

  if (intsizefixed->int_) intsizefixed->int_->accept(this);

}

void Skeleton::visitIntsizefixed_(Intsizefixed_ *intsizefixed)
{
  /* Code For Intsizefixed_ Goes Here */


}

void Skeleton::visitEint(Eint *eint)
{
  /* Code For Eint Goes Here */

  visitInteger(eint->integer_);

}


void Skeleton::visitListModule(ListModule *list_module)
{
  for (ListModule::iterator i = list_module->begin() ; i != list_module->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListPort(ListPort *list_port)
{
  for (ListPort::iterator i = list_port->begin() ; i != list_port->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListField(ListField *list_field)
{
  for (ListField::iterator i = list_field->begin() ; i != list_field->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListReader(ListReader *list_reader)
{
  for (ListReader::iterator i = list_reader->begin() ; i != list_reader->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListWriter(ListWriter *list_writer)
{
  for (ListWriter::iterator i = list_writer->begin() ; i != list_writer->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListReadwriter(ListReadwriter *list_readwriter)
{
  for (ListReadwriter::iterator i = list_readwriter->begin() ; i != list_readwriter->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListStmt(ListStmt *list_stmt)
{
  for (ListStmt::iterator i = list_stmt->begin() ; i != list_stmt->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListExp(ListExp *list_exp)
{
  for (ListExp::iterator i = list_exp->begin() ; i != list_exp->end() ; ++i)
  {
    (*i)->accept(this);
  }
}

void Skeleton::visitListInt(ListInt *list_int)
{
  for (ListInt::iterator i = list_int->begin() ; i != list_int->end() ; ++i)
  {
    (*i)->accept(this);
  }
}


void Skeleton::visitInteger(Integer x)
{
  /* Code for Integer Goes Here */
}

void Skeleton::visitChar(Char x)
{
  /* Code for Char Goes Here */
}

void Skeleton::visitDouble(Double x)
{
  /* Code for Double Goes Here */
}

void Skeleton::visitString(String x)
{
  /* Code for String Goes Here */
}

void Skeleton::visitIdent(Ident x)
{
  /* Code for Ident Goes Here */
}


}
