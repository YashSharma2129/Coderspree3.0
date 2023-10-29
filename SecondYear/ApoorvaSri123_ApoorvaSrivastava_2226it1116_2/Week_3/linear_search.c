#include <stdio.h>

int findIndex(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
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

    int numToFind;
    printf("Enter the number to find: ");
    scanf("%d", &numToFind);

    int result = findIndex(arr, n, numToFind);

    if (result != -1) {
        printf("Number found at index: %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
