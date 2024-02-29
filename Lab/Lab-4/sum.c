#include <stdio.h>
int main()
{
  int m, n, i, j, sum = 0;
  printf("Enter the order of matrix: ");
  scanf("%d%d", &m, &n);
  int arr1[m][n];
  printf("Enter %d elements: ", m * n);
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d\t", arr1[i][j]);
    }
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      sum += arr1[i][j];
    }
  }
  printf("\nThe sum is %d.", sum);
  return 0;
}