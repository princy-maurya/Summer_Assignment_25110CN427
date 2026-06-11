//Write a program to Find sum of digits of a number.//
#include<stdio.h>
int main()
{
    int num,sum=0,r;
    printf("enter the number to find sum of digits=");
    scanf("%d",&num);
     
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of digit is =%d",sum);

    return 0;
}