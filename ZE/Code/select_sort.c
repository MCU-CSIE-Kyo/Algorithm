#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *n1, int *n2) {   ///數字交換
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int *min(int *ai, int num) {    ///回傳陣列的最小數字的指標
    int *min = ai;
    for (int i = 0; i < num; i++) {
        if (ai[i] < *min) {
            min = &ai[i];
        }
    }
    return min;
}

void randArr(int *arr, int len) {   ///隨機產生0~100的數字放進陣列
    srand(time(NULL));
    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    int size = 10;
    int arr[size];
    randArr(arr, size);

    printf("before:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < size; i++) {
        swap(&arr[i], min(&arr[i], size - i));
    }

    printf("\nafter:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
