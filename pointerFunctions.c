#include <stdio.h>

int add(int x, int y) { return x + y; }

int mult(int x, int y) { return x * y; }

void print_math(int (*op)(int, int), int x, int y) {
  int result = op(x, y);

  printf("%d\n", result);
}

int main(void) {
  print_math(add, 5, 7);
  print_math(mult, 7, 5);

  return 0;
}
