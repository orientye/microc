#ifndef _MCC_H
#define _MCC_H

enum LexErr {
	kOK,
	kErr
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
