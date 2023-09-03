// To read, write and create File

#include <stdio.h>
main(){
	FILE *f1;
	f1=fopen("xyz.txt","w");
	char a;
	int b;
//	
//	printf("Enter any letter or character from File: ");
////	a=getchar();
//	scanf("%c",&a);
//	
//	putc(a, f1);
//	printf("Enter a Single Digit: ");
//	scanf("%d", &b);
//	
//	putw(b, f1);
//	
//	
//	close(f1);
//	printf("\nDATA WRITTEN SUCCESSULLY!");


	a=getc(f1);
	printf("\nThe Letter or character in xyz: ");
	printf("%c",a);
	
	b=getw(f1);
	printf("\nThe Single digit in xyz file is: ");
	printf("%d",b);
	fclose(f1);
}
