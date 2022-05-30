// C Program to Find the Size of int, float, double and char

#include <stdio.h>

int main(void) {
  int i;
  float f;
  double lf;
  char c;

  // sizeof evaluates the size of a variable
  printf("Size of integer: %zu  \n", sizeof(i));
  printf("Size of float: %zu \n", sizeof(f));
  printf("Size of double float: %zu \n", sizeof(lf));
  printf("Size of char: %zu \n", sizeof(c));

}
