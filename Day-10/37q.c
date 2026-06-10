/*Write a program to Print star pyramid. 
    * 
   *** 
  ***** 
 ******* 
*********   */
#include<stdio.h>
int main()
{
    int i,j,k;
   
    for(i=0;i<=4;i++)
    {
        for(k=0;k<=3-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i*2;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}