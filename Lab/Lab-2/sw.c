#include <stdio.h>
int main()
{
  int num1, num2, choice;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Welcome to the program.\nPress 1 for Addition.\nPress 2 for Subtraction.\nPress 3 for Multiplication.\nPress 4 for Division.\n");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    printf("The result is %d.\n", num1 + num2);
    break;
  case 2:
    printf("The result is %d.\n", num1 - num2);
    break;
  case 3:
    printf("The result is %d.\n", num1 * num2);
    break;
  case 4:
    printf("The result is %d.\n", num1 / num2);
    break;

  default:
    printf("Enter valid numbers.\n");
    break;
  }
  return 0;
}