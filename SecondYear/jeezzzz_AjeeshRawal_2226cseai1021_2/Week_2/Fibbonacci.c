#include <stdio.h>

void generateFibonacci(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    generateFibonacci(n);
    return 0;
}

void generateFibonacci(int n) {
    long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%ld ", a);
        long temp = a;
        a = b;
        b = temp + b;
    }
}
