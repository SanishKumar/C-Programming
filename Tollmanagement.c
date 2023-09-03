#include <stdio.h>

int main() {
    int toll_amount = 50;
    int account_balance = 100;
    int vehicle_count = 0;
    
    printf("Welcome to the toll management system\n");
    printf("Toll amount: %d\n", toll_amount);
    printf("Your account balance: %d\n", account_balance);
    
    while (1) {
        char choice;
        printf("\nEnter 'p' to pass through the toll or 'q' to quit: ");
        scanf("%c", &choice);
        
        if (choice == 'q') {
            printf("Thank you for using the toll management system\n");
            break;
        }
        
        if (account_balance < toll_amount) {
            printf("Your account balance is low. Please recharge your account\n");
            continue;
        }
        
        account_balance -= toll_amount;
        vehicle_count++;
        printf("Toll collected. Your account balance: %d\n", account_balance);
        printf("Total vehicles passed: %d\n", vehicle_count);
    }
    
    return 0;
}

