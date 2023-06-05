BUILD_DIR=./build
OBJECTS= ${BUILD_DIR}/lex.o
CC=clang

all: ${OBJECTS}
	${CC} mcc.c ${OBJECTS} -o mcc

${BUILD_DIR}/lex.o: lex.c
	${CC} lex.c -c -o ${BUILD_DIR}/lex.o

.PHONY: clean
clean:
	rm mcc
	rm -rf $(OBJECTS)
