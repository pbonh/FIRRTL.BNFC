/* This Bison file was machine-generated by BNFC */
%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include "ParserError.H"
#include "Absyn.H"

#define YYMAXDEPTH 10000000

typedef struct yy_buffer_state *YY_BUFFER_STATE;
int yyparse(void);
int yylex(void);
YY_BUFFER_STATE FIRRTLFrontendyy_scan_string(const char *str);
void FIRRTLFrontendyy_delete_buffer(YY_BUFFER_STATE buf);
int FIRRTLFrontendyy_mylinenumber;
void FIRRTLFrontendinitialize_lexer(FILE * inp);
int FIRRTLFrontendyywrap(void)
{
  return 1;
}
void FIRRTLFrontendyyerror(const char *str)
{
  throw FIRRTLFrontend::parse_error(FIRRTLFrontendyy_mylinenumber,str);
}

namespace FIRRTLFrontend
{

static Circuit* YY_RESULT_Circuit_ = 0;
static ListModule* YY_RESULT_ListModule_ = 0;
static Module* YY_RESULT_Module_ = 0;
static ListPort* YY_RESULT_ListPort_ = 0;
static Port* YY_RESULT_Port_ = 0;
static Dir* YY_RESULT_Dir_ = 0;
static Type* YY_RESULT_Type_ = 0;
static ListField* YY_RESULT_ListField_ = 0;
static Field* YY_RESULT_Field_ = 0;
static Flipliteral* YY_RESULT_Flipliteral_ = 0;
static Stmt* YY_RESULT_Stmt_ = 0;
static ListReader* YY_RESULT_ListReader_ = 0;
static ListWriter* YY_RESULT_ListWriter_ = 0;
static ListReadwriter* YY_RESULT_ListReadwriter_ = 0;
static ListStmt* YY_RESULT_ListStmt_ = 0;
static Reader* YY_RESULT_Reader_ = 0;
static Writer* YY_RESULT_Writer_ = 0;
static Readwriter* YY_RESULT_Readwriter_ = 0;
static Colonid* YY_RESULT_Colonid_ = 0;
static Elsestmt* YY_RESULT_Elsestmt_ = 0;
static Withreset* YY_RESULT_Withreset_ = 0;
static Ruw* YY_RESULT_Ruw_ = 0;
static Info* YY_RESULT_Info_ = 0;
static Exp* YY_RESULT_Exp_ = 0;
static ListExp* YY_RESULT_ListExp_ = 0;
static ListInt* YY_RESULT_ListInt_ = 0;
static Primop* YY_RESULT_Primop_ = 0;
static Id* YY_RESULT_Id_ = 0;
static SString* YY_RESULT_SString_ = 0;
static Intsize* YY_RESULT_Intsize_ = 0;
static Intsizefixed* YY_RESULT_Intsizefixed_ = 0;
static Int* YY_RESULT_Int_ = 0;

Circuit* pCircuit(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Circuit_;
  }
}
Circuit* pCircuit(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Circuit_;
  }
}

ListModule* pListModule(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListModule_->begin(), YY_RESULT_ListModule_->end());
    return YY_RESULT_ListModule_;
  }
}
ListModule* pListModule(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListModule_->begin(), YY_RESULT_ListModule_->end());
    return YY_RESULT_ListModule_;
  }
}

Module* pModule(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Module_;
  }
}
Module* pModule(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Module_;
  }
}

ListPort* pListPort(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListPort_->begin(), YY_RESULT_ListPort_->end());
    return YY_RESULT_ListPort_;
  }
}
ListPort* pListPort(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListPort_->begin(), YY_RESULT_ListPort_->end());
    return YY_RESULT_ListPort_;
  }
}

Port* pPort(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Port_;
  }
}
Port* pPort(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Port_;
  }
}

Dir* pDir(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Dir_;
  }
}
Dir* pDir(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Dir_;
  }
}

