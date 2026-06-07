//Write a program to Recursive Fibonacci. //
#include<stdio.h>
int fibonacci(int n)
{
    if(n == 1 || n==2)
    return 1;
  return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
  int n;
  printf(" Enter the number to find fibonacci = ");
  scanf("%d",&n);
   int fibo = fibonacci(n);
   printf("fibonacci of %d = %d",n,fibo);
     return 0;   
}
