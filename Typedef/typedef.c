#include <stdio.h>
// #include <string.h>

typedef struct
{
  char brand[24];
  char series[12];
  int id;
} Car;


int main()
{
  // Typedef = reserved keyword that gives an existing datatype a "nickname"

  Car car1 = {"Toyota", "Supra", 123456789};
  Car car2 = {"Koenigsegg", "Regera", 987654321};
  
  printf("Car id: %d\n", car1.id);
  printf("Brand: %s\n", car1.brand);
  printf("Series: %s\n", car1.series);
  printf("-----------------\n");
  printf("Car id: %d\n", car2.id);
  printf("Brand: %s\n", car2.brand);
  printf("Series: %s\n", car2.series);

  return 0;
}
