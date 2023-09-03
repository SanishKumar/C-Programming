#include <stdio.h>

main(){
	FILE *f1;
	f1=fopen("abc.txt","w");
	
	char name[10];
	int reg_no;
	printf("Enter The Name: ");
	gets(name);
	
	printf("Enter The Registeration no.: ");
	scanf("%d",&reg_no);
	putw(reg_no, f1);
	
	printf("Record Saved!");
	fclose(f1);
}




