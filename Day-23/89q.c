/*Write a program to Find first non-repeating character*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char found=0,c;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    for(int i=0;str[i] !='\0';i++)
    {
        found=0;
      for(int j=0;str[j] !='\0';j++)
      {
        if(str[i] == str[j]&& i !=j)
        {
            found =1;
            break;
        }
       }
       if (found ==0)
       {
       printf("%c is first non- repeating character.",str[i]);
        break;
       }

    }
    return 0 ;
}