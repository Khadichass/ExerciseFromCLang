#include <stdio.h>
int salary_1(int hour)
{
  int salary = hour *12*30;
  return salary;
}

void count()
{
  int hour;
  int salary;
  printf("enter the hour that you worked: ");
  scanf("%d", &hour);
  printf("%d\n", salary_1(hour));
}

int main()
{
  count();
  return 0;
}