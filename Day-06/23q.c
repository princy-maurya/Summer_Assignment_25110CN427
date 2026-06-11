//Write a program to Count set bits in a number.//
#include<stdio.h>
int main()
{
  int num,count=0,r,sum=0,p=1,temp,q,bin;
  printf("Enter the number to count set bits =");
  scanf("%d",&num);
 //first conver number into binary//
   temp=num;
  while(temp>0)
    {
        r=temp%2;
        sum = sum + (r*p);
        p=p*10;
        temp=temp/2;
    }
    bin =sum;
  //count set bits//  
  while(bin>0)
  {    
    if(bin%10 == 1)
    {
        count =count +1;
    }
    bin = bin/10;
  }
  printf("set bits =%d",count);
    return 0;
}