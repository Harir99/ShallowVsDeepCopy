#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

void  print_array (struct Double_Array* rand_array) {
    int i;
    int j;
    for ( i = 0; i < rand_array->rowsize; i++) {
        for ( j = 0; j < rand_array->colsize; j++) {
            printf("%.1lf\t",rand_array-> array[i][j]);
        }
        printf("\n");
    }
}
