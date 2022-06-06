// C Program to Display Prime Numbers Between Intervals Using Function

#include <stdio.h>
#include <stdbool.h>


int main() {
  int low, high;
  bool flag;

  printf("Enter the Lower and Higher Value of the range: ");
  scanf("%d %d", &low, &high);

  printf("Prime numbers between %d and %d are: ", low, high);
  while (low < high) {

    // ignore numbers less than 2
    if (low <= 1) {
      ++low;
      continue;
    }

    // flag will be equal to true if i is prime
    flag = checkPrimeNumber(low);
    if (flag == true) {
      printf("%d ", low);
    }

    ++low;
  }

  printf("\n");

  return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n) {
  int i;
  bool flag = true;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
       flag = false;
       break;
    }
  }

  return flag;
}
