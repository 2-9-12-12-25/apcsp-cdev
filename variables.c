
#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

 int x = a;
 a = c;
 c = x;
 printf("The value of a is %d, and the value of c is %d\n", a, c); 
}
