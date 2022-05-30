// C Program to Multiply Two Floating-Point Numbers

#include <stdio.h>

int main(void) {
  double number1, number2, mul;

  printf("Enter two Floating-Point Numbers \n");
  scanf("%lf %lf", &number1, &number2 );

  mul = number1 * number2;

  // Display output
  printf("Multiply = %.2lf\n", mul );
  return 0;
}
