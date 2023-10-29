#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n <= 1) {
        return n;
    }

    int uniqueCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newLength = removeDuplicates(arr, n);
    printf("New array length: %d\n", newLength);

    return 0;
}
