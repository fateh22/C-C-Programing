// C Program to Find Largest Element in an Array

#include "stdio.h"

int main() {
  int n, index;
  float arr[100], largeNumber;

  printf("Enter the number");
  scanf("%d", &n);

  while (n > 100 || n < 1) {
    printf("Error! number should in range of (1 to 100).\n");
    printf("Enter the number again: ");
    scanf("%d", &n);
  }

  for(index = 0; index < n; index++) {
    printf("%d. Enter number: ", index + 1);
    scanf("%f", &arr[index]);
  }

  largeNumber = arr[0];

  for(index = 0; index < n; index++) {
    if(largeNumber < arr[index]) {
      largeNumber = arr[index];
    }
  }

  printf("Largest Number %0.2f: \n", largeNumber);

  return 0;
}
