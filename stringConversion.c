#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Number to string
  char s[10];
  float f = 3.14159;

  snprintf(s, 10, "%f", f);

  printf("String value: %s\n", s);

  // String to number

  char *pi = "3.14159";
  float g;

  f = atof(pi); // Does not handle errors

  printf("%f \n", f);

  // Better case

  char *anotherPi = "390";
  char *badChar;

  unsigned long int x = strtoul(anotherPi, &badChar, 10);

  if (*badChar == '\0') {
    printf("Success! %lu\n", x);
  } else {
    printf("Partial conversion: %lu\n", x);
    printf("Bad character %c\n", *badChar);
  }

  // casting

  int d = 10;
  int *p = &d;

  printf(
      "%p\n",
      (void *)
          p); // Casting is done cause expects a type of void * but p is int *
}
