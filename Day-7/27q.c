//Write a program to Recursive sum of digits.//
#include<stdio.h>
int sumofdigit(int n)
{
  if(n == 0)
  return 0;
  return (n%10)+sumofdigit(n/10);
}



int main()
{
  int num;
  printf("Enter the number to find sum of digit = ");
  scanf("%d",&num);
  int sum = sumofdigit(num);
  printf("sum = %d",sum);
  
  return 0;
}