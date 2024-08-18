#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // pseudo random numbers = A set of values or elements that 
  //                         are statically random
  //                         Don't use it for cyrptograhpic security

  // this will generate random integer then accessed by rand()
  srand(time(0)); 

  int number1 = (rand() % 27) + 1;
  int number2 = (rand() % 27) + 1;
  int number3 = (rand() % 27) + 1;

  printf("1-st Number is: %d\n", number1);
  printf("2-nd Number is: %d\n", number2);
  printf("3-rd Number is: %d\n", number3);

  return 0;
};

