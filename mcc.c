#include <stdio.h>

#include "lex.h"
#include "mcc.h"

int main(int argc, char** argv) {
	
	lex_err_t lex_ret = lex();
	if (kSuccess != lex_ret) {
		printf("lex err, code=%d\n", lex_ret);
	}
	
	printf("helloworld, mcc\n");
	
	return 0;
}
