#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, d, root1, root2;
  printf("Enter a, b & c: ");
  scanf("%f %f %f", &a, &b, &c);
  d = (b * b) - (4 * a * c);
  if (d > 0)
  {
    printf("The roots are..\n");
    root1 = -b + sqrt(d) / (2 * a);
    root2 = -b - sqrt(d) / (2 * a);
    printf("x1 = %f\t x2 = %f\n", root1, root2);
  }
  else if (d < 0)
  {
    d = sqrt(fabs(d));
    printf("The roots are..\n");
    root1 = -b / 2 * a;
    root2 = d / 2 * a;
    printf("x1= %f + %fi\n", root1, root2);
    printf("x2 = %f - %fi\n", root1, root2);
  }
  else if (d == 0)
  {
    printf("The roots are..\n");
    root1 = -b / (2 * a);
    printf("x1 = %f\t x2 = %f\n", root1, root1);
  }
  return 0;
}