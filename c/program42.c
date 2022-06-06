// C Program to Find the Sum of Natural Numbers using Recursion

/*
Natural numbers are the numbers that are used for counting and are a part of
real numbers. The set of natural numbers include only the positive integers,
i.e., 1, 2, 3, 4, 5, 6, ……….∞.
*/


#include <stdio.h>

int main(){
  int num, sum;

  printf("Enter length of natural number: ");
  scanf("%d", &num);

  sum = addNumber(num);

  printf("The Sum of Natural Numbers using Recursion = %d \n", sum);

  return 0;
}

//Recursion

int addNumber(int n) {
  if(n == 0) {
    return n;
  }
  return n + addNumber(n-1);
}
