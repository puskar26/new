#include <stdio.h>
int fact(int);
int main()
{
  int num;
  printf("Enter a positive number: ");
  scanf("%d", &num);
  printf("The factorial od %d is %d.\n", num, fact(num));
  return 0;
}
int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return (n * fact(n - 1));
  }
}