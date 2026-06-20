/*Write a program to Find row-wise sum.*/
#include<stdio.h>
int main()
{
    int mat[50][50],row,column,i,j,sum ;

     printf("enter the number of row and column =");
     scanf("%d%d",&row,&column);
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
               scanf("%d",&mat[i][j]);
            }
        }

       for(i=0;i<row;i++)
        {   
            sum =0;
            for(j=0;j<column;j++)
            {
               sum = sum +mat[i][j];
            }
            printf("sum of row %d = %d \n", (i+1),sum);
        }  
        return 0;
}