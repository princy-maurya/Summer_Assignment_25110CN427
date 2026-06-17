/*Write a program to Merge arrays.*/

#include <stdio.h>

int main() 
{
    int length1,length2, i,a[20],b[20],n[50];
   
    //first array
    printf("Enter the length of array a[] = ");
    scanf("%d", &length1);
    for(int i=0;i<length1;i++)
    {
        scanf("%d",&a[i]);
    }

    //second array
    printf("Enter the length  of array b[] = ");
    scanf("%d", &length2);
    for(int i=0;i<length2;i++)
    {
        scanf("%d",&b[i]);
    }

    //merge array
     
    for(int i=0;i<length1;i++)
    {
       n[i]=a[i]; 
    }
    for(int j=0;j<length2;j++)
    {
       n[length1 +j]=b[j]; 
    }

    for(int i=0;i<length1+length2;i++)
    {
        printf("%d",n[i]);
    }


   return 0;
}
