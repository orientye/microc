#include "lex.h"

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define STR_EQ(str1, str2) (0 == strcmp(str1, str2))

#define DIGIT_CASE \
	case '0':        \
	case '1':        \
	case '2':        \
	case '3':        \
	case '4':        \
	case '5':        \
	case '6':        \
	case '7':        \
	case '8':        \
	case '9'

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
	DIGIT_CASE:
		break;
	
	case '"':
		break;
	
	case ' ':
	case '\t':
		break;
	
	case '\n':
		break;
	
	default: 
		{
			if (isalpha(c) || c == '_') {
        			//try identifier_or_keyword
			}
		}
		break;	
	}
	return NULL;
}

lex_err_t lex(lexer_t* lexer, const char* file_name) {
	FILE* file = fopen(file_name, "r");
    	if (!file) {
        	return kError;
    	}
	
	token_t* token = read_next_token(file);
	while (token) {	
		token = read_next_token(file);
	} 

	fclose(file);
	return kSuccess;
}


lexer_t* lexer_create() {
	return NULL;
}

void lexer_destroy(lexer_t* lexer) {

}
