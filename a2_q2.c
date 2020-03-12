#include<stdio.h>
#include<stdlib.h>
#include "a2.h"

int main(int argc, char const *argv[]) {
    struct Double_Array* a_deep;
    struct Double_Array* a1;
    struct Double_Array* b1;
    struct Double_Array* a_shallow;

    char* a1_header = "The structure pointed to by a1 is: ";
    char* b1_header = "The structure pointed to by b1 is: ";
    char* a2_header = "The structure pointed to by a2 is: ";
    char* shallow_header = "The structure pointed to by a_shallow is: ";
    char* deep_header = "The structure pointed to by a_deep is: ";


    printf("--------------\n");
    printf("QUESTION 2a\n");
    printf("--------------\n");

    a1 = Double_array(6,9);
    a1 = randomize_array(a1,0.0,10.0); /* initialize a1 to random values between 0.0 and 10.0 */
    printf("The address of a1 is: %p\n", (void*)a1);
    print_struct(a1, a1_header);

    struct Double_Array* a2;
    a2 = a1;
    printf("The address of a2 is: %p\n", (void*)a2);
    print_struct(a1, a2_header);

    a_shallow = shallow_copy(a1);
    printf("The address of a_shallow is: %p\n", (void*)a_shallow);
    print_struct(a_shallow, shallow_header);

    a_deep = deep_copy(a1);
    printf("The address of a_deep is: %p\n", (void*)a_deep);
    print_struct(a_deep, deep_header);
    printf("\n\n\n");

    printf("--------------\n");
    printf("QUESTION 2b\n");
    printf("--------------\n");

    a1 = Double_array(6,9);
    a1 = randomize_array(a1,0.0,10.0);
    a1-> array[0][1] = 100.0;
    a2-> array[1][2] = 200.0;
    a_shallow-> array[2][3] = 300.0;
    a_deep-> array[3][4] = 400.0;


    printf("The address of a1 is: %p\n", (void*)a1);
    print_struct(a1, a1_header);

    printf("The address of a2 is: %p\n", (void*)a2);
    print_struct(a2, a2_header);

    a_shallow = shallow_copy(a1);
    printf("The address of a_shallow is: %p\n", (void*)a_shallow);
    print_struct(a_shallow, shallow_header);

    a_deep = deep_copy(a1);
    printf("The address of a_deep is: %p\n", (void*)a_deep);
    print_struct(a_deep, deep_header);
    printf("\n\n\n");
    printf("--------------\n");
    printf("QUESTION 2c\n");
    printf("--------------\n");

    b1 = Double_array(6,9);
    b1 = randomize_array(b1,10.0,20.0);
    a2 -> array = b1 -> array;

    printf("The address of a1 is: %p\n", (void*)a1);
    print_struct(a1, a1_header);

    printf("The address of a2 is: %p\n", (void*)a2);
    print_struct(a2, a2_header);

    a_shallow = shallow_copy(a1);
    printf("The address of a_shallow is: %p\n", (void*)a_shallow);
    print_struct(a_shallow, shallow_header);

    a_deep = deep_copy(a1);
    printf("The address of a_deep is: %p\n", (void*)a_deep);
    print_struct(a_deep, deep_header);

    printf("The address of b1 is: %p\n", (void*)b1);
    print_struct(b1, b1_header);

    a1-> array[0][1] = 5000.0;
    a2-> array[1][2] = 6000.0;
    a_shallow-> array[2][3] = 700.0;
    a_deep-> array[3][4] = 8000.0;
    b1-> array[4][5] = 9000.0;

    printf("The address of a1 is: %p\n", (void*)a1);
    print_struct(a1, a1_header);

    printf("The address of a2 is: %p\n", (void*)a2);
    print_struct(a2, a2_header);

    a_shallow = shallow_copy(a1);
    printf("The address of a_shallow is: %p\n", (void*)a_shallow);
    print_struct(a_shallow, shallow_header);

    a_deep = deep_copy(a1);
    printf("The address of a_deep is: %p\n", (void*)a_deep);
    print_struct(a_deep, deep_header);

    printf("The address of b1 is: %p\n", (void*)b1);
    print_struct(b1, b1_header);
    printf("\n\n\n");


    free_array(a_deep);
    free_array(a1);
    free_array(b1);
    return 0;
}
