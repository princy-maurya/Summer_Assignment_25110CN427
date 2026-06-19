/*Write a program to Find diagonal sum.*/
#include<stdio.h>
int main()
{
    int mat[50][50],row,column,i,j,sum1=0,sum2=0;

     printf("enter the number of row and column =");
     scanf("%d%d",&row,&column);
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
               scanf("%d",&mat[i][j]);
            }
        }
    
    if(row == column)
       { for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
               if( i == j )
               {
                    sum1 =sum1 + mat[i][j];
               }
            }
        }
         printf("sum of first digonal = %d ",sum1);
         
         int n=row-1;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {  
                    if(j == n-i)
                    {sum2= sum2 + mat[i][j];
                    }
                }
            }
            
            printf("\nsum of second digonal =%d",sum2);
        }
        else if( row != column)
        { 
        printf("sum of digonal not possiable");
        }

            return 0;
        
}
                
                