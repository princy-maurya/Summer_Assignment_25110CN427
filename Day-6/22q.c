//Write a program to Convert binary to decimal. //
#include<stdio.h>
int main()
{
    int num ,sum=0,r,p=1;
    printf("Enter the binary number to convert into decimal=");
    scanf("%d",&num);
    
    printf("decimal number of %d is = ",num);
    while(num>0)
    {    
        r=num%10;
        sum = sum + (r*p);
        p= p*2;
        num=num/10;
    }
   printf(" %d ",sum);
    return 0;
}