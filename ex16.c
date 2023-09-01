#include <stdio.h>

int factorial(int numb)
{
  int answer = 1;
  
  for (int i = 1; i <= numb ; i++)
  {
    answer = answer * i;
  }
  
  return answer;
}

void factorial_1()
{
  int numb;

  printf("Enter the number :");
  scanf("%d", &numb);

  printf("factorial is %d\n", factorial(numb));
}

int main()
{
  factorial_1();
  return 0;
}