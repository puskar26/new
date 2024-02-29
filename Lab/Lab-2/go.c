#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  if (num % 2 == 0)
  {
    goto even;
  }
  else
  {
    goto odd;
  }
even:
  printf("It is even.\n");
  exit(0);
odd:
  printf("It is odd.\n");
  exit(0);
  return 0;
}