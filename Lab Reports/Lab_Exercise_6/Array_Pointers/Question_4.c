// Write a program to read a sentence and count the number of characters and words in
// that sentence.
#include <stdio.h>
#include <string.h>

void countCharsAndWords(char* str, int* charCount, int* wordCount) {
    *charCount = strlen(str);
    *wordCount = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') (*wordCount)++;
    }
}

int main() {
    char sentence[100];
    int charCount, wordCount;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countCharsAndWords(sentence, &charCount, &wordCount);
    printf("Number of characters: %d\n", charCount - 1);
    printf("Number of words: %d\n", wordCount);
    return 0;
}
