#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n = 5;
    int result = factorial(n);
    printf("The factorial of %d is %d\n", n, result);
    return 0;
}
