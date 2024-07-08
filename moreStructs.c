#include <stdio.h>

struct cabin_information {
  int window_count;
  int o2level;
};

struct spaceship {
  char *manufacturer;
  struct cabin_information ci;
};

// Fake OOP

struct parent {
  int a, b;
};

struct child {
  struct parent super;
  int c, d;
};

void print_parent(void *p) {
  struct parent *self = p;
  printf("Parent: %d, %d \n", self->a, self->b);
}

void print_child(struct child *self) {
  printf("Child: %d, %d \n", self->c, self->d);
}

int main(void) {
  struct spaceship s = {
      .manufacturer = "Some manufacturer",
      .ci.o2level = 21,
      .ci.window_count = 8,
  };

  printf("%s: %d seats, %d o2 level", s.manufacturer, s.ci.window_count,
         s.ci.o2level);

  struct child c = {.super.a = 1, .super.b = 2, .c = 3, .d = 4};

  print_child(&c);
  print_parent(&c);
}
