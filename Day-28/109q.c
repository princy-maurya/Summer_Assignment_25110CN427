/*Write a program to Create library management system.*/
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[MAX];
    int count = 0, choice, i, id, found;

    do {
        printf("\n********** Library Management System **********\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete Book by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < MAX) {
                    printf("Enter Book ID: ");
                    scanf("%d", &library[count].id);
                    printf("Enter Book Title: ");
                    getchar(); // clear newline
                    fgets(library[count].title, sizeof(library[count].title), stdin);
                    library[count].title[strcspn(library[count].title, "\n")] = '\0';
                    printf("Enter Author Name: ");
                    fgets(library[count].author, sizeof(library[count].author), stdin);
                    library[count].author[strcspn(library[count].author, "\n")] = '\0';
                    count++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Library is full!\n");
                }
                break;

            case 2:
                if(count == 0) {
                    printf("No books in library.\n");
                } else {
                    printf("\nBooks in Library:\n");
                    for(i = 0; i < count; i++) {
                        printf("ID: %d | Title: %s | Author: %s\n", 
                               library[i].id, library[i].title, library[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == id) {
                        printf("Book Found: ID: %d | Title: %s | Author: %s\n", 
                               library[i].id, library[i].title, library[i].author);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Book not found!\n");
                }
                break;

            case 4:
                printf("Enter Book ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == id) {
                        for(int j = i; j < count-1; j++) {
                            library[j] = library[j+1];
                        }
                        count--;
                        printf("Book deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Book not found!\n");
                }
                break;

            case 5:
                printf("Exiting Library System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}
