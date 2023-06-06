#ifndef _MCC_H
#define _MCC_H

enum LexError {
	kSuccess,
	kError
};

enum TokenType {
	kIdentifier,
	kKeyword,
	kOperator,
	kSymbol,
	kComment,
	kNewline,
	kNumber,
	kString
};

#endif
