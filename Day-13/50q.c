/*Write a program to Find sum and average of 
array. */
#include<stdio.h>
int main()
{
    int a[100],num,length,sum=0;
    printf("enter the length array =");
    scanf("%d",&length);

    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<length;i++)
    {
        sum =sum + a[i];
    }
    printf("sum of array = %d",sum);
    int avarage=sum/length;
    printf("avarage of array = %d",avarage);

    return 0;
}