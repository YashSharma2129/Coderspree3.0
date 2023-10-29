#include <stdio.h>

int maxTrafficJam(int vehicle[], int n, int m) {
    int maxJamLength = 0;
    int currentJamLength = 0;
    int flippedOnes = 0;

    for (int i = 0; i < n; i++) {
        if (vehicle[i] == 1) {
            currentJamLength++;
        } else {
            if (flippedOnes < m) {
                currentJamLength++;
                flippedOnes++;
            } else {
                currentJamLength = 0;
            }
        }

        if (currentJamLength > maxJamLength) {
            maxJamLength = currentJamLength;
        }
    }

    return maxJamLength;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int vehicle[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vehicle[i]);
    }

    int maxJamLength = maxTrafficJam(vehicle, n, m);
    printf("%d\n", maxJamLength);

    return 0;
}
