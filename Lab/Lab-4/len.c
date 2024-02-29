#include <stdio.h>
#include <string.h>
int main()
{
  char str2[10];
  int i, count = 0;
  printf("Enter a string: ");
  gets(str2);
  for (i = 0; str2[i] != 0; i++)
  {
    count++;
  }
  puts(str2);
  printf("The length of string is %d.\n", count);
  return 0;
}