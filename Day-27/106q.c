/*Write a program to Create employee management system.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee employees[100];
    int count = 0, choice, i, id;
    char searchName[50];

    do {
        printf("\n********** Employee Management System **********\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Update Record\n");
        printf("6. Delete Record\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter Name: ");
                    scanf(" %[^\n]", employees[count].name);
                    printf("Enter Department: ");
                    scanf(" %[^\n]", employees[count].department);
                    printf("Enter Salary: ");
                    scanf("%f", &employees[count].salary);
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
                    printf("\n--- Employee Records ---\n");
                    for(i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        printf("Record Found: ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
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
                    if(strcmp(employees[i].name, searchName) == 0) {
                        printf("Record Found: ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
                        break;
                    }
                }
                if(i == count) {
                    printf("Record not found.\n");
                }
                break;

            case 5:
                printf("Enter Employee ID to update: ");
                scanf("%d", &id);
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        printf("Enter new Name: ");
                        scanf(" %[^\n]", employees[i].name);
                        printf("Enter new Department: ");
                        scanf(" %[^\n]", employees[i].department);
                        printf("Enter new Salary: ");
                        scanf("%f", &employees[i].salary);
                        printf("Record updated successfully!\n");
                        break;
                    }
                }
                if(i == count) {
                    printf("Record not found.\n");
                }
                break;

            case 6:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        for(int j = i; j < count - 1; j++) {
                            employees[j] = employees[j + 1];
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

            case 7:
                printf("Exiting... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 7);

    return 0;
}
