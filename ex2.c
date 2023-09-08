#include <stdio.h>

int main(){

  int numb1;
  int numb2;
  int numb3;

  printf("Enter the first number:");
  scanf("%d",&numb1);
  printf("Enter the first number:");
  scanf("%d",&numb2);
  printf("Enter the first number:");
  scanf("%d",&numb3);


  if (numb1==numb2 && numb2==numb3) {
  printf("All of them are equal \n");
  }
  else if (numb1>=numb2 && numb1>=numb3) {
  printf("The biggest number is %d \n",numb1 );
  }
  else if (numb2>=numb1 && numb2>=numb3) {
  printf("The biggest number is %d \n",numb2 );
  }
  else if (numb3>=numb2 && numb3>=numb1) {
  printf("The biggest number is %d \n",numb3 );
  }


  return 0;

}