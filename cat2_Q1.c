#include <stdio.h>

#define ROWS 2
#define COLS 2
#define MATRICES 2

int main() {
    // Declare and initialize multiple 2D arrays
    // First matrix
    int scores1[ROWS][COLS] = {
        {65, 92},
        {84, 72}
    };
    
    // Second matrix  
    int scores2[ROWS][COLS] = {
        {35, 70},
        {59, 67}
    };
    
    printf("First Matrix \n");
    printf("Matrix 1:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("[ ");
        for (int j = 0; j < COLS; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("]\n");
    }
    
    printf("\n Second Matrix \n");
    printf("Matrix 2:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("[ ");
        for (int j = 0; j < COLS; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("]\n");
    }
    
    return 0;
}