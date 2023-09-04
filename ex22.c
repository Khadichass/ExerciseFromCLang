#include <stdio.h>

void change(int* param_1, int* param_2)
{
  int temp = *param_1;
  *param_1 = *param_2;
  *param_2 =temp;
}
int main(){
  
  int num1 =10;
  int num2 =20;

  printf("value of numS: %d and %d\n", num1, num2);
  
  change(&num1, &num2);
  printf("value of num: %d and %d\n", num1, num2);

  
  return 0;
}