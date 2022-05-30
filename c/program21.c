// C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>

int main(){
  unsigned char c;

  printf("Enter a character: ");
  scanf("%c", &c);

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    printf("Character(%c) is an Alphabet\n", c);
  } else {
    printf("Character(%c) is not Alphabet\n", c);
  }

  return 0;
}
