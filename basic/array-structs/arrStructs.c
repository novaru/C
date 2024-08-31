#include <stdio.h>
#define BLUE(string) "\x1b[22;34m" string "\x1b[0m"

struct Student{
  char name[16];
  char major[10];
  float gpa;
};

int main()
{
  struct Student student1 = {"Alice", "Law", 3.25};
  struct Student student2 = {"Bob", "Biology", 3.4};
  struct Student student3 = {"Clara", "Physics", 2.7};
  struct Student student4 = {"Damian", "Chemistry", 4};

  struct Student students[] = {student1,student2, student3, student4};

  printf("-------------------------------\n");
  

  for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
  {
    printf(" Student ID: " BLUE("20215100%d") "\n", i + 1);
    printf(" Name:\t %s\n", students[i].name);
    printf(" Major:\t %-10s", students[i].major);
    printf(" GPA: %.2f\n", students[i].gpa);
    printf("-------------------------------\n");
  };

  return 0;
};