Type* pType(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type* pType(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

ListField* pListField(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListField_->begin(), YY_RESULT_ListField_->end());
    return YY_RESULT_ListField_;
  }
}
ListField* pListField(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListField_->begin(), YY_RESULT_ListField_->end());
    return YY_RESULT_ListField_;
  }
}

Field* pField(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Field_;
  }
}
Field* pField(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Field_;
  }
}

Flipliteral* pFlipliteral(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Flipliteral_;
  }
}
Flipliteral* pFlipliteral(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Flipliteral_;
  }
}

Stmt* pStmt(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stmt_;
  }
}
Stmt* pStmt(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stmt_;
  }
}

ListReader* pListReader(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListReader_->begin(), YY_RESULT_ListReader_->end());
    return YY_RESULT_ListReader_;
  }
}
ListReader* pListReader(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListReader_->begin(), YY_RESULT_ListReader_->end());
    return YY_RESULT_ListReader_;
  }
}

ListWriter* pListWriter(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListWriter_->begin(), YY_RESULT_ListWriter_->end());
    return YY_RESULT_ListWriter_;
  }
}
ListWriter* pListWriter(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListWriter_->begin(), YY_RESULT_ListWriter_->end());
    return YY_RESULT_ListWriter_;
  }
}

ListReadwriter* pListReadwriter(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListReadwriter_->begin(), YY_RESULT_ListReadwriter_->end());
    return YY_RESULT_ListReadwriter_;
  }
}
ListReadwriter* pListReadwriter(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListReadwriter_->begin(), YY_RESULT_ListReadwriter_->end());
    return YY_RESULT_ListReadwriter_;
  }
}

ListStmt* pListStmt(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListStmt_->begin(), YY_RESULT_ListStmt_->end());
    return YY_RESULT_ListStmt_;
  }
}
ListStmt* pListStmt(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListStmt_->begin(), YY_RESULT_ListStmt_->end());
    return YY_RESULT_ListStmt_;
  }
}

Reader* pReader(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Reader_;
  }
}
Reader* pReader(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Reader_;
  }
}

Writer* pWriter(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Writer_;
  }
}
Writer* pWriter(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Writer_;
  }
}

Readwriter* pReadwriter(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Readwriter_;
  }
}
Readwriter* pReadwriter(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Readwriter_;
  }
}

Colonid* pColonid(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Colonid_;
  }
}
Colonid* pColonid(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Colonid_;
  }
}

Elsestmt* pElsestmt(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Elsestmt_;
  }
}
Elsestmt* pElsestmt(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Elsestmt_;
  }
}

Withreset* pWithreset(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Withreset_;
  }
}
Withreset* pWithreset(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Withreset_;
  }
}

Ruw* pRuw(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Ruw_;
  }
}
Ruw* pRuw(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Ruw_;
  }
}

Info* pInfo(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Info_;
  }
}
Info* pInfo(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Info_;
  }
}

Exp* pExp(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp* pExp(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

ListExp* pListExp(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListExp_->begin(), YY_RESULT_ListExp_->end());
    return YY_RESULT_ListExp_;
  }
}
ListExp* pListExp(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListExp_->begin(), YY_RESULT_ListExp_->end());
    return YY_RESULT_ListExp_;
  }
}

ListInt* pListInt(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListInt_->begin(), YY_RESULT_ListInt_->end());
    return YY_RESULT_ListInt_;
  }
}
ListInt* pListInt(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(YY_RESULT_ListInt_->begin(), YY_RESULT_ListInt_->end());
    return YY_RESULT_ListInt_;
  }
}

Primop* pPrimop(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Primop_;
  }
}
Primop* pPrimop(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Primop_;
  }
}

Id* pId(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Id_;
  }
}
Id* pId(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Id_;
  }
}

SString* pSString(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_SString_;
  }
}
SString* pSString(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_SString_;
  }
}

