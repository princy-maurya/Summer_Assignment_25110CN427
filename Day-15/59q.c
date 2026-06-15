/*Write a program to Rotate array right*/
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

       //Rotate array right
     int p;
    printf("enter number of position to rotate right");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        temp = a[length-1];
        for(j=length-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0] = temp;

    }
    for( i=0;i<length;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}