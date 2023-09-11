#include <stdio.h>
#include <string.h>

int main(){
  int i = 0;
  
  while (i < 5)
  {
    i++;
    printf("i --- %d\n",i);

    int j = 0;
    while( j < 5){
      j++;

      printf("j --- %d\n\n",j);
    }
  }
  printf("\n");
  return 0;
}