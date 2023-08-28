#include <stdio.h>

int if_else()
{
  int numb1;
  int numb2;
  int numb3;
  int numb4;

  printf("Enter the first number:");
  scanf("%d",&numb1);
  printf("Enter the second number:");
  scanf("%d",&numb2);
  printf("Enter the third number:");
  scanf("%d",&numb3);
  printf("Enter the fourth number:");
  scanf("%d",&numb4);


  if (numb1==numb2 && numb2==numb3 && numb3==numb4) {
  printf("All of them are equal \n");
  }
  else if (numb1>=numb2 && numb1>=numb3 && numb1>=numb4) {
  printf("The biggest number is %d \n",numb1 );
  }
  else if (numb2>=numb1 && numb2>=numb3 && numb2 >= numb4) {
  printf("The biggest number is %d \n",numb2 );
  }
  else if (numb3>=numb2 && numb3>=numb1 && numb3 >= numb4) {
  printf("The biggest number is %d \n",numb3 );
  }
  else if (numb4>=numb1 && numb4>=numb2 && numb4 >= numb3 ) {
  printf("The biggest number is %d \n",numb4 );
  }

  return 0 ;

}
int main(){
  if_else();
  return 0;

}