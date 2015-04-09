#include <stdio.h>
#include <assert.h>

#include <functions.h>
#include <test.h>

int main(void) {
  
  test_add();
  
  test_mult();
  
  puts("testing complete");
  return 0;
}

void test_add() {
  puts("testing int add(int a, int b)");
  assert(add(1,2) == 3);
  assert(add(3,4) == 7);
}

void test_mult() {
  puts("testing int mult(int a, int b)");
  assert(mult(1,2) == 2);
  assert(mult(3,4) == 12);
}