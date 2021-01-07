#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  
  char b = 'a';
  printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));
  
  float c = 1.23;
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));

  double d = 1.23456789;
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));

  unsigned int e = 5;
  printf("unsigned int e value: %u and size: %lu bytes\n", e, sizeof(e));

  short int f = 1;
  printf("short int f value: %hd and size: %lu bytes\n", f, sizeof(f)); 
}

