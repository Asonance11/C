#include <stdio.h>

#define IN 1               /* Inside a word */
#define OUT 0              /* Outside a word */
#define MAX_WORD_LENGTH 20 /* Maximum word length to consider */

int main() {
  int c, length, state;
  int word_lengths[MAX_WORD_LENGTH];

  state = OUT;
  length = 0;

  for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
    word_lengths[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        if (length < MAX_WORD_LENGTH) {
          ++word_lengths[length];
        }

        state = OUT;
        length = 0;
      }
    } else {
      state = IN;
      ++length;
    }
  }

  for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
    printf("%2d: ", i);
    for (int j = 0; j < word_lengths[i]; ++j) {
      printf("*");
    }
    printf("\n");
  }
}
