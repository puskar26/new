#include <stdio.h>
#include <string.h>
int main()
{
  char str1[20];
  int i;
  printf("Enter a string: ");
  gets(str1);
  for (i = 0; str1[i] != '\0'; i++)
  {
    if (str1[i] >= 'a' && str1[i] <= 'z')
    {
      str1[i] -= 32;
    }
    else if (str1[i] >= 'A' && str1[i] <= 'Z')
    {
      str1[i] += 32;
    }
  }
  puts(str1);
  return 0;
}