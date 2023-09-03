#include <stdio.h>

int main() {
    int num, *p;
	int i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    p = &num;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", *p, i, *p*i);
    }

    return 0;
}

