// C Program to Add Two Integers

#include <stdio.h>

int main() {
  int number1, number2, sum;

  printf("Enter two integers: \n");
  scanf("%d %d", &number1, &number2);

  // calculating sum
  sum = number1 + number2;

  // Display output
  printf("Sum = %d\n", sum);

  return 0;
}
