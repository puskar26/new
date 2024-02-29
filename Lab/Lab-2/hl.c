#include <stdio.h>
int main()
{
  int num1, num2, hcf, lcm;
  printf("Enter two positive numbers: ");
  scanf("%d %d", &num1, &num2);
  while (num1 != 0)
  {
    num2=temp;
    num1=num1%num2;
  }
  return 0;
}