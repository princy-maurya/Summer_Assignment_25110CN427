//Write a program to Count digits in a number//
#include<stdio.h>
int main()
{
   int num,sum,r,i,count=0;
   printf("enter the number to count digits=");
   scanf("%d",&num);
   
    while(num!=0)
    {
      num=num/10;
      count=count+1;
    }
    printf("digits in given number are=%d",count);



    return 0;
}