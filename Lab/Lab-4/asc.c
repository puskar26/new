#include <stdio.h>
void sort(int[], int);
int main()
{
  int n, i;
  printf("Enter the length of array: ");
  scanf("%d", &n);
  int arr1[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  for (i = 0; i < n; i++)
  {
    printf("%d\t", arr1[i]);
  }
  printf("\n");
  sort(arr1, n);
}
void sort(int a[], int n)
{
  int i, j, temp;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
  printf("\n");
  printf("The largest element is %d.\n", a[n - 1]);
  printf("The smallest element is %d.\n", a[0]);
  printf("The second largest element is %d.\n", a[n - 2]);
  printf("The second smallest element is %d.\n", a[1]);
}