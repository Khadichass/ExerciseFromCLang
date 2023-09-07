#include <stdio.h>
#include <stdio.h>
#include <string.h>
int my_strlen(char* param_1)
{
  size_t length = 0;
  for (; param_1[length] != '\0'; length++) {
  
  }

  return length;
}

int main()
{
  char string[] = "Hello World!";
  my_strlen(string);
  printf("%d\n", my_strlen(string));
  return 0;
}