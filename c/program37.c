// C Program to Display Factors of a Number

#include <stdio.h>

int main() {
  int num, i;

  printf("Enter the number: ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++) {
    if(num % i == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
