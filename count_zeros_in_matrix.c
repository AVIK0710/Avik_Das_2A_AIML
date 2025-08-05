#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int matrix[ROWS][COLS] = {
        {0, 2, 0, 4},
        {5, 0, 7, 8},
        {0, 10, 11, 0}
    };

    int zeroCount = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
    }

    printf("Number of zeros in the matrix: %d\n", zeroCount);

    return 0;
}

