#include <stdio.h>
/* Print Fahrenheit-Celsius table
   for fahr = 0, 20, 40,..., 300   */

main(){
  int fahr, celsius;
  int lower, step, upper;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while(fahr <= upper){
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
    }
