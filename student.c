#include <stdio.h>



// student structure
//struct Student...

 struct Student{
 char firstName[256];
 char lastName[256];
 int age;
 };

void printStudent(struct Student* student)
{
printf("Student First Name: %s\n", student->firstName);
printf("Student Last Name: %s\n", student->lastName);
printf("Student Age: %d\n", student->age);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in student
 for(int i=0; i<num; i++) {
 printStudent(&(students[i])); 

 }
}


int main()
{

  // an array of students
  //xxx students;
 struct Student students[256];
 char input[256];

 int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
     struct Student addedStudent;
     printf("Enter first name of student: ");
     fgets(input, 256, stdin);
     sscanf(input, "%s", &(addedStudent.firstName));
     printf("Enter last name of student: ");
     fgets(input, 256, stdin);
     sscanf(input, "%s", &(addedStudent.lastName));
     printf("Enter age of student: ");
     fgets(input, 256, stdin);
     sscanf(input, "%d", &(addedStudent.age));
     
      // enter a new student
      students[numStudents] = addedStudent;
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
