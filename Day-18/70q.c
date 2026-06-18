/*Write a program to Selection sort.*/
#include<stdio.h>
int main()
{
    int a[50],length,i,j,temp,min;
    printf("enter the length of array =");
    scanf("%d",&length);

    for(i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("sorted array by selection sort= ");

    for(i=0;i<length-1;i++)
    {
        min =i;
        for(j=i+1;j<length;j++)
        {
            if(a[min]>a[j])
            {
                min =j;
            }
        }
        temp =a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("sorted array =");
    for(i=0;i<length;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}