// C Program to Check Whether a Number is Prime or Not

#include <stdio.h>

int main(){
  int num, i, m, flag = 0;

  printf("Enter the number\n");
  scanf("%d", &num);

  m = num/2;

  for (i = 2; i < m; i++) {
    if(num%i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    printf("Number is Prime \n");
  } else {
    printf("Number is not Prime\n");
  }

  return 0;
}
