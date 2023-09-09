#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func(char* param){
  printf("%c",param[2]);

}

int main(){
  char  str_static[] ="qwasar";
  char * str_dynamic = malloc(8);
  strcpy(str_dynamic,str_static);
  func(str_dynamic);
  free(str_dynamic);

  return 0;

}
