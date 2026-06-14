/*Write a program to Second largest element*/
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
     int largest=a[0];
     int sec_largest;
    for(int i=1;i<length;i++)
    {
       if(largest < a[i] && largest != sec_largest)
       {
        largest=a[i];
        sec_largest=largest;
       }
       
    }
    printf("sec_largest element=%d",sec_largest);
    return 0;
}