#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char** str = malloc(sizeof(char*)*3);
  
  str[0]=malloc(sizeof(char*)*7);
  strcpy(str[0], "Sevara\0");

  str[1]=malloc(sizeof(char*)*8);
  strcpy(str[1], "Sevaraa\0");

  str[2]=malloc(sizeof(char*)*9);
  strcpy(str[2], "Sevaraaa\0");
  
  for(int i=0; i<4;i++){
    printf("%s\n",str[i]);
  }
  return 0;
}