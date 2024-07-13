#include <stdio.h>
#include <stdlib.h>

// Variable length arrays
//
// Multi dimensional VLAs
void print_matrix(int h, int w, int m[h][w]) {
  for (int row = 0; row < h; row++) {
    for (int col = 0; col < w; col++) {
      printf("%2d ", m[row][col]);
    }
    printf("\n");
  }
}

int main(void) {
  int n;
  char buf[32];

  printf("Enter a number: ");
  fflush(stdout);
  fgets(buf, sizeof buf, stdin);
  n = strtoul(buf, NULL, 10);

  int v[n];

  for (int i = 0; i < n; i++)
    v[i] = i * 10;

  for (int i = 0; i < n; i++)
    printf("v[%d] = %d\n", i, v[i]);

  // multi
  int rows = 5;
  int cols = 6;

  int matrix[rows][cols];

  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < cols; col++)
      matrix[row][col] = row * col;
  }

  print_matrix(rows, cols, matrix);
}
