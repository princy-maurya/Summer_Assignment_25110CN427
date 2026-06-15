/*Write a program to Reverse array*/
#include<stdio.h>
int main()
{
    int a[100],num,length,j,temp;
    printf("enter the length array =");
    scanf("%d",&length);

      //original array
    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }

      //reverse array
      j=length-1;
    for(int i=0;i<length/2;i++)
    {   temp= a[j];
        a[j] =a[i];
        a[i]=temp;
        j--;

    }
    for(int i=0;i<length;i++)
    {
       printf("%d",a[i]);
    }
    return 0;
}