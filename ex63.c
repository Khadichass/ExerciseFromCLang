#include <stdio.h>
#include <stdlib.h>

int* array(int* arr1)
{
  // int* arr = malloc(sizeof(int) *4);
  // arr[0] = numb1;
  // arr[1] = numb2;
  // arr[2] = numb3;
  
  int temp; 

  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (arr1[i] > arr1[j])
      {
        temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;
      }
      
    }
    // printf("%d\n", arr[i]);
    
  }
  
  
  return arr1;
}

int main()
{
  // int* arr = array(9,6,7);

  int arr[] = {1,4,2,5,6,7,34,0,5,7,5};

  int* arr2 =  array(arr);

  for (int i = 0; i < 10 ; i++)
  {
    printf("%d\n", arr[i]);
  }
  

  // printf("%d\n",arr[0]);
  // printf("%d\n",arr[1]);
  // printf("%d\n",arr[2]);

  return 0;
}