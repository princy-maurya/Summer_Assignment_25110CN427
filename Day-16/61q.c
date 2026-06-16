/*Write a program to Find missing number in array.*/
#include <stdio.h>

int main() 
{
    int n, i,a[20];
    printf("Enter the size of array(n-1) = ");
    scanf("%d", &n);

    int sum = 0;

    printf("Enter %d elements (from 1 to n with one missing):\n", n);
    for(i = 0; i < n-1; i++) 
    {
        scanf("%d", &a[i]);
    }
     for(i = 0; i < n-1; i++) 
    {
        sum =sum + a[i];
    }
   
    int total = n*(n+1)/2;
    int missing = total - sum;
    printf("Missing number is: %d\n", missing);

    return 0;
}