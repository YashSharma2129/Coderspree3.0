#include <stdio.h>

unsigned int reverseBits(unsigned int n);

int main() {
    int n;
    printf("Enter the number of unsigned integers to reverse: ");
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    unsigned int unsignedIntegers[n];
    unsigned int reversedIntegers[n];

    for (int i = 0; i < n; i++) {
        scanf("%u", &unsignedIntegers[i]);

        if (unsignedIntegers[i] < 0) {
            return 0;
        }

        reversedIntegers[i] = reverseBits(unsignedIntegers[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%u\n", reversedIntegers[i]);
    }

    return 0;
}

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    int bitSize = sizeof(n) * 8;

    for (int i = 0; i < bitSize; i++) {
        result = (result << 1) | (n & 1);
        n = n >> 1;
    }

    return result;
}
