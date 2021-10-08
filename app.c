#include "app.h"
#include "config.h"

int main(){

/*---- APP1 ----*/
#ifdef APP1
  int app1;

  app1 = APP1;
#ifdef SHOW_RESULT
  printf("%s: %d\n",APP1_NAME, app1);
#endif /* RESULT */
#elif TMR_APP1
  int i, reslt[TMR_APP1_LOOP],maj;

  for(i=0; i<TMR_APP1_LOOP; i++){
    reslt[i] = APP1;
  }

  // Voter
  if(reslt[0] == reslt[1])      maj = reslt[0];
  else if(reslt[0] == reslt[2]) maj = reslt[0];
  else maj = reslt[1];

#ifdef SHOW_RESULT
  printf("%s: %d\n",APP1_NAME, maj);
#endif /* RESULT */
#endif /* APP1 */

/*---- APP2 ----*/
#ifdef APP2
  int app2;

  app2 = APP2;
#ifdef SHOW_RESULT
  printf("%s: %d\n",APP2_NAME, app2);
#endif /* RESULT */
#elif TMR_APP2
  int i, reslt[TMR_APP2_LOOP],maj;

  for(i=0; i<TMR_APP2_LOOP; i++){
    reslt[i] = APP2;
  }

  // Voter
  if(reslt[0] == reslt[1])      maj = reslt[0];
  else if(reslt[0] == reslt[2]) maj = reslt[0];
  else maj = reslt[1];

#ifdef SHOW_RESULT
  printf("%s: %d\n",APP2_NAME, maj);
#endif /* RESULT */
#endif /* APP2 */

/*---- APP3 ----*/
#ifdef APP3
  int app3;

  app3 = APP3;
#ifdef SHOW_RESULT
  printf("%s: %d\n",APP3_NAME, app3);
#endif /* RESULT */
#elif TMR_APP3
  int i, reslt[TMR_APP3_LOOP],maj;

  for(i=0; i<TMR_APP3_LOOP; i++){
    reslt[i] = APP3;
  }

  // Voter
  if(reslt[0] == reslt[1])      maj = reslt[0];
  else if(reslt[0] == reslt[2]) maj = reslt[0];
  else maj = reslt[1];

#ifdef SHOW_RESULT
  printf("%s: %d\n",APP3_NAME, maj);
#endif /* RESULT */
#endif /* APP3 */

/*---- APP4 ----*/
#ifdef APP4
  int app4;

  app4 = APP4;
#ifdef SHOW_RESULT
  printf("%s: %d\n",APP4_NAME, app4);
#endif /* RESULT */
#elif TMR_APP4
  int i, reslt[TMR_APP4_LOOP],maj;

  for(i=0; i<TMR_APP4_LOOP; i++){
    reslt[i] = APP4;
  }

  // Voter
  if(reslt[0] == reslt[1])      maj = reslt[0];
  else if(reslt[0] == reslt[2]) maj = reslt[0];
  else maj = reslt[1];

#ifdef SHOW_RESULT
  printf("%s: %d\n",APP4_NAME, maj);
#endif /* RESULT */
#endif /* APP2 */

  return 0;
}
