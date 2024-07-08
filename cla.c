// Command line arguments

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int total = 0;

  for (int i = 0; i < argc; i++) {
    char *barchar;
    int value = strtol(argv[i], &barchar, 10);

    if (*barchar == '\0') {
      total += value;
    } else {
      printf("Bad character: %c\n", *barchar);
    }
  }

  printf("%d \n", total);
}
