//Write a program to Check perfect number.//
#include<stdio.h>
int main()
{
   int num,i,sum=0;

   printf("Enter the number to check perfect number or not=");
   scanf("%d",&num);
    
   for(i=1;i<num;i++)
   {
     if(num%i == 0)
     {
       sum = sum + i ;
     }
   }
     if(num == sum)
     {
        printf("This is perfect number.");
     }
     else{
        printf("This is not perfect number.");
     }
    return 0;
}