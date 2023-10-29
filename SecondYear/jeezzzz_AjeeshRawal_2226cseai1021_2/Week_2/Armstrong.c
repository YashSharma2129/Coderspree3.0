#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;
    int len = 0;
    while (originalNum > 0) {
        originalNum /= 10;
        len++;
    }

    int sum = 0;
    int temp = num;
    while (temp > 0) {
        int curr = temp % 10;
        sum += pow(curr, len);
        temp /= 10;
    }

    if (sum == num) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
