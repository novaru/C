#include <stdio.h>
#include <string.h>

int main(){

  char name[25]; //bytes
  int age;

  printf("\nWhat's your name? ");
  // scanf("%s", &name);
  fgets(name, 25, stdin);
  name[strlen(name)-1] = '\0';

  printf("\nHow old are you? ");
  scanf("%d", &age);

  printf("\nHello, %s! \nNice to meet you!\n", name);
  printf("\nYou are %d year(s) old.", age);

  return 0;
}
