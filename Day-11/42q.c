/*Write a program to Write function to find 
maximum. */
#include<stdio.h>
int  maximum(int num1,int num2)
{    int max;
     if(num1>num2)
       {
        max=num1 ;
       }
    else{
        max=num2;
    }

    return max;
}
int main()
{   int num1,num2;
    printf("Enter the number to find max = ");
    scanf("%d%d",&num1,&num2);
     
    printf("maximum of %d and %d= %d",num1,num2,maximum(num1,num2));

    return 0;

}