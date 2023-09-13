#include <stdio.h>

int main()
{
  int height ;
  int width;
  
  printf("Enter the number of lines:");
  scanf("%d", &height);

  for (int i = 1; i <= height; i++)
  {
    for (int j = 0; j < height; j++)
    {
      printf("*");
    }
    
    printf("\n");
  }

  

  return 0;
}