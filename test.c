#include <stdio.h>
#include <assert.h>

#include <functions.h>
#include <test.h>

int main(void) {
  
	test_function();
	puts("testing complete");
	return 0;
}

void test_function() {
	puts("testing function")
	assert(function(inputs)==what_input_should_be);
}