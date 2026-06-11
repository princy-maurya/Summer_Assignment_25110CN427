//Write a program to Recursive reverse number.//
#include<stdio.h>
int reverse(int n,int rev)
{
  if(n == 0)
  return rev;
  return reverse((n/10),(rev*10 +(n%10)));
}

int main()
{
  int num;
  printf("Enter the number to find reverse = ");
  scanf("%d",&num);
  int rev = reverse(num,0);
  printf("sum = %d",rev);
  
  return 0;
}