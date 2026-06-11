/*Write a program to Write function to find 
factorial.*/
#include<stdio.h>
int  factorial(int num)
{
    int r,fact=1;
    for(int i=1;i<=num;i++)
     {
       r=fact;
       fact=r*i;
     }
    return fact;
}
int main()
{   int num;
    printf("Enter the number to find factorial = ");
    scanf("%d",&num);
     
    int fact = factorial(num);
    printf("factorial of %d = %d",num,fact);

    return 0;
}