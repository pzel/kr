#include <stdio.h>

int main() {
  long ws;
  int c;
  for (ws = 0 ; ((c = getchar()) != EOF);) {
    if (c == '\n' || c =='\t' || c == ' ') {
      ws++;
    }
  }
  printf("%ld\n", ws);
  return 0;
}
