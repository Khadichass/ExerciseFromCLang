#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void my_func(char* param_1) 
{ 
  printf("%c\n", param_1[2]); 
} 


int main() 
{ 
  char* str = malloc(sizeof(char)* 9); 
  strcpy(str, "hello"); 
  my_func(str); 
  free(str);
    
  return 0;
}