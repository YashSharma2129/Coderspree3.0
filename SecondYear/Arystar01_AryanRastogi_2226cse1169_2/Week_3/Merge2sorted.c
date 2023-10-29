
#include <stdio.h>

void swapIfGreater(long long arr1[], long long arr2[], int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        long long temp = arr1[ind1];
        arr1[ind1] = arr2[ind2];
        arr2[ind2] = temp;
    }
}

void merge(long long arr1[], long long arr2[], int n, int m) {
    int len = n + m;
    int gap = (len / 2) + (len % 2);

    while (gap > 0) {
        int left = 0;
        int right = left + gap;
        while (right < len) {
            if (left < n && right >= n) {
                swapIfGreater(arr1, arr2, left, right - n);
            } else if (left >= n) {
                swapIfGreater(arr2, arr2, left - n, right - n);
            } else {
                swapIfGreater(arr1, arr1, left, right);
            }
            left++, right++;
        }

        if (gap == 1) break;

        gap = (gap / 2) + (gap % 2);
    }
}

int main() {
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    printf("The merged arrays are:\n");
    printf("arr1[] = ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", arr1[i]);
    }
    printf("\narr2[] = ");
    for (int i = 0; i < m; i++) {
        printf("%lld ", arr2[i]);
    }
    printf("\n");
    return 0;
}
