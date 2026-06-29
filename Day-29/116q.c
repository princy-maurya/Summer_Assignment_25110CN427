/*Write a program to Create inventory management system.*/
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Item inventory[MAX];
int count = 0;

void addItem() {
    if (count >= MAX) {
        printf("Inventory full!\n");
        return;
    }
    struct Item item;
    printf("Enter Item ID: ");
    scanf("%d", &item.id);
    getchar();
    printf("Enter Item Name: ");
    fgets(item.name, sizeof(item.name), stdin);
    item.name[strcspn(item.name, "\n")] = '\0';
    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter Price: ");
    scanf("%f", &item.price);

    inventory[count++] = item;
    printf("Item added successfully!\n");
}

void displayItems() {
    if (count == 0) {
        printf("No items in inventory.\n");
        return;
    }
    printf("\n--- Inventory List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
               inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

void searchItem() {
    int id;
    printf("Enter Item ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            printf("Found: ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",
                   inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            return;
        }
    }
    printf("Item not found.\n");
}

void updateItem() {
    int id;
    printf("Enter Item ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            printf("Enter new Quantity: ");
            scanf("%d", &inventory[i].quantity);
            printf("Enter new Price: ");
            scanf("%f", &inventory[i].price);
            printf("Item updated successfully!\n");
            return;
        }
    }
    printf("Item not found.\n");
}

void deleteItem() {
    int id;
    printf("Enter Item ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            count--;
            printf("Item deleted successfully!\n");
            return;
        }
    }
    printf("Item not found.\n");
}

void totalValue() {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += inventory[i].quantity * inventory[i].price;
    }
    printf("Total Inventory Value: %.2f\n", total);
}

int main() {
    int choice;
    do {
        printf("\n--- Inventory Management Menu ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Calculate Total Value\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: searchItem(); break;
            case 4: updateItem(); break;
            case 5: deleteItem(); break;
            case 6: totalValue(); break;
            case 7: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
