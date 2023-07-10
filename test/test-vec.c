#include <assert.h>
#include <stdio.h>

#include "../vec.h"

void test_vec() {
	int* v = vec_create(int, 10);
	vec_push_back(v, 6);
	assert(v[0] == 6);
}
