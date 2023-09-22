#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2)
{
    for(int i = 0; param_1[i] != '\0'; i++)
    {
        for (int j = 0; param_2[j] != '\0'; j++) {
            if (param_1[i] != param_2[j]) {
                break;
            }

            if (param_2[j+1] == '\0') {
                return &param_1[i];
            }
        }
    }
    return 0;
}


int main()
{
  
  char param_1[20] = "";
  char param_2[10] = "a";
  char *strstrr;

  strstrr = my_strstr(param_1, param_2);

  printf("Answ: %s\n", strstrr);
   

  return 0;
}