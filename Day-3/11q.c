//Write a program to Find GCD of two numbers.//
#include<stdio.h>
int main()
{
    int num1,num2,gcd;
    printf("Enter the num1 and num2 to find GCD =");
    scanf("%d%d",&num1,&num2);

    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i == 0 && num2%i == 0)
        {
            gcd=i;
        }
    }
    printf("GCD of %d and %d is = %d ",num1,num2,gcd);
    return 0;
}