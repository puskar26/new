#include <stdio.h>
int sumFib(int n);
int main()
{
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  printf("The sum is %d. \n", sumFib(num));
  return 0;
}
int sumFib(int n)
{
  int i, f0 = 0, f1 = 1, f2, sum;
  sum = f0 + f1;
  for (i = 2; i < n; i++)
  {
    f2 = f0 + f1;
    sum += f2;
    f0 = f1;
    f1 = f2;
  }
  return sum;
}
