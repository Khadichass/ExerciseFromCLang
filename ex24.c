#include <stdio.h>
#include <string.h>

int my_strcmp(const char* param_1, const char* param_2) {
    while (*param_1 && *param_2 && *param_1 == *param_2) {
        param_1++;
        param_2++;
    }
    
    return *param_1 - *param_2;
}

int main() {
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, Earth!";
    
    int result = my_strcmp(str1, str2);
    
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }
    
    return 0;
}
