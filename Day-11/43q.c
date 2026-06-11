/*Write a program to Write function to check 
prime.*/
 #include<stdio.h>  
void checkprime(int num)
{    
    for(int i=2;i<num;i++)
    {
       if(num%i == 0 )
        {
        printf("Given number is not  prime.");
        break;
        }
        else
        {
        printf("Given number is prime.");
        break;
        }
    } 
    return ;
}
int main()
{   int num;
    printf("Enter the number to check prime = ");
    scanf("%d",&num);
     
    checkprime( num);

    return 0;

}