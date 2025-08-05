#include <stdio.h>

#define ROWS 3
#define COLS 2

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int transpose[COLS][ROWS]; 

   
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Original Matrix (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\nTransposed Matrix (%dx%d):\n", COLS, ROWS);
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

