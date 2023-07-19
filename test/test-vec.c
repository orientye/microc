#include <assert.h>
#include <stdio.h>

#include "../vec.h"

void test_vec() {
	int* v = vec_create(int, 3);
	vec_push_back(v, 1);
	assert(v[0] == 1);
	vec_push_back(v, 2);
	assert(v[1] == 2);
	vec_push_back(v, 3);
	assert(v[2] == 3);
	vec_push_back(v, 4);
	assert(v[3] == 4);
	vec_push_back(v, 5);
	assert(v[4] == 5);
}
