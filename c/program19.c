// C Program to Check Leap Year

/*
  - leap year if perfectly divisible by 400
  - not a leap year if divisible by 100 but not divisible by 400
  - leap year if not divisible by 100 but divisible by 4
*/

#include <stdio.h>

int main(){
  int year;

  printf("Enter the year\n");
  scanf("%d", &year);

  if(((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) {
    printf("%d is leap year\n", year);
  } else {
    printf("%d is not leap year\n", year);
  }

  return 0;
}
