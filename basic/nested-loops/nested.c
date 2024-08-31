#include <stdio.h>

int main()
{
  // nested loop = a loop inside of another loop

  int rows, columns;
  char symbol;

  printf("\nEnter # of rows: ");
  scanf("%d", &rows);

  printf("Enter # of columns: ");
  scanf("%d", &columns);

  for (int i = 1; i <= rows; i++) 
  {
    for (int j = 1; j <= columns; j++) 
    {
      printf("%d ", i);
    }
    printf("\n");
  }


  return 0;
}
