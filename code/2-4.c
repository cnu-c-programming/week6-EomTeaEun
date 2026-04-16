#include <stdio.h>

void print_2d_arr(int* rows[], int row_size, int col_size) {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            printf("%d ", *(*(rows + i) + j)); 
        }
        printf("\n");
    }
}