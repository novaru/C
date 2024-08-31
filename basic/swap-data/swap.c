#include <stdio.h>
#include <string.h>

int main()
{
  char e[] = "Elephant";
  char a[] = "Ant";
  char tmp[16];
  
  strcpy(tmp, e);
  strcpy(e, a);
  strcpy(a, tmp);
  // e will be error because length of a is lesser than length of e
  printf("e = %s\n", e);
  printf("a = %s\n", a);

  // set the size of two variables that will be swapped 
  char g[16] = "Giraffe";
  char c[16] = "Cow";  

  strcpy(tmp, g);
  strcpy(g, c);
  strcpy(c, tmp);
  printf("g = %s\n", g);
  printf("c = %s\n", c);

  return 0;
}
