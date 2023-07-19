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

static vec_t* __vector_struct(void* vec) { return &((vec_t*)vec)[-1]; }

static vec_t* __vector_realloc(vec_t* v) {
	size_t len = (v->length ? v->length : 1) << 1;
	v = (vec_t*)realloc(v, sizeof(vec_t) + v->type_len * len);
	v->capacity = len;
	return v;
}

void* __vec_push_back(void* vec) {
	vec_t* v = __vector_struct(vec);
	if (v->length >= v->capacity) {
		v = __vector_realloc(v);
	}
	char* p = v->buff + (v->length++) * v->type_len;
	return p;	
}
