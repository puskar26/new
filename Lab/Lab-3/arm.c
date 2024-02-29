#include <stdio.h>
int arm(int n, int d)
{
  if (n == 0)
    return 0;
  else
    return (pow(n % 10, d) + arm(n / 10, d));
}
int main()
{
  int num, orgNum, count = 0;
  printf("Enter a Number: ");
  scanf("%d", &num);
  orgNum = num;
  while (orgNum != 0)
  {
    count++;
    orgNum /= 10;
  }
  int num2 = arm(num, count);
  if (num2 == num)
  {
    printf("It is Armstrong.\n");
  }
  else
  {
    printf("It is not Armstrong.\n");
  }
}