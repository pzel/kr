#include <stdio.h>

main() {
  int fahr;
  for (fahr = 300; fahr>=0; fahr-=20){
    printf("%3d %6.1f\n", fahr, (5/9.0)*(fahr-32));
  }
}


while_main() {
  float fahr, celsius;
  int upper, lower, step;

  lower = 0;
  upper = 300;
  step  = 20;
  fahr = lower;
  printf("  F      C \n----------\n");
  while (fahr <= upper) {
    celsius = (5/9.0)*(fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }
}
