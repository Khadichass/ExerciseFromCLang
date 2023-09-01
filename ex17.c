#include <stdio.h>

int for_loop(int numb)
{
  
  for (int i = numb; i > 0 ; i--)
  {
    printf("%d\n",i);
  }
  
  return numb;
}

int main()
{
  int numb;
  printf("Enter the number:");
  scanf("%d", &numb);
  for_loop(numb);
  return 0;
}