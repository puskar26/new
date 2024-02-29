#include <stdio.h>
int main()
{
  int i, j, n, sum = 0;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int mat1[n][n];
  printf("Enter %d elements", n * n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &mat1[i][j]);
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (i == j)
      {
        sum = sum + mat1[i][j];
      }
    }
  }
  printf("The sum of diagonal elements is %d.\n", sum);
  return 0;
}