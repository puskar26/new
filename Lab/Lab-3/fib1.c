#include <stdio.h>
int sumFibo(int n);
int main()
{
  int i, num, sum = 0;
  printf("Enter a Number");
  scanf("%d", &num);
  for (i = 0; i < num; i++)
  {
    sum = sum + sumFibo(i);
  }
  printf("The sum is %d.", sum);

  return 0;
}
int sumFibo(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return sumFibo(n - 1) + sumFibo(n - 2);
  }
}
