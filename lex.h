
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

lex_err_t lex();

#endif
