// C Program to Demonstrate the Working of Keyword 'long'

/*
In this program, the sizeof operator is used to find the size of int, long, long long, double and long double variables.

As you can see, the size of long int and long double variables are larger than int and double variables, respectively.

By the way, the sizeof operator returns size_t (unsigned integral type).

The size_t data type is used to represent the size of an object. The format specifier used for size_t is %zu

*/

#include <stdio.h>

int main(){
  int a;
  long b;
  long long c;
  double d;
  long double e;

  // sizeof evaluates the size of a variable
  printf("Size of integer: %zu bytes\n", sizeof(a));
  printf("Size of long: %zu bytes \n", sizeof(b));
  printf("Size of long long: %zu bytes \n", sizeof(c));
  printf("Size of double: %zu bytes \n", sizeof(d));
  printf("Size of long double: %zu bytes \n", sizeof(e));
  return 0;
}
