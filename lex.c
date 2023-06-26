#include "lex.h"

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define STR_EQ(str1, str2) (0 == strcmp(str1, str2))

static bool is_keyword(const char* str) {
	return  STR_EQ(str, "int") || 
		STR_EQ(str, "return");
}

static char peek_char(FILE* file) {
	char c = getc(file);
	ungetc(c, file);
    	return c;
}

static token_t* read_next_token(FILE* file) {
	token_t* token = NULL;
	char c = peek_char(file);
	switch(c) {
	
	}
	return NULL;
}

lex_err_t lex(const char* file_name) {
	FILE* file = fopen(file_name, "r");
    	if (!file) {
        	return kError;
    	}
	
	token_t* token = read_next_token(file);
	while (token) {	
		read_next_token(file);
	} 

	return kSuccess;
}
