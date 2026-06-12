/*Write a program to Write function for perfect 
number.*/
 #include<stdio.h>
 int checkperfectnum(int num)
 {   int i ,sum;
     for(i=1;i<num;i++)
   {
     if(num%i == 0)
     {
       sum = sum + i ;
     }
   }
     if(num == sum)
     {
       return 1;
     }
     else{
       return 0;
     }
 }
int main()
{
   int num,i,sum=0;

   printf("Enter the number to check perfect number or not=");
   scanf("%d",&num);
    if(checkperfectnum(num))
     {
        printf("This is perfect number.");
     }
     else{
        printf("This is not perfect number.");
     }
 
  
    return 0;
}