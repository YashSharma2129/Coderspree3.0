#include <stdio.h>
#include <string.h>

void generateParenthesis(char *current, int open, int close, int max) {
    if (strlen(current) == max * 2) {
        printf("%s\n", current);
        return;
    }

    if (open < max) {
        strcat(current, "(");
        generateParenthesis(current, open + 1, close, max);
        current[strlen(current) - 1] = '\0';
    }

    if (close < open) {
        strcat(current, ")");
        generateParenthesis(current, open, close + 1, max);
        current[strlen(current) - 1] = '\0';
    }
}

int main() {
    int N;
    printf("Enter the number of pairs of parentheses: ");
    scanf("%d", &N);

    char current[N * 2 + 1];
    current[0] = '\0';

    generateParenthesis(current, 0, 0, N);

    return 0;
}
