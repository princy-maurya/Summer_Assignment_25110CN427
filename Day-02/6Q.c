//Write a program to Reverse a number.//
#include<stdio.h>
int main()
{
  int num,sum=0,r;
  printf("Enter the number to reverse=");
  scanf("%d",&num);
 
  while(num>0)
  {
    r=num%10;
    sum=sum*10;
    sum=sum+r;
    num=num/10;

  }
    printf("reverse number is=%d",sum);
   
    return 0;
}