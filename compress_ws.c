#include <stdio.h>

#define INSIDE_WS 1
#define OUTSIDE_WS 0

int is_whitespace(int c) {
  return(c == ' ' || c == '\n' || c == '\t');
}

int main() {
  int c;
  int state = OUTSIDE_WS;
  while((c = getchar()) != EOF) {
    if (is_whitespace(c) && (state == OUTSIDE_WS)) {
      state = INSIDE_WS;
      printf(" ", c);
    } else if (is_whitespace(c) && state == INSIDE_WS) {
      ; /* still inside ws, print nothing */
    } else {
      state = OUTSIDE_WS;
      printf("%c", c);
    }
  }
}
