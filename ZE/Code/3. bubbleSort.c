#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int *arr, int len) {
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *n1, int *n2) {   ///數字交換
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void randArr(int *arr, int len) {   ///隨機產生0~100的數字放進陣列
    srand(time(NULL));
    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 100;
    }
}

void bubbleSort(int *arr, int len) {
    for (int i = len - 1; i > 0; i--) {
//        printf("%d ", i);
        for (int k = 0; k < i; k++) {
//            printf("%d-%d ", k, k + 1);
            if (arr[k] > arr[k + 1]) {
                swap(&arr[k], &arr[k + 1]);
            }
        }
//        printf("\n");
    }
}

int main() {
    int size = 5;
    int arr[size];

    randArr(arr, size);
    printArr(arr, size);


    bubbleSort(arr, size);
    printArr(arr, size);


    return 0;
}
