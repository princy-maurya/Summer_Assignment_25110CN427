/*Write a program to Create student record system using arrays and strings.*/
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

struct Student {
    int rollNo;
    char name[NAME_LEN];
    char course[NAME_LEN];
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;   // number of students stored
    int choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Delete by Roll Number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < MAX_STUDENTS) {
                printf("Enter Roll Number: ");
                scanf("%d", &students[count].rollNo);
                getchar(); // clear newline
                printf("Enter Name: ");
                fgets(students[count].name, NAME_LEN, stdin);
                students[count].name[strcspn(students[count].name, "\n")] = '\0'; // remove newline
                printf("Enter Course: ");
                fgets(students[count].course, NAME_LEN, stdin);
                students[count].course[strcspn(students[count].course, "\n")] = '\0';
                count++;
                printf("Student added successfully!\n");
            } else {
                printf("Database full!\n");
            }
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
            } else {
                printf("\n--- Student List ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Roll No: %d | Name: %s | Course: %s\n",
                           students[i].rollNo, students[i].name, students[i].course);
                }
            }
        }
        else if (choice == 3) {
            int roll;
            printf("Enter Roll Number to search: ");
            scanf("%d", &roll);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (students[i].rollNo == roll) {
                    printf("Record Found: Roll No: %d | Name: %s | Course: %s\n",
                           students[i].rollNo, students[i].name, students[i].course);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("No student with Roll No %d found.\n", roll);
            }
        }
        else if (choice == 4) {
            int roll;
            printf("Enter Roll Number to delete: ");
            scanf("%d", &roll);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (students[i].rollNo == roll) {
                    for (int j = i; j < count - 1; j++) {
                        students[j] = students[j + 1]; // shift left
                    }
                    count--;
                    found = 1;
                    printf("Record deleted successfully.\n");
                    break;
                }
            }
            if (!found) {
                printf("No student with Roll No %d found.\n", roll);
            }
        }
        else if (choice == 5) {
            printf("Exiting program...\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
 