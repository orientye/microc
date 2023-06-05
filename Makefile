BUILD_DIR=./build
OBJECTS=
CC=clang

all: ${OBJECTS}
	${CC} mcc.c ${OBJECTS} -o mcc

.PHONY: clean
clean:
	rm mcc
	rm -rf $(OBJECTS)
