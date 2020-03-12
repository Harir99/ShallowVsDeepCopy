#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

int main(int argc, char const *argv[]) {
    double one = 0;
    double  two = 8;
    int a = (int) rand_double(one,two);
    int b = (int) rand_double(one,two);
    struct Double_Array* new_struct;

    printf("--------------\n");
    printf("QUESTION 1\n");
    printf("--------------\n");
    /* creates a struct array that holds 6 rows and 9 columns */
    new_struct = Double_array(6,9);
    new_struct = randomize_array(new_struct,one,two); /* randomly initialize the array in the struct */
    print_array (new_struct);
    swap_rows(new_struct,a,b); /* randomly pick two rows and awap them */
    printf("\n");
    printf("Rows %d and %d were swapped\n",a,b);
    printf("\n");
    print_array(new_struct);

    a = (int) rand_double(one,two);
    b = (int) rand_double(one,two);
    swap_columns(new_struct,a,b); /* randomly pick two columns and swap them */
    printf("\n");
    printf("Columns %d and %d were swapped\n",a,b);
    printf("\n");
    print_array(new_struct);
    free_array(new_struct);
    return 0;
}
