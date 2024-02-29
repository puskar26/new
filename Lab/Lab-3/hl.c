#include <stdio.h>
void hcfLcm(int, int);
int main()
{
  int num1, num2;
  printf("Enter two positive number: ");
  scanf("%d %d", &num1, &num2);
  hcfLcm(num1, num2);
  return 0;
}
void hcfLcm(int x, int y)
{
  int temp, hcf, lcm, mul;
  mul = x * y;
  while (y != 0)
  {
    temp = y;
    y = x % y;
    x = temp;
  }
  hcf = x;
  lcm = mul / hcf;
  printf("The HCF and LCM are %d and %d.\n", hcf, lcm);
}