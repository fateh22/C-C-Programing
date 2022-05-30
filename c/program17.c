// C Program to Find the Largest Number Among Three Numbers

#include <stdio.h>

int main(void) {
  int x, y, z;

  printf("Enter thre Numbers: ");
  scanf("%d %d %d", &x, &y, &z);

  if ((x > y) && (x > z)) {
    printf("%d is largest number\n", x);
  } else if ((x < y) && (y > z)) {
    printf("%d is largest number\n", y);
  } else if((x < z) && (y < z)) {
    printf("%d is largest number\n", z);
  }

  return 0;
}
