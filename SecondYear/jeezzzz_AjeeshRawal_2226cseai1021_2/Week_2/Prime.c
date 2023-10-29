#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    bool prime = isPrime(number);

    if (prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    if (number <= 3) {
        return true;
    }

    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
