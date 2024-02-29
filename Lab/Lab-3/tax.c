#include <stdio.h>
int calculateTax(int);
int main()
{
  int salary, n, i;
  printf("How many employees??: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("Enter your Salary: ");
    scanf("%d", &salary);
    printf("You have to pay %d as tax.\n", calculateTax(salary));
  }
  return 0;
}
int calculateTax(int n)
{
  if (n < 9000)
  {
    return (0.5 * n);
  }
  else
  {
    return (0.25 * n);
  }
}