#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);

  if (ch >= 'a' && ch <= 'z')
  {
    ch = ch - 32;
  }
  switch (ch)
  {
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    printf("%c is a vowel.\n", ch);
    break;
  default:
    if (ch >= 'A' && ch <= 'Z')
    {
      printf("%c is a consonant.\n", ch);
    }
    else
    {
      printf("Invalid input. Please enter an alphabet.\n");
    }
  }

  return 0;
}
