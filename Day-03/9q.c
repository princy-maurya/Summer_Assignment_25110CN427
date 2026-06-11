//Write a program to Check whether a number is prime.//
 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to check whether it is prime or not=");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
       if(num%i == 0 )
        {
        printf("Given number is not  prime.");
        break;
        }
        else
        {
        printf("Given number is prime.");
        break;
        }
    } 
    return 0;
}