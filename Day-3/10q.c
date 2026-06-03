//Write a program to Print prime numbers in a range.//
#include<stdio.h>
int main()
{
   int i,j,start,end,prime;
   printf("Enter the start and end =");
   scanf("%d%d",&start,&end);

   for(i=start;i<=end;i++)
   {   prime=1;
       for(j=2;j<i;j++) 
         {
           if(i%j==0)
            {
             prime=0;
             break;
            }
           
        }
             if(prime ==1 && i>1)
             {printf("%d\n",i);
             }
   }
 
    return 0;
}