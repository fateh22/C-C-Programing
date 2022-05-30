// C Program to Display Armstrong Number Between Two Intervals

#include <stdio.h>

int main(void){
  int num, rem, original;
  long long low, high;
  long long result;


  printf("Please enter the low and high limit:");
  scanf("%lld %lld", &low, &high);

  printf("Armstrong numbers between %lld and %lld are: ", low, high);

  while (low <= high) {

    // ignore numbers less than 1
    if (low < 0 ) {
      low++;
      continue;
    }

    result = 0;
    num = original = low;

    while (num > 0) {
      rem = num % 10;
      result = result + rem * rem * rem;
      num = num / 10;
    }

    if (original == result) {
      printf("%lld, ", result);
    }
    low++;
  }
  printf("\n");

  return 0;
}
