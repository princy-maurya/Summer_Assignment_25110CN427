/*Write a program to Find pair with given sum*/
#include<stdio.h>
int main()
{
    int a[100],num,length,targetsum,found;
    printf("enter the length array =");
    scanf("%d",&length);

    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the targetsum to find pair  =");
    scanf("%d",&targetsum);
    
     for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if( a[i]+a[j] == targetsum)
              {
                int found =1;
                printf("pair of sum %d found in array = %d and %d ",targetsum,a[i],a[j]);
              }
        }
    }
    if(found == 0)
    {
        printf("pair not found in array.");
    }

  return 0;   
}   