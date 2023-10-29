#include <stdio.h>
#include <string.h>

void generateParenthesis(int n);
void generateParenthesisRecursive(int left, int right, char current[], int openCount);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    generateParenthesis(n);
    return 0;
}

void generateParenthesis(int n) {
    char current[2 * n + 1]; // +1 for the null-terminator
    current[0] = '\0'; // Initialize the current string

    generateParenthesisRecursive(n, n, current, 0);
}

void generateParenthesisRecursive(int left, int right, char current[], int openCount) {
    if (left == 0 && right == 0) {
        printf("%s\n", current);
        return;
    }

    if (left > 0) {
        char newCurrent[2 * (left + right) + 1];
        strcpy(newCurrent, current);
        strcat(newCurrent, "(");
        generateParenthesisRecursive(left - 1, right, newCurrent, openCount + 1);
    }

    if (right > 0 && openCount > 0) {
        char newCurrent[2 * (left + right) + 1];
        strcpy(newCurrent, current);
        strcat(newCurrent, ")");
        generateParenthesisRecursive(left, right - 1, newCurrent, openCount - 1);
    }
}
