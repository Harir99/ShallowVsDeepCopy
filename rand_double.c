#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

double rand_double(double a, double b){
    double Random_numbers;

    if( b > a){
        double old_a = a; /* set old_a to one */ 

        a = b; /* now a will hold b value */ 
        b = old_a; /* v will hold a value which was stored in old_a */ 
    } 
    Random_numbers = ((double) rand() / (double) RAND_MAX) * (b - a) + a;

    return(Random_numbers);

}
