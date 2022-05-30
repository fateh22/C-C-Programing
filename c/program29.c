// C Program to Count Number of Digits in an Integer

#include <stdio.h>

int main() {
  long long num;
  int count = 0;

  printf("Enter the integer: ");
  scanf("%llu", &num);

  while (num != 0) {
    count++;
    num /= 10;
  }

  printf("Count Number of Digits in an Integer = %d\n", count);

  return 0;
}
