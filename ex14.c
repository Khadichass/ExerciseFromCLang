#include <stdio.h>

int the_biggest(int numb1, int numb2, int numb3, int numb4){

  int max=numb1;

  if (max < numb2)
  {
    max = numb2;
  }
  if (max < numb3)
  {
    max = numb3;
  }
  if (max < numb4)
  {
    max = numb4;
  }
  
  return max;
}

void compare()
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

  printf("The biggest number is %d \n", the_biggest(numb1,numb2, numb3,numb4));
}

int main()
{

  compare();
  return 0;

}