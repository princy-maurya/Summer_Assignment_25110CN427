/*Write a program to Compress a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int count = 1;

    for (int i = 0; i < len; i++) {
        // Print current character
        printf("%c", str[i]);

        // Count consecutive occurrences
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print count
        printf("%d", count);

        // Reset count
        count = 1;
    }

    return 0;
}
