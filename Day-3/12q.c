//Write a program to Find LCM of two numbers//
#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,gcd,lcm;
    printf("Enter the num1 and num2 to find GCD =");
    scanf("%d%d",&num1,&num2);

    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i == 0 && num2%i == 0)
        {
            gcd=i;
        }
    }
    lcm = (num1*num2)/gcd;

    printf("LCM of %d amd %d is =%d",num1,num2,lcm);

    return 0;
}