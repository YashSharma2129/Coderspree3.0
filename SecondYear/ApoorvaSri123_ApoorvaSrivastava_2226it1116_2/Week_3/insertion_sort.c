#include <stdio.h>

void insertionSort(int n, int arr[]) {
    for (int i = 1; i < n; ++i) {
        int curr = arr[i];
        int idx = i - 1;

        while (idx >= 0 && arr[idx] > curr) {
            arr[idx + 1] = arr[idx];
            --idx;
        }

        arr[idx + 1] = curr;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(n, arr);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
