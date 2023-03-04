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

void randArr(int *arr, int len) {   ///隨機產生0~100的數字放進陣列
    srand(time(NULL));
    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 100;
    }
}

int minCount(int *arr, int len, int num) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] < num) {
            count++;
        }
    }
    return count;
}

void numMove(int *arr, int len) {
    for (int i = len - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
}

void insertionSort(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        int nownum = arr[i];
        int mincount = minCount(arr, i + 1, nownum);
        if (mincount != i) {
            numMove(&arr[mincount], i - mincount);
            arr[mincount] = nownum;
        }
    }
}

int main() {
    int size = 20;
    int arr[size];

    randArr(arr, size);
    printArr(arr, size);

    insertionSort(arr, size);
    printArr(arr, size);

    return 0;
}
