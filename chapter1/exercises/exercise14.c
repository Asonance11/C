#include <stdio.h>

#define ALPHABETS 26

int main() {
  int c;
  int character_length[ALPHABETS];

  for (int i = 0; i < ALPHABETS; ++i) {
    character_length[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++character_length[c - 'a'];
    }
  }

  for (int i = 0; i < ALPHABETS; ++i) {
    if (i < ALPHABETS) {
      printf("%c: ", 'a' + i);
    } else if (i >= ALPHABETS) {
      printf("%c: ", '0' + i - ALPHABETS);
    }

    int j;
    for (j = 0; j < character_length[i]; ++j) {
      printf("#");
    }

    putchar('\n');
  }
}
