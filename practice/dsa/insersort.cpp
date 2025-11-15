#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        printf("After pass %d: ", i);
        printArray(arr, n);
    }
}

int main() {
    int arr[] = {25, 12, 9, 30, 2};
    int n = 5;

    insertionSort(arr, n);
    return 0;
}
