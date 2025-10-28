#include <stdio.h>

int main() {
    float arr[10];
    float sum = 0.0f;



    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }


    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

 
    float average = sum / 10;

    printf("%.3f\n", average);

    return 0;
}
