// C Program to Find G.C.D Using Recursion


#include <stdio.h>

int main() {
  int num1, num2;

  printf("Enter the num1 and n2: \n");
  scanf("%d %d", &num1, &num2);

  printf("G.C.D Using Recursion: %d: \n", gcd(num1, num2));

  return 0;
}

int gcd(int n1, int n2) {
  if (n1 == 0) {
    return n2;
  }
  if (n2 == 0) {
    return n1;
  }
  if(n1 > n2) {
    return gcd(n1%n2, n2);
  }
  if(n1 < n2) {
    return gcd(n1, n2%n1);
  }
}
