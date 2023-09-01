#include <stdio.h>
int salary_1(int sum)
{
  int dollar = 12000;
  int convert= dollar*sum;
}

void count()
{
  int sum;
  int convert;
  printf("enter the amount: ");
  scanf("%d", &sum);
  printf("%d\n", salary_1(sum));
}

int main()
{
  count();
  return 0;
}