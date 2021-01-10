#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

 float d = 1.23;
 float e = 4.56;
 printf("The value of float d is %f and the address is %p\n", d, (void*)&d);
 printf("The value of float e is %f and the address is %p\n", e, (void*)&e);
 float temp;
 float* ptrtod = &d; 
 float* ptrtoe = &e;

 temp = *ptrtod;
 *ptrtod = *ptrtoe;
 *ptrtoe = temp; 

 printf("After swapping, the value of d is now %f and the value of e is now %f\n", d, e); 




 
}
