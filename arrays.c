#include <stdio.h>

void doubleArray(int *a, int len) {
  for (int i = 0; i < len; i++) {
    a[i] *= 2;
  }
}

int main(void) {
  float f[4];

  f[0] = 1.1;
  f[1] = 1.2;
  f[2] = 1.3;
  f[3] = 1.4;

  for (int i = 0; i < 4; i++) {
    printf("%f \n", f[i]);
  }

  // multidimensional arrays

  int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      printf("(%d, %d) = %d \n", row, col, a[row][col]);
    }
  }

  int x[4] = {1, 2, 3, 4};

  doubleArray(x, 4);

  for (int i = 0; i < 4; i++) {
    printf("%d \n", x[i]);
  }
}
