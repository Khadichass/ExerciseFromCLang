#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "hello";
  
  for (size_t i = strlen(str); i >= 1; i--)
  {
     for (size_t j = 0; j < i; j++)
    {
      printf("%c", str[j]);
    }
   printf("\n");
  }



  for (size_t i = 1; i < strlen(str); i++)
  {

    for (size_t j = 0; j <= i; j++)
    {
      printf("%c", str[j]);
    }
   printf("\n");
  }
   return 0;
}