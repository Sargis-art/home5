#include <stdio.h>

#define SIZE 10

int main() {
    float arr[SIZE];
    float X;
    int K;
    int n = SIZE - 1; // количество изначальных элементов, чтобы хватило места для вставки

    // Считаем n=SIZE-1 элементов
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Читаем X и K
    scanf("%f %d", &X, &K);

    // Проверяем корректность K
    if (K < 0 || K > n) {
        return 1; // ошибка
    }

    // Сдвигаем элементы вправо, начиная с конца массива до K
    for (int i = n; i > K; i--) {
        arr[i] = arr[i - 1];
    }

    // Вставляем X в позицию K
    arr[K] = X;

    // Выводим итоговый массив из SIZE элементов
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}

