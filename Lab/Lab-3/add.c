#include <stdio.h>
int sum(int, int, int);
int main()
{
  int num1, num2, num3;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("The sum is %d.\n", sum(num1, num2, num3));
  return 0;
}
int sum(int x, int y, int z)
{
  return x + y + z;
}