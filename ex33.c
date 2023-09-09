#include <stdio.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char* param_1)
{
  int length = 0;
  for (; param_1[length] != '\0'; length++) {
  
  }

  return length;
}

int main(){
  
  printf("%d\n",my_strlen("Hello"));
  return 0;
}