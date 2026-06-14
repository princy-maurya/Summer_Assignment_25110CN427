/*Write a program to Frequency of an element.*/
#include<stdio.h>
int main()
{
    int a[100],num,element,frequency=0,x;
    printf("enter the element array =");
    scanf("%d",&element);

    for(int i=0;i<element;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to find frequency =");
    scanf("%d",&x);

    for(int i=0;i<element;i++)
    {
       if(a[i] == x)
       {
        frequency = frequency + 1;
       }
    }

    printf("frequency of %d is %d",x,frequency);
    return 0;
}
