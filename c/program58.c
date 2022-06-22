// C Program Swap Numbers in Cyclic Order Using Call by Reference

#include "stdio.h"

void swap(int *a, int *b, int *c);

int main(){
  int x =1, y =2, z =3;

  printf("Enter the x, y, z\n");
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  swap(&x, &y, &z);
  printf("x = %d, y = %d, z = %d\n", x, y, z);

  return 0;
}

void swap(int *a, int *b, int *c) {
  int temp;
  temp = *a;
  *a = *b;
  *b = *c;
  *c = temp;
}
