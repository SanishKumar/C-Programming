//#include <stdio.h>
//main(){
//	char name[100], sem[10], roll[10];
//	int reg_no,mob_no;
//	float cgpa;
//	char grade;
//	printf("Enter Name:");
//	scanf(" %[^\n]s",&name);
//	printf("Enter the registeration no.:");
//	scanf("%d",&reg_no);
//	printf("Enter Roll no.:");
//	fflush(stdin);
//	scanf("%[^\n]s",&roll);
//	printf("Enter the Mobile no.:");
//	scanf("%d",&mob_no);
//	printf("Enter the sem:");
//	fflush(stdin);
//	scanf("%[^\n]s",&sem);
//	printf("Enter the cgpa:");
//	scanf("%f",&cgpa);
//	printf("Enter the Grade:");
//	fflush(stdin);
//	scanf(" %s", &grade);
//	printf("hi ");
//	printf("The Student Data is: \n%d \n%s \n%s \n%d \n%s \n%f \n%s",reg_no,name,roll,mob_no,sem,cgpa,grade);	
//}


//Unary operators are the operators which works with single values
//binary operandds are those operands which works with two operands

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[10], sen[100];
    scanf("%c",&ch);
    scanf("%s", &s);
    scanf("%[^\n]s", &sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