Intsize* pIntsize(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Intsize_;
  }
}
Intsize* pIntsize(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Intsize_;
  }
}

Intsizefixed* pIntsizefixed(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Intsizefixed_;
  }
}
Intsizefixed* pIntsizefixed(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Intsizefixed_;
  }
}

Int* pInt(FILE *inp)
{
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(inp);
  if (yyparse())
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Int_;
  }
}
Int* pInt(const char *str)
{
  YY_BUFFER_STATE buf;
  int result;
  FIRRTLFrontendyy_mylinenumber = 1;
  FIRRTLFrontendinitialize_lexer(0);
  buf = FIRRTLFrontendyy_scan_string(str);
  result = yyparse();
  FIRRTLFrontendyy_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Int_;
  }
}


}
%}

%union
{
  int    _int;
  char   _char;
  double _double;
  char*  _string;
  FIRRTLFrontend::Circuit* circuit_;
  FIRRTLFrontend::ListModule* listmodule_;
  FIRRTLFrontend::Module* module_;
  FIRRTLFrontend::ListPort* listport_;
  FIRRTLFrontend::Port* port_;
  FIRRTLFrontend::Dir* dir_;
  FIRRTLFrontend::Type* type_;
  FIRRTLFrontend::ListField* listfield_;
  FIRRTLFrontend::Field* field_;
  FIRRTLFrontend::Flipliteral* flipliteral_;
  FIRRTLFrontend::Stmt* stmt_;
  FIRRTLFrontend::ListReader* listreader_;
  FIRRTLFrontend::ListWriter* listwriter_;
  FIRRTLFrontend::ListReadwriter* listreadwriter_;
  FIRRTLFrontend::ListStmt* liststmt_;
  FIRRTLFrontend::Reader* reader_;
  FIRRTLFrontend::Writer* writer_;
  FIRRTLFrontend::Readwriter* readwriter_;
  FIRRTLFrontend::Colonid* colonid_;
  FIRRTLFrontend::Elsestmt* elsestmt_;
  FIRRTLFrontend::Withreset* withreset_;
  FIRRTLFrontend::Ruw* ruw_;
  FIRRTLFrontend::Info* info_;
  FIRRTLFrontend::Exp* exp_;
  FIRRTLFrontend::ListExp* listexp_;
  FIRRTLFrontend::ListInt* listint_;
  FIRRTLFrontend::Primop* primop_;
  FIRRTLFrontend::Id* id_;
  FIRRTLFrontend::SString* sstring_;
  FIRRTLFrontend::Intsize* intsize_;
  FIRRTLFrontend::Intsizefixed* intsizefixed_;
  FIRRTLFrontend::Int* int_;
}
%define api.prefix {FIRRTLFrontendyy}
%token _ERROR_
%token _SYMB_1    //   (
%token _SYMB_2    //   )
%token _SYMB_15    //   ,
%token _SYMB_17    //   .
%token _SYMB_0    //   :
%token _SYMB_18    //   <
%token _SYMB_14    //   <-
%token _SYMB_20    //   <<
%token _SYMB_13    //   <=
%token _SYMB_12    //   =
%token _SYMB_8    //   =>
%token _SYMB_19    //   >
%token _SYMB_21    //   >>
%token _SYMB_16    //   @
%token _SYMB_22    //   Analog
%token _SYMB_23    //   Clock
%token _SYMB_24    //   Fixed
%token _SYMB_25    //   SInt
%token _SYMB_26    //   UInt
%token _SYMB_5    //   [
%token _SYMB_6    //   ]
%token _SYMB_27    //   add
%token _SYMB_28    //   and
%token _SYMB_29    //   andr
%token _SYMB_30    //   asClock
%token _SYMB_31    //   asSInt
%token _SYMB_32    //   asUInt
%token _SYMB_33    //   attach
%token _SYMB_34    //   bits
%token _SYMB_35    //   cat
%token _SYMB_36    //   circuit
%token _SYMB_37    //   cvt
%token _SYMB_7    //   data-type
%token _SYMB_38    //   depth
%token _SYMB_39    //   div
%token _SYMB_40    //   dshl
%token _SYMB_41    //   dshr
%token _SYMB_42    //   else
%token _SYMB_43    //   eq
%token _SYMB_44    //   extmodule
%token _SYMB_45    //   flip
%token _SYMB_46    //   geq
%token _SYMB_47    //   gt
%token _SYMB_48    //   head
%token _SYMB_49    //   input
%token _SYMB_50    //   inst
%token _SYMB_51    //   invalid
%token _SYMB_52    //   is
%token _SYMB_53    //   leq
%token _SYMB_54    //   lt
%token _SYMB_55    //   mem
%token _SYMB_56    //   mod
%token _SYMB_57    //   module
%token _SYMB_58    //   mul
%token _SYMB_59    //   mux
%token _SYMB_60    //   neg
%token _SYMB_61    //   neq
%token _SYMB_62    //   new
%token _SYMB_63    //   node
%token _SYMB_64    //   not
%token _SYMB_65    //   of
%token _SYMB_66    //   old
%token _SYMB_67    //   or
%token _SYMB_68    //   orr
%token _SYMB_69    //   output
%token _SYMB_70    //   pad
%token _SYMB_71    //   printf
%token _SYMB_9    //   read-latency
%token _SYMB_11    //   read-under-write
%token _SYMB_72    //   reader
%token _SYMB_73    //   readwriter
%token _SYMB_74    //   reg
%token _SYMB_75    //   reset
%token _SYMB_76    //   shl
%token _SYMB_77    //   shr
%token _SYMB_78    //   skip
%token _SYMB_79    //   stop
%token _SYMB_80    //   sub
%token _SYMB_81    //   tail
%token _SYMB_82    //   undefined
%token _SYMB_83    //   validif
%token _SYMB_84    //   when
%token _SYMB_85    //   wire
%token _SYMB_86    //   with
%token _SYMB_10    //   write-latency
%token _SYMB_87    //   writer
%token _SYMB_88    //   xor
%token _SYMB_89    //   xorr
%token _SYMB_3    //   {
%token _SYMB_4    //   }

