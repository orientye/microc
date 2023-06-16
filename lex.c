#include "lex.h"

#include <stdio.h>

lex_err_t lex(const char* file_name) {
	FILE *file = fopen(file_name, "r");
    	if (!file) {
        	return kError;
    	}
	return kSuccess;
}
