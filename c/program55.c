// C Program to Find Transpose of a Matrix

#include "stdio.h"

int main() {
  int n, i, j;
  int a[100][100], b[100][100];

  printf("Enter the number: ");
  scanf("%d", &n);

  while (n > 100 || n < 1) {
    printf("Error! number should in range of (1 to 100).\n");
    printf("Enter the number again: ");
    scanf("%d", &n);
  }
  printf("\nPlease enter the martix(a[%d][%d]): \n\n", n, n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }


  printf("\nPlease enter the Transpose martix(b[%d][%d]): \n", n, n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++) {
      b[i][j] = a[j][i];
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }

  return 0;
}