%type <circuit_> Circuit
%type <listmodule_> ListModule
%type <module_> Module
%type <listport_> ListPort
%type <port_> Port
%type <dir_> Dir
%type <type_> Type
%type <listfield_> ListField
%type <field_> Field
%type <flipliteral_> Flipliteral
%type <stmt_> Stmt
%type <listreader_> ListReader
%type <listwriter_> ListWriter
%type <listreadwriter_> ListReadwriter
%type <liststmt_> ListStmt
%type <reader_> Reader
%type <writer_> Writer
%type <readwriter_> Readwriter
%type <colonid_> Colonid
%type <elsestmt_> Elsestmt
%type <withreset_> Withreset
%type <ruw_> Ruw
%type <info_> Info
%type <exp_> Exp
%type <listexp_> ListExp
%type <listint_> ListInt
%type <primop_> Primop
%type <id_> Id
%type <sstring_> SString
%type <intsize_> Intsize
%type <intsizefixed_> Intsizefixed
%type <int_> Int

%start Circuit
%token<_string> _STRING_
%token<_int>    _INTEGER_
%token<_string> _IDENT_

%%
Circuit : _SYMB_36 Id _SYMB_0 Info _SYMB_1 ListModule _SYMB_2 {  std::reverse($6->begin(),$6->end()) ;$$ = new FIRRTLFrontend::ECircuit($2, $4, $6); FIRRTLFrontend::YY_RESULT_Circuit_= $$; }
;
ListModule : Module {  $$ = new FIRRTLFrontend::ListModule() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListModule_= $$; }
  | Module ListModule {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListModule_= $$; }
