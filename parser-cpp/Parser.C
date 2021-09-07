/* A Bison parser, made by GNU Bison 3.7.5.  */

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         FIRRTLFRONTENDYYSTYPE
/* Substitute the variable and function names.  */
#define yyparse         FIRRTLFrontendyyparse
#define yylex           FIRRTLFrontendyylex
#define yyerror         FIRRTLFrontendyyerror
#define yydebug         FIRRTLFrontendyydebug
#define yynerrs         FIRRTLFrontendyynerrs
#define yylval          FIRRTLFrontendyylval
#define yychar          FIRRTLFrontendyychar

/* First part of user prologue.  */
#line 2 "FIRRTL.y"

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

#line 1187 "Parser.C"

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


/* Debug traces.  */
#ifndef FIRRTLFRONTENDYYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define FIRRTLFRONTENDYYDEBUG 1
#  else
#   define FIRRTLFRONTENDYYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define FIRRTLFRONTENDYYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined FIRRTLFRONTENDYYDEBUG */
#if FIRRTLFRONTENDYYDEBUG
extern int FIRRTLFrontendyydebug;
#endif

/* Token kinds.  */
#ifndef FIRRTLFRONTENDYYTOKENTYPE
# define FIRRTLFRONTENDYYTOKENTYPE
  enum FIRRTLFrontendyytokentype
  {
    FIRRTLFRONTENDYYEMPTY = -2,
    FIRRTLFRONTENDYYEOF = 0,       /* "end of file"  */
    FIRRTLFRONTENDYYerror = 256,   /* error  */
    FIRRTLFRONTENDYYUNDEF = 257,   /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _SYMB_1 = 259,                 /* _SYMB_1  */
    _SYMB_2 = 260,                 /* _SYMB_2  */
    _SYMB_15 = 261,                /* _SYMB_15  */
    _SYMB_17 = 262,                /* _SYMB_17  */
    _SYMB_0 = 263,                 /* _SYMB_0  */
    _SYMB_18 = 264,                /* _SYMB_18  */
    _SYMB_14 = 265,                /* _SYMB_14  */
    _SYMB_20 = 266,                /* _SYMB_20  */
    _SYMB_13 = 267,                /* _SYMB_13  */
    _SYMB_12 = 268,                /* _SYMB_12  */
    _SYMB_8 = 269,                 /* _SYMB_8  */
    _SYMB_19 = 270,                /* _SYMB_19  */
    _SYMB_21 = 271,                /* _SYMB_21  */
    _SYMB_16 = 272,                /* _SYMB_16  */
    _SYMB_22 = 273,                /* _SYMB_22  */
    _SYMB_23 = 274,                /* _SYMB_23  */
    _SYMB_24 = 275,                /* _SYMB_24  */
    _SYMB_25 = 276,                /* _SYMB_25  */
    _SYMB_26 = 277,                /* _SYMB_26  */
    _SYMB_5 = 278,                 /* _SYMB_5  */
    _SYMB_6 = 279,                 /* _SYMB_6  */
    _SYMB_27 = 280,                /* _SYMB_27  */
    _SYMB_28 = 281,                /* _SYMB_28  */
    _SYMB_29 = 282,                /* _SYMB_29  */
    _SYMB_30 = 283,                /* _SYMB_30  */
    _SYMB_31 = 284,                /* _SYMB_31  */
    _SYMB_32 = 285,                /* _SYMB_32  */
    _SYMB_33 = 286,                /* _SYMB_33  */
    _SYMB_34 = 287,                /* _SYMB_34  */
    _SYMB_35 = 288,                /* _SYMB_35  */
    _SYMB_36 = 289,                /* _SYMB_36  */
    _SYMB_37 = 290,                /* _SYMB_37  */
    _SYMB_7 = 291,                 /* _SYMB_7  */
    _SYMB_38 = 292,                /* _SYMB_38  */
    _SYMB_39 = 293,                /* _SYMB_39  */
    _SYMB_40 = 294,                /* _SYMB_40  */
    _SYMB_41 = 295,                /* _SYMB_41  */
    _SYMB_42 = 296,                /* _SYMB_42  */
    _SYMB_43 = 297,                /* _SYMB_43  */
    _SYMB_44 = 298,                /* _SYMB_44  */
    _SYMB_45 = 299,                /* _SYMB_45  */
    _SYMB_46 = 300,                /* _SYMB_46  */
    _SYMB_47 = 301,                /* _SYMB_47  */
    _SYMB_48 = 302,                /* _SYMB_48  */
    _SYMB_49 = 303,                /* _SYMB_49  */
    _SYMB_50 = 304,                /* _SYMB_50  */
    _SYMB_51 = 305,                /* _SYMB_51  */
    _SYMB_52 = 306,                /* _SYMB_52  */
    _SYMB_53 = 307,                /* _SYMB_53  */
    _SYMB_54 = 308,                /* _SYMB_54  */
    _SYMB_55 = 309,                /* _SYMB_55  */
    _SYMB_56 = 310,                /* _SYMB_56  */
    _SYMB_57 = 311,                /* _SYMB_57  */
    _SYMB_58 = 312,                /* _SYMB_58  */
    _SYMB_59 = 313,                /* _SYMB_59  */
    _SYMB_60 = 314,                /* _SYMB_60  */
    _SYMB_61 = 315,                /* _SYMB_61  */
    _SYMB_62 = 316,                /* _SYMB_62  */
    _SYMB_63 = 317,                /* _SYMB_63  */
    _SYMB_64 = 318,                /* _SYMB_64  */
    _SYMB_65 = 319,                /* _SYMB_65  */
    _SYMB_66 = 320,                /* _SYMB_66  */
    _SYMB_67 = 321,                /* _SYMB_67  */
    _SYMB_68 = 322,                /* _SYMB_68  */
    _SYMB_69 = 323,                /* _SYMB_69  */
    _SYMB_70 = 324,                /* _SYMB_70  */
    _SYMB_71 = 325,                /* _SYMB_71  */
    _SYMB_9 = 326,                 /* _SYMB_9  */
    _SYMB_11 = 327,                /* _SYMB_11  */
    _SYMB_72 = 328,                /* _SYMB_72  */
    _SYMB_73 = 329,                /* _SYMB_73  */
    _SYMB_74 = 330,                /* _SYMB_74  */
    _SYMB_75 = 331,                /* _SYMB_75  */
    _SYMB_76 = 332,                /* _SYMB_76  */
    _SYMB_77 = 333,                /* _SYMB_77  */
    _SYMB_78 = 334,                /* _SYMB_78  */
    _SYMB_79 = 335,                /* _SYMB_79  */
    _SYMB_80 = 336,                /* _SYMB_80  */
    _SYMB_81 = 337,                /* _SYMB_81  */
    _SYMB_82 = 338,                /* _SYMB_82  */
    _SYMB_83 = 339,                /* _SYMB_83  */
    _SYMB_84 = 340,                /* _SYMB_84  */
    _SYMB_85 = 341,                /* _SYMB_85  */
    _SYMB_86 = 342,                /* _SYMB_86  */
    _SYMB_10 = 343,                /* _SYMB_10  */
    _SYMB_87 = 344,                /* _SYMB_87  */
    _SYMB_88 = 345,                /* _SYMB_88  */
    _SYMB_89 = 346,                /* _SYMB_89  */
    _SYMB_3 = 347,                 /* _SYMB_3  */
    _SYMB_4 = 348,                 /* _SYMB_4  */
    _STRING_ = 349,                /* _STRING_  */
    _INTEGER_ = 350,               /* _INTEGER_  */
    _IDENT_ = 351                  /* _IDENT_  */
  };
  typedef enum FIRRTLFrontendyytokentype FIRRTLFrontendyytoken_kind_t;
#endif

/* Value type.  */
#if ! defined FIRRTLFRONTENDYYSTYPE && ! defined FIRRTLFRONTENDYYSTYPE_IS_DECLARED
union FIRRTLFRONTENDYYSTYPE
{
#line 1111 "FIRRTL.y"

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

#line 1377 "Parser.C"

};
typedef union FIRRTLFRONTENDYYSTYPE FIRRTLFRONTENDYYSTYPE;
# define FIRRTLFRONTENDYYSTYPE_IS_TRIVIAL 1
# define FIRRTLFRONTENDYYSTYPE_IS_DECLARED 1
#endif


extern FIRRTLFRONTENDYYSTYPE FIRRTLFrontendyylval;

int FIRRTLFrontendyyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__SYMB_1 = 4,                    /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 5,                    /* _SYMB_2  */
  YYSYMBOL__SYMB_15 = 6,                   /* _SYMB_15  */
  YYSYMBOL__SYMB_17 = 7,                   /* _SYMB_17  */
  YYSYMBOL__SYMB_0 = 8,                    /* _SYMB_0  */
  YYSYMBOL__SYMB_18 = 9,                   /* _SYMB_18  */
  YYSYMBOL__SYMB_14 = 10,                  /* _SYMB_14  */
  YYSYMBOL__SYMB_20 = 11,                  /* _SYMB_20  */
  YYSYMBOL__SYMB_13 = 12,                  /* _SYMB_13  */
  YYSYMBOL__SYMB_12 = 13,                  /* _SYMB_12  */
  YYSYMBOL__SYMB_8 = 14,                   /* _SYMB_8  */
  YYSYMBOL__SYMB_19 = 15,                  /* _SYMB_19  */
  YYSYMBOL__SYMB_21 = 16,                  /* _SYMB_21  */
  YYSYMBOL__SYMB_16 = 17,                  /* _SYMB_16  */
  YYSYMBOL__SYMB_22 = 18,                  /* _SYMB_22  */
  YYSYMBOL__SYMB_23 = 19,                  /* _SYMB_23  */
  YYSYMBOL__SYMB_24 = 20,                  /* _SYMB_24  */
  YYSYMBOL__SYMB_25 = 21,                  /* _SYMB_25  */
  YYSYMBOL__SYMB_26 = 22,                  /* _SYMB_26  */
  YYSYMBOL__SYMB_5 = 23,                   /* _SYMB_5  */
  YYSYMBOL__SYMB_6 = 24,                   /* _SYMB_6  */
  YYSYMBOL__SYMB_27 = 25,                  /* _SYMB_27  */
  YYSYMBOL__SYMB_28 = 26,                  /* _SYMB_28  */
  YYSYMBOL__SYMB_29 = 27,                  /* _SYMB_29  */
  YYSYMBOL__SYMB_30 = 28,                  /* _SYMB_30  */
  YYSYMBOL__SYMB_31 = 29,                  /* _SYMB_31  */
  YYSYMBOL__SYMB_32 = 30,                  /* _SYMB_32  */
  YYSYMBOL__SYMB_33 = 31,                  /* _SYMB_33  */
  YYSYMBOL__SYMB_34 = 32,                  /* _SYMB_34  */
  YYSYMBOL__SYMB_35 = 33,                  /* _SYMB_35  */
  YYSYMBOL__SYMB_36 = 34,                  /* _SYMB_36  */
  YYSYMBOL__SYMB_37 = 35,                  /* _SYMB_37  */
  YYSYMBOL__SYMB_7 = 36,                   /* _SYMB_7  */
  YYSYMBOL__SYMB_38 = 37,                  /* _SYMB_38  */
  YYSYMBOL__SYMB_39 = 38,                  /* _SYMB_39  */
  YYSYMBOL__SYMB_40 = 39,                  /* _SYMB_40  */
  YYSYMBOL__SYMB_41 = 40,                  /* _SYMB_41  */
  YYSYMBOL__SYMB_42 = 41,                  /* _SYMB_42  */
  YYSYMBOL__SYMB_43 = 42,                  /* _SYMB_43  */
  YYSYMBOL__SYMB_44 = 43,                  /* _SYMB_44  */
  YYSYMBOL__SYMB_45 = 44,                  /* _SYMB_45  */
  YYSYMBOL__SYMB_46 = 45,                  /* _SYMB_46  */
  YYSYMBOL__SYMB_47 = 46,                  /* _SYMB_47  */
  YYSYMBOL__SYMB_48 = 47,                  /* _SYMB_48  */
  YYSYMBOL__SYMB_49 = 48,                  /* _SYMB_49  */
  YYSYMBOL__SYMB_50 = 49,                  /* _SYMB_50  */
  YYSYMBOL__SYMB_51 = 50,                  /* _SYMB_51  */
  YYSYMBOL__SYMB_52 = 51,                  /* _SYMB_52  */
  YYSYMBOL__SYMB_53 = 52,                  /* _SYMB_53  */
  YYSYMBOL__SYMB_54 = 53,                  /* _SYMB_54  */
  YYSYMBOL__SYMB_55 = 54,                  /* _SYMB_55  */
  YYSYMBOL__SYMB_56 = 55,                  /* _SYMB_56  */
  YYSYMBOL__SYMB_57 = 56,                  /* _SYMB_57  */
  YYSYMBOL__SYMB_58 = 57,                  /* _SYMB_58  */
  YYSYMBOL__SYMB_59 = 58,                  /* _SYMB_59  */
  YYSYMBOL__SYMB_60 = 59,                  /* _SYMB_60  */
  YYSYMBOL__SYMB_61 = 60,                  /* _SYMB_61  */
  YYSYMBOL__SYMB_62 = 61,                  /* _SYMB_62  */
  YYSYMBOL__SYMB_63 = 62,                  /* _SYMB_63  */
  YYSYMBOL__SYMB_64 = 63,                  /* _SYMB_64  */
  YYSYMBOL__SYMB_65 = 64,                  /* _SYMB_65  */
  YYSYMBOL__SYMB_66 = 65,                  /* _SYMB_66  */
  YYSYMBOL__SYMB_67 = 66,                  /* _SYMB_67  */
  YYSYMBOL__SYMB_68 = 67,                  /* _SYMB_68  */
  YYSYMBOL__SYMB_69 = 68,                  /* _SYMB_69  */
  YYSYMBOL__SYMB_70 = 69,                  /* _SYMB_70  */
  YYSYMBOL__SYMB_71 = 70,                  /* _SYMB_71  */
  YYSYMBOL__SYMB_9 = 71,                   /* _SYMB_9  */
  YYSYMBOL__SYMB_11 = 72,                  /* _SYMB_11  */
  YYSYMBOL__SYMB_72 = 73,                  /* _SYMB_72  */
  YYSYMBOL__SYMB_73 = 74,                  /* _SYMB_73  */
  YYSYMBOL__SYMB_74 = 75,                  /* _SYMB_74  */
  YYSYMBOL__SYMB_75 = 76,                  /* _SYMB_75  */
  YYSYMBOL__SYMB_76 = 77,                  /* _SYMB_76  */
  YYSYMBOL__SYMB_77 = 78,                  /* _SYMB_77  */
  YYSYMBOL__SYMB_78 = 79,                  /* _SYMB_78  */
  YYSYMBOL__SYMB_79 = 80,                  /* _SYMB_79  */
  YYSYMBOL__SYMB_80 = 81,                  /* _SYMB_80  */
  YYSYMBOL__SYMB_81 = 82,                  /* _SYMB_81  */
  YYSYMBOL__SYMB_82 = 83,                  /* _SYMB_82  */
  YYSYMBOL__SYMB_83 = 84,                  /* _SYMB_83  */
  YYSYMBOL__SYMB_84 = 85,                  /* _SYMB_84  */
  YYSYMBOL__SYMB_85 = 86,                  /* _SYMB_85  */
  YYSYMBOL__SYMB_86 = 87,                  /* _SYMB_86  */
  YYSYMBOL__SYMB_10 = 88,                  /* _SYMB_10  */
  YYSYMBOL__SYMB_87 = 89,                  /* _SYMB_87  */
  YYSYMBOL__SYMB_88 = 90,                  /* _SYMB_88  */
  YYSYMBOL__SYMB_89 = 91,                  /* _SYMB_89  */
  YYSYMBOL__SYMB_3 = 92,                   /* _SYMB_3  */
  YYSYMBOL__SYMB_4 = 93,                   /* _SYMB_4  */
  YYSYMBOL__STRING_ = 94,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 95,                 /* _INTEGER_  */
  YYSYMBOL__IDENT_ = 96,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 97,                  /* $accept  */
  YYSYMBOL_Circuit = 98,                   /* Circuit  */
  YYSYMBOL_ListModule = 99,                /* ListModule  */
  YYSYMBOL_Module = 100,                   /* Module  */
  YYSYMBOL_ListPort = 101,                 /* ListPort  */
  YYSYMBOL_Port = 102,                     /* Port  */
  YYSYMBOL_Dir = 103,                      /* Dir  */
  YYSYMBOL_Type = 104,                     /* Type  */
  YYSYMBOL_ListField = 105,                /* ListField  */
  YYSYMBOL_Field = 106,                    /* Field  */
  YYSYMBOL_Flipliteral = 107,              /* Flipliteral  */
  YYSYMBOL_Stmt = 108,                     /* Stmt  */
  YYSYMBOL_ListReader = 109,               /* ListReader  */
  YYSYMBOL_ListWriter = 110,               /* ListWriter  */
  YYSYMBOL_ListReadwriter = 111,           /* ListReadwriter  */
  YYSYMBOL_ListStmt = 112,                 /* ListStmt  */
  YYSYMBOL_Reader = 113,                   /* Reader  */
  YYSYMBOL_Writer = 114,                   /* Writer  */
  YYSYMBOL_Readwriter = 115,               /* Readwriter  */
  YYSYMBOL_Colonid = 116,                  /* Colonid  */
  YYSYMBOL_Elsestmt = 117,                 /* Elsestmt  */
  YYSYMBOL_Withreset = 118,                /* Withreset  */
  YYSYMBOL_Ruw = 119,                      /* Ruw  */
  YYSYMBOL_Info = 120,                     /* Info  */
  YYSYMBOL_Exp = 121,                      /* Exp  */
  YYSYMBOL_ListExp = 122,                  /* ListExp  */
  YYSYMBOL_ListInt = 123,                  /* ListInt  */
  YYSYMBOL_Primop = 124,                   /* Primop  */
  YYSYMBOL_Id = 125,                       /* Id  */
  YYSYMBOL_SString = 126,                  /* SString  */
  YYSYMBOL_Intsize = 127,                  /* Intsize  */
  YYSYMBOL_Intsizefixed = 128,             /* Intsizefixed  */
  YYSYMBOL_Int = 129                       /* Int  */
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
typedef yytype_int16 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
         || (defined FIRRTLFRONTENDYYSTYPE_IS_TRIVIAL && FIRRTLFRONTENDYYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   573

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   351


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if FIRRTLFRONTENDYYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,  1281,  1281,  1283,  1284,  1286,  1287,  1289,  1290,  1292,
    1294,  1295,  1297,  1298,  1299,  1300,  1301,  1302,  1303,  1305,
    1306,  1308,  1310,  1311,  1313,  1314,  1315,  1316,  1317,  1318,
    1319,  1320,  1321,  1322,  1323,  1324,  1325,  1326,  1328,  1329,
    1331,  1332,  1334,  1335,  1337,  1338,  1340,  1342,  1344,  1346,
    1347,  1349,  1350,  1352,  1353,  1355,  1356,  1357,  1359,  1360,
    1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,
    1372,  1374,  1375,  1377,  1378,  1380,  1381,  1382,  1383,  1384,
    1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,
    1395,  1396,  1397,  1398,  1399,  1400,  1401,  1402,  1403,  1404,
    1405,  1406,  1407,  1408,  1409,  1410,  1411,  1413,  1415,  1417,
    1418,  1420,  1421,  1423
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if FIRRTLFRONTENDYYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_SYMB_1",
  "_SYMB_2", "_SYMB_15", "_SYMB_17", "_SYMB_0", "_SYMB_18", "_SYMB_14",
  "_SYMB_20", "_SYMB_13", "_SYMB_12", "_SYMB_8", "_SYMB_19", "_SYMB_21",
  "_SYMB_16", "_SYMB_22", "_SYMB_23", "_SYMB_24", "_SYMB_25", "_SYMB_26",
  "_SYMB_5", "_SYMB_6", "_SYMB_27", "_SYMB_28", "_SYMB_29", "_SYMB_30",
  "_SYMB_31", "_SYMB_32", "_SYMB_33", "_SYMB_34", "_SYMB_35", "_SYMB_36",
  "_SYMB_37", "_SYMB_7", "_SYMB_38", "_SYMB_39", "_SYMB_40", "_SYMB_41",
  "_SYMB_42", "_SYMB_43", "_SYMB_44", "_SYMB_45", "_SYMB_46", "_SYMB_47",
  "_SYMB_48", "_SYMB_49", "_SYMB_50", "_SYMB_51", "_SYMB_52", "_SYMB_53",
  "_SYMB_54", "_SYMB_55", "_SYMB_56", "_SYMB_57", "_SYMB_58", "_SYMB_59",
  "_SYMB_60", "_SYMB_61", "_SYMB_62", "_SYMB_63", "_SYMB_64", "_SYMB_65",
  "_SYMB_66", "_SYMB_67", "_SYMB_68", "_SYMB_69", "_SYMB_70", "_SYMB_71",
  "_SYMB_9", "_SYMB_11", "_SYMB_72", "_SYMB_73", "_SYMB_74", "_SYMB_75",
  "_SYMB_76", "_SYMB_77", "_SYMB_78", "_SYMB_79", "_SYMB_80", "_SYMB_81",
  "_SYMB_82", "_SYMB_83", "_SYMB_84", "_SYMB_85", "_SYMB_86", "_SYMB_10",
  "_SYMB_87", "_SYMB_88", "_SYMB_89", "_SYMB_3", "_SYMB_4", "_STRING_",
  "_INTEGER_", "_IDENT_", "$accept", "Circuit", "ListModule", "Module",
  "ListPort", "Port", "Dir", "Type", "ListField", "Field", "Flipliteral",
  "Stmt", "ListReader", "ListWriter", "ListReadwriter", "ListStmt",
  "Reader", "Writer", "Readwriter", "Colonid", "Elsestmt", "Withreset",
  "Ruw", "Info", "Exp", "ListExp", "ListInt", "Primop", "Id", "SString",
  "Intsize", "Intsizefixed", "Int", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351
};
#endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,   -70,    33,  -127,    29,  -127,    45,    47,    70,    11,
      12,  -127,    54,   -70,   -70,   108,    12,  -127,    99,   115,
    -127,  -127,    45,    45,   120,   130,   -44,   -44,  -127,  -127,
     131,   -44,   -70,   176,  -127,  -127,   127,   176,   145,   145,
    -127,  -127,  -127,  -127,  -127,  -127,   152,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,   -70,  -127,  -127,
     -70,  -127,  -127,   154,  -127,  -127,   -70,  -127,  -127,  -127,
    -127,   156,   -70,  -127,  -127,    45,   157,  -127,  -127,   158,
     477,   -70,  -127,  -127,   140,     9,   159,  -127,    22,   176,
     160,    71,   163,   164,   477,   106,   161,   477,   165,   477,
     166,  -127,   477,   477,   102,   168,  -127,   -70,   477,   477,
     329,   122,   477,   145,  -127,   145,   145,   145,   129,    60,
    -127,  -127,  -127,   162,     8,     8,   257,   174,   -70,    45,
      81,   477,    93,    22,   105,   114,    45,    22,  -127,   136,
     136,    40,   167,    45,   175,  -127,   171,  -127,  -127,  -127,
      91,   -35,   -70,    71,  -127,  -127,   180,   181,   183,   184,
    -127,    45,    45,   186,   477,   136,   477,   405,   477,   477,
     176,    60,  -127,  -127,  -127,  -127,  -127,    71,    71,  -127,
    -127,  -127,   185,   172,  -127,  -127,  -127,  -127,  -127,  -127,
     188,   123,  -127,   126,    23,   132,    43,   151,  -127,   194,
      71,   196,    22,  -127,   203,   477,    11,   139,    45,    71,
    -127,   202,  -127,  -127,  -127,  -127,   204,    22,    46,   213,
     229,  -127,   235,   176,    52,  -127,   477,   149,   236,  -127,
     233,   243,   173,   -70,    45,    71,   236,   238,  -127,  -127,
     179,    45,   255,   249,  -127,   477,    71,   141,   182,   477,
     254,    74,    71,   195,   197,   268,   260,  -127,   -16,  -127,
    -127,  -127,   208,   261,   187,   208,   -70,   277,   219,   187,
    -127,  -127,   -70,   280,   293,   219,  -127,  -127,   -70,  -127,
    -127,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,   107,     0,     1,    59,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     3,    58,     0,     0,
       2,     4,    59,    59,     0,     0,     0,     0,    10,    11,
       0,     7,     0,     0,     6,     8,     0,     0,   110,   110,
      75,    97,   100,    89,    88,    87,     0,   104,   103,    94,
      78,    92,    93,    84,    83,    82,   105,     0,    81,    80,
       0,    79,    77,     0,    95,    85,     0,    96,    98,   101,
      86,     0,     0,    90,    91,    59,     0,    76,   106,     0,
       0,     0,    99,   102,     0,     0,     0,    64,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,   110,    15,   110,   110,   110,    23,    59,
      45,    37,   113,     0,     0,     0,    71,     0,     0,    59,
       0,     0,     0,     0,     0,     0,    59,     0,    65,    59,
      59,     0,     0,    59,     0,    16,   112,    13,    12,    22,
       0,    19,     0,     0,     9,   109,     0,     0,     0,     0,
      72,    59,    59,     0,     0,    59,     0,     0,     0,     0,
       0,    59,    30,    29,    67,    66,    31,     0,     0,    14,
      17,    20,     0,     0,    63,    62,    61,    60,    32,    27,
       0,     0,    28,     0,    54,     0,     0,    52,    24,     0,
      73,     0,     0,    18,     0,     0,     0,     0,    59,     0,
      69,     0,    33,    70,    74,   111,    21,     0,     0,     0,
       0,    25,     0,     0,     0,    68,     0,     0,    50,    51,
       0,     0,     0,     0,    59,     0,    50,     0,    49,    34,
       0,    59,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,    56,
      55,    57,     0,     0,     0,    38,     0,     0,     0,    40,
      39,    46,     0,     0,     0,    42,    41,    47,     0,    26,
      43,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,   284,  -127,    -9,  -127,  -127,  -126,   150,  -127,
    -127,   -28,    41,    36,    32,   222,  -127,  -127,  -127,    72,
    -127,  -127,  -127,   -21,   -74,  -109,   113,  -127,    -1,  -110,
     -31,  -127,   -52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    15,    16,    30,    31,    32,   119,   150,   151,
     152,    89,   264,   268,   274,    90,   265,   269,   275,   234,
     212,   208,   262,     8,    85,   127,   199,    86,    87,    12,
      92,   179,   200
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       4,    24,    25,   144,    28,    84,   104,   167,    93,   149,
       1,   171,    18,    19,   156,   158,   107,   160,    33,   108,
     126,   109,    35,   130,    29,   132,     3,   207,   134,   135,
     107,    36,   110,     5,   139,   140,   141,     6,   126,   123,
     113,   114,   115,   116,   117,   259,   110,   107,   210,   260,
     107,   225,   126,   107,   101,    13,    95,   165,   142,    96,
     111,   -23,     7,   110,   174,    98,   110,   261,    14,   110,
       9,   100,   157,   159,    10,   153,   216,     7,    17,   253,
     105,   107,   145,   153,   146,   147,   148,   164,   107,   230,
     191,   224,   193,   194,   195,   196,   219,   110,   154,   166,
     107,   183,    11,   122,   110,    11,   138,    22,   163,   107,
     136,   168,   107,    20,   118,   170,   110,   231,   172,   173,
     169,   107,   176,    23,    26,   110,   201,   162,   110,   205,
     107,   218,   206,   107,    27,    88,    34,   110,   209,   107,
     188,   189,   197,   107,   192,   106,   110,   249,   107,   110,
     198,   182,   126,     7,    91,   110,    94,   222,    97,   110,
      99,   102,   103,   112,   110,   121,   122,   124,   125,   129,
     128,   247,   143,   149,   133,   251,   137,   155,   131,   161,
      37,   177,   178,   240,   180,   184,   185,   221,   186,   187,
     190,   175,   211,   202,   248,   229,   203,    38,    39,   213,
     254,    40,    41,    42,    43,    44,    45,    46,    47,    48,
     223,    49,   215,   239,    50,    51,    52,   217,    53,   226,
     244,    54,    55,    56,   204,    57,   220,   153,    58,    59,
      60,    61,   238,    62,    63,    64,    65,   227,    66,    67,
     228,   232,    68,    69,   233,    70,    71,   235,   236,   237,
     243,    72,   242,    73,    74,    75,    76,    77,    78,   245,
      79,    80,    81,   246,   107,   271,    82,    83,   252,   256,
     250,   277,     3,   257,   258,   266,   267,   281,    38,    39,
     110,   263,    40,    41,    42,    43,    44,    45,   255,    47,
      48,   272,    49,   273,   278,    50,    51,    52,   279,    53,
      21,   181,    54,    55,    56,   276,   270,   280,   241,    58,
      59,   120,    61,   214,    62,    63,    64,    65,     0,     0,
      67,     0,     0,    68,    69,     0,    70,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    77,    78,
       0,    79,     0,     0,     0,     0,     0,    82,    83,     0,
      38,    39,     0,     3,    40,    41,    42,    43,    44,    45,
       0,    47,    48,     0,    49,     0,     0,    50,    51,    52,
       0,    53,     0,     0,    54,    55,    56,     0,     0,     0,
       0,    58,    59,     0,    61,     0,    62,    63,    64,    65,
       0,     0,    67,     0,     0,    68,    69,     0,    70,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      77,    78,     0,    79,     0,     0,     0,     0,     0,    82,
      83,     0,     0,     0,   122,     3,    38,    39,   153,     0,
      40,    41,    42,    43,    44,    45,     0,    47,    48,     0,
      49,     0,     0,    50,    51,    52,     0,    53,     0,     0,
      54,    55,    56,     0,     0,     0,     0,    58,    59,     0,
      61,     0,    62,    63,    64,    65,     0,     0,    67,     0,
       0,    68,    69,     0,    70,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    77,    78,     0,    79,
       0,     0,     0,     0,     0,    82,    83,     0,    38,    39,
       0,     3,    40,    41,    42,    43,    44,    45,     0,    47,
      48,     0,    49,     0,     0,    50,    51,    52,     0,    53,
       0,     0,    54,    55,    56,     0,     0,     0,     0,    58,
      59,     0,    61,     0,    62,    63,    64,    65,     0,     0,
      67,     0,     0,    68,    69,     0,    70,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    77,    78,
       0,    79,     0,     0,     0,     0,     0,    82,    83,     0,
       0,     0,     0,     3
};

