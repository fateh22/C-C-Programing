// C Program to Check Prime or Armstrong Number Using User-defined Function
// 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153 = Armstrong Number

#include <stdio.h>

int checkArmstrongNumber(int num) {
  int rem, flag, sum = 0;
  int temp = num;
  while(num != 0) {
   rem = num % 10;
   sum = sum + rem*rem*rem;
   num = num / 10;
  }

  if(temp ==  sum)
    flag = 1;
  else
    flag = 0;

  return flag;
}

int checkPrimeNumber(int n) {
  int i;
  int flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
       flag = 0;
       break;
    }
  }

  return flag;
}

int main() {
  int num, flag;

  printf("Enter any number: ");
  scanf("%d", &num);

  flag = checkArmstrongNumber(num);
  if (flag == 1) {
    printf("%d is an Armstrong number.\n", num);
  } else {
    printf("%d is not an Armstrong number.\n", num);
  }

  flag = checkPrimeNumber(num);
  if (flag == 1)
     printf("%d is a prime number.\n", num);
  else
     printf("%d is not a prime number.\n", num);

  return 0;
}
