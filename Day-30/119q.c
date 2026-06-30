/*Write a program to Create mini employee management system.*/
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

struct Employee employees[MAX];
int count = 0;

void addEmployee() {
    if (count >= MAX) {
        printf("Employee list is full!\n");
        return;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &employees[count].id);
    getchar(); // clear newline
    printf("Enter Employee Name: ");
    fgets(employees[count].name, sizeof(employees[count].name), stdin);
    employees[count].name[strcspn(employees[count].name, "\n")] = '\0';
    printf("Enter Department: ");
    fgets(employees[count].department, sizeof(employees[count].department), stdin);
    employees[count].department[strcspn(employees[count].department, "\n")] = '\0';
    printf("Enter Salary: ");
    scanf("%f", &employees[count].salary);
    count++;
    printf("Employee added successfully!\n");
}

void displayEmployees() {
    if (count == 0) {
        printf("No employees found.\n");
        return;
    }
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
               employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void searchEmployee() {
    int id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Employee Found: ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                   employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
            return;
        }
    }
    printf("Employee not found.\n");
}

void updateEmployee() {
    int id;
    printf("Enter Employee ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            getchar(); // clear newline
            printf("Enter New Name: ");
            fgets(employees[i].name, sizeof(employees[i].name), stdin);
            employees[i].name[strcspn(employees[i].name, "\n")] = '\0';
            printf("Enter New Department: ");
            fgets(employees[i].department, sizeof(employees[i].department), stdin);
            employees[i].department[strcspn(employees[i].department, "\n")] = '\0';
            printf("Enter New Salary: ");
            scanf("%f", &employees[i].salary);
            printf("Employee updated successfully!\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

void deleteEmployee() {
    int id;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            count--;
            printf("Employee deleted successfully!\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

int main() {
    int choice;
    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
