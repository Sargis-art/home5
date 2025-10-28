#include <stdio.h>

#define ROWS_A 10
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 10

int main() {
    int A[ROWS_A][COLS_A];
    int B[ROWS_B][COLS_B];
    int C[ROWS_A][COLS_B] = {0};

    printf("(%dx%d):\n", ROWS_A, COLS_A);
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("(%dx%d):\n", ROWS_B, COLS_B);
    for (int i = 0; i < ROWS_B; i++) {
        for (int j = 0; j < COLS_B; j++) {
            scanf("%d", &B[i][j]);
        }
    }


    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            int sum = 0;
            for (int k = 0; k < COLS_A; k++) {  
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }


    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d ", C[i][j]);
        }
    }
    printf("\n");

    return 0;
}
