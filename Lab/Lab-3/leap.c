#include <stdio.h>
void leapYear(int);
int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  leapYear(year);
  return 0;
}
void leapYear(int y)
{
  if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
  {
    printf("It is a Leap year.\n");
  }
  else
  {
    printf("It is not a Leap year.\n");
  }
}