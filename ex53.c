#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct car
{
  char name[20];
  int year;
  int hp ;
};

int main()
{
  struct car car_str;
  
  car_str.year = 2020;
  car_str.hp = 100;
  strcpy(car_str.name, "BMW");

  printf("Name: %s\nYear: %d\nHorsepower: %d\n", car_str.name, car_str.year, car_str.hp);
  
}
