#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

void print_struct(struct Double_Array* doubles_struct, char* header){
    printf("%s\n", header);
    printf("struct_address: %p\n", (void*)doubles_struct);
    printf("row_size = %d, col_size: %d\n",doubles_struct -> rowsize, doubles_struct -> colsize);
    printf("array address = %p, with contents: \n",(void*)doubles_struct -> array);
    printf("\n");
    print_array(doubles_struct);
    printf("\n\n");
}
