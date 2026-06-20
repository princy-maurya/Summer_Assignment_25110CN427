/*Write a program to Find column-wise sum.*/
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
               sum = sum +mat[j][i];
            }
            printf("sum of column %d = %d \n", (j+1),sum);
        }  
        return 0;
}