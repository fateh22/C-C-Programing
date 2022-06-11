// C program to calculate the power using recursion

#include "stdio.h"
#include "math.h"

int main() {
  int base, a, result;
  printf("Enter base number: ");
  scanf("%d", &base);
  printf("Enter power number(positive integer): ");
  scanf("%d", &a);
  result = power(base, a);

  printf("%d^%d = %d \n", base, a, result);


  return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
