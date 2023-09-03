#include <stdio.h>
struct student{
	int rn;
	float cgpa;
	char grade;
	char name[100];
}s;   //s is the object of structure student

main(){
	printf("Enter Reg. no.: ");
	scanf("%d",&s.rn);
	printf("Enter CGPA: ");
	scanf("%f",&s.cgpa);
	printf("Enter Grade: ");
	fflush(stdin);
	scanf("%c",&s.grade);
	fflush(stdin);
	printf("Enter Name: ");
	fflush(stdin);
	gets(s.name);
	printf("The Address is : %p",&s);
	printf("\nThe Record of Student is: \n");
	printf("%d\n%f\n%c\n",s.rn,s.cgpa,s.grade);
	puts(s.name);
}
