#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* runLengthEncoding(const char* input) {
    if (input == NULL || strlen(input) == 0) {
        return "";
    }

    char* encodedString = (char*)malloc(2 * strlen(input) + 1);
    if (encodedString == NULL) {
        return "";
    }

    char currentChar = input[0];
    int count = 1;
    int encodedIndex = 0;

    for (int i = 1; i < strlen(input); i++) {
        if (input[i] == currentChar) {
            count++;
        } else {
            encodedString[encodedIndex++] = currentChar;
            encodedString[encodedIndex++] = count + '0';
            currentChar = input[i];
            count = 1;
        }
    }

    encodedString[encodedIndex++] = currentChar;
    encodedString[encodedIndex++] = count + '0';
    encodedString[encodedIndex] = '\0';

    return encodedString;
}

int main() {
    int numStrings;
    scanf("%d", &numStrings);
    getchar();  // Consume the newline character

    char** encodedResults = (char**)malloc(numStrings * sizeof(char*));

    for (int i = 0; i < numStrings; i++) {
        char input[100];  // Adjust the size as needed
        fgets(input, sizeof(input), stdin);

        // Remove the newline character from the input
        input[strcspn(input, "\n")] = '\0';

        char* encoded = runLengthEncoding(input);
        encodedResults[i] = encoded;
    }

    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", encodedResults[i]);
        free(encodedResults[i]);
    }

    free(encodedResults);
    return 0;
}
