#include <stdio.h>

#define TABSTOP 8

int main() {
  int spaces, c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      spaces = TABSTOP;
      while (spaces) {
        putchar(' ');
        spaces--;
      }
    } else {
      putchar(c);
    }
  }

  return 0;
}
