#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int rev = 0;
    int num = n;

    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == num) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
