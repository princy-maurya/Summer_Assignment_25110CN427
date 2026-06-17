/*Write a program to Union of arrays*/
#include<stdio.h>
int main()
{
    int a[100],length1,length2,found,b[100],n[100],count;
    
     //first array
    printf("Enter the length of array a[] = ");
    scanf("%d", &length1);
    for(int i=0;i<length1;i++)
    {
        scanf("%d",&a[i]);
    }

    //second array
    printf("Enter the length  of array b[] = ");
    scanf("%d", &length2);
    for(int i=0;i<length2;i++)
    {
        scanf("%d",&b[i]);
    }
    // copy 1st array
     for(int i=0;i<length1;i++)
    {
        n[i]=a[i];
        count = i;
    }
     
     
     // remove dublicate element
     for(int i=0;i<length1;i++)
     {
        found =0;
        for(int j=0;j<length2;j++)
        {
            if( b[i]==a[j])
              { 
                found =1;
                break;
              }
        }

        if(found == 0 )
            {
                   count=count +1;
                    n[count]=b[i];
                    
                
            }  
            
     }
     
     for(int i=0;i<=count;i++)
    {
        printf(" %d",n[i]);
    }

  return 0;   
}   