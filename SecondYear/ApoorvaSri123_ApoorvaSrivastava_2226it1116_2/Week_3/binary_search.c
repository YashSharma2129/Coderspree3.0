#include <stdio.h>

int binarySearch(int arr[], int n, int num) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == num) {
            return mid;
        } else if (arr[mid] < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int numToFind;
    printf("Enter the number to find: ");
    scanf("%d", &numToFind);

    int result = binarySearch(arr, n, numToFind);

    if (result != -1) {
        printf("Number found at index: %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
