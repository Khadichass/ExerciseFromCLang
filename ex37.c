#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char** string_arr = malloc(sizeof(char*)*3);
  string_arr[0] = malloc(sizeof(char)*4);
  strcpy(string_arr[0],"qwe\0");
  string_arr[1] = malloc(sizeof(char)*5);
  strcpy(string_arr[1],"qwer\0");
  string_arr[2] = malloc(sizeof(char)*6);
  strcpy(string_arr[2],"qwert\0");

  for (size_t i = 0; i <= 3; i++)
  {
    printf("%s\n", string_arr[i]);
  }
  
  return 0;
}