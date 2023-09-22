#include <stdio.h>
#include <stdlib.h>

int* make_change()
{
  int* arr = malloc(sizeof(int) * 10);

  if (arr == NULL) {
    return NULL;
  }

  int ind = 0;

  for (int i = -10; i < 0; i++)
  {
    arr[ind] = i;
    ind++;
  }
  
  return arr;
}

int main()
{
  int* arr = make_change();

  if (arr == NULL) {
    printf("Memory allocation failed.\n");
    return 1; 
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", arr[i]);
  }

  free(arr);

  return 0; 
}
