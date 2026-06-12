/*Write a program to Write function for 
Armstrong.*/

#include<stdio.h>
#include<math.h>
int isArmstrong(int num)
{
    int temp,count=0,sum=0,r,p;
      //count digit in number//
        temp=num;
        while(temp>0)
        {
            count=count+1;
            temp=temp/10;
        } 
     // check armstrong or not//
       temp=num;
        while(temp>0)
        { 
            p=temp%10;
            sum=sum+pow(p,count);
            temp=temp/10;

        }
    if(sum == num)
    return 1;
    else
    return 0;
}
int main()
{
   int num;

  printf("Enter the number to check armstrong or not =");
   scanf("%d",&num);
   
  if(isArmstrong(num) )
  {
    printf("Given number is armstrong.");
  }
  else
  {
    printf("Given number is not armstrong.");
  }

    return 0;
}