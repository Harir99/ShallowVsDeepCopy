#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

struct Double_Array *randomize_array(struct Double_Array * ptr, double a, double b){
    int i;
    int j;
    for ( i = 0; i < ptr->rowsize; i++) {
        for ( j = 0; j < ptr ->colsize; j++) {
	/* loop through all rows and cols and set struct array ot random values */
            ptr -> array[i][j] = rand_double(a,b); 
        }
    }
    return ptr;
}
