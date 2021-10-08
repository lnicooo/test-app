#include "app.h"

long int bubble_sort() {

    long c, d, t, n, a, list[ BUBBLE_SIZE];

    n = BUBBLE_SIZE;

    for (c=0; c<n; c++)
      list[c]=n-c;

    for (c=0; c < (n- 1 ); c++){
      for (d=0; d < n-c-1; d++){
        if (list[d] > list[d+1]){
          /* Swapping */
          t         = list[d];
          list[d]   = list[d+1];
          list[d+1] = t;
        }
      }
    }
    a=0;
    //Sum all sorted values
    for ( c = 0 ; c < n ; c++ )
      a+=list[c]*(c+1);

    return a;
}
