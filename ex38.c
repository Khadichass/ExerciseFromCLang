#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_upcase(char* param_1)
{
    
  for(int i = 0; param_1[i] != '\0'; i++ ) {
    if (!(param_1[i] >= 'A' && param_1[i] <= 'Z'))
    {
      param_1[i] = param_1[i] - 32;
    }
      
  }

  return param_1;
}

int main()
{
  char* name = malloc(sizeof(char)*20);
  strcpy(name, "hello");
  my_upcase(name);
  printf("%s\n",name);
  return 0;
}



char* my_upcase(char* param_1)
{
    
  for(int i = 0; param_1[i] != '\0'; i++ ) {
    if ((param_1[i] >= 'a') && (param_1[i] <= 'z'))
    {
      param_1[i] = param_1[i] - 32;
    }
      
  }

  return param_1;
}