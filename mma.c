// Manual Memory Allocation

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Normal Malloc
  // int *p = malloc(sizeof(int));
  //
  // *p = 12;
  //
  // if (p == NULL) {
  //   printf("Error allocating memory to an integer \n");
  // }
  //
  // printf("%d \n", *p);

  // Allocation for arrays
  // int *p = malloc(sizeof(int) * 10);
  //
  // for (int i = 0; i < 10; i++) {
  //   p[i] = i;
  // }
  //
  // for (int i = 0; i < 10; i++) {
  //   printf("%d \n", p[i]);
  // }

  // using realloc
  int *p = malloc(sizeof *p * 20);

  for (int i = 0; i < 20; i++)
    p[i] = i;

  int *new_p = realloc(p, sizeof *p * 40);

  if (new_p == NULL) {
    printf("Error reallocating memory \n");
    return 1;
  }

  p = new_p;

  for (int i = 20; i < 40; i++)
    p[i] = i;

  for (int i = 0; i < 40; i++)
    printf("%d \n", p[i]);

  free(p);

  return 0;
}
