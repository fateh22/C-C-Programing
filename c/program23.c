// C Program to Find Factorial of a Number

// Factorial given till 65 number

#include <stdio.h>

int main(){
  int num, i;
  unsigned long long fact = 1;

  printf("Enter the Number: ");
  scanf("%d", &num);

  if(num > 0) {
    for(i = 1; i <= num; i++){
      fact = fact*i;
    }
    printf("%d! = %llu\n", num, fact);
  } else {
    printf("%d! = %llu\n", num, fact);
  }



  return 0;
}
