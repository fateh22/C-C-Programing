// C Program to Check Whether a Number is Even or Odd

#include <stdio.h>

int main(){
  int num;

  printf("Enter the number: \n");
  scanf("%d", &num);

  if(num%2 == 0) {
    printf("Number(%d) is even\n", num);
  } else {
    printf("Number(%d) is odd\n", num);
  }
}
