/*Write a program to Write function for 
Fibonacci*/
#include<stdio.h>
void fibonacci(int previousfirst,int previoussecond,int lastterm)
{   
        int current;
     printf("the fibonacci series is=%d,%d",previousfirst,previoussecond);
     for(int i=3;i<=lastterm;i++)
       {
         current= previousfirst + previoussecond;
         printf(",%d",current);
         previousfirst = previoussecond;
         previoussecond = current;

        }
        return;
}
int main()
{
    int previousfirst,previoussecond,lastterm;
    printf("Enter the previousfirst,previoussecond and lastterm ");
    scanf("%d%d%d",&previousfirst,&previoussecond,&lastterm);
      fibonacci(previousfirst,previoussecond,lastterm);
     return 0;   
   }