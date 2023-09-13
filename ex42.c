#include <stdio.h>

struct book
{
  char name[20];
  char author[20];
  int year;
};

int main()
{

  struct book kh;
  kh.year = 1988;
  strcpy(kh.name, "Alchemist" );
  strcpy(kh.author, "Paulo Kaleo");
 
  printf("%s , %s , %d", kh.name, kh. author, kh.year);
  
  return 0;
}

