#include <stdio.h>
#include <math.h>
// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius)
{
 float area = M_PI*radius*radius;
 return area;
}




int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start; 
  int reps;
  float buffer[256];

  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);
 

  printf("What do you want the starting value to be?\n");
  while(1)
  {
  fgets(buffer, 256, stdin);
  if (!sscanf(buffer, "%f", &start)) 
  {
  printf("invalid input, try again\n");
  continue;
  }
break; 
} 

  printf("How many times do you want the calculation to be repeated(in increments of 1?)\n");
  while(1)
  {
  fgets(buffer, 256, stdin);
  if (!sscanf(buffer, "%d", &reps)) 
  {
  printf("invalid input, try again\n");
  continue;
  }
break; 
} 
 float end = start + reps - 1; 
  // add your code below to call areaOfCircle function with values between
 // start and end
 printf("%f\n", end);
 printf("calculating area of circle starting at %f, and ending at %f\n", start, end);
 for (start; start < end+1; start++) 
{
   printf("Area of a circle with %f radius is %f\n", start, areaOfCircle(start));
}





}
