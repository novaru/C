#include <stdio.h>

int paliandrom() 
{
  // generate paliandrome number
  int i, j, k;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      for (k = 0; k < 10; k++)
      {
        printf("%d%d%d%d%d\n", i, j, k, j, i);
      }
    }
  }
  return 0;
}

int main()
{
  paliandrom();
  return 0;
}