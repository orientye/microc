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

	vec_insert(v, 0, 0);
	vec_insert(v, count+1, count + 1);
	int count2 = vec_size(v);
	
	for (int i = 0; i < count2; i++) {
		assert(v[i] == i);
	}

	vec_pop_back(v);
	int count3 = vec_size(v);
	assert(count2 == (count3 + 1));

	vec_erase(v, 10, 30);
	assert(v[10] == 40);
}
