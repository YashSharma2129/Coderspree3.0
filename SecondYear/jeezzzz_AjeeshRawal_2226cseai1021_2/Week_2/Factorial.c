#include <stdio.h>

long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

void bubbleSort(long arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                long temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    long factorials[N];
    int size = 0;

    for (int i = 0; ; i++) {
        long fact = factorial(i);
        if (fact <= N) {
            factorials[size] = fact;
            size++;
        } else {
            break;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (factorials[i] == factorials[j]) {
                factorials[j] = -1;
            }
        }
    }

    int uniqueSize = 0;
    for (int i = 0; i < size; i++) {
        if (factorials[i] != -1) {
            uniqueSize++;
        }
    }

    long uniqueFactorials[uniqueSize];
    int idx = 0;
    for (int i = 0; i < size; i++) {
        if (factorials[i] != -1) {
            uniqueFactorials[idx] = factorials[i];
            idx++;
        }
    }

    bubbleSort(uniqueFactorials, uniqueSize);

    for (int i = 0; i < uniqueSize; i++) {
        printf("%ld ", uniqueFactorials[i]);
    }

    return 0;
}
