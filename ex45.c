#include <stdio.h>

int my_strcmp(char* param_1, char* param_2){
  for (int i = 0; i < param_1[i]; i++) {
    if (param_1[i] != param_2[i]) {
      return param_1[i] - param_2[i];
    }
  }
  return 0;
}


int main() {
  char *s1 = "HelP";
  char *s2 = "Hello";
  
  printf("my_strcmp -> %d\n", my_strcmp(s1, s2));
  return 0;
}