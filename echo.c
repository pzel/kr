#include <stdio.h>

main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}

main_v1() {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
