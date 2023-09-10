#include <stdio.h>
#include <unistd.h>

int my_putchar(char c) {
  return write(1, &c, 1);
}

void my_putstr(char* param_1) {
  for (int i = 0; param_1[i] != '\0'; i++) {
      my_putchar(param_1[i]);
  }
}

int main() {
  char myString[] = "Hello, world!";
  my_putstr(myString);
  return 0;
}