static const yytype_int16 yycheck[] =
{
       1,    22,    23,   112,    48,    33,    80,   133,    39,    44,
      34,   137,    13,    14,   124,   125,     7,   126,    27,    10,
      94,    12,    31,    97,    68,    99,    96,     4,   102,   103,
       7,    32,    23,     0,   108,   109,   110,     8,   112,    91,
      18,    19,    20,    21,    22,    61,    23,     7,     5,    65,
       7,     5,   126,     7,    75,    43,    57,   131,   110,    60,
      51,    96,    17,    23,    24,    66,    23,    83,    56,    23,
      23,    72,   124,   125,     4,    23,   202,    17,    24,     5,
      81,     7,   113,    23,   115,   116,   117,     6,     7,    37,
     164,   217,   166,   167,   168,   169,   206,    23,   119,     6,
       7,   153,    94,    95,    23,    94,   107,     8,   129,     7,
       8,     6,     7,     5,    92,   136,    23,   226,   139,   140,
       6,     7,   143,     8,     4,    23,   178,   128,    23,     6,
       7,   205,     6,     7,     4,     8,     5,    23,     6,     7,
     161,   162,   170,     7,   165,     5,    23,     6,     7,    23,
     171,   152,   226,    17,     9,    23,     4,   209,     4,    23,
       4,     4,     4,     4,    23,     5,    95,     4,     4,     8,
      64,   245,    50,    44,     8,   249,     8,    15,    13,     5,
       4,     6,    11,   235,    93,     5,     5,   208,     5,     5,
       4,    24,    41,     8,   246,   223,    24,    21,    22,     5,
     252,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       8,    35,    16,   234,    38,    39,    40,    14,    42,     6,
     241,    45,    46,    47,    36,    49,    87,    23,    52,    53,
      54,    55,   233,    57,    58,    59,    60,     8,    62,    63,
       5,    92,    66,    67,     8,    69,    70,    14,     5,    76,
      71,    75,    14,    77,    78,    79,    80,    81,    82,     4,
      84,    85,    86,    14,     7,   266,    90,    91,    14,    72,
      88,   272,    96,     5,    14,    14,    89,   278,    21,    22,
      23,    73,    25,    26,    27,    28,    29,    30,    93,    32,
      33,    14,    35,    74,    14,    38,    39,    40,     5,    42,
      16,   151,    45,    46,    47,   269,   265,   275,   236,    52,
      53,    89,    55,   200,    57,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    82,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      21,    22,    -1,    96,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    -1,    38,    39,    40,
      -1,    42,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,
      -1,    52,    53,    -1,    55,    -1,    57,    58,    59,    60,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      81,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    95,    96,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    -1,    38,    39,    40,    -1,    42,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    52,    53,    -1,
      55,    -1,    57,    58,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    81,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    21,    22,
      -1,    96,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    -1,    38,    39,    40,    -1,    42,
      -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    -1,    55,    -1,    57,    58,    59,    60,    -1,    -1,
      63,    -1,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    82,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    96
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    98,    96,   125,     0,     8,    17,   120,    23,
       4,    94,   126,    43,    56,    99,   100,    24,   125,   125,
       5,    99,     8,     8,   120,   120,     4,     4,    48,    68,
     101,   102,   103,   101,     5,   101,   125,     4,    21,    22,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    35,
      38,    39,    40,    42,    45,    46,    47,    49,    52,    53,
      54,    55,    57,    58,    59,    60,    62,    63,    66,    67,
      69,    70,    75,    77,    78,    79,    80,    81,    82,    84,
      85,    86,    90,    91,   108,   121,   124,   125,     8,   108,
     112,     9,   127,   127,     4,   125,   125,     4,   125,     4,
     125,   120,     4,     4,   121,   125,     5,     7,    10,    12,
      23,    51,     4,    18,    19,    20,    21,    22,    92,   104,
     112,     5,    95,   129,     4,     4,   121,   122,    64,     8,
     121,    13,   121,     8,   121,   121,     8,     8,   125,   121,
     121,   121,   129,    50,   122,   127,   127,   127,   127,    44,
     105,   106,   107,    23,   120,    15,   126,   129,   126,   129,
     122,     5,   125,   120,     6,   121,     6,   104,     6,     6,
     120,   104,   120,   120,    24,    24,   120,     6,    11,   128,
      93,   105,   125,   129,     5,     5,     5,     5,   120,   120,
       4,   121,   120,   121,   121,   121,   121,   108,   120,   123,
     129,   129,     8,    24,    36,     6,     6,     4,   118,     6,
       5,    41,   117,     5,   123,    16,   104,    14,   121,   126,
      87,   120,   129,     8,   104,     5,     6,     8,     5,   108,
      37,   122,    92,     8,   116,    14,     5,    76,   125,   120,
     129,   116,    14,    71,   120,     4,    14,   121,   129,     6,
      88,   121,    14,     5,   129,    93,    72,     5,    14,    61,
      65,    83,   119,    73,   109,   113,    14,    89,   110,   114,
     109,   125,    14,    74,   111,   115,   110,   125,    14,     5,
     111,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   101,   101,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   114,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   126,   127,
     127,   128,   128,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     1,     2,     8,     7,     1,     2,     5,
       1,     1,     2,     2,     3,     1,     2,     3,     4,     1,
       2,     4,     1,     0,     5,     7,    24,     5,     5,     4,
       4,     4,     5,     6,    10,    12,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     3,     3,     3,     2,
       0,     3,     0,    13,     0,     1,     1,     1,     4,     0,
       5,     5,     5,     5,     1,     3,     4,     4,     8,     6,
       6,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     3,     0,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = FIRRTLFRONTENDYYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == FIRRTLFRONTENDYYEMPTY)                                        \
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
   Use FIRRTLFRONTENDYYerror or FIRRTLFRONTENDYYUNDEF. */
