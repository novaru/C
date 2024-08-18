#include <stdio.h>
#include <ctype.h>

float converter(char unit1, char unit2, float temp);

int main()
{
  char unit1, unit2;
  float temp, result;

  printf("\n----Tempmerature Unit----\n - Celcius    (C)\n - Reamur     (R)\n - Kelvin     (K)\n - Fahrenheit (F)");
  printf("\nInput the temperature unit to convert:" );
  scanf(" %c", &unit1);
  unit1 = toupper(unit1);

  printf("Enter the temperature: ");
  scanf("%f", &temp);

  printf("Input the target temperature unit: ");
  scanf(" %c", &unit2);
  unit2 = toupper(unit2);

  result = converter(unit1, unit2, temp);
  printf("The temperature is %.2f in %c, converted into %.2f %c.\n", temp, unit1, result, unit2);

  return 0;
}

float converter(char unit1, char unit2, float temp)
{
  float result;
  switch (unit1) 
  {
    // convert every unit into celcius
    case 'C':
      printf("The current temperature is %.2f Celcius.\n", temp);
      result = temp;
      break;
    case 'R':
      printf("The current temperature is %.2f Reamur.\n", temp);
      result = temp * 5/4;
      break;
    case 'F':
      printf("The current temperature is %.2f Fahrenheit.\n", temp);
      result = (temp - 32) * 5/9;
      break;
    case 'K':
      printf("The current temperature is %.2f Kelvin.\n", temp);
      result = temp - 273;
      break; 
    default:
      printf("The given temperature unit is invalid!\n");
      result = 0;
      break;
  }

  switch (unit2) 
  { 
    // convert celcius into the targeted temperature unit
    case 'C':
      break;
    case 'R':
      result = result * 4/5;
      break;
    case 'F':
      result = (result * 9/5) + 32;
      break;
    case 'K':
      result = result + 273;
      break;
    default:
      printf("The given temperature unit is invalid!\n");
      result = 0;
      break;   
  }

  return result;
}
