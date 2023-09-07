#include <stdio.h>

void change(int* p1)
{
  *p1=10;
}
int main()
{
  int num = 7;
  printf("%d\n", num);
  change(&num);
  printf("%d\n", num);

  return 0;
}
