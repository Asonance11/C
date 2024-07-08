#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *val = getenv("YO");

  if (val == NULL) {
    printf("Cannot find YO environmental variable");
    return EXIT_FAILURE;
  }

  printf("Value: %s\n", val);

  return 0;
}
