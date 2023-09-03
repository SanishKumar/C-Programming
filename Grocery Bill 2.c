#include <stdio.h>
#include <string.h>

int main() {
    char name[50], date[20], product_name[50];
    int quantity;
    float price, total, discounted_total;
    total = 0;
    
    // Take input from user
    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter date of shopping: ");
    scanf("%s", date);
    
    // Product 1
    printf("Enter product name 1: ");
    scanf("%s", product_name);
    printf("Enter product quantity: ");
    scanf("%d", &quantity);
    printf("Enter product price: Rs. ");
    scanf("%f", &price);
    total += quantity * price;
    printf("Added %d units of %s at Rs. %.2f each to the bill.\n", quantity, product_name, price);

    // Product 2
    printf("Enter product name 2: ");
    scanf("%s", product_name);
    printf("Enter product quantity: ");
    scanf("%d", &quantity);
    printf("Enter product price: Rs. ");
    scanf("%f", &price);
    total += quantity * price;
    printf("Added %d units of %s at Rs. %.2f each to the bill.\n", quantity, product_name, price);

    // Product 3
    printf("Enter product name 3: ");
    scanf("%s", product_name);
    printf("Enter product quantity: ");
    scanf("%d", &quantity);
    printf("Enter product price: Rs. ");
    scanf("%f", &price);
    total += quantity * price;
    printf("Added %d units of %s at Rs. %.2f each to the bill.\n", quantity, product_name, price);

    // Calculate discount and final bill
    if (total > 500) {
        discounted_total = total - (0.1 * total);
        printf("\nTotal bill: Rs. %.2f\n", total);
        printf("Discounted price (10%% off): Rs. %.2f\n", discounted_total);
        printf("Congratulations %s, you have received a discount of Rs. %.2f on your total bill!\n", name, total - discounted_total);
    } else {
        printf("\nTotal bill: Rs. %.2f\n", total);
    }
    
    return 0;
}

