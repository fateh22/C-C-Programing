// C Program to Reverse a Sentence Using Recursion

#include <stdio.h>
void reverseSentence();
int main() {
  printf("Enter a sentence: ");
  reverseSentence();
  printf("\n");
  return 0;
}

void reverseSentence() {
  char c;
  scanf("%c", &c);
  // printf("outer ===> %c\n", c);
  if (c != '\n') {
    // printf("inner ===> %c \n", c);
    reverseSentence();
    printf("%c", c);
  }
}
