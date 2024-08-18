#include <stdio.h>

int primeGenerator()
{
  int i, j;
  int n = 10000;
  int prime[n];
  for (i = 2; i <= n; i++)
  {
    prime[i] = 1;
  }
  for (i = 2; i <= n; i++)
  {
    if (prime[i])
    {
      for (j = i * i; j <= n; j += i)
      {
        prime[j] = 0;
      }
    }
  }
  for (i = 2; i <= n; i++)
  {
    if (prime[i])
    {
      printf("%d\n", i);
    }
  }
  printf("\n");
  return 0;  
}

int main()
{
  int a;
  a = 10;
  printf("%d\n", a);
  primeGenerator();
  return 0;
}
