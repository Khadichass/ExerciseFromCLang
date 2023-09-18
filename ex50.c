#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  int* numb = malloc(sizeof(int) * 100);

  for (int i = 20; i >= 0; i--)
  {
    numb[i] = i;
    printf("%d\n", numb[i]);
  }

  free(numb);
  
  return 0;
}