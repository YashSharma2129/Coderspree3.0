#include <stdio.h>

void printArrayRecursively(int array[], int n, int index);

int main() {
    int n ;
    printf("Enter the value of N");
    scanf("%d",&n);
    int array[n];

    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    printArrayRecursively(array, n, 0);
    return 0;
}

void printArrayRecursively(int array[], int n, int index) {
    if (index == n) {
        return; // Base case: Stop when the index is equal to n
    }

    printf("%d\n", array[index]);
    printArrayRecursively(array, n, index + 1); // Recursively print the next element
}
