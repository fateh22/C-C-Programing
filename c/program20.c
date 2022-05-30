// C Program to Check Whether a Number is Positive or Negative

#include<stdio.h>

int main(){
  double num;

  printf("Enter the number: \n");
  scanf("%lf", &num);

  if(num >= 0.0)
    if (num == 0.0)
      printf("You entered 0\n");
    else
      printf("Number(%.3lf) is Positive \n", num);
  else
    printf("Number(%.3lf) is Negative \n", num);

  return 0;
}
