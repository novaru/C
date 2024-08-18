#include <stdio.h>
#include <string.h>

int main()
{
  char heroes[][10] = {"Aquaman", "Batman", "Flash", "Superman"};
  
  strcpy(heroes[0], "Shazam");

  for(int i=0; i < sizeof(heroes)/sizeof(heroes[0]); i++) {
    printf("%s\n", heroes[i]);
  }
  
  return 0;
}
