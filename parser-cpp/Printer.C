/*** BNFC-Generated Pretty Printer and Abstract Syntax Viewer ***/

#include <string>
#include "Printer.H"
#define INDENT_WIDTH 2

namespace FIRRTLFrontend
{
//You may wish to change render
void PrintAbsyn::render(Char c)
{
  if (c == '{')
  {
     bufAppend('\n');
     indent();
     bufAppend(c);
     _n_ = _n_ + INDENT_WIDTH;
     bufAppend('\n');
     indent();
  }
  else if (c == '(' || c == '[')
     bufAppend(c);
  else if (c == ')' || c == ']')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == '}')
  {
     int t;
     _n_ = _n_ - INDENT_WIDTH;
     for (t=0; t<INDENT_WIDTH; t++) {
       backup();
     }
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ',')
  {
     backup();
     bufAppend(c);
     bufAppend(' ');
  }
  else if (c == ';')
  {
     backup();
     bufAppend(c);
     bufAppend('\n');
     indent();
  }
  else if (c == ' ') bufAppend(c);
  else if (c == 0) return;
  else
  {
     bufAppend(c);
     bufAppend(' ');
  }
}

void PrintAbsyn::render(String s)
{
  render(s.c_str());
}

bool allIsSpace(const char *s)
{
  char c;
  while ((c = *s++))
    if (! isspace(c)) return false;
  return true;
}

void PrintAbsyn::render(const char *s)
{
  if (*s) /* C string not empty */
  {
    if (allIsSpace(s)) {
      backup();
      bufAppend(s);
    } else {
      bufAppend(s);
      bufAppend(' ');
    }
  }
}

void PrintAbsyn::indent()
{
  int n = _n_;
  while (--n >= 0)
    bufAppend(' ');
}

void PrintAbsyn::backup()
{
  if (buf_[cur_ - 1] == ' ')
    buf_[--cur_] = 0;
}

PrintAbsyn::PrintAbsyn(void)
{
  _i_ = 0; _n_ = 0;
  buf_ = 0;
  bufReset();
}

PrintAbsyn::~PrintAbsyn(void)
{
}

char *PrintAbsyn::print(Visitable *v)
{
  _i_ = 0; _n_ = 0;
  bufReset();
  v->accept(this);
  return buf_;
}

void PrintAbsyn::visitCircuit(Circuit *p) {} //abstract class

void PrintAbsyn::visitECircuit(ECircuit *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("circuit");
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->info_->accept(this);
  render('(');
  if(p->listmodule_) {_i_ = 0; p->listmodule_->accept(this);}
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListModule(ListModule *listmodule)
{
  for (ListModule::const_iterator i = listmodule->begin() ; i != listmodule->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmodule->end() - 1) render("");
  }
}void PrintAbsyn::visitModule(Module *p) {} //abstract class

