/*Write a program to Linear search.*/
#include<stdio.h>
int main()
{
    int a[50],i,find,element,found;

    printf("enter number of element =");
    scanf("%d",&element);
     
    for(i=0;i<element;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the number to linear search =");
    scanf("%d",&find);
    for(i=0;i<element;i++)
    {
        if(a[i] == find)
        {
           found =1;
            break;
        }
        
    } 
    if(found == 1)
    {
        printf("%d present at %d",find,i);
    }
    else
    {
     printf("element not present");
    }

    return 0;
}