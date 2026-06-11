/*Write a program to Write function to find sum 
of two numbers. */
#include<stdio.h>
int  sum(int num1,int num2)
{
    return num1+num2;
}
int main()
{   int num1,num2;
    printf("Enter the number to find sum = ");
    scanf("%d%d",&num1,&num2);
     
    int s= sum(num1,num2);
    printf("sum of %d + %d= %d",num1,num2,s);

    return 0;

}