#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

int swap_columns (struct Double_Array* swapping_cols, int one, int two){
    /* you cannot use the fast approach here, because there is no columns pointer made */
    /* so i had to swap the each of the two column value by hand*/
    int i;
    int valid = 1;
    if ( one < swapping_cols -> colsize && two < swapping_cols -> colsize ){
        for ( i = 0; i < swapping_cols->rowsize; i++) {
            double old_one = swapping_cols -> array[i][one];
                swapping_cols -> array [i][one] =  swapping_cols -> array[i][two]; 
                swapping_cols -> array[i][two] = old_one;
                valid = 1;
        }
    } else {
        valid = 0;
    }
    return valid;
}
