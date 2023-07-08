#include <assert.h>
#include <stdio.h>

#include "../vec.h"

void test_vec() {
	int* v = vec_create(int, 10);
	vec_push_back(v, 8);
	printf("********%d\n", v[0]);
	//assert(v[0] == 8);
}
