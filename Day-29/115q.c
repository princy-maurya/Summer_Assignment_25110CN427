/*Write a program to Create menu-driven string operations system.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void stringLength(char str[]) {
    printf("Length of string: %d\n", (int)strlen(str));
}

void stringReverse(char str[]) {
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}

void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

void removeDuplicates(char str[]) {
    int len = strlen(str);
    char result[MAX];
    int index = 0;

    for (int i = 0; i < len; i++) {
        int found = 0;
        for (int j = 0; j < index; j++) {
            if (str[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[index++] = str[i];
        }
    }
    result[index] = '\0';
    printf("String after removing duplicates: %s\n", result);
}

int main() {
    char str[MAX];
    int choice;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Count Vowels and Consonants\n");
        printf("5. Remove Duplicate Characters\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1: stringLength(str); break;
            case 2: stringReverse(str); break;
            case 3: checkPalindrome(str); break;
            case 4: countVowelsConsonants(str); break;
            case 5: removeDuplicates(str); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
