#include <stdio.h>
#include <string.h>

void reverseWordOrder(char* input) {
    int len = strlen(input);
    int i, j;

    // Reverse the entire string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }

    // Reverse each word in the string
    i = 0;
    while (i < len) {
        j = i;
        while (input[j] != ' ' && input[j] != '\0') {
            j++;
        }

        int start = i;
        int end = j - 1;

        while (start < end) {
            char temp = input[start];
            input[start] = input[end];
            input[end] = temp;
            start++;
            end--;
        }

        if (input[j] == ' ') {
            i = j + 1;
        } else {
            break;
        }
    }
}

int main() {
    char input[1000]; // Adjust the size as needed

    if (fgets(input, sizeof(input), stdin)) {
        // Remove the newline character from the input
        input[strcspn(input, "\n")] = '\0';

        reverseWordOrder(input);
        printf("%s\n", input);
    }

    return 0;
}
