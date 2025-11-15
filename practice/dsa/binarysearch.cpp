#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {5, 12, 18, 25, 40, 55};
    int n = 6, target;

    printf("Enter Book ID to search: ");
    scanf("%d", &target);

    int pos = binarySearch(arr, n, target);

    if (pos != -1)
        printf("Book found at position %d\n", pos);
    else
        printf("Book not found.\n");

    return 0;
}
