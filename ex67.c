#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{
  if (param_1->array == NULL)
  {
      return NULL;
  }

    char* ret_val = malloc(sizeof(char) * 100);
    int ind = 0;
    int index = 0;

    for (int i = 0; i < param_1->size; i++ ) {
      for (int j = 0; j < strlen(param_1->array[i]); j++)
      {
        ret_val[ind++] = param_1->array[i][j];
      }
      index = 0;
      while (param_1 && index < strlen(param_2) && i != param_1->size - 1)
      {
        ret_val[ind++] = param_2[index];
        index++;
      }
    }

    return ret_val;
}