//Write a program to Check whether a number is palindrome.//
#include<stdio.h>
int main()
{
  int num,num1,sum=0,r;
  printf("Enter the number to check palindrome or not=");
  scanf("%d",&num);
  num1=num;
  while(num1>0)
  {
    r=num1%10;
    sum=sum*10;
    sum=sum+r;
    num1=num1/10;

  }
    int reverse=sum;
    if (reverse ==num)
    {
        printf("Given number is palindrome");
    }
    else
    {
        printf("Given number is not palindrome");
    }
   
    return 0;
}