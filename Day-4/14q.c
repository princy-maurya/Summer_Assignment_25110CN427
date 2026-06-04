//Write a program to Find nth Fibonacci term.//
#include<stdio.h>
int main()
{
    int previousfirst,previoussecond,current=0,lastterm,n[20],x;
    printf("Enter the previous_first,previoussecond and lastterm ");
    scanf("%d%d%d",&previousfirst,&previoussecond,&lastterm);

    printf("Enter the nth term to find in fibonacci series =");
      scanf("%d",&x);

         n[0]=previousfirst;
         n[1]=previoussecond;
     for(int i=3;i<=lastterm;i++)
       {
         current= previousfirst + previoussecond;
         n[i]=current;
         previousfirst = previoussecond;
         previoussecond = current;

        }
     printf("the %dth term of fibonacci series is=%d",x,n[x]);
      
     return 0;   
}