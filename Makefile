all: a2_q1 a2_q2

a2_q1: a2_q1.o  Double_array.o randomize_array.o print_array.o free_array.o swap_rows.o swap_columns.o rand_double.o
	gcc -Wall -o a2_q1  a2_q1.o  Double_array.o randomize_array.o print_array.o free_array.o swap_rows.o swap_columns.o rand_double.o

a2_q2: a2_q2.o Double_array.o randomize_array.o print_array.o  swap_rows.o swap_columns.o rand_double.o shallow_copy.o deep_copy.o free_array.o print_struct.o
	gcc -Wall -o a2_q2  a2_q2.o  Double_array.o randomize_array.o print_array.o swap_rows.o swap_columns.o rand_double.o shallow_copy.o deep_copy.o free_array.o  print_struct.o

shallow_copy: shallow_copy.c
	gcc -Wall -c shallow_copy.c

deep_copy: deep_copy.c
	gcc -Wall -c deep_copy.c

Double_array: Double_array.c
	gcc -Wall -c Double_array.c

randomize_array: randomize_array.c
	gcc -Wall -c randomize_array.c

print_array: print_array.c
	gcc -Wall -c print_array.c

free_array: free_array.c
	gcc -Wall -c free_array.c

swap_rows: swap_rows.c
	gcc -Wall -c swap_rows.c

swap_columns: swap_columns.c
	gcc -Wall -c swap_columns.c

rand_double: rand_double.c
	gcc -Wall -c rand_double.c

print_struct: print_struct.c
	gcc -Wall -c print_struct.c

clean:
	rm -rf *.o
	rm -rf a2_q1 a2_q2
