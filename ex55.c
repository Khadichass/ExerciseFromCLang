#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int height = atoi(argv[1]);
  int width = atoi(argv[2]);
  
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < width; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}



