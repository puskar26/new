#include <stdio.h>
int main()
{
  char str3[10], rev[10];
  int i, len = 0, count = 0;
  printf("Enter a Word: ");
  gets(str3);
  for (i = 0; str3[i] != '\0'; i++)
  {
    len++;
  }
  for (i = 0; i < len; i++)
  {
    rev[i] = str3[len - 1 - i];
  }
  puts(rev);
  for (i = 0; str3[i] != '\0'; i++)
  {
    if (rev[i] == rev[len - 1 - i])
    {
      count++;
    }
  }
  if (count == len)
  {
    printf("It is Palindrome.\n");
  }
  else
  {
    printf("It is not Palindrome.\n");
  }
  return 0;
}