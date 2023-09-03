//write a program to display registeration no.,mob no., semester, cgpa , grade of respected student.
# include <stdio.h>
main(){
	int reg_no,mob_no,sem;
	float cgpa;
	char grade;
	printf("Enter the registeration no.:");
	scanf("%d",&reg_no);
	printf("Enter the Mobile no.:");
	scanf("%d",&mob_no);
	printf("Enter the sem:");
	scanf("%d",&sem);
	printf("Enter the cgpa:");
	scanf("%f",&cgpa);
	printf("Enter the Grade:");
	scanf(" %c", &grade);
	printf("The Student Data is: \n%d \n%d \n%d \n%f \n%c",reg_no,mob_no,sem,cgpa,grade);
}
