#include <stdio.h>

void sortInt(int array[], int size) // Bubble Sort
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if(array[j] > array[j+1])
      {
        int tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
      }
    }
  }
}

void sortChar(char array[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if(array[j] > array[j+1])
      {
        char tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
      }
    }
  }
}

void printIntArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void printCharArray(char array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%c ", array[i]);
  }
  printf("\n");
}


int main()
{
  int array[] = {9, 1, 8, 2, 7, 4, 6, 3, 5};
  char letter[] = {'E', 'B', 'F', 'A', 'D', 'C', 'G'};
  int intSize = sizeof(array)/sizeof(array[0]);
  int charSize = sizeof(letter)/sizeof(letter[0]);
 
  sortInt(array, intSize);
  printIntArray(array, intSize);
  sortChar(letter, charSize);
  printCharArray(letter, charSize);

  return 0;
}

