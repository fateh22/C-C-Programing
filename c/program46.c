// C Program to Convert Octal Number to Decimal and vice-versa

#include "stdio.h"
#include <math.h>

int main() {
  int num, result;

  printf("Enter the number: ");
  scanf("%d", &num);

  // result = convertToDecimal(num);
  result = convertToOctal(num);

  printf("%d\n", result);
  return 0;
}

int convertToOctal(int n) {
  long long oct = 0;
  int rem, i=1;

  while (n !=0 ) {
    rem = n%8;
    n = n/8;
    oct += rem * i;
    i *= 10;
  }

  return oct;
}


int convertToDecimal(int n){
  int dec = 0, rem, i;
  while (n != 0) {
    rem = n%10;
    n = n/10;
    // dec += rem * pow(8, i);
    i++;
  }

  return dec;
}
