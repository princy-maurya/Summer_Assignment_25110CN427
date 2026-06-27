/*Write a program to Create student record management system.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[100];
    int count = 0, choice, i, roll;
    char searchName[50];

    do {
        printf("\n********** Student Record Management System **********\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 100) {
                    printf("Enter Roll Number: ");
                    scanf("%d", &students[count].rollNo);
                    printf("Enter Name: ");
                    scanf(" %[^\n]", students[count].name);
                    printf("Enter Age: ");
                    scanf("%d", &students[count].age);
                    printf("Enter Marks: ");
                    scanf("%f", &students[count].marks);
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
                    printf("\n--- Student Records ---\n");
                    for(i = 0; i < count; i++) {
                        printf("Roll No: %d | Name: %s | Age: %d | Marks: %.2f\n",
                               students[i].rollNo, students[i].name,
                               students[i].age, students[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                for(i = 0; i < count; i++) {
                    if(students[i].rollNo == roll) {
                        printf("Record Found: Roll No: %d | Name: %s | Age: %d | Marks: %.2f\n",
                               students[i].rollNo, students[i].name,
                               students[i].age, students[i].marks);
                        break;
                    }
                }
                if(i == count) {
                    printf("Record not found.\n");
                }
                break;

            case 4:
                printf("Enter Name to search: ");
                scanf(" %[^\n]", searchName);
                for(i = 0; i < count; i++) {
                    if(strcmp(students[i].name, searchName) == 0) {
                        printf("Record Found: Roll No: %d | Name: %s | Age: %d | Marks: %.2f\n",
                               students[i].rollNo, students[i].name,
                               students[i].age, students[i].marks);
                        break;
                    }
                }
                if(i == count) {
                    printf("Record not found.\n");
                }
                break;

            case 5:
                printf("Enter Roll Number to delete: ");
                scanf("%d", &roll);
                for(i = 0; i < count; i++) {
                    if(students[i].rollNo == roll) {
                        for(int j = i; j < count - 1; j++) {
                            students[j] = students[j + 1];
                        }
                        count--;
                        printf("Record deleted successfully!\n");
                        break;
                    }
                }
                if(i == count) {
                    printf("Record not found.\n");
                }
                break;

            case 6:
                printf("Exiting... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}
