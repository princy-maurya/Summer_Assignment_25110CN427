//Write a program to Print Armstrong numbers in a range.//

#include<stdio.h>
#include<math.h>
int main()
{
     int i,start,end,temp,count,sum,r,p;

     printf("Enter the range to print armstrong =");
     scanf("%d%d",&start,&end);
  for(i=start;i<=end;i++) 
   {  sum=0;
      count=0;
       //count digit in number//
      temp=i;
     while(temp>0)
        {
            count=count+1;
           temp= temp/10;
        } 
      // check armstrong or not//
      temp=i;
      while(temp>0)
      { 
        p=temp%10;
        sum=sum+pow(p,count);
        temp=temp/10;
      }
     if(sum == i )
       {
       printf("Armstrong = %d\n",i);
       }
    }
    return 0;
}