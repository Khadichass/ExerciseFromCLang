#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  
  char* name= malloc(sizeof(char) * 8);
  strcpy(name, "Hadicha\0");

  printf("%s", name);
  
  free(name);
  return 0;
}