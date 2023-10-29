#include <stdio.h>

void rotateLeft(int arr[], int n) {
    if (n <= 1) {
        return; // Nothing to rotate
    }

    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; // Variable-length array (VLA) in C

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rotateLeft(arr, n);

    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