#define YYERRCODE FIRRTLFRONTENDYYUNDEF


/* Enable debugging if requested.  */
#if FIRRTLFRONTENDYYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
#else /* !FIRRTLFRONTENDYYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !FIRRTLFRONTENDYYDEBUG */


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

  yychar = FIRRTLFRONTENDYYEMPTY; /* Cause a token to be read.  */
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  if (yychar == FIRRTLFRONTENDYYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= FIRRTLFRONTENDYYEOF)
    {
      yychar = FIRRTLFRONTENDYYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == FIRRTLFRONTENDYYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = FIRRTLFRONTENDYYUNDEF;
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
  yychar = FIRRTLFRONTENDYYEMPTY;
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
  case 2: /* Circuit: _SYMB_36 Id _SYMB_0 Info _SYMB_1 ListModule _SYMB_2  */
#line 1281 "FIRRTL.y"
                                                              {  std::reverse((yyvsp[-1].listmodule_)->begin(),(yyvsp[-1].listmodule_)->end()) ;(yyval.circuit_) = new FIRRTLFrontend::ECircuit((yyvsp[-5].id_), (yyvsp[-3].info_), (yyvsp[-1].listmodule_)); FIRRTLFrontend::YY_RESULT_Circuit_= (yyval.circuit_); }
#line 2752 "Parser.C"
    break;

  case 3: /* ListModule: Module  */
#line 1283 "FIRRTL.y"
                    {  (yyval.listmodule_) = new FIRRTLFrontend::ListModule() ; (yyval.listmodule_)->push_back((yyvsp[0].module_)); FIRRTLFrontend::YY_RESULT_ListModule_= (yyval.listmodule_); }
#line 2758 "Parser.C"
    break;

  case 4: /* ListModule: Module ListModule  */
#line 1284 "FIRRTL.y"
                      {  (yyvsp[0].listmodule_)->push_back((yyvsp[-1].module_)) ; (yyval.listmodule_) = (yyvsp[0].listmodule_) ; FIRRTLFrontend::YY_RESULT_ListModule_= (yyval.listmodule_); }
#line 2764 "Parser.C"
    break;

  case 5: /* Module: _SYMB_57 Id _SYMB_0 Info _SYMB_1 ListPort Stmt _SYMB_2  */
#line 1286 "FIRRTL.y"
                                                                {  std::reverse((yyvsp[-2].listport_)->begin(),(yyvsp[-2].listport_)->end()) ;(yyval.module_) = new FIRRTLFrontend::Module1((yyvsp[-6].id_), (yyvsp[-4].info_), (yyvsp[-2].listport_), (yyvsp[-1].stmt_)); FIRRTLFrontend::YY_RESULT_Module_= (yyval.module_); }
#line 2770 "Parser.C"
    break;

  case 6: /* Module: _SYMB_44 Id _SYMB_0 Info _SYMB_1 ListPort _SYMB_2  */
#line 1287 "FIRRTL.y"
                                                      {  std::reverse((yyvsp[-1].listport_)->begin(),(yyvsp[-1].listport_)->end()) ;(yyval.module_) = new FIRRTLFrontend::Module2((yyvsp[-5].id_), (yyvsp[-3].info_), (yyvsp[-1].listport_)); FIRRTLFrontend::YY_RESULT_Module_= (yyval.module_); }
#line 2776 "Parser.C"
    break;

  case 7: /* ListPort: Port  */
#line 1289 "FIRRTL.y"
                {  (yyval.listport_) = new FIRRTLFrontend::ListPort() ; (yyval.listport_)->push_back((yyvsp[0].port_)); FIRRTLFrontend::YY_RESULT_ListPort_= (yyval.listport_); }
#line 2782 "Parser.C"
    break;

  case 8: /* ListPort: Port ListPort  */
#line 1290 "FIRRTL.y"
                  {  (yyvsp[0].listport_)->push_back((yyvsp[-1].port_)) ; (yyval.listport_) = (yyvsp[0].listport_) ; FIRRTLFrontend::YY_RESULT_ListPort_= (yyval.listport_); }
#line 2788 "Parser.C"
    break;

  case 9: /* Port: Dir Id _SYMB_0 Type Info  */
#line 1292 "FIRRTL.y"
                                {  (yyval.port_) = new FIRRTLFrontend::EPort((yyvsp[-4].dir_), (yyvsp[-3].id_), (yyvsp[-1].type_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Port_= (yyval.port_); }
#line 2794 "Parser.C"
    break;

  case 10: /* Dir: _SYMB_49  */
#line 1294 "FIRRTL.y"
               {  (yyval.dir_) = new FIRRTLFrontend::Dir_input(); FIRRTLFrontend::YY_RESULT_Dir_= (yyval.dir_); }
#line 2800 "Parser.C"
    break;

  case 11: /* Dir: _SYMB_69  */
#line 1295 "FIRRTL.y"
             {  (yyval.dir_) = new FIRRTLFrontend::Dir_output(); FIRRTLFrontend::YY_RESULT_Dir_= (yyval.dir_); }
#line 2806 "Parser.C"
    break;

  case 12: /* Type: _SYMB_26 Intsize  */
#line 1297 "FIRRTL.y"
                        {  (yyval.type_) = new FIRRTLFrontend::Type1((yyvsp[0].intsize_)); FIRRTLFrontend::YY_RESULT_Type_= (yyval.type_); }
#line 2812 "Parser.C"
    break;

  case 13: /* Type: _SYMB_25 Intsize  */
#line 1298 "FIRRTL.y"
                     {  (yyval.type_) = new FIRRTLFrontend::Type2((yyvsp[0].intsize_)); FIRRTLFrontend::YY_RESULT_Type_= (yyval.type_); }
#line 2818 "Parser.C"
    break;

  case 14: /* Type: _SYMB_24 Intsize Intsizefixed  */
#line 1299 "FIRRTL.y"
                                  {  (yyval.type_) = new FIRRTLFrontend::Type3((yyvsp[-1].intsize_), (yyvsp[0].intsizefixed_)); FIRRTLFrontend::YY_RESULT_Type_= (yyval.type_); }
#line 2824 "Parser.C"
    break;

  case 15: /* Type: _SYMB_23  */
#line 1300 "FIRRTL.y"
             {  (yyval.type_) = new FIRRTLFrontend::Type_Clock(); FIRRTLFrontend::YY_RESULT_Type_= (yyval.type_); }
#line 2830 "Parser.C"
    break;

  case 16: /* Type: _SYMB_22 Intsize  */
#line 1301 "FIRRTL.y"
                     {  (yyval.type_) = new FIRRTLFrontend::Type4((yyvsp[0].intsize_)); FIRRTLFrontend::YY_RESULT_Type_= (yyval.type_); }
#line 2836 "Parser.C"
    break;

  case 17: /* Type: _SYMB_3 ListField _SYMB_4  */
#line 1302 "FIRRTL.y"
                              {  std::reverse((yyvsp[-1].listfield_)->begin(),(yyvsp[-1].listfield_)->end()) ;(yyval.type_) = new FIRRTLFrontend::Type5((yyvsp[-1].listfield_)); FIRRTLFrontend::YY_RESULT_Type_= (yyval.type_); }
#line 2842 "Parser.C"
    break;

  case 18: /* Type: Type _SYMB_5 Int _SYMB_6  */
#line 1303 "FIRRTL.y"
                             {  (yyval.type_) = new FIRRTLFrontend::Type6((yyvsp[-3].type_), (yyvsp[-1].int_)); FIRRTLFrontend::YY_RESULT_Type_= (yyval.type_); }
#line 2848 "Parser.C"
    break;

  case 19: /* ListField: Field  */
#line 1305 "FIRRTL.y"
                  {  (yyval.listfield_) = new FIRRTLFrontend::ListField() ; (yyval.listfield_)->push_back((yyvsp[0].field_)); FIRRTLFrontend::YY_RESULT_ListField_= (yyval.listfield_); }
#line 2854 "Parser.C"
    break;

  case 20: /* ListField: Field ListField  */
#line 1306 "FIRRTL.y"
                    {  (yyvsp[0].listfield_)->push_back((yyvsp[-1].field_)) ; (yyval.listfield_) = (yyvsp[0].listfield_) ; FIRRTLFrontend::YY_RESULT_ListField_= (yyval.listfield_); }
#line 2860 "Parser.C"
    break;

  case 21: /* Field: Flipliteral Id _SYMB_0 Type  */
#line 1308 "FIRRTL.y"
                                    {  (yyval.field_) = new FIRRTLFrontend::EField((yyvsp[-3].flipliteral_), (yyvsp[-2].id_), (yyvsp[0].type_)); FIRRTLFrontend::YY_RESULT_Field_= (yyval.field_); }
#line 2866 "Parser.C"
    break;

  case 22: /* Flipliteral: _SYMB_45  */
#line 1310 "FIRRTL.y"
                       {  (yyval.flipliteral_) = new FIRRTLFrontend::Flipliteral_flip(); FIRRTLFrontend::YY_RESULT_Flipliteral_= (yyval.flipliteral_); }
#line 2872 "Parser.C"
    break;

  case 23: /* Flipliteral: %empty  */
#line 1311 "FIRRTL.y"
                {  (yyval.flipliteral_) = new FIRRTLFrontend::Flipliteral_(); FIRRTLFrontend::YY_RESULT_Flipliteral_= (yyval.flipliteral_); }
#line 2878 "Parser.C"
    break;

  case 24: /* Stmt: _SYMB_85 Id _SYMB_0 Type Info  */
#line 1313 "FIRRTL.y"
                                     {  (yyval.stmt_) = new FIRRTLFrontend::Stmt1((yyvsp[-3].id_), (yyvsp[-1].type_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2884 "Parser.C"
    break;

  case 25: /* Stmt: _SYMB_74 Id _SYMB_0 Type Exp Withreset Info  */
#line 1314 "FIRRTL.y"
                                                {  (yyval.stmt_) = new FIRRTLFrontend::Stmt2((yyvsp[-5].id_), (yyvsp[-3].type_), (yyvsp[-2].exp_), (yyvsp[-1].withreset_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2890 "Parser.C"
    break;

  case 26: /* Stmt: _SYMB_55 Id _SYMB_0 Info _SYMB_1 _SYMB_7 _SYMB_8 Type _SYMB_38 _SYMB_8 Int _SYMB_9 _SYMB_8 Int _SYMB_10 _SYMB_8 Int _SYMB_11 _SYMB_8 Ruw ListReader ListWriter ListReadwriter _SYMB_2  */
#line 1315 "FIRRTL.y"
                                                                                                                                                                                          {  std::reverse((yyvsp[-3].listreader_)->begin(),(yyvsp[-3].listreader_)->end()) ; std::reverse((yyvsp[-2].listwriter_)->begin(),(yyvsp[-2].listwriter_)->end()) ; std::reverse((yyvsp[-1].listreadwriter_)->begin(),(yyvsp[-1].listreadwriter_)->end()) ;(yyval.stmt_) = new FIRRTLFrontend::Stmt3((yyvsp[-22].id_), (yyvsp[-20].info_), (yyvsp[-16].type_), (yyvsp[-13].int_), (yyvsp[-10].int_), (yyvsp[-7].int_), (yyvsp[-4].ruw_), (yyvsp[-3].listreader_), (yyvsp[-2].listwriter_), (yyvsp[-1].listreadwriter_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2896 "Parser.C"
    break;

  case 27: /* Stmt: _SYMB_50 Id _SYMB_65 Id Info  */
#line 1316 "FIRRTL.y"
                                 {  (yyval.stmt_) = new FIRRTLFrontend::Stmt4((yyvsp[-3].id_), (yyvsp[-1].id_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2902 "Parser.C"
    break;

  case 28: /* Stmt: _SYMB_63 Id _SYMB_12 Exp Info  */
#line 1317 "FIRRTL.y"
                                  {  (yyval.stmt_) = new FIRRTLFrontend::Stmt5((yyvsp[-3].id_), (yyvsp[-1].exp_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2908 "Parser.C"
    break;

  case 29: /* Stmt: Exp _SYMB_13 Exp Info  */
#line 1318 "FIRRTL.y"
                          {  (yyval.stmt_) = new FIRRTLFrontend::Stmt6((yyvsp[-3].exp_), (yyvsp[-1].exp_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2914 "Parser.C"
    break;

  case 30: /* Stmt: Exp _SYMB_14 Exp Info  */
#line 1319 "FIRRTL.y"
                          {  (yyval.stmt_) = new FIRRTLFrontend::Stmt7((yyvsp[-3].exp_), (yyvsp[-1].exp_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2920 "Parser.C"
    break;

  case 31: /* Stmt: Exp _SYMB_52 _SYMB_51 Info  */
#line 1320 "FIRRTL.y"
                               {  (yyval.stmt_) = new FIRRTLFrontend::Stmt8((yyvsp[-3].exp_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2926 "Parser.C"
    break;

  case 32: /* Stmt: _SYMB_33 _SYMB_1 ListExp _SYMB_2 Info  */
#line 1321 "FIRRTL.y"
                                          {  std::reverse((yyvsp[-2].listexp_)->begin(),(yyvsp[-2].listexp_)->end()) ;(yyval.stmt_) = new FIRRTLFrontend::Stmt9((yyvsp[-2].listexp_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2932 "Parser.C"
    break;

  case 33: /* Stmt: _SYMB_84 Exp _SYMB_0 Info Stmt Elsestmt  */
#line 1322 "FIRRTL.y"
                                            {  (yyval.stmt_) = new FIRRTLFrontend::Stmt10((yyvsp[-4].exp_), (yyvsp[-2].info_), (yyvsp[-1].stmt_), (yyvsp[0].elsestmt_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2938 "Parser.C"
    break;

  case 34: /* Stmt: _SYMB_79 _SYMB_1 Exp _SYMB_15 Exp _SYMB_15 Int _SYMB_2 Colonid Info  */
#line 1323 "FIRRTL.y"
                                                                        {  (yyval.stmt_) = new FIRRTLFrontend::Stmt11((yyvsp[-7].exp_), (yyvsp[-5].exp_), (yyvsp[-3].int_), (yyvsp[-1].colonid_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2944 "Parser.C"
    break;

  case 35: /* Stmt: _SYMB_71 _SYMB_1 Exp _SYMB_15 Exp _SYMB_15 SString _SYMB_15 ListExp _SYMB_2 Colonid Info  */
#line 1324 "FIRRTL.y"
                                                                                             {  std::reverse((yyvsp[-3].listexp_)->begin(),(yyvsp[-3].listexp_)->end()) ;(yyval.stmt_) = new FIRRTLFrontend::Stmt12((yyvsp[-9].exp_), (yyvsp[-7].exp_), (yyvsp[-5].sstring_), (yyvsp[-3].listexp_), (yyvsp[-1].colonid_), (yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2950 "Parser.C"
    break;

  case 36: /* Stmt: _SYMB_78 Info  */
#line 1325 "FIRRTL.y"
                  {  (yyval.stmt_) = new FIRRTLFrontend::Stmt13((yyvsp[0].info_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2956 "Parser.C"
    break;

  case 37: /* Stmt: _SYMB_1 ListStmt _SYMB_2  */
#line 1326 "FIRRTL.y"
                             {  std::reverse((yyvsp[-1].liststmt_)->begin(),(yyvsp[-1].liststmt_)->end()) ;(yyval.stmt_) = new FIRRTLFrontend::Stmt14((yyvsp[-1].liststmt_)); FIRRTLFrontend::YY_RESULT_Stmt_= (yyval.stmt_); }
#line 2962 "Parser.C"
    break;

  case 38: /* ListReader: Reader  */
#line 1328 "FIRRTL.y"
                    {  (yyval.listreader_) = new FIRRTLFrontend::ListReader() ; (yyval.listreader_)->push_back((yyvsp[0].reader_)); FIRRTLFrontend::YY_RESULT_ListReader_= (yyval.listreader_); }
#line 2968 "Parser.C"
    break;

  case 39: /* ListReader: Reader ListReader  */
#line 1329 "FIRRTL.y"
                      {  (yyvsp[0].listreader_)->push_back((yyvsp[-1].reader_)) ; (yyval.listreader_) = (yyvsp[0].listreader_) ; FIRRTLFrontend::YY_RESULT_ListReader_= (yyval.listreader_); }
#line 2974 "Parser.C"
    break;

  case 40: /* ListWriter: Writer  */
#line 1331 "FIRRTL.y"
                    {  (yyval.listwriter_) = new FIRRTLFrontend::ListWriter() ; (yyval.listwriter_)->push_back((yyvsp[0].writer_)); FIRRTLFrontend::YY_RESULT_ListWriter_= (yyval.listwriter_); }
#line 2980 "Parser.C"
    break;

  case 41: /* ListWriter: Writer ListWriter  */
#line 1332 "FIRRTL.y"
                      {  (yyvsp[0].listwriter_)->push_back((yyvsp[-1].writer_)) ; (yyval.listwriter_) = (yyvsp[0].listwriter_) ; FIRRTLFrontend::YY_RESULT_ListWriter_= (yyval.listwriter_); }
#line 2986 "Parser.C"
    break;

  case 42: /* ListReadwriter: Readwriter  */
#line 1334 "FIRRTL.y"
                            {  (yyval.listreadwriter_) = new FIRRTLFrontend::ListReadwriter() ; (yyval.listreadwriter_)->push_back((yyvsp[0].readwriter_)); FIRRTLFrontend::YY_RESULT_ListReadwriter_= (yyval.listreadwriter_); }
#line 2992 "Parser.C"
    break;

  case 43: /* ListReadwriter: Readwriter ListReadwriter  */
#line 1335 "FIRRTL.y"
                              {  (yyvsp[0].listreadwriter_)->push_back((yyvsp[-1].readwriter_)) ; (yyval.listreadwriter_) = (yyvsp[0].listreadwriter_) ; FIRRTLFrontend::YY_RESULT_ListReadwriter_= (yyval.listreadwriter_); }
#line 2998 "Parser.C"
    break;

  case 44: /* ListStmt: Stmt  */
#line 1337 "FIRRTL.y"
                {  (yyval.liststmt_) = new FIRRTLFrontend::ListStmt() ; (yyval.liststmt_)->push_back((yyvsp[0].stmt_)); FIRRTLFrontend::YY_RESULT_ListStmt_= (yyval.liststmt_); }
#line 3004 "Parser.C"
    break;

  case 45: /* ListStmt: Stmt ListStmt  */
#line 1338 "FIRRTL.y"
                  {  (yyvsp[0].liststmt_)->push_back((yyvsp[-1].stmt_)) ; (yyval.liststmt_) = (yyvsp[0].liststmt_) ; FIRRTLFrontend::YY_RESULT_ListStmt_= (yyval.liststmt_); }
#line 3010 "Parser.C"
    break;

  case 46: /* Reader: _SYMB_72 _SYMB_8 Id  */
#line 1340 "FIRRTL.y"
                             {  (yyval.reader_) = new FIRRTLFrontend::EReader((yyvsp[0].id_)); FIRRTLFrontend::YY_RESULT_Reader_= (yyval.reader_); }
#line 3016 "Parser.C"
    break;

  case 47: /* Writer: _SYMB_87 _SYMB_8 Id  */
#line 1342 "FIRRTL.y"
                             {  (yyval.writer_) = new FIRRTLFrontend::EWriter((yyvsp[0].id_)); FIRRTLFrontend::YY_RESULT_Writer_= (yyval.writer_); }
#line 3022 "Parser.C"
    break;

  case 48: /* Readwriter: _SYMB_73 _SYMB_8 Id  */
#line 1344 "FIRRTL.y"
                                 {  (yyval.readwriter_) = new FIRRTLFrontend::EReadWriter((yyvsp[0].id_)); FIRRTLFrontend::YY_RESULT_Readwriter_= (yyval.readwriter_); }
#line 3028 "Parser.C"
    break;

  case 49: /* Colonid: _SYMB_0 Id  */
#line 1346 "FIRRTL.y"
                     {  (yyval.colonid_) = new FIRRTLFrontend::Colonid1((yyvsp[0].id_)); FIRRTLFrontend::YY_RESULT_Colonid_= (yyval.colonid_); }
#line 3034 "Parser.C"
    break;

  case 50: /* Colonid: %empty  */
#line 1347 "FIRRTL.y"
                {  (yyval.colonid_) = new FIRRTLFrontend::Colonid_(); FIRRTLFrontend::YY_RESULT_Colonid_= (yyval.colonid_); }
#line 3040 "Parser.C"
    break;

  case 51: /* Elsestmt: _SYMB_42 _SYMB_0 Stmt  */
#line 1349 "FIRRTL.y"
                                 {  (yyval.elsestmt_) = new FIRRTLFrontend::Elsestmt1((yyvsp[0].stmt_)); FIRRTLFrontend::YY_RESULT_Elsestmt_= (yyval.elsestmt_); }
#line 3046 "Parser.C"
    break;

  case 52: /* Elsestmt: %empty  */
#line 1350 "FIRRTL.y"
                {  (yyval.elsestmt_) = new FIRRTLFrontend::Elsestmt_(); FIRRTLFrontend::YY_RESULT_Elsestmt_= (yyval.elsestmt_); }
#line 3052 "Parser.C"
    break;

  case 53: /* Withreset: _SYMB_1 _SYMB_86 _SYMB_0 _SYMB_3 _SYMB_75 _SYMB_8 _SYMB_1 Exp _SYMB_15 Exp _SYMB_2 _SYMB_4 _SYMB_2  */
#line 1352 "FIRRTL.y"
                                                                                                               {  (yyval.withreset_) = new FIRRTLFrontend::Withreset1((yyvsp[-5].exp_), (yyvsp[-3].exp_)); FIRRTLFrontend::YY_RESULT_Withreset_= (yyval.withreset_); }
#line 3058 "Parser.C"
    break;

  case 54: /* Withreset: %empty  */
#line 1353 "FIRRTL.y"
                {  (yyval.withreset_) = new FIRRTLFrontend::Withreset_(); FIRRTLFrontend::YY_RESULT_Withreset_= (yyval.withreset_); }
#line 3064 "Parser.C"
    break;

  case 55: /* Ruw: _SYMB_66  */
#line 1355 "FIRRTL.y"
               {  (yyval.ruw_) = new FIRRTLFrontend::Ruw_old(); FIRRTLFrontend::YY_RESULT_Ruw_= (yyval.ruw_); }
#line 3070 "Parser.C"
    break;

  case 56: /* Ruw: _SYMB_62  */
#line 1356 "FIRRTL.y"
             {  (yyval.ruw_) = new FIRRTLFrontend::Ruw_new(); FIRRTLFrontend::YY_RESULT_Ruw_= (yyval.ruw_); }
#line 3076 "Parser.C"
    break;

  case 57: /* Ruw: _SYMB_82  */
#line 1357 "FIRRTL.y"
             {  (yyval.ruw_) = new FIRRTLFrontend::Ruw_undefined(); FIRRTLFrontend::YY_RESULT_Ruw_= (yyval.ruw_); }
#line 3082 "Parser.C"
    break;

  case 58: /* Info: _SYMB_16 _SYMB_5 SString _SYMB_6  */
#line 1359 "FIRRTL.y"
                                        {  (yyval.info_) = new FIRRTLFrontend::Info1((yyvsp[-1].sstring_)); FIRRTLFrontend::YY_RESULT_Info_= (yyval.info_); }
#line 3088 "Parser.C"
    break;

  case 59: /* Info: %empty  */
#line 1360 "FIRRTL.y"
                {  (yyval.info_) = new FIRRTLFrontend::Info_(); FIRRTLFrontend::YY_RESULT_Info_= (yyval.info_); }
#line 3094 "Parser.C"
    break;

  case 60: /* Exp: _SYMB_26 Intsize _SYMB_1 Int _SYMB_2  */
#line 1362 "FIRRTL.y"
                                           {  (yyval.exp_) = new FIRRTLFrontend::Exp1((yyvsp[-3].intsize_), (yyvsp[-1].int_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3100 "Parser.C"
    break;

  case 61: /* Exp: _SYMB_26 Intsize _SYMB_1 SString _SYMB_2  */
#line 1363 "FIRRTL.y"
                                             {  (yyval.exp_) = new FIRRTLFrontend::Exp2((yyvsp[-3].intsize_), (yyvsp[-1].sstring_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3106 "Parser.C"
    break;

  case 62: /* Exp: _SYMB_25 Intsize _SYMB_1 Int _SYMB_2  */
#line 1364 "FIRRTL.y"
                                         {  (yyval.exp_) = new FIRRTLFrontend::Exp3((yyvsp[-3].intsize_), (yyvsp[-1].int_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3112 "Parser.C"
    break;

  case 63: /* Exp: _SYMB_25 Intsize _SYMB_1 SString _SYMB_2  */
#line 1365 "FIRRTL.y"
                                             {  (yyval.exp_) = new FIRRTLFrontend::Exp4((yyvsp[-3].intsize_), (yyvsp[-1].sstring_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3118 "Parser.C"
    break;

  case 64: /* Exp: Id  */
#line 1366 "FIRRTL.y"
       {  (yyval.exp_) = new FIRRTLFrontend::ExpId((yyvsp[0].id_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3124 "Parser.C"
    break;

  case 65: /* Exp: Exp _SYMB_17 Id  */
#line 1367 "FIRRTL.y"
                    {  (yyval.exp_) = new FIRRTLFrontend::Exp5((yyvsp[-2].exp_), (yyvsp[0].id_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3130 "Parser.C"
    break;

  case 66: /* Exp: Exp _SYMB_5 Int _SYMB_6  */
#line 1368 "FIRRTL.y"
                            {  (yyval.exp_) = new FIRRTLFrontend::Exp6((yyvsp[-3].exp_), (yyvsp[-1].int_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3136 "Parser.C"
    break;

  case 67: /* Exp: Exp _SYMB_5 Exp _SYMB_6  */
#line 1369 "FIRRTL.y"
                            {  (yyval.exp_) = new FIRRTLFrontend::Exp7((yyvsp[-3].exp_), (yyvsp[-1].exp_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3142 "Parser.C"
    break;

  case 68: /* Exp: _SYMB_59 _SYMB_1 Exp _SYMB_15 Exp _SYMB_15 Exp _SYMB_2  */
#line 1370 "FIRRTL.y"
                                                           {  (yyval.exp_) = new FIRRTLFrontend::Exp8((yyvsp[-5].exp_), (yyvsp[-3].exp_), (yyvsp[-1].exp_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3148 "Parser.C"
    break;

  case 69: /* Exp: _SYMB_83 _SYMB_1 Exp _SYMB_15 Exp _SYMB_2  */
#line 1371 "FIRRTL.y"
                                              {  (yyval.exp_) = new FIRRTLFrontend::Exp9((yyvsp[-3].exp_), (yyvsp[-1].exp_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3154 "Parser.C"
    break;

  case 70: /* Exp: Primop _SYMB_1 ListExp _SYMB_15 ListInt _SYMB_2  */
#line 1372 "FIRRTL.y"
                                                    {  std::reverse((yyvsp[-3].listexp_)->begin(),(yyvsp[-3].listexp_)->end()) ; std::reverse((yyvsp[-1].listint_)->begin(),(yyvsp[-1].listint_)->end()) ;(yyval.exp_) = new FIRRTLFrontend::Exp10((yyvsp[-5].primop_), (yyvsp[-3].listexp_), (yyvsp[-1].listint_)); FIRRTLFrontend::YY_RESULT_Exp_= (yyval.exp_); }
#line 3160 "Parser.C"
    break;

  case 71: /* ListExp: Exp  */
#line 1374 "FIRRTL.y"
              {  (yyval.listexp_) = new FIRRTLFrontend::ListExp() ; (yyval.listexp_)->push_back((yyvsp[0].exp_)); FIRRTLFrontend::YY_RESULT_ListExp_= (yyval.listexp_); }
#line 3166 "Parser.C"
    break;

  case 72: /* ListExp: Exp ListExp  */
#line 1375 "FIRRTL.y"
                {  (yyvsp[0].listexp_)->push_back((yyvsp[-1].exp_)) ; (yyval.listexp_) = (yyvsp[0].listexp_) ; FIRRTLFrontend::YY_RESULT_ListExp_= (yyval.listexp_); }
#line 3172 "Parser.C"
    break;

  case 73: /* ListInt: Int  */
#line 1377 "FIRRTL.y"
              {  (yyval.listint_) = new FIRRTLFrontend::ListInt() ; (yyval.listint_)->push_back((yyvsp[0].int_)); FIRRTLFrontend::YY_RESULT_ListInt_= (yyval.listint_); }
#line 3178 "Parser.C"
    break;

  case 74: /* ListInt: Int ListInt  */
#line 1378 "FIRRTL.y"
                {  (yyvsp[0].listint_)->push_back((yyvsp[-1].int_)) ; (yyval.listint_) = (yyvsp[0].listint_) ; FIRRTLFrontend::YY_RESULT_ListInt_= (yyval.listint_); }
#line 3184 "Parser.C"
    break;

  case 75: /* Primop: _SYMB_27  */
#line 1380 "FIRRTL.y"
                  {  (yyval.primop_) = new FIRRTLFrontend::Primop_add(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3190 "Parser.C"
    break;

  case 76: /* Primop: _SYMB_80  */
#line 1381 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_sub(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3196 "Parser.C"
    break;

  case 77: /* Primop: _SYMB_58  */
#line 1382 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_mul(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3202 "Parser.C"
    break;

  case 78: /* Primop: _SYMB_39  */
#line 1383 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_div(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3208 "Parser.C"
    break;

  case 79: /* Primop: _SYMB_56  */
#line 1384 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_mod(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3214 "Parser.C"
    break;

  case 80: /* Primop: _SYMB_54  */
#line 1385 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_lt(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3220 "Parser.C"
    break;

  case 81: /* Primop: _SYMB_53  */
#line 1386 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_leq(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3226 "Parser.C"
    break;

  case 82: /* Primop: _SYMB_47  */
#line 1387 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_gt(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3232 "Parser.C"
    break;

  case 83: /* Primop: _SYMB_46  */
#line 1388 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_geq(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3238 "Parser.C"
    break;

  case 84: /* Primop: _SYMB_43  */
#line 1389 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_eq(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3244 "Parser.C"
    break;

  case 85: /* Primop: _SYMB_61  */
#line 1390 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_neq(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3250 "Parser.C"
    break;

  case 86: /* Primop: _SYMB_70  */
#line 1391 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_pad(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3256 "Parser.C"
    break;

  case 87: /* Primop: _SYMB_32  */
#line 1392 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_asUInt(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3262 "Parser.C"
    break;

  case 88: /* Primop: _SYMB_31  */
#line 1393 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_asSInt(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3268 "Parser.C"
    break;

  case 89: /* Primop: _SYMB_30  */
#line 1394 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_asClock(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3274 "Parser.C"
    break;

  case 90: /* Primop: _SYMB_76  */
#line 1395 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_shl(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3280 "Parser.C"
    break;

  case 91: /* Primop: _SYMB_77  */
#line 1396 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_shr(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3286 "Parser.C"
    break;

  case 92: /* Primop: _SYMB_40  */
#line 1397 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_dshl(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3292 "Parser.C"
    break;

  case 93: /* Primop: _SYMB_41  */
#line 1398 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_dshr(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3298 "Parser.C"
    break;

  case 94: /* Primop: _SYMB_37  */
#line 1399 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_cvt(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3304 "Parser.C"
    break;

  case 95: /* Primop: _SYMB_60  */
#line 1400 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_neg(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3310 "Parser.C"
    break;

  case 96: /* Primop: _SYMB_64  */
#line 1401 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_not(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3316 "Parser.C"
    break;

  case 97: /* Primop: _SYMB_28  */
#line 1402 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_and(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3322 "Parser.C"
    break;

  case 98: /* Primop: _SYMB_67  */
#line 1403 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_or(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3328 "Parser.C"
    break;

  case 99: /* Primop: _SYMB_88  */
#line 1404 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_xor(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3334 "Parser.C"
    break;

  case 100: /* Primop: _SYMB_29  */
#line 1405 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_andr(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3340 "Parser.C"
    break;

  case 101: /* Primop: _SYMB_68  */
#line 1406 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_orr(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3346 "Parser.C"
    break;

  case 102: /* Primop: _SYMB_89  */
#line 1407 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_xorr(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3352 "Parser.C"
    break;

  case 103: /* Primop: _SYMB_35  */
#line 1408 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_cat(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3358 "Parser.C"
    break;

  case 104: /* Primop: _SYMB_34  */
#line 1409 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_bits(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3364 "Parser.C"
    break;

  case 105: /* Primop: _SYMB_48  */
#line 1410 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_head(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3370 "Parser.C"
    break;

  case 106: /* Primop: _SYMB_81  */
#line 1411 "FIRRTL.y"
             {  (yyval.primop_) = new FIRRTLFrontend::Primop_tail(); FIRRTLFrontend::YY_RESULT_Primop_= (yyval.primop_); }
#line 3376 "Parser.C"
    break;

  case 107: /* Id: _IDENT_  */
#line 1413 "FIRRTL.y"
             {  (yyval.id_) = new FIRRTLFrontend::Eid((yyvsp[0]._string)); FIRRTLFrontend::YY_RESULT_Id_= (yyval.id_); }
#line 3382 "Parser.C"
    break;

  case 108: /* SString: _STRING_  */
#line 1415 "FIRRTL.y"
                   {  (yyval.sstring_) = new FIRRTLFrontend::Estring((yyvsp[0]._string)); FIRRTLFrontend::YY_RESULT_SString_= (yyval.sstring_); }
#line 3388 "Parser.C"
    break;

  case 109: /* Intsize: _SYMB_18 Int _SYMB_19  */
#line 1417 "FIRRTL.y"
                                {  (yyval.intsize_) = new FIRRTLFrontend::Intsize1((yyvsp[-1].int_)); FIRRTLFrontend::YY_RESULT_Intsize_= (yyval.intsize_); }
#line 3394 "Parser.C"
    break;

  case 110: /* Intsize: %empty  */
#line 1418 "FIRRTL.y"
                {  (yyval.intsize_) = new FIRRTLFrontend::Intsize_(); FIRRTLFrontend::YY_RESULT_Intsize_= (yyval.intsize_); }
#line 3400 "Parser.C"
    break;

  case 111: /* Intsizefixed: _SYMB_20 Int _SYMB_21  */
#line 1420 "FIRRTL.y"
                                     {  (yyval.intsizefixed_) = new FIRRTLFrontend::Intsizefixed1((yyvsp[-1].int_)); FIRRTLFrontend::YY_RESULT_Intsizefixed_= (yyval.intsizefixed_); }
#line 3406 "Parser.C"
    break;

  case 112: /* Intsizefixed: %empty  */
#line 1421 "FIRRTL.y"
                {  (yyval.intsizefixed_) = new FIRRTLFrontend::Intsizefixed_(); FIRRTLFrontend::YY_RESULT_Intsizefixed_= (yyval.intsizefixed_); }
#line 3412 "Parser.C"
    break;

  case 113: /* Int: _INTEGER_  */
#line 1423 "FIRRTL.y"
                {  (yyval.int_) = new FIRRTLFrontend::Eint((yyvsp[0]._int)); FIRRTLFrontend::YY_RESULT_Int_= (yyval.int_); }
#line 3418 "Parser.C"
    break;


#line 3422 "Parser.C"

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
  yytoken = yychar == FIRRTLFRONTENDYYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
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

      if (yychar <= FIRRTLFRONTENDYYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == FIRRTLFRONTENDYYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = FIRRTLFRONTENDYYEMPTY;
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != FIRRTLFRONTENDYYEMPTY)
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

