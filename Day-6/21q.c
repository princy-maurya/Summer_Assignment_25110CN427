//Write a program to Convert decimal to binary.//
 #include<stdio.h>
 int main()
 {
    int num ,sum=0,r,p=1;
    printf("Enter the decimal number to convert into binary=");
    scanf("%d",&num);
    
    printf("Binary number of %d is = ",num);
    while(num>0)
    {
        r=num%2;
        sum = sum + (r*p);
        p=p*10;
        num=num/2;
    }
   printf(" %d ",sum);
    return 0;
 }