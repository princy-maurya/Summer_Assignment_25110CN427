//Write a program to Calculate sum of first N natural numbers.//
#include<stdio.h>
int main()
{
  int num,sum=0,i; 
  printf("enter number");
  scanf("%d",&num);
  while(i<=num)
  {
    sum=sum+i;
    i=i+1;
  }
  printf("sum=%d",sum);

    return 0;
}