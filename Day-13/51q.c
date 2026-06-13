/*Write a program to Find largest and smallest 
element. */
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
     int max=a[0];
     int min=a[0];
    for(int i=1;i<=length;i++)
    {
       if(max < a[i])
       {
        max=a[i];
       }
       if(min > a[i])
       {
        min=a[i];
       }
    }
    printf("largest element=%d\n smallest element =%d",max,min);
    return 0;
}