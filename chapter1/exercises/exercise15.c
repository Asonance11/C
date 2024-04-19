#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double converter(double fahr);

int main() {
  float fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3.0f\t%6.1f\n", fahr, converter(fahr));
  }
}

double converter(double fahr) {
  double celsius;

  celsius = (5.0 / 9.0) * (fahr - 32);

  return celsius;
}
