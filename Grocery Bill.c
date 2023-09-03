////write a problem to calculate GROCERY BILL ther should be product name, product quantity, product price and name of the customer and date of shopping if 
////customer bill is exceedig 500  rs there is a discount of 10 per on the total bill print total ill and disounted price.
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char name[50], date[20], product_name[50];
//    int quantity;
//    float price, total, discounted_total;
//    total = 0;
//    
//    // Take input from user
//    printf("Enter customer name: ");
//    scanf("%s", name);
//    printf("Enter date of shopping: ");
//    scanf("%s", date);
//    
//    // Product 1
//    printf("Enter product name 1: ");
//    scanf("%s", product_name);
//    printf("Enter product quantity: ");
//    scanf("%d", &quantity);
//    printf("Enter product price: ");
//    scanf("%f", &price);
//    total += quantity * price;
//    
//    // Product 2
//    printf("Enter product name 2: ");
//    scanf("%s", product_name);
//    printf("Enter product quantity: ");
//    scanf("%d", &quantity);
//    printf("Enter product price: ");
//    scanf("%f", &price);
//    total += quantity * price;
//    
//    // Product 3
//    printf("Enter product name 3: ");
//    scanf("%s", product_name);
//    printf("Enter product quantity: ");
//    scanf("%d", &quantity);
//    printf("Enter product price: ");
//    scanf("%f", &price);
//    total += quantity * price;
//    
//    // Calculate discount and final bill
//    if (total > 500) {
//        discounted_total = total - (0.1 * total);
//        printf("\nTotal bill: Rs. %.2f\n", total);
//        printf("Discounted price: Rs. %.2f\n", discounted_total);
//    } else {
//        printf("\nTotal bill: Rs. %.2f\n", total);
//    }
//    
//    return 0;
//}

// write a program to find the grocery bill. the input are product name id price quantity customer name id


#include <stdio.h>

#define MAX_ITEMS 10 // Maximum number of items a customer can buy

int main() {
    char customer_name[50];
    int customer_id;

    // Get the customer's name and ID
    printf("Enter customer name: ");
    scanf("%s", customer_name);
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);

    // Set up the arrays to store the item information
    char item_name[MAX_ITEMS][50];
    int item_id[MAX_ITEMS],i;
    float item_price[MAX_ITEMS];
    int item_quantity[MAX_ITEMS];

    // Get the item information for each item the customer is buying
    int num_items;
    printf("Enter number of items purchased: ");
    scanf("%d", &num_items);

    for (i = 0; i < num_items; i++) {
        printf("\nEnter information for item %d:\n", i+1);

        printf("Product name: ");
        scanf("%s", item_name[i]);

        printf("Product ID: ");
        scanf("%d", &item_id[i]);

        printf("Price per unit: ");
        scanf("%f", &item_price[i]);

        printf("Quantity: ");
        scanf("%d", &item_quantity[i]);
    }

    // Calculate the total cost of the items
    float total_cost = 0.0;
    printf("\n========================\n");
    printf("Customer: %s (ID: %d)\n", customer_name, customer_id);
    printf("Item\tID\tPrice\tQuantity\tCost\n");
    printf("========================\n");

    for (i = 0; i < num_items; i++) {
        float item_cost = item_price[i] * item_quantity[i];
        total_cost += item_cost;
        printf("%s\t%d\t%.2f\t%d\t\t%.2f\n", item_name[i], item_id[i], item_price[i], item_quantity[i], item_cost);
    }

    // Print out the total cost of the items
    printf("========================\n");
    printf("Total cost: Rs. %.2f\n", total_cost);

    return 0;
}

