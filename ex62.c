#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

void my_printf(char* numb, ...)
{
  va_list list_s;

  va_start(list_s, numb);

  int first_num = va_arg(list_s, int);

  char* str1  = calloc(sizeof(char), 20);
  strcpy(str1, va_arg(list_s, char*));

  char* str2  = calloc(sizeof(char), 20);
  strcpy(str2, va_arg(list_s, char*));

  int second_num = va_arg(list_s, int);

  printf("%d\n", first_num);
  printf("%s\n", str1);
  printf("%s\n", str2);
  printf("%d\n", second_num);
}

int main()
{
  my_printf( "h", 10, "qwert","qwasar", 19 );
}