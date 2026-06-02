//Write a program to Find product of digits.//
#include<stdio.h>
int main()
{
  int num,prod=1,r;
  printf("Enter the number to find product=");
  scanf("%d",&num);
 
  while(num>0)
  {
    r=num%10;
    
    prod=prod*r;
    num=num/10;

  }
    printf("product of number is=%d",prod);
   
    return 0;
}