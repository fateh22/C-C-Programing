// C Program to Remove all Characters in a String Except Alphabets

#include "stdio.h"

int main() {
  char line[1000];
  printf("Enter a string: ");
  fgets(line, sizeof(4), stdin);

  for (int i = 0, j; line[i] != '\0'; ++i) {

    // enter the loop if the character is not an alphabet
    // and not the null character
    while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
      for (j = i; line[j] != '\0'; ++j) {
        // if jth element of line is not an alphabet,
        // assign the value of (j+1)th element to the jth element
        line[j] = line[j + 1];
      }
      line[j] = '\0';
    }
  }

  printf("Output String: ");
  puts(line);
  
  return 0;
}
