#include <stdio.h>

int main(){

  int numb;
  printf("Enter the  number:");
  scanf("%d",&numb);
   int i;
  for ( i = 1; i <= numb; i++)
  {
    printf("%d\n",i);

    i++;
  }
   
  return 0;


}