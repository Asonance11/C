#include <stdio.h>
#include <stdlib.h>

// void pointers

struct animal {
  char *name;
  int legCount;
};

int compar(const void *elem1, const void *elem2) {
  const struct animal *animal1 = elem1;
  const struct animal *animal2 = elem2;

  if (animal1->legCount > animal2->legCount) {
    return 1;
  }
  if (animal2->legCount > animal1->legCount) {
    return -1;
  }

  return 0;
}

int my_strlen(char *s) {
  char *p = s;

  while (*p != '\0') {
    p++;
  }

  return p - s;
}

int main(void) {
  int a[5] = {1, 3, 5, 6, 7};

  int *p = &a[0];

  printf("%d \n", *p);
  printf("%d \n", *(p + 1));

  for (int i = 0; i < 5; i++) {
    printf("%d \n", *(p + i));
  }

  printf("%d \n", my_strlen("Hello World"));

  struct animal b[4] = {{.name = "Dog", .legCount = 4},
                        {.name = "Monkey", .legCount = 2},
                        {.name = "Antelope", .legCount = 4},
                        {.name = "Snake", .legCount = 0}};

  qsort(b, 4, sizeof(struct animal), compar);
  for (int i = 0; i < 4; i++) {
    printf("%d: %s\n", b[i].legCount, b[i].name);
  }
  return 0;
}