;
Module : _SYMB_57 Id _SYMB_0 Info _SYMB_1 ListPort Stmt _SYMB_2 {  std::reverse($6->begin(),$6->end()) ;$$ = new FIRRTLFrontend::Module1($2, $4, $6, $7); FIRRTLFrontend::YY_RESULT_Module_= $$; }
  | _SYMB_44 Id _SYMB_0 Info _SYMB_1 ListPort _SYMB_2 {  std::reverse($6->begin(),$6->end()) ;$$ = new FIRRTLFrontend::Module2($2, $4, $6); FIRRTLFrontend::YY_RESULT_Module_= $$; }
;
ListPort : Port {  $$ = new FIRRTLFrontend::ListPort() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListPort_= $$; }
  | Port ListPort {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListPort_= $$; }
;
Port : Dir Id _SYMB_0 Type Info {  $$ = new FIRRTLFrontend::EPort($1, $2, $4, $5); FIRRTLFrontend::YY_RESULT_Port_= $$; }
;
Dir : _SYMB_49 {  $$ = new FIRRTLFrontend::Dir_input(); FIRRTLFrontend::YY_RESULT_Dir_= $$; }
  | _SYMB_69 {  $$ = new FIRRTLFrontend::Dir_output(); FIRRTLFrontend::YY_RESULT_Dir_= $$; }
;
Type : _SYMB_26 Intsize {  $$ = new FIRRTLFrontend::Type1($2); FIRRTLFrontend::YY_RESULT_Type_= $$; }
  | _SYMB_25 Intsize {  $$ = new FIRRTLFrontend::Type2($2); FIRRTLFrontend::YY_RESULT_Type_= $$; }
  | _SYMB_24 Intsize Intsizefixed {  $$ = new FIRRTLFrontend::Type3($2, $3); FIRRTLFrontend::YY_RESULT_Type_= $$; }
  | _SYMB_23 {  $$ = new FIRRTLFrontend::Type_Clock(); FIRRTLFrontend::YY_RESULT_Type_= $$; }
  | _SYMB_22 Intsize {  $$ = new FIRRTLFrontend::Type4($2); FIRRTLFrontend::YY_RESULT_Type_= $$; }
  | _SYMB_3 ListField _SYMB_4 {  std::reverse($2->begin(),$2->end()) ;$$ = new FIRRTLFrontend::Type5($2); FIRRTLFrontend::YY_RESULT_Type_= $$; }
  | Type _SYMB_5 Int _SYMB_6 {  $$ = new FIRRTLFrontend::Type6($1, $3); FIRRTLFrontend::YY_RESULT_Type_= $$; }
;
ListField : Field {  $$ = new FIRRTLFrontend::ListField() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListField_= $$; }
  | Field ListField {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListField_= $$; }
;
Field : Flipliteral Id _SYMB_0 Type {  $$ = new FIRRTLFrontend::EField($1, $2, $4); FIRRTLFrontend::YY_RESULT_Field_= $$; }
;
Flipliteral : _SYMB_45 {  $$ = new FIRRTLFrontend::Flipliteral_flip(); FIRRTLFrontend::YY_RESULT_Flipliteral_= $$; }
  | /* empty */ {  $$ = new FIRRTLFrontend::Flipliteral_(); FIRRTLFrontend::YY_RESULT_Flipliteral_= $$; }
