#include <stdio.h>
#include <string.h>

struct Heroes
{
  char name[16];
  int power;
};

int main()
{   
  /*
    Struct = Collection of related members ("variables"), 
             they can be of different data types,
             listed under one name in a block of memory
             VERY SIMILAR to classes in other languages (but no methods)
  */
  
  struct Heroes hero1;
  struct Heroes hero2;
  // hero1
  strcpy(hero1.name, "Batman");
  hero1.power = 80;
  // hero2
  strcpy(hero2.name, "Superman");
  hero2.power = 400;

  printf("Hero: %s\n", hero1.name);
  printf("Power: %d\n", hero1.power);
  printf("Hero: %s\n", hero2.name);
  printf("Power: %d\n", hero2.power);
  return 0;
}
