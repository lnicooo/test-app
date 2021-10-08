#include "app.h"

/*---- Main function ----*/

int fibonacci(){

    int i,OLD1,OLD2,temp;

    OLD1 = 0;
    OLD2 = 1;

    for(i=2; i<FIB+1; i++){
        temp = OLD2;
        OLD2 = OLD1+ OLD2;
        OLD1 = temp; //Valor antigo
    }

    return OLD2;
}
