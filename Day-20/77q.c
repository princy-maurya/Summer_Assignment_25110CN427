/*Write a program to Multiply matrices.*/
#include<stdio.h>
int main()
{
    int mat1[50][50],mat2[50][50],row1,column1,i,j,k,row2,column2,mat3[50][50],sum=0;

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
    
    //multiplication of matrices

    if(column1 != row2)
    {
        printf("multiplication of matrices not possible.");
    }
    else
    {
     printf("multiplication of matrices=\n");
     
        for(i=0;i<row1;i++)
        {    
            for(j=0;j<column2;j++)
            {
                
                for(k=0;k<column2;k++)
                {
                sum = sum +(mat1[i][k] * mat2[k][j]);
                }
                 mat3[i][j]=sum;
                 printf("%d\t",mat3[i][j]);
                sum=0;
            }
            printf("\n");
        }
        
    }
    return 0;

}