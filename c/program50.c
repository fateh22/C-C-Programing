// C Program to Calculate Average Using Arrays


#include "stdio.h"

int main() {
  int num, index;
  float arr[100], sum =0.0, avg;

  printf("Enter the value of n:");
  scanf("%d", &num);

  while (num > 100 || num < 1) {
    printf("Error! number should in range of (1 to 100).\n");
    printf("Enter the number again: ");
    scanf("%d", &num);
  }

  for(index = 0; index < num; index++) {
    printf("%d. Enter number: ", index + 1);
    scanf("%f", &arr[index]);
  }

  for(index=0; index < num; index++) {

    sum = sum + arr[index];
  }

  avg = sum / num;
  printf("Average: %.2f\n", avg);

  return 0;
}
