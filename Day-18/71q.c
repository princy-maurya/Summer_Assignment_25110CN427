/*Write a program to Binary search.*/
#include<stdio.h>
int main()
{
    int a[50],length,i,mid,end,beg,pos=1,target,found =0;
    printf("enter the length of array =");
    scanf("%d",&length);
   
    for(i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
   
    printf("enter the number to search =");
    scanf("%d",&target);

    beg=0;
    end=length-1;
    while(beg<=end)
    {
        mid =(beg+end)/2;
        if(a[mid]==target)
         {
            printf("%d is present at %d",target,mid);
            found =1 ;
            break;
         }
        else if( a[mid]>target)
         {
            end=mid-1;
         }
        else 
         {beg = mid+1;
         }
    }
    if(beg>end && found ==0)
    {
        printf("%d does not exist in the array.",target);
    }

   return 0;
}