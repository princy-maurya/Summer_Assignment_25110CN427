/*Write a program to Create marksheet generation system.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[5];   // marks for 5 subjects
    float total;
    float percentage;
};

int main() {
    struct Student students[100];
    int count = 0, choice, i, roll;

    do {
        printf("\n********** Marksheet Generation System **********\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 100) {
                    printf("Enter Roll Number: ");
                    scanf("%d", &students[count].rollNo);
                    printf("Enter Name: ");
                    scanf(" %[^\n]", students[count].name);

                    students[count].total = 0;
                    for(i = 0; i < 5; i++) {
                        printf("Enter marks for Subject %d: ", i+1);
                        scanf("%f", &students[count].marks[i]);
                        students[count].total += students[count].marks[i];
                    }
                    students[count].percentage = students[count].total / 5.0;
                    count++;
                    printf("Record added successfully!\n");
                } else {
                    printf("Storage full! Cannot add more records.\n");
                }
                break;

            case 2:
                if(count == 0) {
                    printf("No records to display.\n");
                } else {
                    printf("\n--- Student Marksheet Records ---\n");
                    for(i = 0; i < count; i++) {
                        printf("Roll No: %d | Name: %s\n", students[i].rollNo, students[i].name);
                        printf("Marks: ");
                        for(int j = 0; j < 5; j++) {
                            printf("%.2f ", students[i].marks[j]);
                        }
                        printf("\nTotal: %.2f | Percentage: %.2f%%\n", 
                               students[i].total, students[i].percentage);

                        if(students[i].percentage >= 60)
                            printf("Result: First Division\n");
                        else if(students[i].percentage >= 45)
                            printf("Result: Second Division\n");
                        else if(students[i].percentage >= 33)
                            printf("Result: Third Division\n");
                        else
                            printf("Result: Fail\n");
                        printf("---------------------------------\n");
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                for(i = 0; i < count; i++) {
                    if(students[i].rollNo == roll) {
                        printf("\nMarksheet for Roll No: %d | Name: %s\n", students[i].rollNo, students[i].name);
                        printf("Marks: ");
                        for(int j = 0; j < 5; j++) {
                            printf("%.2f ", students[i].marks[j]);
                        }
                        printf("\nTotal: %.2f | Percentage: %.2f%%\n", 
                               students[i].total, students[i].percentage);

                        if(students[i].percentage >= 60)
                            printf("Result: First Division\n");
                        else if(students[i].percentage >= 45)
                            printf("Result: Second Division\n");
                        else if(students[i].percentage >= 33)
                            printf("Result: Third Division\n");
                        else
                            printf("Result: Fail\n");
                        break;
                    }
                }
                if(i == count) {
                    printf("Record not found.\n");
                }
                break;

            case 4:
                printf("Exiting... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
