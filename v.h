#define vec_type(type) type *

typedef struct {
	size_t capacity;
	size_t length;
} vec_t;

static vec_t* __vec_struct(void* vec) { return &((vec_t*)vec)[-1]; }

static void* __vec_data(vec_t* v) { return ((void *)&((vec_t*)(v))[1]); }