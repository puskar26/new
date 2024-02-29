#include <stdio.h>
int checkPrime(int);
int main()
{
  int num, result;
  printf("Enter a Number: ");
  scanf("%d", &num);
  result = checkPrime(num);
  if (result == 1)
  {
    printf("The Number is prime.\n");
  }
  else
  {
    printf("It is not prime.\n");
  }
  return 0;
}
int checkPrime(int n)
{
  int i, count = 0;
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
