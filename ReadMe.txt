----------------------
PROGRAM(s) NAME: a2_q1.c and s2_q2.c
----------------------
AUTHOR'S NAME
--------------
Harir Al-Rubaye

INTRODUCTION
------------
a2_q1 is a program that swaps rows and columns, while a2_q2 is a program that builds up on a2_q1 and contains shallow, and deep copy.
Note: I made a header file called a2.h

Q1A
-----
I used the fast approach

Q1B
-------
The fast approach used with the swap_rows cannot be used with swap_columns, because there is no columns pointer made
while, there is a row pointer, which we used in swap_rows function.


 Q2B
-------
the difference that happened between Q2B and Q2A, is that when we assigned:
    a1-> array[0][1] = 100.0;
    a2-> array[1][2] = 200.0;
    a_shallow-> array[2][3] = 300.0;
    a_deep -> array[3][4] = 400.0;
a1 showed 100.0 in [0][1], but so did a_deep and a_shallow. As, it seems that a_shallow that was supposed to show 300.0 in [2][3], didn't.
Yet ended up being a copy of a1 along side a_deep, which also didn't show 400.0 in [3][4]. While a2 showed 200.0 in [1][2] and 300.0 in [2][3]

Overall, it seems shallow_copy function doesnt create new memory for the pointer assigned to its return value.
it only sets the copy pointer to the same memory that the passed one points to, while deep_copy creates a new memory.
which is why we see that the only changes that will show on them, are the ones done to a1.

Then we have a2, which seems to show 300.0 in [2][3] along side 200.0 in [1][2], even though it
was assigned to [2][3] in a_shallow. that happened because a2 was set to a1, before hand, and since a_shallow is a1 copy it showed on
a2 instead.

  Q2C
-------
the difference that happened between Q2C and Q2B, is that when we assigned:
a1-> array[0][1] = 5000.0;
a2-> array[1][2] = 6000.0;
a_shallow-> array[2][3] = 700.0;
a_deep-> array[3][4] = 8000.0;
b1-> array[4][5] = 9000.0;

a1 showed 5000.0 in [0][1], and 700.0 in [2][3], but so did a_deep and a_shallow. As, a_shallow showed 5000.0 in [0][1], and 700.0 in [2][3].
while, a_deep didn't show 8000.0 in [3][4], but it did show 5000.0 in [0][1], and 700.0 in [2][3].
Then we have a2 which showed 6000.0 in [1][2] and 9000.0 in [4][5] along side b1, which showed the same thing.

Overall, it seems shallow_copy function doesn't create new memory for the pointer assigned to its return value.
it only sets the copy pointer to the same memory that the passed one points to, while deep_copy creates a new memory.

Thus, a_deep is a separate copy of a1, whatever changes are done to it will be ignored. while changes done to a1
will also be done to a_deep. On the other hand, with a_shallow, it goes both ways, changes done to a_shallow will show in a1
and vice versa. Then we have a2 and b1, which we had set their arrays to be equal, so they will be exactly the same.

Q2d
-------
the pointers that need to be freed are the row pointer, the array pointer; and the structure pointer.
while the order that they need to be freed in is:
    1- row pointer
    2- array pointer
    3- the structure pointer
And it's important to free it in this order , because:
    * the free function in c id used to dynamically de-allocate memeory. any memory allocated dynamically is not de-allocated on it's own.
    * syntax for free function is free(ptrName);
    * Your program has only certain amount of memory available for use dynamically, known as heap. Not freeing memory,
      and if it was pointers, it need to be freed in order, or else it may cause you to run out when running a program.
      (which will lead your program to crash).
    * dynamically allocated memory is not automatically freed, when your program terminates, which means that you may waste memory
      even after your program has stopped being used. This also would lead your program to crash.

Thus you have to free pointers and in order, to avoid getting your program to crash.


FUNCTIONS INCLUDED
-------------------
struct Double_Array* shallow_copy ( struct Double_Array* main);
struct Double_Array* deep_copy ( struct Double_Array* original);
struct Double_Array* Double_array(int row, int col);
struct Double_Array *randomize_array(struct Double_Array * ptr, double a, double b);
void  print_array (struct Double_Array* rand_array);
void free_array (struct Double_Array* new_array);
void free_a1(struct Double_Array* a1_array);
void free_b1 (struct Double_Array* b1);
void free_struct(struct Double_Array* a_deep);
int swap_rows (struct Double_Array* swapping_rows, int one, int two);
int swap_columns (struct Double_Array* swapping_cols, int one, int two);
double rand_double(double a, double b);
void print_struct(struct Double_Array* doubles_struct, char* header);

RUNNING THE PROGRAM
-------------------
To compile the program type the following on your terminal:
    $ make all
    or if you want to compile a2_q1 alone:
    $make a2_q1
     or if you want to compile a2_q2 alone:
    $make a2_q2

To run a2_q1:
    $ ./a2_q1

To run a2_q1:
    $ ./a2_q1

After that to get rid of the *.o files:
    $ make clean
