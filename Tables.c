#include <stdio.h>

void print_table(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    print_table(num);

    return 0;
}

void print_table(int num) {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

