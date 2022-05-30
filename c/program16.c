// C Program to Check Whether a Character is a Vowel or Consonant
// Vowel are a e i o u and others are Consonant

#include <stdio.h>

int main(void) {
  char c;
  int lowercase_vowel, uppercase_vowel;

  printf("Enter a Character: ");
  scanf("%c", &c );

  lowercase_vowel = (c == 'a' || c == 'e'|| c == 'i' || c == 'o' || c == 'u' );
  uppercase_vowel = (c == 'A' || c == 'E'|| c == 'I' || c == 'O' || c == 'U' );

  if(lowercase_vowel || uppercase_vowel){
    printf("Character(%c) is a Vowel \n", c);
  } else {
    printf("Character(%c) is a Consonant \n", c);
  }

  return 0;
}
