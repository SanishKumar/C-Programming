#include <stdio.h>
#include <string.h>

int main() {
    char str[100], vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i, j, flag;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    printf("Vowels in the string: ");
    for (i = 0; i < strlen(str); i++) {
        flag = 0;
        for (j = 0; j < 10; j++) {
            if (str[i] == vowels[j]) {
                flag = 1;  
                break;
            }
        }
        if (flag == 1) {
            printf("%c ", str[i]);  
        }
    }
    return 0;
}

