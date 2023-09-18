#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int odd_numb(int* numb)
{
  int* new  = malloc(sizeof(int) *15);

  int i =0;
  int ind =0;

  while(numb[i] != 0){
    if (numb[i] %2 == 1)
    {
      numb[ind] = i;
      ind++;
    }
    i++;
  }
  return new;
}
int main()
{

  int odd[] = {1,2,3,4,5,6,7,8,9};
  int* result = odd_numb(odd);

  for (int i = 0; result < 0; i++)
  {
    printf("%d\n", result[i]);
  }
  
  return 0;
}