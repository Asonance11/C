#include <stdio.h>

typedef struct {
  int x, y;
} Point;

int main(void) {
  Point p = {.x = 20, .y = 30};

  printf("%d %d \n", p.x, p.y);
}
