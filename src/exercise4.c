#include <stdio.h>

#define SIZE 10

int main(int argc, char *argv[]) {
    float arr[SIZE];
    float X;
    int K;


    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%f", &arr[i]);
    }


    printf("\n");
    scanf("%f %d", &X, &K);

    if (K < 0 || K >= SIZE) {
        printf("\n");
        return 1;
    }


    for (int i = SIZE - 1; i > K; i--) {
        arr[i] = arr[i - 1];
    }


    arr[K] = X;

  
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}
