#include <stdio.h>

main() {
  float celsius;
  for (celsius = -50; celsius <= 120; celsius+=10) {
    printf("%6.1f %3.0f\n", celsius, celsius/(5/9.0) + 32);
  }
}

while_main() {
  float fahr, celsius;
  int upper, lower, step;

  lower = -50;
  upper = 120;
  step  = 10;
  celsius = lower;

  printf("     C   F\n ----- ---\n");
  while (celsius <= upper) {
    fahr = celsius/(5/9.0) + 32;
    printf("%6.1f %3.0f\n", celsius,fahr);
    celsius += step;
  }
}
