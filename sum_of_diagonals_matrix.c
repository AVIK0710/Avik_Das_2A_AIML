#include <stdio.h>

#define N 3  

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < N; i++) {
        primarySum += matrix[i][i];                 
        secondarySum += matrix[i][N - i - 1];       
    }

    printf("Primary diagonal sum: %d\n", primarySum);
    printf("Secondary diagonal sum: %d\n", secondarySum);

    
    int totalSum = primarySum + secondarySum;
    if (N % 2 == 1) {
        totalSum -= matrix[N/2][N/2];  
    }

    printf("Total diagonal sum (no double-counting center): %d\n", totalSum);

    return 0;
}

