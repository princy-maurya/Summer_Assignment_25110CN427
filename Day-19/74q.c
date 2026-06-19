/*Write a program to Subtract matrices.*/
#include<stdio.h>
int main()
{
    int mat1[50][50],mat2[50][50],row1,column1,i,j,row2,column2,mat3[50][50];

    // first matrix
     printf("enter the number of row1 and column1 =");
     scanf("%d%d",&row1,&column1);
        for(i=0;i<row1;i++)
        {
            for(j=0;j<column1;j++)
            {
               scanf("%d",&mat1[i][j]);
            }
        }
    
    //second matrix
     printf("enter the number of row2 and column2 =");
     scanf("%d%d",&row2,&column2);
        for(i=0;i<row2;i++)
        {
            for(j=0;j<column2;j++)
            {
               scanf("%d",&mat2[i][j]);
            }
        }
    
    //substraction of matrices

    if(row1 != row2 && column1 != column2)
    {
        printf("substraction of matrices not possible.");
    }
    else
    {
     printf("substraction of matrices=\n");
     
        for(i=0;i<row2;i++)
        {
            for(j=0;j<column2;j++)
            {
                mat3[i][j] = mat1[i][j] - mat2[i][j];
              printf("%d  ",mat3[i][j] );
            }
            printf("\n");
        }

    }
    return 0;

}