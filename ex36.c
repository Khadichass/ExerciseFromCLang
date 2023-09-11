#include <stdio.h>
#include <string.h>

int main(){
  int i = 0;
  
  while (i <= 10)
  {
    if (i%2== 0)
    {
      printf("i --- %d\n",i);
    }
    
    i++;

    int j = 0;
    while( j < 10){

    if (j%2!= 0)
    {
      printf("j --- %d\n\n",j);
    }
      j++;
    }
  }
  printf("\n");
  return 0;
}