#include <stdio.h>

#define N 4  
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void transpose(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void reverseRows(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        int start = 0, end = N - 1;
        while (start < end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}

void rotate90Clockwise(int matrix[N][N]) {
    transpose(matrix);
    reverseRows(matrix);
}

int main() {
    int matrix[N][N] = {
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 },
        {13, 14, 15, 16 }
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    rotate90Clockwise(matrix);

    printf("Matrix after 90 degree rotation (clockwise):\n");
    printMatrix(matrix);

    return 0;
}

