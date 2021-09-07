CC=g++ -g
CCFLAGS=--ansi -W -Wall -Wno-unused-parameter -Wno-unused-function -Wno-unneeded-internal-declaration

FLEX=flex
FLEX_OPTS=-PFIRRTL

BISON=bison
BISON_OPTS=-t -pFIRRTL

OBJS=Absyn.o Buffer.o Lexer.o Parser.o Printer.o

.PHONY : clean distclean

all : TestFIRRTL

clean :
	rm -f *.o TestFIRRTL FIRRTL.aux FIRRTL.log FIRRTL.pdf FIRRTL.dvi FIRRTL.ps FIRRTL

distclean : clean
	rm -f Absyn.C Absyn.H Buffer.C Buffer.H Test.C Parser.C Parser.H ParserError.H FIRRTL.y Lexer.C FIRRTL.l Skeleton.C Skeleton.H Printer.C Printer.H Makefile FIRRTL.tex

TestFIRRTL : ${OBJS} Test.o
	@echo "Linking TestFIRRTL..."
	${CC} ${OBJS} Test.o -o TestFIRRTL

Absyn.o : Absyn.C Absyn.H
	${CC} ${CCFLAGS} -c Absyn.C

Buffer.o : Buffer.C Buffer.H
	${CC} ${CCFLAGS} -c Buffer.C

Lexer.C : FIRRTL.l
	${FLEX} -oLexer.C FIRRTL.l

Parser.C : FIRRTL.y
	${BISON} FIRRTL.y -o Parser.C

Lexer.o : Lexer.C Parser.H
	${CC} ${CCFLAGS} -c Lexer.C

Parser.o : Parser.C Absyn.H
	${CC} ${CCFLAGS} -c Parser.C

Printer.o : Printer.C Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Printer.C

Skeleton.o : Skeleton.C Skeleton.H Absyn.H
	${CC} ${CCFLAGS} -Wno-unused-parameter -c Skeleton.C

Test.o : Test.C Parser.H Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Test.C
