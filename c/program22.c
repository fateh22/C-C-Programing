// C Program to Calculate the Sum of Natural Numbers

#include <stdio.h>

int main() {
  int i, num, sum = 0;

  printf("Enter the Number\n");
  scanf("%d", &num);

  for (i = 0; i < num; i++) {
    sum += i;
  }

  printf("The Sum of Natural Numbers  = %d \n", sum);
  
  return 0;
}
