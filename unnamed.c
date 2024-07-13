// Unnamed objects kinda like anonymous "variables"
#include <stdio.h>

struct coord {
  int x, y;
};

int sum(int p[], int count) {
  int total = 0;

  for (int i = 0; i < count; i++)
    total += p[i];

  return total;
}

void printCoord(struct coord *c) { printf("%d, %d \n", c->x, c->y); }

int main(void) {
  // unnamed object as function parameter
  int s = sum((int[]){1, 2, 3, 4}, 4);

  printf("Total: %d\n", s);
  // unnamed structs
  // printCoord((struct coord){.x = 10, .y = 20});

  // pointers to unnamed objects
  printCoord(&(struct coord){.x = 10, .y = 20});
}
