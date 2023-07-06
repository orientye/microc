
#ifndef _VEC_H
#define _VEC_H

#include <stddef.h>

#define vec_create(TYPE, LEN)	\
	(TYPE*)__vec_create(sizeof(TYPE), LEN)

void vec_destory(void* vec);

void vec_insert(void* vec, size_t pos);

void vec_push_back(void* vec);

void vec_erase(void* vec, size_t pos, size_t len);

void vec_pop_back(void* vec);

void vec_size(void* vec);

//internal
void* __vec_create(size_t type_len, size_t len);

#endif
