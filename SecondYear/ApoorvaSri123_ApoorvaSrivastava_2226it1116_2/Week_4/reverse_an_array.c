#include <stdio.h>
#include <string.h>

void reverseString(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s[1000]; // Adjust the size as needed

    if (fgets(s, sizeof(s), stdin)) {
        // Remove the newline character from the input
        s[strcspn(s, "\n")] = '\0';

        reverseString(s);
        printf("%s\n", s);
    }

    return 0;
}
