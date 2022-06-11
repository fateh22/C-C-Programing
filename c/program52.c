// C Program to Calculate Standard Deviation

#include "stdio.h"
#include "math.h"

int main() {
  int n, index;
  float arr[100], mean, sum = 0.00, sd;

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

  for(index = 0; index < n; index++) {
    sum = sum + arr[index];
  }

  mean = sum / n;

  for(index = 0; index < n; index++) {
    sd = sd + pow(arr[index] - mean, 2);
  }
  printf("\nStandard Deviation = %.6f \n", sqrt(sd / n));

  return 0;
}
