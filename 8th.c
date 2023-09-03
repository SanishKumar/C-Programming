#include <stdio.h>
void main(){
	char choice, str[55];
	printf("ENTER YOUR CHOICE: ");
//	scanf("%c",&choice);
	choice=getchar();
	printf ("\nEntered choice is: ");
//	printf("%c",choice);
	putchar(choice);
	printf("\nENTER YOUR CHOICE: ");
	choice = getche();
	printf("\nEntered Choice is: ");
	putch(choice);
	printf("\nENTER YOUR CHOICE: ");
	choice = getch();
	printf("\nEntered Choice is: ");
	putch(choice);
	printf("Enter a string: ");
    gets(str);
    printf("Entered Name: ");
    puts(str);
//    printf("You entered: %s\n", str);
}
//write a program to enter student name address cgpa registeration roll no
