#include <stdio.h>

int main() {
  int c, btnl; // btnl = blanks, tabs and new lines

  btnl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      ++btnl;
    }
  }

  printf("%d\n", btnl);
}
