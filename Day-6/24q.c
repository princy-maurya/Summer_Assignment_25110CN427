//Write a program to Find x^n without pow(). //

#include<stdio.h>
int main()
{
   int num,pow,sol =1;
   printf("Enter the number and pow=");
   scanf("%d%d",&num,&pow);

   for(int i=1;i<=pow;i++)
   {
      sol = sol*num;
   }
   printf("%d^%d=%d",num,pow,sol);
    return 0;
}