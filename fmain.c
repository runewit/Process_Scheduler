#include <functions.h>
#include <stdio.h>

int main(void) {
  int a,b;
  
  // Add numbers
  puts("Enter 2 numbers to add:");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("%d + %d = %d\n",a,b,add(a,b));
  
  // Multiply numbers
  puts("Enter 2 numbers to multiply:");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("%d * %d = %d\n",a,b,mult(a,b));
  
  return 0;
}