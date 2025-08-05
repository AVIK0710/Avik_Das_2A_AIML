#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        {0, 0, 3},
        {0, 0, 0},
        {1, 0, 0}
    };

    int zeroCount = 0;

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
    }

    int totalElements = ROWS * COLS;

    
    if (zeroCount > totalElements / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is NOT a sparse matrix.\n");
    }

    printf("Zero elements: %d\n", zeroCount);
    printf("Total elements: %d\n", totalElements);

    return 0;
}

