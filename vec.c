#include "vec.h"

#include <stdlib.h>

typedef struct {
	size_t capacity;
	size_t length;
	char* buff;
} vec_t;

void* vec_create(void) {
	vec_t* v = (vec_t*)malloc(sizeof(vec_t));
	v->capacity = 0;
	v->length = 0;
	v->buff = NULL;
	return v;
}

void vec_destory(void* vec) {
	free(vec);
}
