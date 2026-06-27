/*Write a program to Merge two sorted arrays.*/
#include <stdio.h>

int main() {
    int a1[50], a2[50], merged[100];
    int length1, length2, i = 0, j = 0, k = 0;

    printf("Enter number of elements in first sorted array: ");
    scanf("%d", &length1);

    printf("Enter  sorted elements for first array:\n");
        for(int x = 0; x < length1; x++)
        {
            scanf("%d", &a1[x]);
        }

      printf("Enter number of elements in second sorted array: ");
     scanf("%d", &length2);
 
      printf("Enter  sorted elements for second array:\n");
        for(int x = 0; x < length2; x++)
         {
            scanf("%d", &a2[x]);
         }

   
        while(i < length1 && j < length2) {
            if(a1[i] <= a2[j]) {
                merged[k++] = a1[i++];
            } else {
                merged[k++] = a2[j++];
            } 
        }

    while(i < length1) {
        merged[k++] = a1[i++];
    }
    while(j < length2) {
        merged[k++] = a2[j++];
    }

    printf("Merged sorted array:\n");
    for(int x = 0; x < k; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
