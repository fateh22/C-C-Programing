// C Program to Check Armstrong Number

#include <stdio.h>

int main() {
  int num, result = 0, rem, temp;

  printf("Enter the number\n");
  scanf("%d", &num);
  temp = num;
  while(num != 0){
    rem = num % 10;
    result = result + rem * rem * rem;
    num = num / 10;
  }

  if(temp == result) {
    printf("Number(%d) is Armstrong \n", temp);
  } else {
    printf("Number(%d) is not an Armstrong number.\n", temp);
  }

  return 0;
}
