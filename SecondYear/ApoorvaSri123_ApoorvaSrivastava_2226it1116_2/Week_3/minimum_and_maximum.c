#include <stdio.h>

int findMin(int array[], int N) {
    int min = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int findMax(int array[], int N) {
    int max = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int array[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int min = findMin(array, N);
    int max = findMax(array, N);

    printf("Minimum: %d\nMaximum: %d\n", min, max);

    return 0;
}
