#include <stdio.h>
#define INSIDE_WS 0
#define OUTSIDE_WS 1

int main() {
  int c, state;
  for (state = OUTSIDE_WS; (c = getchar()) != EOF; ) {
    int is_ws = (c==' ' || c=='\n' || c=='\b');
    if(is_ws && state == INSIDE_WS) {
      ;
    } else if (is_ws && state == OUTSIDE_WS){
      printf("\n");
      state = INSIDE_WS;
    } else {
      state = OUTSIDE_WS;
      printf("%c", c);
    }
  }
}
