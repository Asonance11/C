#include <stdio.h>
#include <string.h>

int main(void) {
  char *s = "Hello World";
  char r[] = "Hello";
  char t[100];

  strcpy(t, r);

  t[0] = 'z';

  printf("%s \n", t);

  printf("The string is %zu bytes long", strlen(s));
}
