// C Program to Multiply two Matrices by Passing Matrix to a Function

#include "stdio.h"

void mul(int a[100][100], int b[100][100], int n);
int main() {
  int n, i, j;
  int a[100][100], b[100][100], c[100][100];

  printf("Enter the number: ");
  scanf("%d", &n);

  while (n > 100 || n < 1) {
    printf("Error! number should in range of (1 to 100).\n");
    printf("Enter the number again: ");
    scanf("%d", &n);
  }

  printf("\nPlease enter the First martix(a[%d][%d]): \n\n", n, n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }


  printf("\nPlease enter the Second martix(b[%d][%d]): \n", n, n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++) {
      printf("b[%d][%d] = ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  printf("\nMultiplication of two martix(c[%d][%d]): \n", n, n);
  mul(a, b, n);

  return 0;
}

void mul(int a[100][100], int b[100][100], int n) {
  int i, j;
  int c[100][100];

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++) {
      c[i][j] = a[i][j] * b[i][j];
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
}
