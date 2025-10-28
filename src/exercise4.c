#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    float arr[SIZE];
    float X;
    int K;
    int n = SIZE - 1; 
    char buffer[100];


    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }


    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
      
        if (sscanf(buffer, "%f %d", &X, &K) != 2) {
            return 1; 
        }
    } else {
        return 1; 
    }


    if (K < 0 || K > n) {
        return 1;
    }


    for (int i = n; i > K; i--) {
        arr[i] = arr[i - 1];
    }


    arr[K] = X;


    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

