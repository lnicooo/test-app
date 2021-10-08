#include "factorial.h"

/*---- Aux Functions ----*/

int fac (int n)
{
  if (n == 0)
    return 1;
  else
    return (n * fac (n-1));
}

/*---- Main Function ----*/

long int factorial () {

  int i ;
  long int s = 0;
  volatile int n;

  n = 25;
  for (i = 0;  i <= n; i++)
    s += fac (i);

  return s;
}
