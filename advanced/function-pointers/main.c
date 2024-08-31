#include <stdio.h>
#define EXIT_SUCCESS 0;

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int main(int argc, char *argv[])
{
  int (*operation)(int, int);
  int a = 10, b = 5;

  operation = add;
  printf("Addition: %d\n", operation(a, b));

  operation = sub;
  printf("Subtraction: %d\n", operation(a, b));
  return EXIT_SUCCESS;
}
