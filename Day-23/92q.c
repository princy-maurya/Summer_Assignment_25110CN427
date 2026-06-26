/*Write a program to Find maximum occurring character.*/
#include<stdio.h>
#include<string.h>
int main()
{
  char str[20],result;
  int count,max =-1;
    
  printf("Enter  the string : ");
  gets(str);

  for(int i=0;str[i] != '\0';i++)
  { 
    count =0;
    for(int j=0;str[j] != '\0';j++)
    {
     if(str[i] == str[j] && i!=j)
      {
           count++;
      }
    }
    if(max<count)
    {
        max =count;
        result = str[i];
    }
  }
   printf("the maximum occurring character is %c ",result);

    return 0;
}