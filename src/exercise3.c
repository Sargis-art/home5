#include <stdio.h>

#define SIZE 10


void reverse(float* arr, int l, int r) {
    while (l < r) {
        float temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

void cyclicShift(float* arr, int k) {

    k = k % SIZE;
    if (k < 0)
        k += SIZE; 


    reverse(arr, 0, SIZE - 1);

    reverse(arr, 0, k - 1);

    reverse(arr, k, SIZE - 1);
}

int main() {
    float arr[SIZE];
    int k;


    for (int i = 0; i < SIZE; i++) {
        scanf("%f", &arr[i]);
    }

    printf("\n");
    scanf("%d", &k);

    cyclicShift(arr, k);

    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

