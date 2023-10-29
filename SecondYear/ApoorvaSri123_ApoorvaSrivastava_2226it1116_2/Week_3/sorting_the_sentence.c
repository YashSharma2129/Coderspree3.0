#include <stdio.h>
#include <string.h>

void sortSentence(char *s, char *sorted) {
    char *words[100];  // Assuming a maximum of 100 words
    int count = 0;

    // Split the input sentence into words
    char *word = strtok(s, " ");
    while (word != NULL) {
        words[count] = word;
        count++;
        word = strtok(NULL, " ");
    }

    // Arrange words based on the numbers at the end
    for (int i = 0; i < count; i++) {
        int wordLen = strlen(words[i]);
        int num = words[i][wordLen - 1] - '1';
        if (num >= 0 && num < count) {
            if (sorted[num] == '\0') {
                strcpy(sorted + num, words[i]);
            } else {
                strcat(sorted + num, " ");
                strcat(sorted + num, words[i]);
            }
        }
    }
}

int main() {
    char inputSentence[1000];
    char sortedSentence[1000];

    printf("Enter a sentence: ");
    fgets(inputSentence, sizeof(inputSentence), stdin);

    // Remove the newline character from input
    if (inputSentence[strlen(inputSentence) - 1] == '\n') {
        inputSentence[strlen(inputSentence) - 1] = '\0';
    }

    sortSentence(inputSentence, sortedSentence);

    printf("Sorted sentence: %s\n", sortedSentence);

    return 0;
}
