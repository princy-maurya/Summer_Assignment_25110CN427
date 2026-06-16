/*Write a program to Find maximum frequency element.*/
#include<stdio.h>
int main()
{
    int a[100],num,length,frequency=0,x;
    printf("enter the length array =");
    scanf("%d",&length);

    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int max_freq = a[0];
    int max_count =0;
    for(int i=0;i<length;i++)
    { 
        int count=0;
        for(int j=i+1;j<length;j++)
         {   if(a[i] == a[j])
            {
                count = count + 1;
            }
         }
         if(count> max_count) 
          {
            max_count = count;
            max_freq = a[i];
          }
    }

    printf("Element with maximum frequency is %d",max_freq);
    return 0;
}
