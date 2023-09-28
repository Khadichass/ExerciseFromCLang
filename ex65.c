#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
  int size;
  int* array;
} integer_array;
#endif


void my_first_struct(integer_array* param_1)
{   

  printf("%d\n",param_1->size);
  for (int i = 0; i < param_1->size; i++)
  {
    printf("%d\n", param_1->array[i]);
  }
}

int main()
{
  integer_array first;
  first.size = 5;
  first.array = calloc(sizeof(int) , 5);
  for (int i = 0; i < 5; i++)
  {
    first.array[i] = i;
  }

  printf("%d\n", first.size);
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", first.array[i]);
  }

  integer_array* ptr_to_first = &first;

  printf("ptr_to_first->size: %d\n", ptr_to_first->size);

  return 0;
}