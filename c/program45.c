// C Program to Convert Binary Number to Decimal and vice-versa

#include "stdio.h"
#include <math.h>


int main() {
  int num, result;

  printf("Enter the number: ");
  scanf("%d", &num);

  // result = convertToDecimal(num);
  result = convertToBinary(num);

  printf("%d\n", result);
  return 0;
}

int convertToBinary(int n){
  long long bin = 0;
  int rem, i=1;

  while (n != 0) {
    rem = n%2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}

int convertToDecimal(int n){
  int dec = 0, rem, i;
  while (n != 0) {
    rem = n%10;
    n = n/10;
    dec += rem * pow(2, i);
    i++;
  }

  return dec;
}
