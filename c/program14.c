// C Program to Swap Two Numbers

#include <stdio.h>

int main(){
  int a, b, temp;

  a = 5;
  b = 6;

  // operation swaping two numbers
  temp = a;
  a = b;
  b = temp;

  printf("a = %d, b = %d\n", a, b);
}
