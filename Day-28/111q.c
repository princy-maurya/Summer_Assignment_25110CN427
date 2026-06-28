/*Write a program to Create ticket booking system.*/
#include <stdio.h>
#include <string.h>

#define MAX 50

struct Ticket {
    int ticketNo;
    char name[50];
    int seatNo;
};

int main() {
    struct Ticket tickets[MAX];
    int count = 0, choice, i, ticketNo, found;

    do {
        printf("\n********** Ticket Booking System **********\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Ticket Availability\n");
        printf("4. Display All Tickets\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count < MAX) {
                    tickets[count].ticketNo = count + 1; // auto-generate ticket number
                    printf("Enter Passenger Name: ");
                    getchar(); // clear newline
                    fgets(tickets[count].name, sizeof(tickets[count].name), stdin);
                    tickets[count].name[strcspn(tickets[count].name, "\n")] = '\0';
                    tickets[count].seatNo = count + 1; // assign seat number
                    printf("Ticket booked successfully! Ticket No: %d, Seat No: %d\n",
                           tickets[count].ticketNo, tickets[count].seatNo);
                    count++;
                } else {
                    printf("All seats are booked!\n");
                }
                break;

            case 2:
                printf("Enter Ticket Number to cancel: ");
                scanf("%d", &ticketNo);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(tickets[i].ticketNo == ticketNo) {
                        for(int j = i; j < count-1; j++) {
                            tickets[j] = tickets[j+1];
                        }
                        count--;
                        printf("Ticket cancelled successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Ticket not found!\n");
                }
                break;

            case 3:
                if(count < MAX) {
                    printf("Tickets available: %d\n", MAX - count);
                } else {
                    printf("No tickets available!\n");
                }
                break;

            case 4:
                if(count == 0) {
                    printf("No tickets booked.\n");
                } else {
                    printf("\nBooked Tickets:\n");
                    for(i = 0; i < count; i++) {
                        printf("Ticket No: %d | Name: %s | Seat No: %d\n",
                               tickets[i].ticketNo, tickets[i].name, tickets[i].seatNo);
                    }
                }
                break;

            case 5:
                printf("Exiting Ticket Booking System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}
