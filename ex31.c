#include <stdio.h>

int function1(int k){
  k++;
  return k;
}
int main()
{
  int k =30;
  k=function1(k=function1(k=function1(k)));
  k=function1(k);
  k=function1(k);
  k=function1(k);

  printf("%d\n", k);
  return 0;

}