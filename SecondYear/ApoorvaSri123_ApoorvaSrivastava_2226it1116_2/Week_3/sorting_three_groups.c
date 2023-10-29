#include <stdio.h>

int minimumOperations(int v[], int n) {
    int dp[1000]; // Assuming a maximum of 1000 elements
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }

    int m = 1;

    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (v[i] >= v[j]) {
                dp[i] = (dp[i] > (1 + dp[j])) ? dp[i] : (1 + dp[j]);
                m = (m > dp[i]) ? m : dp[i];
            }
        }
    }

    return n - m;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int v[1000]; // Assuming a maximum of 1000 elements

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int minOps = minimumOperations(v, n);
    printf("Minimum Operations: %d\n", minOps);

    return 0;
}
