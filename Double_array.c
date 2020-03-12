#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

struct Double_Array* Double_array(int row, int col){
    int i;
    struct Double_Array* new_struct = malloc ( sizeof(struct Double_Array)); /* allocate memory for the struct */
    new_struct -> array  = malloc ( sizeof(double*)*row);  /* allocate memory for the array */
    new_struct -> rowsize = row;
    new_struct-> colsize = col;
    for ( i = 0; i <  row; i++){
            new_struct-> array[i] = malloc ( sizeof(double)*col); /* allocate memory for the rows */
    }
    return new_struct;
}
