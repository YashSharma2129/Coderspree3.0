#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    int negativeIndex = n - 1;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < 0) {
            int temp = arr[i];
            arr[i] = arr[negativeIndex];
            arr[negativeIndex] = temp;
            negativeIndex--;
        }
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

    rearrangeArray(arr, n);

    printf("Modified array with negative elements at the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
