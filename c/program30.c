// C Program to Reverse a Number

#include <stdio.h>

int main() {
  int num, rem, rev=0;

  printf("Enter the integer: ");
  scanf("%d", &num);

  while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
  }

  printf("Reversed Number =  %d\n", rev);

  return 0;
}
