#include <stdio.h>

char *binary_add (unsigned a, unsigned b, char *binary)
{
  int i = 0;
  
  int sum = a + b;
  int reminder;
  while(sum> 0)
  {
    reminder = sum % 2;
    binary[i] = reminder;
    i++;
    sum /= 2;

  }

	// *binary = '\0';
	return binary;
}


int main(void)
{
    unsigned a = 1;
    unsigned b = 2;
    char binary[32];
    printf("%d\n", binary_add(1,2,binary));

    return 0;
}




// #include <stdio.h>

// void decimalToBinary(int decimal) {
//     int binary[32]; // Assuming a 32-bit binary representation
//     int index = 0;

//     // Convert decimal to binary
//     while (decimal > 0) {
//         binary[index] = decimal % 2;
//         decimal = decimal / 2;
//         index++;
//     }

//     // Display binary representation in reverse order
//     printf("Binary representation: ");
//     for (int i = index - 1; i >= 0; i--) {
//         printf("%d", binary[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int decimal;

//     // Input decimal number
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);

//     // Check if the input is non-negative
//     if (decimal < 0) {
//         printf("Please enter a non-negative decimal number.\n");
//         return 1; // Return an error code
//     }

//     // Call the function to convert and display binary representation
//     decimalToBinary(decimal);

//     return 0; // Return success code
// }
