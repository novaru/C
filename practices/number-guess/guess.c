#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  const int MIN = 1;
  const int MAX = 128; 
  int guess, guesses, score;
 
  // uses current time as seed
  srand(time(0));

  // generate random number between 1 and 128
  int answer = (rand() % MAX) + MIN;


  return 0;
};
