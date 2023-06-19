#include "lex.h"

#include <stdio.h>

static token_t* read_next_token() {
	return NULL;
}

lex_err_t lex(const char* file_name) {
	FILE *file = fopen(file_name, "r");
    	if (!file) {
        	return kError;
    	}
	
	token_t* token = read_next_token();
	while (token) {
		
		read_next_token();
	} 

	return kSuccess;
}
