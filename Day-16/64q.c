/*Write a program to Remove duplicates from array.*/
#include<stdio.h>
int main()
{
    int a[100],length,found,b[100];
    printf("enter the length array =");
    scanf("%d",&length);

    for(int i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }

    int count =0;
     for(int i=0;i<length;i++)
     {
        found =0;
        for(int j=i+1;j<length;j++)
        {
            if( a[i]==a[j])
              { 
                found =1;
                a[j]=0;
                break;
              }
        }

        if(found == 0 && a[i]!=0)
            {
               
                    b[count]=a[i];
                    count=count +1;
                
            }  
            
     }
     
     for(int i=0;i<count;i++)
    {
        printf(" %d",b[i]);
    }

  return 0;   
}   