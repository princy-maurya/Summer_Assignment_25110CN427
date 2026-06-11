//Write a program to Recursive factorial. //
#include<stdio.h>
int  factorial(int n)
{
    if(n==1 || n==0)
    return 1;
    return n*factorial(n-1);
}
int main()
{   int n;
    printf("Enter the number to find factorial = ");
    scanf("%d",&n);
     
    int fact = factorial(n);
    printf("factorial of %d = %d",n,fact);

    return 0;

}