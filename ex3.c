#include <stdio.h>

int main(){
  int num = 10;

  if (num<12 && num == 13){
      printf("true\n");
  }
  else if (num<50 && num ==10) {
    printf("second condition is true\n");
  }
  else {
  printf("false\n");
  }

 return 0; 
}