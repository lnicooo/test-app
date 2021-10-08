#include "app.h"

typedef unsigned char bool;
typedef unsigned int uint;

/*---- Aux Functions ----*/

bool divides (uint n, uint m) {
  return (m % n == 0);
}

bool even (uint n) {
  return (divides (2, n));
}

void swap (uint* a, uint* b) {
  uint tmp = *a;
  *a = *b;
  *b = tmp;
}

bool calc_prime (uint n) {
  uint i;
  if (even (n))
    return (n == 2);
  for (i = 3; i * i <= n; i += 2) {
    if (divides (i, n)) /* ai: loop here min 0 max 357 end; */
      return 0;
  }
  return (n > 1);
}

/*---- Main Function ----*/

int prime(){

  uint x =  21649;
  uint y = 513239;
  swap (&x, &y);
  int b = calc_prime(x) && calc_prime(y);

  return !(calc_prime(x) && calc_prime(y));

}
