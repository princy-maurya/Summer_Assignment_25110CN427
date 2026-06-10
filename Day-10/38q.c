/* Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   **
    *
*/
#include<stdio.h>
int main()
{
    int i,j,k;
   
    for(i=0;i<=4;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=8-(i*2);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}