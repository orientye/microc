#include <stdio.h>

#include "lex.h"
#include "mcc.h"
#include "test/test.h"

int main(int argc, char** argv) {

	test();
	
	const char* input_file = argc > 1 ? argv[1] : "./test/test-input.c";
	const char* output_file = argc > 2 ? argv[2] : "test";	
	
	lexer_t* lexer = lexer_create();
	lex_err_t lex_ret = lex(lexer, input_file);
	if (kSuccess != lex_ret) {
		printf("lex err, code=%d\n", lex_ret);
	}
	lexer_destroy(lexer);

	printf("helloworld, mcc\n");
	printf("input file: %s\n", input_file);
	printf("output file: %s\n", output_file);
	
	return 0;
}
