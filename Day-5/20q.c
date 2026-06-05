//Write a program to Find largest prime factor. //
#include<stdio.h>
int main()
{
   int num, i, max = -1;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num % 2 == 0) {
        max= 2;
        num /= 2;
    }
 
    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            max = i;
            num /= i;
        }
    }

    if (num > 2) {
        max = num;
    }

    printf("The largest prime factor is: %d\n", max);

    return 0;
}