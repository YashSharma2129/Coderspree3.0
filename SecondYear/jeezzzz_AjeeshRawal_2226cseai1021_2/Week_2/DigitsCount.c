#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int originalN = n;
    int count = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && originalN % digit == 0) {
            count++;
        }
        n /= 10;
    }

    printf("%d\n", count);

    return 0;
}
