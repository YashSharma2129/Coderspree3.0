#include <stdio.h>
#include <string.h>

// Function to sort the sentence
void sortSentence(char* s, char* result) {
    char ans[1000];
    ans[0] = '\0'; // Initialize ans as an empty string

    for (int i = 1; i <= 9; i++) {
        char iStr[2];
        snprintf(iStr, sizeof(iStr), "%d", i);

        char* found = strstr(s, iStr);
        if (found == NULL) break;

        int end = found - s;
        int start = end;

        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        if (start < 0) start = 0;
        int l = end - start;
        char temp[100];
        strncpy(temp, s + start, l);
        temp[l] = '\0';
        strcat(ans, temp);
        strcat(ans, " ");
    }

    if (ans[strlen(ans) - 1] == ' ') {
        ans[strlen(ans) - 1] = '\0';
    }

    if (ans[0] == ' ') {
        memmove(ans, ans + 1, strlen(ans)); 
    }

  
    int len = strlen(ans);
    for (int i = 0; i < len; i++) {
        if (ans[i] == ' ' && ans[i + 1] == ' ') {
            memmove(&ans[i], &ans[i + 1], len - i);
            len--;
            i--;
        }
    }

    strcpy(result, ans);
}

int main() {
    char sentence[1000];
    char sortedSentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    sortSentence(sentence, sortedSentence);
    printf("%s\n", sortedSentence);

    return 0;
}
