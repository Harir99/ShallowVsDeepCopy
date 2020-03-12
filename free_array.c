#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

void free_array (struct Double_Array* new_struct){
    int i;
    for ( i = 0; i < new_struct->rowsize; i++) {
        free(new_struct -> array[i]); /* free rows */ 
    }
    free(new_struct -> array); /* free the array */
    free(new_struct); /* free the struct itself */
}
