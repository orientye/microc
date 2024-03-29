
#ifndef _LEX_H
#define _LEX_H

typedef enum {
	kSuccess,
	kError
} lex_err_t;

typedef enum {
	kIdentifier,
	kKeyword,
	kOperator,
	kSymbol,
	kComment,
	kNewline,
	kNumber,
	kString
} token_type_t;

typedef struct {
	int line;
	int col;
	const char* file_name;
} pos_t;

typedef struct {
	token_type_t ty;
	pos_t pos;
	union {
		char c;
		const char* s;
		int i;
		void* v;
	};
} token_t;

typedef struct {
	token_t* token_vec;
} lexer_t;

lex_err_t lex(lexer_t* lexer, const char* file_name);

lexer_t* lexer_create();

void lexer_destroy(lexer_t* lexer);

#endif
