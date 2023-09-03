# include <stdio.h>
main() {
	int roll_no;
	printf("Enter Your Roll no.:");
	scanf("%d",&roll_no);
	printf("Your Roll no. is:");
	printf("%d",roll_no);
	printf("\nThe address of roll no. is:");
	printf("%p",&roll_no);
}
