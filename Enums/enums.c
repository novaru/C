#include <stdio.h>

enum Day
{
  Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7
};

int main()
{
  // enum = a user defined type of named integer indetifiers helps to make a program more readable

  enum Day today = Fri;

  if(today == Sat || today == Sun)
  {
    printf("Today is the weekend, Holiday Time!\n");
  }
  else 
  {
    printf("It's a long work day! :(\n");
  };
  return 0;
}
