#include "app.h"
#include "config.h"

int main(){

  int fac_r,bub_r,fib_r,pri_r;

#ifdef TMR
  int i, reslt[TMR_LOOP],maj;

  for(i=0; i<TMR_LOOP; i++){
    reslt[i] = bubble_sort();
  }

  // Voter
  if(reslt[0] == reslt[1])      maj = reslt[0];
  else if(reslt[0] == reslt[2]) maj = reslt[0];
  else maj = reslt[1];

  bub_r = maj;

#endif /* TMR */

  fac_r = factorial();
  bub_r = bubble_sort();
  fib_r = fibonacci();
  pri_r = prime();

#ifdef SHOW_RESULT
  printf("Factorial: %d\n", fac_r);
  printf("Bubble:    %d\n", bub_r);
  printf("Fibonacci: %d\n", fib_r);
  printf("Prime:     %d\n", pri_r);
#endif /* SHOW_RESULT */
  return 0;
}
