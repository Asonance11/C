#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverse(char s[]);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    reverse(line);
    printf("%s", line);
  }
}

int getLine(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';
  return i;
}

void reverse(char s[]) {
  int i, j;
  char temp;

  i = 0;

  while (s[i] != '\0') {
    ++i;
  }

  --i;
  if (s[i] == '\n') {
    --i;
  }

  j = 0;

  while (j < i) {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    --i;
    ++j;
  }
}
