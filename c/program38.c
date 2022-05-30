// C Program to Make a Simple Calculator Using switch...case

#include <stdio.h>

int main(void) {
  double first, second;
  char operator;

  printf("Enter the value of a and b: \n");
  scanf("%lf %lf", &first, &second);

  printf("Choose any operator(+, -, *, /): \n");
  scanf("%s", &operator);

  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
        printf("This operator is not valid");
  }

  printf("\n");

  return 0;
}
