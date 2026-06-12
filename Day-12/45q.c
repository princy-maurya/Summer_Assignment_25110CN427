/*Write a program to Write function for 
palindrome.*/
#include<stdio.h>
int  palindrom(int num)
{   int num1,reverse,r;
    num1=num;
      while(num1>0)
       {
        r=num1%10;
        reverse=(reverse*10)+r;
        num1=num1/10;
        }
     if(reverse == num)   
       return 1;
     else
       return 0;
}
int main()
{   int num,reverse;
    printf("Enter the number to check palindrom = ");
    scanf("%d",&num);
     
    if (palindrom(num))
      {
        printf("Given number is palindrome");
      }
    else
      {
        printf("Given number is not palindrome");
      }
   

    return 0;

}