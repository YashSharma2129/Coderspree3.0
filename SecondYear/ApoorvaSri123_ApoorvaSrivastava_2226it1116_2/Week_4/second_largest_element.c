#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        return -1;
    }

    return secondLargest;
}

int main() {
    int numTests;
    scanf("%d", &numTests);
    getchar(); // Consume the newline character

    int results[numTests];

    for (int t = 1; t <= numTests; t++) {
        int n;
        scanf("%d", &n);
        getchar(); // Consume the newline character

        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int secondLargest = findSecondLargest(arr, n);
        results[t - 1] = secondLargest;
    }

    for (int t = 1; t <= numTests; t++) {
        printf("%d\n", results[t - 1]);
    }

    return 0;
}
