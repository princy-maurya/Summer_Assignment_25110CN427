/*Write a program to Create contact management system.*/
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[MAX];
    int count = 0, choice, id, i, found;

    do {
        printf("\n********** Contact Management System **********\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact by ID\n");
        printf("4. Update Contact by ID\n");
        printf("5. Delete Contact by ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < MAX) {
                    printf("Enter Contact ID: ");
                    scanf("%d", &contacts[count].id);
                    getchar(); // clear newline
                    printf("Enter Name: ");
                    fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
                    contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';
                    printf("Enter Phone: ");
                    fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
                    contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';
                    printf("Enter Email: ");
                    fgets(contacts[count].email, sizeof(contacts[count].email), stdin);
                    contacts[count].email[strcspn(contacts[count].email, "\n")] = '\0';
                    count++;
                    printf("Contact added successfully!\n");
                } else {
                    printf("Contact list is full!\n");
                }
                break;

            case 2:
                if(count == 0) {
                    printf("No contacts available.\n");
                } else {
                    printf("\nContacts List:\n");
                    for(i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                               contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
                    }
                }
                break;

            case 3:
                printf("Enter Contact ID to search: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(contacts[i].id == id) {
                        printf("Contact Found: ID: %d | Name: %s | Phone: %s | Email: %s\n",
                               contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Contact not found!\n");
                break;

            case 4:
                printf("Enter Contact ID to update: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(contacts[i].id == id) {
                        getchar(); // clear newline
                        printf("Enter New Name: ");
                        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
                        contacts[i].name[strcspn(contacts[i].name, "\n")] = '\0';
                        printf("Enter New Phone: ");
                        fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
                        contacts[i].phone[strcspn(contacts[i].phone, "\n")] = '\0';
                        printf("Enter New Email: ");
                        fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
                        contacts[i].email[strcspn(contacts[i].email, "\n")] = '\0';
                        printf("Contact updated successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Contact not found!\n");
                break;

            case 5:
                printf("Enter Contact ID to delete: ");
                scanf("%d", &id);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(contacts[i].id == id) {
                        for(int j = i; j < count-1; j++) {
                            contacts[j] = contacts[j+1];
                        }
                        count--;
                        printf("Contact deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Contact not found!\n");
                break;

            case 6:
                printf("Exiting Contact Management System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 6);

    return 0;
}
