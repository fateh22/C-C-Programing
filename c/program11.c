// C Program to Compute Quotient and Remainder

#include <stdio.h>

int main(){
  int number, divisor, quotient, remainder;

  printf("Enter any number: \n");
  scanf("%d", &number);
  printf("Enter divisor: ");
  scanf("%d", &divisor);

  remainder = number%divisor;
  quotient = number/divisor;

  printf("Quotient = %d and Remainder = %d \n", quotient, remainder);
  return 0;
}
