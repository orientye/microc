#include <assert.h>
#include <stdio.h>

#include "../vec.h"

void test_vec() {
	int* v = vec_create(int, 3);
	int count = 100;
	for (int i = 0; i < count; i++) {
		vec_push_back(v, i + 1);
	}
	
	for (int i = 0; i < count; i++) {
		assert(v[i] == (i + 1));
	}

	vec_pop_back(v);
	int count2 = vec_size(v);
	assert(count == (count2 + 1));
}
