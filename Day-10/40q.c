/*Write a program to Print character pyramid.
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA
*/
#include<stdio.h>
int main()
{
    int i,j,k,l;
   char g='A';
    for(i=1;i<=5;i++)
    {  char c='A';
         
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",c);
            c=c+1;
        }
        c=c-2;
        for(l=i-1;l>=1;l--)
        {  
            
            printf("%c",c);
            c=c-1;
        }
       
        printf("\n");
    }
    return 0;
}