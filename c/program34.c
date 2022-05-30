// C Program to Display Prime Numbers Between Two Intervals
// [3.....76]
#include <stdio.h>

int main(){
  int i, flag;
  int low, high;

  printf("Enter lower and high limit: ");
  scanf("%d %d", &low, &high);

  printf("Prime numbers between %d and %d are: ", low, high);

  while (low < high) {
    flag = 0;

    // ignore numbers less than 2
    if (low <= 1) {
      ++low;
      continue;
    }

    // if low is a non-prime number, flag will be 1
    for (i = 2; i <= low / 2; ++i) {
      if (low % i == 0) {
         flag = 1;
         break;
      }
    }

    if (flag == 0) {
      printf("%d ", low);
    }

    ++low;
  }

  printf("\n");
  return 0;
}
