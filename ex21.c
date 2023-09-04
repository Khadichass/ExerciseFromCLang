#include <stdio.h>

int main(){
  int num=10;
  int* point_num=&num;

  printf("address of num: %p\n", &num);
  printf("address: %p \n", point_num);
  printf("address: %p \n", &point_num);
  return 0;
}