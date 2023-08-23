#include <stdio.h>

int main(){
  
  // int i =1;
  // int sum = 0;

  // while (i<=10)
  // {
  //   sum +=i;
  //   i++;

  //   printf("i = %d sum =%d \n", i, sum);
  // }

  int numb;

  printf("Enter the number:");
  scanf("%d",&numb);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n",i,numb, i*numb);
  }
  
  return 0;

}