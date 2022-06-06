// C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers

/*
  Is the sum of two prime numbers is always even?
  The sum of two prime numbers is not always even. Because of every prime number
  is an odd number except 2, However, adding two odd numbers always results in an
  even number. If you add any prime numbers with 2 it will be odd. The sum of two
  prime numbers except 2, are always even
*/

#include <stdio.h>
#include <stdbool.h>


int main() {
  int num;
  int i, j, k;
  bool isPrime = false;

  printf("Enter the number: ");
  scanf("%d", &num);

  for(i = 2; i <= num/2; ++i) {
    if(checkPrimeNumber(i) == 1) {
      if(checkPrimeNumber(num - i) == 1) {
        printf("%d = %d + %d\n", num, i, num - i);
        isPrime = true;
      }
    }
  }
  if(isPrime == false){
    printf("%d cannot be expressed as the sum of two prime numbers.", num);
  }

  return 0;
}

int checkPrimeNumber(int n) {
  int i, flag = 1;

  if (n == 0 || n == 1) {
    flag = 0;
  } else {
    for(i = 2; i<=n/2; i++){
      if(n%i == 0) {
        flag = 0;
        break;
      }
    }
  }
  return flag;
}
