#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* my_strchr(char* p1, char p2);

int miss_placed(char* secret_code, char* user_code)
{
  int count = 0;

  for (int i = 0; secret_code[i]; i++)
  {
    if(secret_code[i] != user_code[i] && my_strchr(user_code , secret_code[i] == 1))
    {
      count++;
    }
  }
  
  
  return count;
}

int well_placed(char* p1, char*p2)
{
  int count = 0;
  for (int i = 0; p1[i]; i++)
  {
    if (p1[i] == p2[i])
    {
      count++;
    }
    
  }
  
  return count;
}

char* my_strchr(char* p1, char p2)
{
  for (int i = 0; p1[i] != '\0'; i++) {
    if (p1[i] == p2)
    {
      return 1;
    }
  }

  return 0;
}


char* my_srand()
{
  char* arr =calloc(sizeof(char), 5);
  srand(time(0));
  char temp;
  for (int i = 0; i < 4; i++)
  {
    // arr[i] = rand() % 9 + 48;
    temp = rand() % 9 + 48;
    if (my_strchr(arr, temp) == 0)
    {
      arr[i] = temp;
    }
    
  }
  
  return arr;
}

char* my_strcpy(char* p1, char* p2)
{
  for (int i = 0; p2[i] != '\0'; i++) {
    p1[i] = p2[i];
  }

  return 0;
} 

int my_atoi(char* p1)
{
  int num = 0;
  for (int i = 0; p1[i]; i++)
  {
    num += p1[i] - 48;
    num *= 10;
  }

  return num;
  
}

int my_strcmp(char* p1, char* p2)
{
  for (int i = 0; p1[i] != '\0'; i++)
  {
    if (p1[i] != p2[i])
    {
      return 1;
    }
    
  }
  return 0;
}



int main(int argc, char** argv)
{
  int num = 10;
  char* secret_code = calloc(sizeof(char), 5);

  for (int i = 0; i < argc; i++)
  {
    if (my_strcmp(argv[i], "-t") == 0)
    {
      i++;
      num = my_atoi(argv[i]);
    }
    else if(my_strcmp(argv[i], "-c") == 0)
    {
      i++;
      my_strcpy(secret_code, argv[i]);
    }
    
  }
  if (*secret_code == '\0')
  {
    my_strcpy(secret_code, my_srand());
  }

  return 0;
}