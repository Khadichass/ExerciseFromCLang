// #include <stdio.h>

// int main()
// {
//   int width;
//   int length;
//   int space;

//   printf("Enter the length:");
//   scanf("%d", &length);

//   printf("Enter the width:");
//   scanf("%d", &width);


//   for (int i = 0; i < length ; i++)
//   {
//     for (int space = 1; space <= (width - i -1) ; space++)
//     {
//        printf(" ");
//     }  


//     for (int j = 0; j < width; j++)
//     {
//       printf("*");
//     }
//     printf("\n");

//     space -= 1;
//     width += 2;
//   }
  
//   return 0;
// }



#include <stdio.h>

int main() {
  int width;
  int length;

  printf("Enter the length: ");
  scanf("%d", &length);

  printf("Enter the width: ");
  scanf("%d", &width);

  for (int i = 1; i <= length; i++) {
    // Print leading spaces
    for (int space = 1; space <= length - i; space++) {
        printf(" ");
    }

    // Print asterisks
    for (int j = 1; j <= 2 * i - 1; j++) {
        printf("*");
    }

    printf("\n");
  }

  return 0;
}
