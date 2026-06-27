/*Write a program to Create salary management system.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;   // House Rent Allowance
    float da;    // Dearness Allowance
    float grossSalary;
};

int main() {
    struct Employee employees[100];
    int count = 0, choice, i, id;
    char searchName[50];

    do {
        printf("\n********** Salary Management System **********\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Update Salary Record\n");
        printf("6. Delete Record\n");
        printf("7. Calculate Total Salary Expense\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter Name: ");
                    scanf(" %[^\n]", employees[count].name);
                    printf("Enter Basic Salary: ");
                    scanf("%f", &employees[count].basicSalary);
                    printf("Enter HRA: ");
                    scanf("%f", &employees[count].hra);
                    printf("Enter DA: ");
                    scanf("%f", &employees[count].da);

                    employees[count].grossSalary = employees[count].basicSalary +
                                                   employees[count].hra +
                                                   employees[count].da;
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
                    printf("\n--- Employee Salary Records ---\n");
                    for(i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].basicSalary, employees[i].hra,
                               employees[i].da, employees[i].grossSalary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                for(i = 0; i < count; i++) {
                    if(employees[i].id == id) {
                        printf("Record Found: ID: %d | Name: %s | Gross Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].grossSalary);
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
                        printf("Record Found: ID: %d | Name: %s | Gross Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].grossSalary);
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
                        printf("Enter new Basic Salary: ");
                        scanf("%f", &employees[i].basicSalary);
                        printf("Enter new HRA: ");
                        scanf("%f", &employees[i].hra);
                        printf("Enter new DA: ");
                        scanf("%f", &employees[i].da);

                        employees[i].grossSalary = employees[i].basicSalary +
                                                   employees[i].hra +
                                                   employees[i].da;
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
                if(count == 0) {
                    printf("No records available.\n");
                } else {
                    float total = 0;
                    for(i = 0; i < count; i++) {
                        total += employees[i].grossSalary;
                    }
                    printf("Total Salary Expense: %.2f\n", total);
                }
                break;

            case 8:
                printf("Exiting... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 8);

    return 0;
}
