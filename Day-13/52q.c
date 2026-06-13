/*Write a program to Count even and odd 
elements. */
#include<stdio.h>
int main()
{
    int a[100],num,length,even_element=0,odd_element=0;
    printf("enter the length array =");
    scanf("%d",&length);

    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<length;i++)
    {
       if(a[i] % 2 ==0)
       {
         even_element = even_element + 1;
       }
       else{
         odd_element= odd_element + 1;
         }
    }
    printf("number of even element = %d\n",even_element);
    printf(" number of odd element =%d",odd_element);
    return 0;
}