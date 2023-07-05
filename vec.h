
#ifndef _VEC_H
#define _VEC_H

void* vec_create(void);

void vec_destory(void* vec);

void vec_insert(void* vec, size_t pos);

void vec_push_back(void* vec);

void vec_erase(void* vec, size_t pos, size_t len);

void vec_pop_back(void* vec);

void vec_size(void* vec);

#endif
