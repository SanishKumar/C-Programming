//#include <stdio.h>
//
//int main() {
//    int reg_no[5] = {101, 102, 103, 104, 105}; // array of registration numbers
//    char grade[5] = {'A', 'B', 'C', 'B', 'A'}; // array of grades
//    float cgpa[5] = {3.6, 3.2, 2.9, 3.1, 3.8}; // array of CGPAs
//    int i;
//
//    // print the values in the arrays
//    for (i = 0; i < 5; i++) {
//        printf("Registration No.: %d \t Grade: %c \t CGPA: %.2f\n", reg_no[i], grade[i], cgpa[i]);
//    }
//
//    return 0;
//}

//# include <stdio.h>
//void main(){
//	char sname[5][100];
//	int a;
//	printf("Enter Names: ");
//	for (a=0;a<5;a++){
//		fflush(stdin);
//		gets(sname[a]);
//	}
//}


# include <stdio.h>
void main(){
	int numbers[10],a, sum;
	printf ("Enter All numbers: ");
	for (a=0; a<10; a++)
	scanf ("%d", &numbers[a]);
	for (a=0;a<10;a++)
	sum=sum + numbers[a];
	
	printf ("The Sum is: %d",sum);
}












