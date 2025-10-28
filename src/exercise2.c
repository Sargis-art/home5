
#include <stdio.h>

int main() {
    float arr[10];


    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }


    printf("\n");
    for (int i = 9; i >= 0; i--) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

