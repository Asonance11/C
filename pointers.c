#include <stdio.h>

void increment(int *a) { *a = *a + 1; }

int main(void) {
  int i = 10;
  int *j = &i;

  printf("I is %d \n", i);
  printf("I is %d \n", *j);

  increment(j);

  printf("i is now %d \n", i);
}
