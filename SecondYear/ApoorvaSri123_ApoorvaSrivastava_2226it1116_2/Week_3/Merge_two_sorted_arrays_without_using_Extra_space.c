#include <stdio.h>

void mergeAndSort(long arr1[], long arr2[], int n, int m) {
    int i = n - 1;
    int j = 0;

    while (i >= 0 && j < m) {
        if (arr1[i] >= arr2[j]) {
            long temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
            i--;
            j++;
        } else {
            break;
        }
    }

    for (int k = 0; k < n - 1; k++) {
        if (arr1[k] > arr1[k + 1]) {
            long temp = arr1[k];
            arr1[k] = arr1[k + 1];
            arr1[k + 1] = temp;
            k = -1;
        }
    }

    for (int k = 0; k < m - 1; k++) {
        if (arr2[k] > arr2[k + 1]) {
            long temp = arr2[k];
            arr2[k] = arr2[k + 1];
            arr2[k + 1] = temp;
            k = -1;
        }
    }
}

int main() {
    printf("Enter the size of the first array (arr1): ");
    int n;
    scanf("%d", &n);
    long arr1[n];
    printf("Enter the elements of the first array in non-decreasing order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%ld", &arr1[i]);
    }

    printf("Enter the size of the second array (arr2): ");
    int m;
    scanf("%d", &m);
    long arr2[m];
    printf("Enter the elements of the second array in non-decreasing order:\n");
    for (int i = 0; i < m; i++) {
        scanf("%ld", &arr2[i]);
    }

    mergeAndSort(arr1, arr2, n, m);

    printf("Merged and sorted arr1: ");
    for (int i = 0; i < n; i++) {
        printf("%ld ", arr1[i]);
    }
    printf("\n");

    printf("Merged and sorted arr2: ");
    for (int i = 0; i < m; i++) {
        printf("%ld ", arr2[i]);
    }
    printf("\n");

    return 0;
}
