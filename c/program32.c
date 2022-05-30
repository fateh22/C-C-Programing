// C Program to Check Whether a Number is Palindrome or Not

#include <stdio.h>

int main(){
  int num, rem, rev = 0, temp;

  printf("Enter the number: \n");
  scanf("%d", &num);

  temp = num;

  while(temp != 0 ) {
    rem = temp % 10;
    rev = rev * 10 + rem;
    temp = temp/10;
  }

  if(num == rev) {
    printf("Number is Palindrome\n");
  } else {
    printf("Number is not Palindrome\n");
  }

  return 0;
}
