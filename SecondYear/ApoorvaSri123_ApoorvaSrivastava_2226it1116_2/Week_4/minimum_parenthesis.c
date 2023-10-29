#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int minAddToMakeValid(char* pattern) {
    int openCount = 0;
    int addCount = 0;

    for (int i = 0; pattern[i] != '\0'; i++) {
        if (pattern[i] == '(') {
            openCount++;
        } else if (pattern[i] == ')') {
            if (openCount > 0) {
                openCount--;
            } else {
                addCount++;
            }
        }
    }

    return openCount + addCount;
}

int main() {
    int numPatterns;
    scanf("%d", &numPatterns);
    getchar(); // Consume the newline character

    int* results = (int*)malloc(numPatterns * sizeof(int));

    for (int i = 0; i < numPatterns; i++) {
        char pattern[1000]; // Adjust the size as needed
        fgets(pattern, sizeof(pattern), stdin);

        // Remove the newline character from the input
        pattern[strcspn(pattern, "\n")] = '\0';

        int minAdditions = minAddToMakeValid(pattern);
        results[i] = minAdditions;
    }

    for (int i = 0; i < numPatterns; i++) {
        printf("%d\n", results[i]);
    }

    free(results);
    return 0;
}
