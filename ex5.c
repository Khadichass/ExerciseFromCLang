#include <stdio.h>

int main(){

  int numb;
  printf("Enter the  number:");
  scanf("%d",&numb);
   int i;
  
    if (numb%2){

      for ( i = 1; i <= numb; i += 2){
        
        printf("%d\n",i);
       }
      
    }
    else{
     for ( i = 0; i <= numb; i++){
        
      printf("%d\n",i);
      i++;
       }
    }

   
  
   
  return 0;


}