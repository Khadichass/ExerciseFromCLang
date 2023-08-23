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

  int sum = 0;

  for (int i = 1; i <= 50; i+=2)
  {
    sum+=i;
    printf("i= %d , sum= %d\n",i,sum);
  }
  
  
  return 0;

}