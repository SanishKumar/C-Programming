//#include <stdio.h>
//
//void swap(int *x, int *y);
//
//int main() {
//    int num1, num2;
//
//    printf("Enter first number: ");
//    scanf("%d", &num1);
//
//    printf("Enter second number: ");
//    scanf("%d", &num2);
//
//    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
//
//    swap(&num1, &num2);
//
//    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
//}
//
//void swap(int *x, int *y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}

#include <stdio.h>

void swap(int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(num1, num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

