#include <stdio.h>
#define ARRAY_SIZE 5 // Define the size of the arrays

int main() {
    int reg_no[ARRAY_SIZE],i;
    char grade[ARRAY_SIZE];
    float cgpa[ARRAY_SIZE];

    // Populate the arrays with values
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter registration number, grade, and CGPA for student %d: ", i+1);
        scanf("%d %c %f", &reg_no[i], &grade[i], &cgpa[i]);
    }

    // Print out the contents of the arrays
    printf("\nRegistration Number\tGrade\tCGPA\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\t\t\t%c\t%.2f\n", reg_no[i], grade[i], cgpa[i]);
    }

    return 0;
}

