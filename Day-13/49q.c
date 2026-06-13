/*Write a program to Input and display array. */
#include<stdio.h>
int main()
{
    int a[100],num,length;
    printf("enter the length array =");
    scanf("%d",&length);

    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=length;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}