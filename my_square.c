#include <stdio.h>
#include <stdlib.h>

int my_square()
{
  int width = 10;
  int height = 5;

  for (int i = 1; i <= width; i++)
  {
    printf("o");

    for (int j = 0; j < height; j++)
    {
      printf("-");
    }
    printf("o");
    printf("\n");
  }
  
  return 0;
}

int main()
{
  my_square();
  return 0;
}