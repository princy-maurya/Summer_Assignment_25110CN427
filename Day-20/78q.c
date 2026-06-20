/*Write a program to Check symmetric matrix.*/
#include<stdio.h>
int main()
{
    int mat[50][50],row,column,i,j,tran_mat[50][50];

     printf("enter the number of row and column =");
     scanf("%d%d",&row,&column);
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
               scanf("%d",&mat[i][j]);
            }
        }
    
     printf("transpose of matrix =\n");
        for(i=0;i<column;i++)
        {
            for(j=0;j<row;j++)
            {
               tran_mat[i][j] = mat[j][i];
               
            }
           
        }
        int found =1;
     
        for(i=0;i<column;i++)
        {
            for(j=0;j<row;j++)
            {
               if(mat[i][j] != tran_mat[i][j])
               {
                 found =0;
               }
            }
          
        }

        if (found ==1)
        {
          printf("it is symmetric matrix");
        }
        else 
        {
             printf("it is not symmetric matrix");
        }

      return 0;
    }