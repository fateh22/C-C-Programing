// C Program to Find the Roots of a Quadratic Equation
/*
  The math library must be linked in when building the executable. How to do this varies by environment, but in Linux/Unix, just add -lm to the command:
  cc program18.c -o bin/output -lm
  The math library is named libm.so, and the -l command option assumes a lib prefix and .a or .so suffix.

  or

  You need to link the with the -lm linker option

  You need to compile as

  gcc test.c  -o test -lm
  gcc (Not g++) historically would not by default include the mathematical functions while linking.
  It has also been separated from libc onto a separate library libm. To link with these functions
  you have to advise the linker to include the library -l linker option followed by the library name m thus -lm.

*/
#include <math.h>
#include <stdio.h>

int main() {
  double a, b, c, discriminant, root1, root2, realPart, imagPart;
  printf("Enter coefficients a, b and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  // condition for real and different roots
  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("root1 = %.2lf and root2 = %.2lf \n", root1, root2);
  }

  // condition for real and equal roots
  else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("root1 = root2 = %.2lf; \n", root1);
  }

  // if roots are not real
  else {
    realPart = -b / (2 * a);
    imagPart = sqrt(-discriminant) / (2 * a);
    printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi \n", realPart, imagPart, realPart, imagPart);
  }

  return 0;
}
