#include <stdio.h>
#include <stdlib.h>

int main()
{
  int** array = malloc(sizeof(int*) * 2);
  array[0] = malloc(sizeof(int) * 10);
  array[1] = malloc(sizeof(int) * 10);

  int ind = 0;

  for (int i = 1; i <= 10; i++)
  {
    array[0][ind] = i;
    ind++;
  }

  ind = 0; 

  for (int j = 11; j <= 20; j++)
  {
    array[1][ind] = j;
    ind++;
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d\n", array[i][j]);
    }
  }

  for (int i = 0; i < 2; i++)
  {
    free(array[i]);
  }
  free(array);

  return 0;
}
