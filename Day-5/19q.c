//Write a program to Print factors of a number.//
#include<stdio.h>
int main()
{
    int num ,i,sum;
    printf("Enter the number to find factors of number=");
    scanf("%d",&num);
    
    printf("The factor of %d is=",num);
    for(i=1;i<=num;i++)
     {
       if(num%i == 0)
         {
           printf(",%d",i);
         }
    }
   return 0;
}

