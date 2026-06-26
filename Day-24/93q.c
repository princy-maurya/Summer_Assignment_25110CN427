/*Write a program to Check string rotation.*/
#include <stdio.h>
#include <string.h>

int main()
 {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

     int len1 = strlen(str1);
     int len2 = strlen(str2);

    
    if (len1 != len2) {
        printf("string1 is not rotation of string2.");
        return 0;
    }

    char temp[200];  
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
       printf("The string1 are not rotations string2.\n");
    } else
     {
         printf("string1 is  rotation of string2.");
    }

    return 0;
}
