/*Write a program to Move zeroes to end.*/
#include <stdio.h>
int main() {
    int arr[100],length;

    printf("Enter size of array: ");
    scanf("%d", &length);

    for (int i = 0; i <length; i++) 
    {
        scanf("%d", &arr[i]);
    }
     
      int p = 0; 
    
    for (int i = 0; i < length; i++) 
       {
        if (arr[i] != 0)
           {
            arr[p++] = arr[i]; 
           }
       }
     while (p < length)
     {
        arr[p++] = 0;
     }

    
   
    printf("Array after moving zeroes to end:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
