#include <stdio.h>

void change(int* param_a, int* param_b, int* param_c )
{
  int temp = *param_a;
  *param_a= *param_b;
  *param_b = *param_c;
  *param_c = temp;
}

int main()
{
  int a = 10;
  int b = 15;
  int c = 20;

  int *param_a;
  int *param_b;
  int *param_c;

  change(&a, &b, &c); 
  printf("c: %d, b: %d, a: %d\n", a, b, c);

  return 0;
}


