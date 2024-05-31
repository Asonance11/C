#include <stdio.h>

int main(void) {
  FILE *fp;

  // Reading a character

  // int c;
  // fp = fopen("hello.txt", "r");
  //
  // while ((c = fgetc(fp)) != EOF)
  //   printf("%c", c);

  // Reading lines

  // fp = fopen("quote.txt", "r");
  // char s[1024];
  // int lineCount = 0;
  // while (fgets(s, sizeof s, fp) != NULL) {
  //   printf("%d: %s", ++lineCount, s);
  // }

  // Formatted input

  // char name[1024];
  // float length;
  // int mass;
  //
  // fp = fopen("whales.txt", "r");
  //
  // while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF) {
  //   printf("%s whale, %d tonnes, %.1f meters \n", name, mass, length);
  // }

  // Writing files

  // int x = 32;
  //
  // fp = stdout;
  //
  // fputc('S', fp);
  // fputc('\n', fp);
  // fprintf(fp, "x = %d \n", x);
  // fputs("Hello World \n", fp);

  // binary files
  // Writing

  // unsigned char bytes[6] = {2, 4, 6, 7, 8, 8};
  //
  // fp = fopen("output.bin", "wb");
  //
  // fwrite(bytes, sizeof(char), 6, fp);

  // Reading

  unsigned char c;

  fp = fopen("output.bin", "rb");

  while (fread(&c, sizeof(char), 1, fp) > 0) {
    printf("%d \n", c);
  }

  fclose(fp);
}
