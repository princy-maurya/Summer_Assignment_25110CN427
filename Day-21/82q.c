/*Write a program to Reverse a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int i, j, length;

    printf("Enter the string: ");
    scanf("%[^\n]", str);  

    length = strlen(str);
    j = length - 1;

    for (i = 0; i < length; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[length] = '\0';  

    printf("Reversed string: %s\n", rev);

    return 0;
}