;
Stmt : _SYMB_85 Id _SYMB_0 Type Info {  $$ = new FIRRTLFrontend::Stmt1($2, $4, $5); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_74 Id _SYMB_0 Type Exp Withreset Info {  $$ = new FIRRTLFrontend::Stmt2($2, $4, $5, $6, $7); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_55 Id _SYMB_0 Info _SYMB_1 _SYMB_7 _SYMB_8 Type _SYMB_38 _SYMB_8 Int _SYMB_9 _SYMB_8 Int _SYMB_10 _SYMB_8 Int _SYMB_11 _SYMB_8 Ruw ListReader ListWriter ListReadwriter _SYMB_2 {  std::reverse($21->begin(),$21->end()) ; std::reverse($22->begin(),$22->end()) ; std::reverse($23->begin(),$23->end()) ;$$ = new FIRRTLFrontend::Stmt3($2, $4, $8, $11, $14, $17, $20, $21, $22, $23); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_50 Id _SYMB_65 Id Info {  $$ = new FIRRTLFrontend::Stmt4($2, $4, $5); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_63 Id _SYMB_12 Exp Info {  $$ = new FIRRTLFrontend::Stmt5($2, $4, $5); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | Exp _SYMB_13 Exp Info {  $$ = new FIRRTLFrontend::Stmt6($1, $3, $4); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | Exp _SYMB_14 Exp Info {  $$ = new FIRRTLFrontend::Stmt7($1, $3, $4); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | Exp _SYMB_52 _SYMB_51 Info {  $$ = new FIRRTLFrontend::Stmt8($1, $4); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_33 _SYMB_1 ListExp _SYMB_2 Info {  std::reverse($3->begin(),$3->end()) ;$$ = new FIRRTLFrontend::Stmt9($3, $5); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_84 Exp _SYMB_0 Info Stmt Elsestmt {  $$ = new FIRRTLFrontend::Stmt10($2, $4, $5, $6); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_79 _SYMB_1 Exp _SYMB_15 Exp _SYMB_15 Int _SYMB_2 Colonid Info {  $$ = new FIRRTLFrontend::Stmt11($3, $5, $7, $9, $10); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_71 _SYMB_1 Exp _SYMB_15 Exp _SYMB_15 SString _SYMB_15 ListExp _SYMB_2 Colonid Info {  std::reverse($9->begin(),$9->end()) ;$$ = new FIRRTLFrontend::Stmt12($3, $5, $7, $9, $11, $12); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_78 Info {  $$ = new FIRRTLFrontend::Stmt13($2); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
  | _SYMB_1 ListStmt _SYMB_2 {  std::reverse($2->begin(),$2->end()) ;$$ = new FIRRTLFrontend::Stmt14($2); FIRRTLFrontend::YY_RESULT_Stmt_= $$; }
;
ListReader : Reader {  $$ = new FIRRTLFrontend::ListReader() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListReader_= $$; }
  | Reader ListReader {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListReader_= $$; }
;
ListWriter : Writer {  $$ = new FIRRTLFrontend::ListWriter() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListWriter_= $$; }
  | Writer ListWriter {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListWriter_= $$; }
;
ListReadwriter : Readwriter {  $$ = new FIRRTLFrontend::ListReadwriter() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListReadwriter_= $$; }
  | Readwriter ListReadwriter {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListReadwriter_= $$; }
;
ListStmt : Stmt {  $$ = new FIRRTLFrontend::ListStmt() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListStmt_= $$; }
  | Stmt ListStmt {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListStmt_= $$; }
;
Reader : _SYMB_72 _SYMB_8 Id {  $$ = new FIRRTLFrontend::EReader($3); FIRRTLFrontend::YY_RESULT_Reader_= $$; }
;
Writer : _SYMB_87 _SYMB_8 Id {  $$ = new FIRRTLFrontend::EWriter($3); FIRRTLFrontend::YY_RESULT_Writer_= $$; }
;
Readwriter : _SYMB_73 _SYMB_8 Id {  $$ = new FIRRTLFrontend::EReadWriter($3); FIRRTLFrontend::YY_RESULT_Readwriter_= $$; }
;
Colonid : _SYMB_0 Id {  $$ = new FIRRTLFrontend::Colonid1($2); FIRRTLFrontend::YY_RESULT_Colonid_= $$; }
  | /* empty */ {  $$ = new FIRRTLFrontend::Colonid_(); FIRRTLFrontend::YY_RESULT_Colonid_= $$; }
;
Elsestmt : _SYMB_42 _SYMB_0 Stmt {  $$ = new FIRRTLFrontend::Elsestmt1($3); FIRRTLFrontend::YY_RESULT_Elsestmt_= $$; }
  | /* empty */ {  $$ = new FIRRTLFrontend::Elsestmt_(); FIRRTLFrontend::YY_RESULT_Elsestmt_= $$; }
;
Withreset : _SYMB_1 _SYMB_86 _SYMB_0 _SYMB_3 _SYMB_75 _SYMB_8 _SYMB_1 Exp _SYMB_15 Exp _SYMB_2 _SYMB_4 _SYMB_2 {  $$ = new FIRRTLFrontend::Withreset1($8, $10); FIRRTLFrontend::YY_RESULT_Withreset_= $$; }
  | /* empty */ {  $$ = new FIRRTLFrontend::Withreset_(); FIRRTLFrontend::YY_RESULT_Withreset_= $$; }
;
Ruw : _SYMB_66 {  $$ = new FIRRTLFrontend::Ruw_old(); FIRRTLFrontend::YY_RESULT_Ruw_= $$; }
  | _SYMB_62 {  $$ = new FIRRTLFrontend::Ruw_new(); FIRRTLFrontend::YY_RESULT_Ruw_= $$; }
  | _SYMB_82 {  $$ = new FIRRTLFrontend::Ruw_undefined(); FIRRTLFrontend::YY_RESULT_Ruw_= $$; }
;
Info : _SYMB_16 _SYMB_5 SString _SYMB_6 {  $$ = new FIRRTLFrontend::Info1($3); FIRRTLFrontend::YY_RESULT_Info_= $$; }
  | /* empty */ {  $$ = new FIRRTLFrontend::Info_(); FIRRTLFrontend::YY_RESULT_Info_= $$; }
;
Exp : _SYMB_26 Intsize _SYMB_1 Int _SYMB_2 {  $$ = new FIRRTLFrontend::Exp1($2, $4); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | _SYMB_26 Intsize _SYMB_1 SString _SYMB_2 {  $$ = new FIRRTLFrontend::Exp2($2, $4); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | _SYMB_25 Intsize _SYMB_1 Int _SYMB_2 {  $$ = new FIRRTLFrontend::Exp3($2, $4); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | _SYMB_25 Intsize _SYMB_1 SString _SYMB_2 {  $$ = new FIRRTLFrontend::Exp4($2, $4); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | Id {  $$ = new FIRRTLFrontend::ExpId($1); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | Exp _SYMB_17 Id {  $$ = new FIRRTLFrontend::Exp5($1, $3); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | Exp _SYMB_5 Int _SYMB_6 {  $$ = new FIRRTLFrontend::Exp6($1, $3); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | Exp _SYMB_5 Exp _SYMB_6 {  $$ = new FIRRTLFrontend::Exp7($1, $3); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | _SYMB_59 _SYMB_1 Exp _SYMB_15 Exp _SYMB_15 Exp _SYMB_2 {  $$ = new FIRRTLFrontend::Exp8($3, $5, $7); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | _SYMB_83 _SYMB_1 Exp _SYMB_15 Exp _SYMB_2 {  $$ = new FIRRTLFrontend::Exp9($3, $5); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
  | Primop _SYMB_1 ListExp _SYMB_15 ListInt _SYMB_2 {  std::reverse($3->begin(),$3->end()) ; std::reverse($5->begin(),$5->end()) ;$$ = new FIRRTLFrontend::Exp10($1, $3, $5); FIRRTLFrontend::YY_RESULT_Exp_= $$; }
;
ListExp : Exp {  $$ = new FIRRTLFrontend::ListExp() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListExp_= $$; }
  | Exp ListExp {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListExp_= $$; }
;
ListInt : Int {  $$ = new FIRRTLFrontend::ListInt() ; $$->push_back($1); FIRRTLFrontend::YY_RESULT_ListInt_= $$; }
  | Int ListInt {  $2->push_back($1) ; $$ = $2 ; FIRRTLFrontend::YY_RESULT_ListInt_= $$; }
;
Primop : _SYMB_27 {  $$ = new FIRRTLFrontend::Primop_add(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_80 {  $$ = new FIRRTLFrontend::Primop_sub(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_58 {  $$ = new FIRRTLFrontend::Primop_mul(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_39 {  $$ = new FIRRTLFrontend::Primop_div(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_56 {  $$ = new FIRRTLFrontend::Primop_mod(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_54 {  $$ = new FIRRTLFrontend::Primop_lt(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_53 {  $$ = new FIRRTLFrontend::Primop_leq(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_47 {  $$ = new FIRRTLFrontend::Primop_gt(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_46 {  $$ = new FIRRTLFrontend::Primop_geq(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_43 {  $$ = new FIRRTLFrontend::Primop_eq(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_61 {  $$ = new FIRRTLFrontend::Primop_neq(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_70 {  $$ = new FIRRTLFrontend::Primop_pad(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_32 {  $$ = new FIRRTLFrontend::Primop_asUInt(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_31 {  $$ = new FIRRTLFrontend::Primop_asSInt(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_30 {  $$ = new FIRRTLFrontend::Primop_asClock(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_76 {  $$ = new FIRRTLFrontend::Primop_shl(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_77 {  $$ = new FIRRTLFrontend::Primop_shr(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_40 {  $$ = new FIRRTLFrontend::Primop_dshl(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_41 {  $$ = new FIRRTLFrontend::Primop_dshr(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_37 {  $$ = new FIRRTLFrontend::Primop_cvt(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_60 {  $$ = new FIRRTLFrontend::Primop_neg(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_64 {  $$ = new FIRRTLFrontend::Primop_not(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_28 {  $$ = new FIRRTLFrontend::Primop_and(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_67 {  $$ = new FIRRTLFrontend::Primop_or(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_88 {  $$ = new FIRRTLFrontend::Primop_xor(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_29 {  $$ = new FIRRTLFrontend::Primop_andr(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_68 {  $$ = new FIRRTLFrontend::Primop_orr(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_89 {  $$ = new FIRRTLFrontend::Primop_xorr(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_35 {  $$ = new FIRRTLFrontend::Primop_cat(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_34 {  $$ = new FIRRTLFrontend::Primop_bits(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_48 {  $$ = new FIRRTLFrontend::Primop_head(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
  | _SYMB_81 {  $$ = new FIRRTLFrontend::Primop_tail(); FIRRTLFrontend::YY_RESULT_Primop_= $$; }
;
Id : _IDENT_ {  $$ = new FIRRTLFrontend::Eid($1); FIRRTLFrontend::YY_RESULT_Id_= $$; }
;
SString : _STRING_ {  $$ = new FIRRTLFrontend::Estring($1); FIRRTLFrontend::YY_RESULT_SString_= $$; }
;
Intsize : _SYMB_18 Int _SYMB_19 {  $$ = new FIRRTLFrontend::Intsize1($2); FIRRTLFrontend::YY_RESULT_Intsize_= $$; }
  | /* empty */ {  $$ = new FIRRTLFrontend::Intsize_(); FIRRTLFrontend::YY_RESULT_Intsize_= $$; }
;
Intsizefixed : _SYMB_20 Int _SYMB_21 {  $$ = new FIRRTLFrontend::Intsizefixed1($2); FIRRTLFrontend::YY_RESULT_Intsizefixed_= $$; }
  | /* empty */ {  $$ = new FIRRTLFrontend::Intsizefixed_(); FIRRTLFrontend::YY_RESULT_Intsizefixed_= $$; }
;
Int : _INTEGER_ {  $$ = new FIRRTLFrontend::Eint($1); FIRRTLFrontend::YY_RESULT_Int_= $$; }
;

