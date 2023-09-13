#include <stdio.h>

void reverse(char* param_1);

int main()
{
  char param_1[] = "Hello";
  reverse(param_1);
  printf("\n");
  return 0;
}


void reverse(char* param_1)
{
  if (*param_1 != '\0')
  {
    reverse(param_1 + 1);
    printf("%c", *param_1);
  }

}