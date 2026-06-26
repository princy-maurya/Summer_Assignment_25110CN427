/*Write a program to Find longest word.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], longest[50], word[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (!isspace(str[i]) && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    // Check last word
    word[j] = '\0';
    if (j > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
