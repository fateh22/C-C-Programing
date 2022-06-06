// C Program to Find Factorial of a Number Using Recursion

#include <stdio.h>

int main() {
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  printf("Factorial = %d \n", fact(num));

  return 0;
}

int fact(int n) {
  if(n == 0 || n ==1) {
    return 1;
  } else {
    return n * fact(n-1);
  }
}
