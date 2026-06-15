/*Write a program to Rotate array left.*/
#include<stdio.h>
int main()
{
    int a[50],i,j,length, temp;

    printf("enter the length array =");
    scanf("%d",&length);

      //original array
    for( i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }

       //Rotate array left
     int p;
    printf("enter number of position to rotate left");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        temp = a[0];
        for(j=0;j<length-1;j++)
        {
            a[j]=a[j+1];
        }
        a[length-1] = temp;

    }
    for( i=0;i<length;i++)
    {
        printf("%d",a[i]);
    }
}