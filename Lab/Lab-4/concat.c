#include <stdio.h>
int main()
{
  char str1[40], str2[20];
  int i, j;
  printf("Enter first word.");
  fgets(str1, 40, stdin);
  printf("Enter first word.");
  fgets(str2, 20, stdin);
  for (i = 0; str1[i] != '\0'; i++)
  {
    for (j = 0; str2[j] != '\0'; j++)
    {
      str1[i] = str2[j];
    }
  }
  str1[i] = '\0';
  puts(str1);
  return 0;
}