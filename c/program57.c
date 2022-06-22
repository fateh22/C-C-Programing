// C Program to Access Array Elements Using Pointer

#include "stdio.h"

int main() {
  int a[100] = {1, 2, 4, 6, 7};
  int i;
  int *p;
  p = a;
  for( i=0; i<5; i++) {
    printf("%d\n", p[i]);
  }
  return 0;
}
