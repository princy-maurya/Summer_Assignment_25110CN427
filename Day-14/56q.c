/*Write a program to Find duplicates in array.*/
#include<stdio.h>
int main()
{
    int a[100],num,element,frequency=0,n=0;
    printf("enter the element array =");
    scanf("%d",&element);

    for(int i=0;i<element;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("duplicate element in array =");
    for(int i=0;i<element;i++)
    {
        for(int j =i+1;j<element;j++)
        {
            if(a[i] == a[j])
              {
                 printf("%d\n",a[i]);
                 break;
              }
         }
    }

   return 0;
}
