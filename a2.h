struct Double_Array* shallow_copy ( struct Double_Array* main);
struct Double_Array* deep_copy ( struct Double_Array* original);
struct Double_Array* Double_array(int row, int col);
struct Double_Array *randomize_array(struct Double_Array * ptr, double a, double b);
void  print_array (struct Double_Array* rand_array);
void free_array (struct Double_Array* new_array);
int swap_rows (struct Double_Array* swapping_rows, int one, int two);
int swap_columns (struct Double_Array* swapping_cols, int one, int two);
double rand_double(double a, double b);
void print_struct(struct Double_Array* doubles_struct, char* header);

struct Double_Array {
    int rowsize;
    int colsize;
    double** array;
};
