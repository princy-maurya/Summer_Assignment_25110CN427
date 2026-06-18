/*Write a program to Sort array in descending order.*/
#include<stdio.h>
int main()
{
    int a[50],length,i,j,swap;
    printf("enter the length of array =");
    scanf("%d",&length);

    for(i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<length-1;i++)
    {
        for(j=0;j<length-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap =a[j];
                a[j]=a[j+1];
                a[j+1]=swap;

            }
        }
    }
    printf("shorted array ");
    for(i=0;i<length;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}