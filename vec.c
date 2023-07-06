#include "vec.h"

#include <stdlib.h>

typedef struct {
	size_t capacity;
	size_t length;
	char buff[];
} vec_t;

void vec_destory(void* vec) {
	free(vec);
}

void* __vec_create(size_t type_len, size_t len) {
	vec_t* v = (vec_t*)malloc(sizeof(vec_t) + type_len * len);
	v->capacity = len;
	v->length = 0;
	return v->buff;
}
