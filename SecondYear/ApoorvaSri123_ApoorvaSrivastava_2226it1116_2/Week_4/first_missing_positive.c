#include <stdio.h>
#include <stdlib.h>

int findSmallestMissingPositive(int arr[], int n) {
    int nonPositiveIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            int temp = arr[i];
            arr[i] = arr[nonPositiveIndex];
            arr[nonPositiveIndex] = temp;
            nonPositiveIndex++;
        }
    }

    for (int i = nonPositiveIndex; i < n; i++) {
        int num = abs(arr[i]);
        if (num <= n - nonPositiveIndex) {
            arr[nonPositiveIndex + num - 1] = -abs(arr[nonPositiveIndex + num - 1]);
        }
    }

    for (int i = nonPositiveIndex; i < n; i++) {
        if (arr[i] > 0) {
            return i - nonPositiveIndex + 1;
        }
    }

    return n - nonPositiveIndex + 1;
}

int main() {
    int numTests;
    scanf("%d", &numTests);
    getchar();  // Consume the newline character

    for (int t = 0; t < numTests; t++) {
        int size;
        scanf("%d", &size);
        getchar();  // Consume the newline character

        int *arr = (int *)malloc(size * sizeof(int));

        char input[1000]; // Adjust the size as needed
        fgets(input, sizeof(input), stdin);

        char *token = strtok(input, " ");
        int index = 0;
        while (token != NULL) {
            arr[index] = atoi(token);
            index++;
            token = strtok(NULL, " ");
        }

        int result = findSmallestMissingPositive(arr, size);
        printf("%d\n", result);

        free(arr);
    }

    return 0;
}
