// C Program to Convert Binary Number to Octal and vice-versa


#include "stdio.h"
#include "math.h"

int main() {
  int num;
  int result;
  printf("Enter the number: ");
  scanf("%d", &num);

  result = octalToBinary(num);
  // result = binaryToOctal(num);

  printf("%lld\n", result);
  return 0;
}

int  binaryToOctal(int bin){
  int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

int octalToBinary(int oct){
  int dec = 0, i = 0;
  long long bin = 0;

  // converting octal to decimal
  while (oct != 0) {
      dec += (oct % 10) * pow(8, i);
      ++i;
      oct /= 10;
  }
  i = 1;

 // converting decimal to binary
  while (dec != 0) {
      bin += (dec % 2) * i;
      dec /= 2;
      i *= 10;
  }
  return bin;
}
