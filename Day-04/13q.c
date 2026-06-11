//Write a program to Generate Fibonacci series//
#include<stdio.h>
int main()
{
    int previousfirst,previoussecond,current=0,lastterm;
    printf("Enter the previous_first,previoussecond and lastterm ");
    scanf("%d%d%d",&previousfirst,&previoussecond,&lastterm);
       
    printf("the fibonacci series is=%d,%d",previousfirst,previoussecond);
     for(int i=3;i<=lastterm;i++)
       {
         current= previousfirst + previoussecond;
         printf(",%d",current);
         previousfirst = previoussecond;
         previoussecond = current;

        }

     return 0;   
}