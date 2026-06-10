/*Write a program to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321
*/
#include<stdio.h>
int main()
{
    int i,j,k,l;
   
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}