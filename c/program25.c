// C Program to Display Fibonacci Sequence

#include <stdio.h>

int main() {
  int first_num = 0;
  int second_num = 1;
  int next_num = first_num + second_num;
  int num, i;

  printf("Enter the number of terms: ");
  scanf("%d", &num);

  for (i = 3; i<=num; i++) {
    printf("%d, ", next_num);
    first_num = second_num;
    second_num = next_num;
    next_num = first_num + second_num;
  }

  printf("\n");
  return 0;
}
