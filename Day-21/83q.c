/*Write a program to Count vowels and consonants.*/
#include <stdio.h>
#include <string.h>

#include <ctype.h>  

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    for (i = 0; str[i] != '\0'; i++)
     {
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') 
        { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels =vowels+1;
            else
                consonants = consonants +1;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
