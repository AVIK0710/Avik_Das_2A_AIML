#include <stdio.h>

#define N 3  

int isIdentity(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && matrix[i][j] != 1) {
                return 0;  
            } else if (i != j && matrix[i][j] != 0) {
                return 0;  
            }
        }
    }
    return 1;
}

int main() {
    int matrix[N][N] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    if (isIdentity(matrix)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is NOT an identity matrix.\n");
    }

    return 0;
}

