#include <stdio.h>
#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_alphabet()
{
  for ( char i = 'a'; i <= 'z'; i++) {
    my_putchar(i);
  }
}

int main() {
  my_print_alphabet();
  return 0;
}
