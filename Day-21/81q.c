/*Write a program to Find string length without strlen().*/
#include<stdio.h>

int main() {
   
    int i, length = 0;
     char str[50]="abc def";
   
    for (i = 0; str[i] != '\0'; i++) 
    {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
