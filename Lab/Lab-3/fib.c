// sum of nth numbers of a fibonacci series
#include <stdio.h>
int fib(int);
int main()
{
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  printf("%d\n", fib(num));
}
int fib(int n)
{
  int sum = 0;
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }
  sum = fib(n - 1) + fib(n - 2);
  return sum;
}