#ifndef _MCC_H
#define _MCC_H

enum LexErr {
	kOK,
	kERR
};

enum TokenType {
	kIDENTIFIER,
	kKEYWORD,
	kOPERATOR,
	kSYMBOL,
	kCOMMENT,
	kNEWLINE,
	kNUMBER,
	kSTRING
};

#endif
