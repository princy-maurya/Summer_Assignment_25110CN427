/*Write a program to Create menu-driven array operations system.*/
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], n = 0, choice, i, search, found, sum;
    float avg;

    do {
        printf("\n********** Array Operations Menu **********\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Sum of Elements\n");
        printf("4. Average of Elements\n");
        printf("5. Search Element\n");
        printf("6. Sort Array (Ascending)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if(n == 0) {
                    printf("Array is empty! Please input first.\n");
                } else {
                    printf("Array elements are:\n");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum of elements = %d\n", sum);
                break;

            case 4:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                avg = (n > 0) ? (float)sum / n : 0;
                printf("Average of elements = %.2f\n", avg);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &search);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == search) {
                        printf("Element %d found at position %d\n", search, i+1);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Element not found!\n");
                }
                break;

            case 6:
                for(i = 0; i < n-1; i++) {
                    for(int j = i+1; j < n; j++) {
                        if(arr[i] > arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Array sorted in ascending order.\n");
                break;

            case 7:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 7);

    return 0;
}
