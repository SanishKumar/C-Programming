#include <stdio.h>

int main() {
    char name[50];
    char address[100];
    float cgpa;
    int reg_no;
    int roll_no;

    puts("Enter student name: ");
    gets(name);

    puts("Enter student address: ");
    gets(address);

    puts("Enter student CGPA: ");
    scanf("%f", &cgpa);

    puts("Enter student registration number: ");
    scanf("%d", &reg_no);

    puts("Enter student roll number: ");
    scanf("%d", &roll_no);

    puts("\nStudent details:\n");
    puts("Name: ");
    puts(name);
    puts("Address: ");
    puts(address);
    printf("CGPA: %.2f\n", cgpa);
    printf("Registration number: %d\n", reg_no);
    printf("Roll number: %d\n", roll_no);

}

