#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define the vehicle struct
struct Vehicle
{
 char licensePlate[10];
 char type[10];
 float price;
};
// Define the function to add a vehicle
void addVehicle(struct Vehicle *vehicle)
{
 printf("Enter license plate number: ");
 scanf("%s", vehicle->licensePlate);
 printf("Enter vehicle type: ");
 scanf("%s", vehicle->type);
 printf("Enter price: ");
 scanf("%f", &vehicle->price);
 printf("Added vehicle\n\n");
}
// Define the function to write vehicle data to a file
void writeVehicleDataToFile(struct Vehicle *vehicle)
{
 FILE *file = fopen("vehicle_data.txt", "a");
 if (file == NULL)
 {
 printf("Failed to open file.");
 return;
 }
 fprintf(file, "%s,%s,%f\n", vehicle->licensePlate, vehicle->type, vehicle->price);
 fclose(file);
}
// Define the function to read vehicle data from a file
void readVehicleDataFromFile(struct Vehicle *vehicle)
{
 FILE *file = fopen("vehicle_data.txt", "r");
 if (file == NULL)
 {
 printf("Failed to open file.");
 return;
 }
 char line[50];
 while (fgets(line, 50, file) != NULL)
 {
 char *licensePlate = strtok(line, ",");
 char *type = strtok(NULL, ",");
 char *priceStr = strtok(NULL, ",");
 float price = atof(priceStr);
 if (strcmp(licensePlate, vehicle->licensePlate) == 0)
 {
 strcpy(vehicle->type, type);
 vehicle->price = price;
 }
 }
 fclose(file);
}
// Define the function to delete a vehicle
void deleteVehicle(struct Vehicle *vehicle)
{
 FILE *file = fopen("vehicle_data.txt", "r");
 if (file == NULL)
 {
 printf("Failed to open file.");
 return;
 }
 FILE *tempFile = fopen("temp_vehicle_data.txt", "w");
 if (tempFile == NULL)
 {
 printf("Failed to create temporary file.");
 return;
 }
 char line[50];
 while (fgets(line, 50, file) != NULL)
 {
 char *licensePlate = strtok(line, ",");
 if (strcmp(licensePlate, vehicle->licensePlate) != 0)
 {
 fprintf(tempFile, "%s", line);
 }
 }
 fclose(file);
 fclose(tempFile);
 remove("vehicle_data.txt");
 rename("temp_vehicle_data.txt", "vehicle_data.txt");
}
// Define the function to modify vehicle data
void modifyVehicle(struct Vehicle *vehicle)
{
 printf("Enter new vehicle type: ");
 scanf("%s", vehicle->type);
 printf("Enter new price: ");
 scanf("%f", &vehicle->price);
 deleteVehicle(vehicle);
 writeVehicleDataToFile(vehicle);
 printf("Vehicle Modified");
}
// Define the function to calculate the toll fee
float calculateTollFee(char *type, float distance)
{
 float rate;
 if (strcmp(type, "car") == 0)
 {
 rate = 0.5;
 }
 else if (strcmp(type, "bus") == 0)
 {
 rate = 1.0;
 }
 else if (strcmp(type, "truck") == 0)
 {
 rate = 1.5;
 }
 else
 {
 printf("Invalid vehicle type.");
 return -1;
 }
 return rate * distance;
}
// Define the function to generate a bill
void generateBill(struct Vehicle *vehicle, float distance)
{
 float tollFee = calculateTollFee(vehicle->type, distance);
 printf("License plate number: %s\n", vehicle->licensePlate);
 printf("Vehicle type: %s\n", vehicle->type);
 printf("Toll fee: %f\n", tollFee);
}
// Define the function to accept payment
void acceptPayment(struct Vehicle *vehicle)
{
 printf("Enter payment amount: ");
 float payment;
 scanf("%f", &payment);
 if (payment >= vehicle->price)
 {
 printf("Change: %f\n", payment - vehicle->price);
 vehicle->price = 0;
 }
 else
 {
 vehicle->price -= payment;
 printf("Remaining balance: %f\n", vehicle->price);
 }
 deleteVehicle(vehicle);
 writeVehicleDataToFile(vehicle);
}
// Define the function to generate reports
void generateReports()
{
 FILE *file = fopen("vehicle_data.txt", "r");
 if (file == NULL)
 {
 printf("Failed to open file.");
 return;
 }
 int numVehicles = 0;
 float totalRevenue = 0;
 char line[50];
 while (fgets(line, 50, file) != NULL)
 {
 numVehicles++;
 char *priceStr = strtok(line, ",");
 float price = atof(priceStr);
 totalRevenue += price;
 }
 printf("Number of vehicles: %d\n", numVehicles);
 printf("Total revenue: %f\n", totalRevenue);
 fclose(file);
}
// Define the main function
int main()
{
 int choice;
 struct Vehicle vehicle;
 printf("Toll Management System\n");
 do
 {
 printf("\nMenu:\n");
 printf("1. Add vehicle\n");
 printf("2. Modify vehicle\n");
 printf("3. Delete vehicle\n");
 printf("4. Calculate toll fee and generate bill\n");
 printf("5. Accept payment\n");
 printf("6. Generate reports\n");
 printf("7. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice)
 {
 case 1:
 addVehicle(&vehicle);
 writeVehicleDataToFile(&vehicle);
 break;
 case 2:
 printf("Enter license plate number: ");
 scanf("%s", vehicle.licensePlate);
 readVehicleDataFromFile(&vehicle);
 modifyVehicle(&vehicle);
 break;
 case 3:
 printf("Enter license plate number: ");
 scanf("%s", vehicle.licensePlate);
 deleteVehicle(&vehicle);
 break;
 case 4:
 printf("Enter license plate number: ");
 scanf("%s", vehicle.licensePlate);
 readVehicleDataFromFile(&vehicle);
 printf("Enter distance travelled: ");
 float distance;
 scanf("%f", &distance);
 generateBill(&vehicle, distance);
 break;
 case 5:
 printf("Enter license plate number: ");
 scanf("%s", vehicle.licensePlate);
 readVehicleDataFromFile(&vehicle);
 acceptPayment(&vehicle);
 break;
 case 6:
 generateReports();
 break;
 case 7:
 printf("Exiting program...");
 break;
 default:
 printf("Invalid choice. Try again.\n");
 }
 } while (choice != 7);
 return 0;
}
