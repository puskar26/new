#include <stdio.h>
int range(int, int);
int main()
{
  int a, b;
  printf("Enter the range(A-B): ");
  scanf("%d %d", &a, &b);
  printf("There are total %d numbers divisible by 3 in the range.\n", range(a, b));
  return 0;
}
int range(int a, int b)
{
  int i, count = 0;
  for (i = a; i <= b; i++)
  {
    if (i % 3 == 0)
    {
      count++;
    }
  }
  return count;
}