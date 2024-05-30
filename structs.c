#include <stdio.h>

struct car {
  char *name;
  float price;
  int speed;
};

void setPrice(struct car *c, float newPrice) { c->price = newPrice; }

int main(void) {
  struct car saturn = {.name = "Toyota camry", .speed = 175};

  setPrice(&saturn, 16000.00);

  printf("%f \n", saturn.price);
}
