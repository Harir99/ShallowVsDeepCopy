#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

int swap_rows (struct Double_Array* swapping_rows, int one, int two){
    /* I used the fast approach, since we have an row pointer */
    int valid = 1;
    if ( one < swapping_rows -> rowsize && two < swapping_rows -> rowsize ){
        double* old_one = swapping_rows -> array[one];
        swapping_rows -> array[one] = swapping_rows -> array[two];
        swapping_rows -> array[two] = old_one;
        valid = 1;
    }
    else {
        valid = 0;
    }
    return valid;

}