void PrintAbsyn::visitModule1(Module1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("module");
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->info_->accept(this);
  render('(');
  if(p->listport_) {_i_ = 0; p->listport_->accept(this);}
  _i_ = 0; p->stmt_->accept(this);
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitModule2(Module2 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("extmodule");
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->info_->accept(this);
  render('(');
  if(p->listport_) {_i_ = 0; p->listport_->accept(this);}
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListPort(ListPort *listport)
{
  for (ListPort::const_iterator i = listport->begin() ; i != listport->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listport->end() - 1) render("");
  }
}void PrintAbsyn::visitPort(Port *p) {} //abstract class

void PrintAbsyn::visitEPort(EPort *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->dir_->accept(this);
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->type_->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDir(Dir *p) {} //abstract class

void PrintAbsyn::visitDir_input(Dir_input *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("input");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitDir_output(Dir_output *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("output");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType(Type *p) {} //abstract class

void PrintAbsyn::visitType1(Type1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("UInt");
  _i_ = 0; p->intsize_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType2(Type2 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("SInt");
  _i_ = 0; p->intsize_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType3(Type3 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("Fixed");
  _i_ = 0; p->intsize_->accept(this);
  _i_ = 0; p->intsizefixed_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType_Clock(Type_Clock *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("Clock");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType4(Type4 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("Analog");
  _i_ = 0; p->intsize_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType5(Type5 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render('{');
  if(p->listfield_) {_i_ = 0; p->listfield_->accept(this);}
  render('}');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitType6(Type6 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->type_->accept(this);
  render('[');
  _i_ = 0; p->int_->accept(this);
  render(']');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListField(ListField *listfield)
{
  for (ListField::const_iterator i = listfield->begin() ; i != listfield->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listfield->end() - 1) render("");
  }
}void PrintAbsyn::visitField(Field *p) {} //abstract class

void PrintAbsyn::visitEField(EField *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->flipliteral_->accept(this);
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->type_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFlipliteral(Flipliteral *p) {} //abstract class

void PrintAbsyn::visitFlipliteral_flip(Flipliteral_flip *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("flip");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitFlipliteral_(Flipliteral_ *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);


  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt(Stmt *p) {} //abstract class

void PrintAbsyn::visitStmt1(Stmt1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("wire");
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->type_->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt2(Stmt2 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("reg");
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->type_->accept(this);
  _i_ = 0; p->exp_->accept(this);
  _i_ = 0; p->withreset_->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt3(Stmt3 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("mem");
  _i_ = 0; p->id_->accept(this);
  render(':');
  _i_ = 0; p->info_->accept(this);
  render('(');
  render("data-type");
  render("=>");
  _i_ = 0; p->type_->accept(this);
  render("depth");
  render("=>");
  _i_ = 0; p->int_1->accept(this);
  render("read-latency");
  render("=>");
  _i_ = 0; p->int_2->accept(this);
  render("write-latency");
  render("=>");
  _i_ = 0; p->int_3->accept(this);
  render("read-under-write");
  render("=>");
  _i_ = 0; p->ruw_->accept(this);
  if(p->listreader_) {_i_ = 0; p->listreader_->accept(this);}
  if(p->listwriter_) {_i_ = 0; p->listwriter_->accept(this);}
  if(p->listreadwriter_) {_i_ = 0; p->listreadwriter_->accept(this);}
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt4(Stmt4 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("inst");
  _i_ = 0; p->id_1->accept(this);
  render("of");
  _i_ = 0; p->id_2->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt5(Stmt5 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("node");
  _i_ = 0; p->id_->accept(this);
  render('=');
  _i_ = 0; p->exp_->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt6(Stmt6 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->exp_1->accept(this);
  render("<=");
  _i_ = 0; p->exp_2->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt7(Stmt7 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->exp_1->accept(this);
  render("<-");
  _i_ = 0; p->exp_2->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt8(Stmt8 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->exp_->accept(this);
  render("is");
  render("invalid");
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt9(Stmt9 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("attach");
  render('(');
  if(p->listexp_) {_i_ = 0; p->listexp_->accept(this);}
  render(')');
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt10(Stmt10 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("when");
  _i_ = 0; p->exp_->accept(this);
  render(':');
  _i_ = 0; p->info_->accept(this);
  _i_ = 0; p->stmt_->accept(this);
  _i_ = 0; p->elsestmt_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt11(Stmt11 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("stop");
  render('(');
  _i_ = 0; p->exp_1->accept(this);
  render(',');
  _i_ = 0; p->exp_2->accept(this);
  render(',');
  _i_ = 0; p->int_->accept(this);
  render(')');
  _i_ = 0; p->colonid_->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt12(Stmt12 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("printf");
  render('(');
  _i_ = 0; p->exp_1->accept(this);
  render(',');
  _i_ = 0; p->exp_2->accept(this);
  render(',');
  _i_ = 0; p->sstring_->accept(this);
  render(',');
  if(p->listexp_) {_i_ = 0; p->listexp_->accept(this);}
  render(')');
  _i_ = 0; p->colonid_->accept(this);
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt13(Stmt13 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("skip");
  _i_ = 0; p->info_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitStmt14(Stmt14 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render('(');
  if(p->liststmt_) {_i_ = 0; p->liststmt_->accept(this);}
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListReader(ListReader *listreader)
{
  for (ListReader::const_iterator i = listreader->begin() ; i != listreader->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listreader->end() - 1) render("");
  }
}void PrintAbsyn::visitListWriter(ListWriter *listwriter)
{
  for (ListWriter::const_iterator i = listwriter->begin() ; i != listwriter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listwriter->end() - 1) render("");
  }
}void PrintAbsyn::visitListReadwriter(ListReadwriter *listreadwriter)
{
  for (ListReadwriter::const_iterator i = listreadwriter->begin() ; i != listreadwriter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listreadwriter->end() - 1) render("");
  }
}void PrintAbsyn::visitListStmt(ListStmt *liststmt)
{
  for (ListStmt::const_iterator i = liststmt->begin() ; i != liststmt->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != liststmt->end() - 1) render("");
  }
}void PrintAbsyn::visitReader(Reader *p) {} //abstract class

void PrintAbsyn::visitEReader(EReader *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("reader");
  render("=>");
  _i_ = 0; p->id_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitWriter(Writer *p) {} //abstract class

void PrintAbsyn::visitEWriter(EWriter *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("writer");
  render("=>");
  _i_ = 0; p->id_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitReadwriter(Readwriter *p) {} //abstract class

void PrintAbsyn::visitEReadWriter(EReadWriter *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("readwriter");
  render("=>");
  _i_ = 0; p->id_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitColonid(Colonid *p) {} //abstract class

void PrintAbsyn::visitColonid1(Colonid1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render(':');
  _i_ = 0; p->id_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitColonid_(Colonid_ *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);


  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitElsestmt(Elsestmt *p) {} //abstract class

void PrintAbsyn::visitElsestmt1(Elsestmt1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("else");
  render(':');
  _i_ = 0; p->stmt_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitElsestmt_(Elsestmt_ *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);


  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitWithreset(Withreset *p) {} //abstract class

void PrintAbsyn::visitWithreset1(Withreset1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render('(');
  render("with");
  render(':');
  render('{');
  render("reset");
  render("=>");
  render('(');
  _i_ = 0; p->exp_1->accept(this);
  render(',');
  _i_ = 0; p->exp_2->accept(this);
  render(')');
  render('}');
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitWithreset_(Withreset_ *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);


  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRuw(Ruw *p) {} //abstract class

void PrintAbsyn::visitRuw_old(Ruw_old *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("old");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRuw_new(Ruw_new *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("new");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitRuw_undefined(Ruw_undefined *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("undefined");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInfo(Info *p) {} //abstract class

void PrintAbsyn::visitInfo1(Info1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render('@');
  render('[');
  _i_ = 0; p->sstring_->accept(this);
  render(']');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInfo_(Info_ *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);


  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp(Exp *p) {} //abstract class

void PrintAbsyn::visitExp1(Exp1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("UInt");
  _i_ = 0; p->intsize_->accept(this);
  render('(');
  _i_ = 0; p->int_->accept(this);
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp2(Exp2 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("UInt");
  _i_ = 0; p->intsize_->accept(this);
  render('(');
  _i_ = 0; p->sstring_->accept(this);
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp3(Exp3 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("SInt");
  _i_ = 0; p->intsize_->accept(this);
  render('(');
  _i_ = 0; p->int_->accept(this);
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp4(Exp4 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("SInt");
  _i_ = 0; p->intsize_->accept(this);
  render('(');
  _i_ = 0; p->sstring_->accept(this);
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExpId(ExpId *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->id_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp5(Exp5 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->exp_->accept(this);
  render('.');
  _i_ = 0; p->id_->accept(this);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp6(Exp6 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->exp_->accept(this);
  render('[');
  _i_ = 0; p->int_->accept(this);
  render(']');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp7(Exp7 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->exp_1->accept(this);
  render('[');
  _i_ = 0; p->exp_2->accept(this);
  render(']');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp8(Exp8 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("mux");
  render('(');
  _i_ = 0; p->exp_1->accept(this);
  render(',');
  _i_ = 0; p->exp_2->accept(this);
  render(',');
  _i_ = 0; p->exp_3->accept(this);
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp9(Exp9 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("validif");
  render('(');
  _i_ = 0; p->exp_1->accept(this);
  render(',');
  _i_ = 0; p->exp_2->accept(this);
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitExp10(Exp10 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  _i_ = 0; p->primop_->accept(this);
  render('(');
  if(p->listexp_) {_i_ = 0; p->listexp_->accept(this);}
  render(',');
  if(p->listint_) {_i_ = 0; p->listint_->accept(this);}
  render(')');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitListExp(ListExp *listexp)
{
  for (ListExp::const_iterator i = listexp->begin() ; i != listexp->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexp->end() - 1) render("");
  }
}void PrintAbsyn::visitListInt(ListInt *listint)
{
  for (ListInt::const_iterator i = listint->begin() ; i != listint->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listint->end() - 1) render("");
  }
}void PrintAbsyn::visitPrimop(Primop *p) {} //abstract class

void PrintAbsyn::visitPrimop_add(Primop_add *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("add");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_sub(Primop_sub *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("sub");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_mul(Primop_mul *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("mul");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_div(Primop_div *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("div");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_mod(Primop_mod *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("mod");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_lt(Primop_lt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("lt");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_leq(Primop_leq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("leq");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_gt(Primop_gt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("gt");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_geq(Primop_geq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("geq");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_eq(Primop_eq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("eq");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_neq(Primop_neq *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("neq");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_pad(Primop_pad *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("pad");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_asUInt(Primop_asUInt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("asUInt");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_asSInt(Primop_asSInt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("asSInt");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_asClock(Primop_asClock *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("asClock");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_shl(Primop_shl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("shl");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_shr(Primop_shr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("shr");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_dshl(Primop_dshl *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("dshl");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_dshr(Primop_dshr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("dshr");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_cvt(Primop_cvt *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("cvt");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_neg(Primop_neg *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("neg");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_not(Primop_not *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("not");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_and(Primop_and *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("and");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_or(Primop_or *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("or");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_xor(Primop_xor *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("xor");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_andr(Primop_andr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("andr");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_orr(Primop_orr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("orr");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_xorr(Primop_xorr *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("xorr");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_cat(Primop_cat *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("cat");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_bits(Primop_bits *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("bits");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_head(Primop_head *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("head");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitPrimop_tail(Primop_tail *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("tail");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitId(Id *p) {} //abstract class

void PrintAbsyn::visitEid(Eid *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  visitIdent(p->ident_);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitSString(SString *p) {} //abstract class

void PrintAbsyn::visitEstring(Estring *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  visitString(p->string_);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitIntsize(Intsize *p) {} //abstract class

void PrintAbsyn::visitIntsize1(Intsize1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render('<');
  _i_ = 0; p->int_->accept(this);
  render('>');

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitIntsize_(Intsize_ *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);


  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitIntsizefixed(Intsizefixed *p) {} //abstract class

void PrintAbsyn::visitIntsizefixed1(Intsizefixed1 *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  render("<<");
  _i_ = 0; p->int_->accept(this);
  render(">>");

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitIntsizefixed_(Intsizefixed_ *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);


  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInt(Int *p) {} //abstract class

void PrintAbsyn::visitEint(Eint *p)
{
  int oldi = _i_;
  if (oldi > 0) render(FIRRTLFRONTEND__L_PAREN);

  visitInteger(p->integer_);

  if (oldi > 0) render(FIRRTLFRONTEND__R_PAREN);

  _i_ = oldi;
}

void PrintAbsyn::visitInteger(Integer i)
{
  char tmp[20];
  sprintf(tmp, "%d", i);
  render(tmp);
}

void PrintAbsyn::visitDouble(Double d)
{
  char tmp[24];
  sprintf(tmp, "%.15g", d);
  render(tmp);
}

void PrintAbsyn::visitChar(Char c)
{
  char tmp[4];
  sprintf(tmp, "'%c'", c);
  render(tmp);
}

void PrintAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
  bufAppend(' ');
}

void PrintAbsyn::visitIdent(String s)
{
  render(s);
}

ShowAbsyn::ShowAbsyn(void)
{
  buf_ = 0;
  bufReset();
}

ShowAbsyn::~ShowAbsyn(void)
{
}

char *ShowAbsyn::show(Visitable *v)
{
  bufReset();
  v->accept(this);
  return buf_;
}

void ShowAbsyn::visitCircuit(Circuit *p) {} //abstract class

void ShowAbsyn::visitECircuit(ECircuit *p)
{
  bufAppend('(');
  bufAppend("ECircuit");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listmodule_)  p->listmodule_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitListModule(ListModule *listmodule)
{
  for (ListModule::const_iterator i = listmodule->begin() ; i != listmodule->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listmodule->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitModule(Module *p) {} //abstract class

void ShowAbsyn::visitModule1(Module1 *p)
{
  bufAppend('(');
  bufAppend("Module1");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listport_)  p->listport_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->stmt_)  p->stmt_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitModule2(Module2 *p)
{
  bufAppend('(');
  bufAppend("Module2");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listport_)  p->listport_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitListPort(ListPort *listport)
{
  for (ListPort::const_iterator i = listport->begin() ; i != listport->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listport->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitPort(Port *p) {} //abstract class

void ShowAbsyn::visitEPort(EPort *p)
{
  bufAppend('(');
  bufAppend("EPort");
  bufAppend(' ');
  bufAppend('[');
  if (p->dir_)  p->dir_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitDir(Dir *p) {} //abstract class

void ShowAbsyn::visitDir_input(Dir_input *p)
{
  bufAppend("Dir_input");
}
void ShowAbsyn::visitDir_output(Dir_output *p)
{
  bufAppend("Dir_output");
}
void ShowAbsyn::visitType(Type *p) {} //abstract class

void ShowAbsyn::visitType1(Type1 *p)
{
  bufAppend('(');
  bufAppend("Type1");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitType2(Type2 *p)
{
  bufAppend('(');
  bufAppend("Type2");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitType3(Type3 *p)
{
  bufAppend('(');
  bufAppend("Type3");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->intsizefixed_)  p->intsizefixed_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitType_Clock(Type_Clock *p)
{
  bufAppend("Type_Clock");
}
void ShowAbsyn::visitType4(Type4 *p)
{
  bufAppend('(');
  bufAppend("Type4");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitType5(Type5 *p)
{
  bufAppend('(');
  bufAppend("Type5");
  bufAppend(' ');
  bufAppend('[');
  if (p->listfield_)  p->listfield_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitType6(Type6 *p)
{
  bufAppend('(');
  bufAppend("Type6");
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->int_)  p->int_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitListField(ListField *listfield)
{
  for (ListField::const_iterator i = listfield->begin() ; i != listfield->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listfield->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitField(Field *p) {} //abstract class

void ShowAbsyn::visitEField(EField *p)
{
  bufAppend('(');
  bufAppend("EField");
  bufAppend(' ');
  bufAppend('[');
  if (p->flipliteral_)  p->flipliteral_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitFlipliteral(Flipliteral *p) {} //abstract class

void ShowAbsyn::visitFlipliteral_flip(Flipliteral_flip *p)
{
  bufAppend("Flipliteral_flip");
}
void ShowAbsyn::visitFlipliteral_(Flipliteral_ *p)
{
  bufAppend("Flipliteral_");
}
void ShowAbsyn::visitStmt(Stmt *p) {} //abstract class

void ShowAbsyn::visitStmt1(Stmt1 *p)
{
  bufAppend('(');
  bufAppend("Stmt1");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt2(Stmt2 *p)
{
  bufAppend('(');
  bufAppend("Stmt2");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->withreset_)  p->withreset_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt3(Stmt3 *p)
{
  bufAppend('(');
  bufAppend("Stmt3");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->type_)  p->type_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  p->int_1->accept(this);
  bufAppend(' ');
  p->int_2->accept(this);
  bufAppend(' ');
  p->int_3->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->ruw_)  p->ruw_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listreader_)  p->listreader_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listwriter_)  p->listwriter_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listreadwriter_)  p->listreadwriter_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitStmt4(Stmt4 *p)
{
  bufAppend('(');
  bufAppend("Stmt4");
  bufAppend(' ');
  p->id_1->accept(this);
  bufAppend(' ');
  p->id_2->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt5(Stmt5 *p)
{
  bufAppend('(');
  bufAppend("Stmt5");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt6(Stmt6 *p)
{
  bufAppend('(');
  bufAppend("Stmt6");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt7(Stmt7 *p)
{
  bufAppend('(');
  bufAppend("Stmt7");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt8(Stmt8 *p)
{
  bufAppend('(');
  bufAppend("Stmt8");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt9(Stmt9 *p)
{
  bufAppend('(');
  bufAppend("Stmt9");
  bufAppend(' ');
  bufAppend('[');
  if (p->listexp_)  p->listexp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt10(Stmt10 *p)
{
  bufAppend('(');
  bufAppend("Stmt10");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->stmt_)  p->stmt_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->elsestmt_)  p->elsestmt_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt11(Stmt11 *p)
{
  bufAppend('(');
  bufAppend("Stmt11");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->int_)  p->int_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->colonid_)  p->colonid_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt12(Stmt12 *p)
{
  bufAppend('(');
  bufAppend("Stmt12");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  bufAppend('[');
  if (p->sstring_)  p->sstring_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexp_)  p->listexp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->colonid_)  p->colonid_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt13(Stmt13 *p)
{
  bufAppend('(');
  bufAppend("Stmt13");
  bufAppend(' ');
  bufAppend('[');
  if (p->info_)  p->info_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitStmt14(Stmt14 *p)
{
  bufAppend('(');
  bufAppend("Stmt14");
  bufAppend(' ');
  bufAppend('[');
  if (p->liststmt_)  p->liststmt_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitListReader(ListReader *listreader)
{
  for (ListReader::const_iterator i = listreader->begin() ; i != listreader->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listreader->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListWriter(ListWriter *listwriter)
{
  for (ListWriter::const_iterator i = listwriter->begin() ; i != listwriter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listwriter->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListReadwriter(ListReadwriter *listreadwriter)
{
  for (ListReadwriter::const_iterator i = listreadwriter->begin() ; i != listreadwriter->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listreadwriter->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListStmt(ListStmt *liststmt)
{
  for (ListStmt::const_iterator i = liststmt->begin() ; i != liststmt->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != liststmt->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitReader(Reader *p) {} //abstract class

void ShowAbsyn::visitEReader(EReader *p)
{
  bufAppend('(');
  bufAppend("EReader");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitWriter(Writer *p) {} //abstract class

void ShowAbsyn::visitEWriter(EWriter *p)
{
  bufAppend('(');
  bufAppend("EWriter");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitReadwriter(Readwriter *p) {} //abstract class

void ShowAbsyn::visitEReadWriter(EReadWriter *p)
{
  bufAppend('(');
  bufAppend("EReadWriter");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitColonid(Colonid *p) {} //abstract class

void ShowAbsyn::visitColonid1(Colonid1 *p)
{
  bufAppend('(');
  bufAppend("Colonid1");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitColonid_(Colonid_ *p)
{
  bufAppend("Colonid_");
}
void ShowAbsyn::visitElsestmt(Elsestmt *p) {} //abstract class

void ShowAbsyn::visitElsestmt1(Elsestmt1 *p)
{
  bufAppend('(');
  bufAppend("Elsestmt1");
  bufAppend(' ');
  bufAppend('[');
  if (p->stmt_)  p->stmt_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitElsestmt_(Elsestmt_ *p)
{
  bufAppend("Elsestmt_");
}
void ShowAbsyn::visitWithreset(Withreset *p) {} //abstract class

void ShowAbsyn::visitWithreset1(Withreset1 *p)
{
  bufAppend('(');
  bufAppend("Withreset1");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitWithreset_(Withreset_ *p)
{
  bufAppend("Withreset_");
}
void ShowAbsyn::visitRuw(Ruw *p) {} //abstract class

void ShowAbsyn::visitRuw_old(Ruw_old *p)
{
  bufAppend("Ruw_old");
}
void ShowAbsyn::visitRuw_new(Ruw_new *p)
{
  bufAppend("Ruw_new");
}
void ShowAbsyn::visitRuw_undefined(Ruw_undefined *p)
{
  bufAppend("Ruw_undefined");
}
void ShowAbsyn::visitInfo(Info *p) {} //abstract class

void ShowAbsyn::visitInfo1(Info1 *p)
{
  bufAppend('(');
  bufAppend("Info1");
  bufAppend(' ');
  bufAppend('[');
  if (p->sstring_)  p->sstring_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitInfo_(Info_ *p)
{
  bufAppend("Info_");
}
void ShowAbsyn::visitExp(Exp *p) {} //abstract class

void ShowAbsyn::visitExp1(Exp1 *p)
{
  bufAppend('(');
  bufAppend("Exp1");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->int_)  p->int_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExp2(Exp2 *p)
{
  bufAppend('(');
  bufAppend("Exp2");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->sstring_)  p->sstring_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExp3(Exp3 *p)
{
  bufAppend('(');
  bufAppend("Exp3");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->int_)  p->int_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExp4(Exp4 *p)
{
  bufAppend('(');
  bufAppend("Exp4");
  bufAppend(' ');
  bufAppend('[');
  if (p->intsize_)  p->intsize_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->sstring_)  p->sstring_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExpId(ExpId *p)
{
  bufAppend('(');
  bufAppend("ExpId");
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitExp5(Exp5 *p)
{
  bufAppend('(');
  bufAppend("Exp5");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->id_)  p->id_->accept(this);
  bufAppend(']');
  bufAppend(')');
}
void ShowAbsyn::visitExp6(Exp6 *p)
{
  bufAppend('(');
  bufAppend("Exp6");
  bufAppend(' ');
  bufAppend('[');
  if (p->exp_)  p->exp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->int_)  p->int_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExp7(Exp7 *p)
{
  bufAppend('(');
  bufAppend("Exp7");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExp8(Exp8 *p)
{
  bufAppend('(');
  bufAppend("Exp8");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  p->exp_3->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExp9(Exp9 *p)
{
  bufAppend('(');
  bufAppend("Exp9");
  bufAppend(' ');
  p->exp_1->accept(this);
  bufAppend(' ');
  p->exp_2->accept(this);
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitExp10(Exp10 *p)
{
  bufAppend('(');
  bufAppend("Exp10");
  bufAppend(' ');
  bufAppend('[');
  if (p->primop_)  p->primop_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listexp_)  p->listexp_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend('[');
  if (p->listint_)  p->listint_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitListExp(ListExp *listexp)
{
  for (ListExp::const_iterator i = listexp->begin() ; i != listexp->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listexp->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitListInt(ListInt *listint)
{
  for (ListInt::const_iterator i = listint->begin() ; i != listint->end() ; ++i)
  {
    (*i)->accept(this);
    if (i != listint->end() - 1) bufAppend(", ");
  }
}

void ShowAbsyn::visitPrimop(Primop *p) {} //abstract class

void ShowAbsyn::visitPrimop_add(Primop_add *p)
{
  bufAppend("Primop_add");
}
void ShowAbsyn::visitPrimop_sub(Primop_sub *p)
{
  bufAppend("Primop_sub");
}
void ShowAbsyn::visitPrimop_mul(Primop_mul *p)
{
  bufAppend("Primop_mul");
}
void ShowAbsyn::visitPrimop_div(Primop_div *p)
{
  bufAppend("Primop_div");
}
void ShowAbsyn::visitPrimop_mod(Primop_mod *p)
{
  bufAppend("Primop_mod");
}
void ShowAbsyn::visitPrimop_lt(Primop_lt *p)
{
  bufAppend("Primop_lt");
}
void ShowAbsyn::visitPrimop_leq(Primop_leq *p)
{
  bufAppend("Primop_leq");
}
void ShowAbsyn::visitPrimop_gt(Primop_gt *p)
{
  bufAppend("Primop_gt");
}
void ShowAbsyn::visitPrimop_geq(Primop_geq *p)
{
  bufAppend("Primop_geq");
}
void ShowAbsyn::visitPrimop_eq(Primop_eq *p)
{
  bufAppend("Primop_eq");
}
void ShowAbsyn::visitPrimop_neq(Primop_neq *p)
{
  bufAppend("Primop_neq");
}
void ShowAbsyn::visitPrimop_pad(Primop_pad *p)
{
  bufAppend("Primop_pad");
}
void ShowAbsyn::visitPrimop_asUInt(Primop_asUInt *p)
{
  bufAppend("Primop_asUInt");
}
void ShowAbsyn::visitPrimop_asSInt(Primop_asSInt *p)
{
  bufAppend("Primop_asSInt");
}
void ShowAbsyn::visitPrimop_asClock(Primop_asClock *p)
{
  bufAppend("Primop_asClock");
}
void ShowAbsyn::visitPrimop_shl(Primop_shl *p)
{
  bufAppend("Primop_shl");
}
void ShowAbsyn::visitPrimop_shr(Primop_shr *p)
{
  bufAppend("Primop_shr");
}
void ShowAbsyn::visitPrimop_dshl(Primop_dshl *p)
{
  bufAppend("Primop_dshl");
}
void ShowAbsyn::visitPrimop_dshr(Primop_dshr *p)
{
  bufAppend("Primop_dshr");
}
void ShowAbsyn::visitPrimop_cvt(Primop_cvt *p)
{
  bufAppend("Primop_cvt");
}
void ShowAbsyn::visitPrimop_neg(Primop_neg *p)
{
  bufAppend("Primop_neg");
}
void ShowAbsyn::visitPrimop_not(Primop_not *p)
{
  bufAppend("Primop_not");
}
void ShowAbsyn::visitPrimop_and(Primop_and *p)
{
  bufAppend("Primop_and");
}
void ShowAbsyn::visitPrimop_or(Primop_or *p)
{
  bufAppend("Primop_or");
}
void ShowAbsyn::visitPrimop_xor(Primop_xor *p)
{
  bufAppend("Primop_xor");
}
void ShowAbsyn::visitPrimop_andr(Primop_andr *p)
{
  bufAppend("Primop_andr");
}
void ShowAbsyn::visitPrimop_orr(Primop_orr *p)
{
  bufAppend("Primop_orr");
}
void ShowAbsyn::visitPrimop_xorr(Primop_xorr *p)
{
  bufAppend("Primop_xorr");
}
void ShowAbsyn::visitPrimop_cat(Primop_cat *p)
{
  bufAppend("Primop_cat");
}
void ShowAbsyn::visitPrimop_bits(Primop_bits *p)
{
  bufAppend("Primop_bits");
}
void ShowAbsyn::visitPrimop_head(Primop_head *p)
{
  bufAppend("Primop_head");
}
void ShowAbsyn::visitPrimop_tail(Primop_tail *p)
{
  bufAppend("Primop_tail");
}
void ShowAbsyn::visitId(Id *p) {} //abstract class

void ShowAbsyn::visitEid(Eid *p)
{
  bufAppend('(');
  bufAppend("Eid");
  bufAppend(' ');
  visitIdent(p->ident_);
  bufAppend(')');
}
void ShowAbsyn::visitSString(SString *p) {} //abstract class

void ShowAbsyn::visitEstring(Estring *p)
{
  bufAppend('(');
  bufAppend("Estring");
  bufAppend(' ');
  visitString(p->string_);
  bufAppend(')');
}
void ShowAbsyn::visitIntsize(Intsize *p) {} //abstract class

void ShowAbsyn::visitIntsize1(Intsize1 *p)
{
  bufAppend('(');
  bufAppend("Intsize1");
  bufAppend(' ');
  bufAppend('[');
  if (p->int_)  p->int_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitIntsize_(Intsize_ *p)
{
  bufAppend("Intsize_");
}
void ShowAbsyn::visitIntsizefixed(Intsizefixed *p) {} //abstract class

void ShowAbsyn::visitIntsizefixed1(Intsizefixed1 *p)
{
  bufAppend('(');
  bufAppend("Intsizefixed1");
  bufAppend(' ');
  bufAppend('[');
  if (p->int_)  p->int_->accept(this);
  bufAppend(']');
  bufAppend(' ');
  bufAppend(')');
}
void ShowAbsyn::visitIntsizefixed_(Intsizefixed_ *p)
{
  bufAppend("Intsizefixed_");
}
void ShowAbsyn::visitInt(Int *p) {} //abstract class

void ShowAbsyn::visitEint(Eint *p)
{
  bufAppend('(');
  bufAppend("Eint");
  bufAppend(' ');
  visitInteger(p->integer_);
  bufAppend(')');
}
void ShowAbsyn::visitInteger(Integer i)
{
  char tmp[20];
  sprintf(tmp, "%d", i);
  bufAppend(tmp);
}
void ShowAbsyn::visitDouble(Double d)
{
  char tmp[24];
  sprintf(tmp, "%.15g", d);
  bufAppend(tmp);
}
void ShowAbsyn::visitChar(Char c)
{
  bufAppend('\'');
  bufAppend(c);
  bufAppend('\'');
}
void ShowAbsyn::visitString(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}
void ShowAbsyn::visitIdent(String s)
{
  bufAppend('\"');
  bufAppend(s);
  bufAppend('\"');
}

}
