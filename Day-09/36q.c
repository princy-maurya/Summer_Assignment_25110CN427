/*Write a program to Print hollow square 
pattern. 
***** 
*   * 
*   * 
*   * 
*****      */
#include<stdio.h>
int main()
{
    int i,j,row;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i == 1 || j == 1||j==5 ||i==5)
              {   printf("*");
              }
            else
              {
               printf(" ");
              }
        }     
        printf("\n");
    }
    return 0;
}