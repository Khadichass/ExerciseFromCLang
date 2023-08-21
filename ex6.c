#include <stdio.h>

int main(){
 char name[7];
 name[0]='h';
 name[1]='a';
 name[2]='d';
 name[3]='i';
 name[4]='c';
 name[5]='h';
 name[6]='a';
  
  int i=0;
  while (i<8)
  {
    printf("%c\n",name[i]);
    i++;
  }
 
  return 0;

 
}