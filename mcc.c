#include <stdio.h>

#include "lex.h"
#include "mcc.h"

int main(int argc, char** argv) {
	
	const char* input_file = argc > 1 ? argv[1] : "test-input.c";
	const char* output_file = argc > 2 ? argv[2] : "test";	
	
	lex_err_t lex_ret = lex(input_file);
	if (kSuccess != lex_ret) {
		printf("lex err, code=%d\n", lex_ret);
	}
	
	printf("helloworld, mcc\n");
	printf("input file: %s\n", input_file);
	printf("output file: %s\n", output_file);
	
	return 0;
}
