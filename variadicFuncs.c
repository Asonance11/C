#include <stdarg.h>
#include <stdio.h>

int add(int count, ...) {
  int total = 0;
  va_list va;

  va_start(va, count);

  for (int i = 0; i < count; i++) {
    int n = va_arg(va, int);

    total += n;
  }

  va_end(va);

  return total;
}

int my_printf(int serial, const char *format, ...) {
  va_list va;

  printf("The serial number is %d\n", serial);

  va_start(va, format);

  int rv = vprintf(format, va);
  va_end(va);

  return rv;
}

int main(void) {
  printf("%d\n", add(4, 4, 5, 66, 34));
  my_printf(3490, "Hello everyyan %d\n", 35);
}
