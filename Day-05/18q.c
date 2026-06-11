//Write a program to Check strong number.//
#include<stdio.h>
int main()
{
  int num,sum=0,r,fact,temp;
  printf("Enter the number to check strong number =");
  scanf("%d",&num);
      temp =num;
     while(temp>0)
     { 
       fact=1;
       r=temp%10;
       for(int i=1;i<=r;i++)
         {
          fact= fact*i;
         }
       sum = sum + fact;
       temp=temp/10;
     }
    if(sum == num)
    {
        printf("This is strong number.");
    }
    else{
        printf("This is not strong number.");
    }

    return 0;
}