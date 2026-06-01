//Write a program to Find factorial of a number.//
#include<stdio.h>
int main()
{
    int num,r,fact;
    printf("enter the number to find factorial=");
    scanf("%d",&num);
     fact=1;
    for(int i=1;i<=num;i++)
     {
       r=fact;
       fact=r*i;
     }
     printf("factorial=%d",fact);

     return 0;
}