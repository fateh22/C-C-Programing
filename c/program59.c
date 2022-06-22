// C Program to Find Largest Number Using Dynamic Memory Allocation

#include "stdio.h"
#include "stdlib.h"

int main() {
  int num, i, *ptr, largeNumber = 0;

  printf("Enter number of elements: ");
  scanf("%d", &num);

  ptr = (int*)malloc(num * sizeof(int));

  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }

  for (i = 0; i < num; i++) {
    scanf("%d", ptr+i);
    if(largeNumber < *(ptr + i)) {
      largeNumber = *(ptr + i);
    }
  }

  printf("Larger Number = %d \n", largeNumber);

  // deallocating the memory
  free(ptr);

  return 0;
}
