#include "vec.h"

#include <stdlib.h>

typedef struct {
	size_t capacity;
	size_t length;
	size_t type_len;
	char buff[];
} vec_t;

void vec_destory(void* vec) {
	free(vec);
}

void* __vec_create(size_t type_len, size_t len) {
	vec_t* v = (vec_t*)malloc(sizeof(vec_t) + type_len * len);
	v->capacity = len;
	v->length = 0;
	v->type_len = type_len;
	return v->buff;
}


size_t vec_size(void* vec) {
	vec_t* v = vec;
	return v->length;
}

void* __vec_back(void* vec) {
	vec_t* v = vec;
	char* p = v->buff + v->length * v->type_len;
	return p;	
}
