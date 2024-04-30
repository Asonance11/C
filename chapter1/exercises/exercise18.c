#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void removeTrails(char s[], int length);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    removeTrails(line, len);
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

void removeTrails(char s[], int length) {
  int i;

  for (i = length - 2; s[i] == ' ' || s[i] == '\t'; --i) {
  }

  s[i + 1] = '\n';
  s[i + 2] = '\0';
}