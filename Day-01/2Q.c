//Write a program to Print multiplication table of a given number.//
#include<stdio.h>
int main()
{
    int n,r,p;
    printf("enter the number to print multiplication=");
    scanf("%d",&n);
     printf("\n multiplication of table-");
    for(r=1;r<=10;r++)
    {
        p=n*r;
        printf("\n%d*%d=%d",n,r,p);
    }

    return 0;
}