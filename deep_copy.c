#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

struct Double_Array* deep_copy ( struct Double_Array* original){
    int i;
    int j;
     struct Double_Array* a_deep = malloc(sizeof(struct Double_Array));
     a_deep -> array  = malloc ( sizeof(double*)*original -> rowsize); /* allocate space for the array */
     a_deep -> rowsize = original -> rowsize;

     a_deep -> colsize = original -> colsize;
     for ( i = 0; i < original -> rowsize; i++){
             a_deep -> array[i] = malloc ( sizeof(double)*original -> colsize);  /* allocate space for the rows */

        for (j = 0; j < original -> colsize; j++) {
            a_deep -> array[i][j] = original -> array[i][j];
        }
    }
    return a_deep;
}
