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

  printf("Enter the name of the book:");
  scanf("%s", kh.name);

  printf("Enter the author:");
  scanf("%s", kh.author);

  printf("Enter the year:");
  scanf("%d", &kh.year);

  
 
  printf("%s , %s , %d", kh.name, kh.author, kh.year);
  
  return 0;
}


