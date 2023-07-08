BUILD_DIR=./build
TEST_DIR=./test
OBJECTS= ${BUILD_DIR}/vec.o ${BUILD_DIR}/lex.o ${BUILD_DIR}/test-vec.o
CC=clang

all: ${OBJECTS}
	${CC} mcc.c ${OBJECTS} -o mcc

${BUILD_DIR}/vec.o: vec.c
	${CC} vec.c -c -o ${BUILD_DIR}/vec.o

${BUILD_DIR}/lex.o: lex.c
	${CC} lex.c -c -o ${BUILD_DIR}/lex.o

${BUILD_DIR}/test-vec.o: ${TEST_DIR}/test-vec.c
	${CC} ${TEST_DIR}/test-vec.c -c -o ${BUILD_DIR}/test-vec.o

.PHONY: clean
clean:
	rm mcc
	rm -rf $(OBJECTS)
