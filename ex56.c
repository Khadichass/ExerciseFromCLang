#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2)
{
    if (*param_2 == '\0')
    {
        return param_1;
    }
    
    for(int i = 0; param_1[i] != '\0'; i++)
    {
        for (int j = 0; param_2[j] != '\0'; j++) {
            if (param_2[j+1] == '\0') {
                return &param_1[i];
            }

            if (param_1[i] != param_2[j]) {
                break;
            }

        }
    }
    return 0;
}


int main()
{
  
  char param_1[6] = "aaa";
  char param_2[6] = "aaaa";
  char *strstrr;

  strstrr = strstr(param_1, param_2);

  printf("Answ: %s\n", strstrr);
   

  return 0;
}