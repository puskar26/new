#include <stdio.h>
int main()
{
  int num, count = 0, i;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    printf("It is Prime.\n");
  }
  else
  {
    printf("It is not Prime.\n");
  }
  return 0;
}