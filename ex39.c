#include <stdio.h>

// char* my_upcase(char* param_1)
// {
    
//     for(int i = 0; param_1[i] != '\0'; i++ ) {
//         if (!(param_1[i] >= 'A' && param_1[i] <= 'Z'))
//         {
//            param_1[i] = param_1[i] - 32;
//         }
       
//     }

//     return param_1;
// }

char* my_upcase(char* param_1)
{
    
  for(int i = 0; param_1[i] != '\0'; i++ ) {
    if ((param_1[i] >= 'a') && (param_1[i] <= 'z'))
    {
      param_1[i] = param_1[i] - 32;
    }
      
  }

  return param_1;
}

// char* my_upcase(char* param_1)
// {

//     char currentletter;
//     int i;

//     for (i=0; i<49; i++)    
//     {
//         currentletter = param_1[i];


//         if ((currentletter > 96) && (currentletter < 123))
//         {
//             char newletter;
//             newletter = currentletter - 32;
//             param_1[i] = newletter;
//         }
//         else
//         {
//             param_1[i] = currentletter;
//         }
//     }
//     return param_1;

// }


// char* my_upcase(char* param_1){

//     for (int i = 0; param_1[i] != '\0'; i++) 
//     {
//         if ((param_1[i] >= 'a') && (param_1[i] <= 'z')) 
//             param_1[i] = param_1[i] - ('a' - 'A');   
//     }
//     return param_1;
// }
