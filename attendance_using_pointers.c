//#include <stdio.h>
//
//int main() {
//    float *ptrTotal, *ptrAggregate, *ptrPercentage;
//
//    float totalAttendance, aggregateAttendance, percentage;
//
//    ptrTotal = &totalAttendance;
//    ptrAggregate = &aggregateAttendance;
//    ptrPercentage = &percentage;
//
//    printf("Enter the total number of classes held: ");
//    scanf("%f", ptrTotal);
//
//    printf("Enter the number of classes attended: ");
//    scanf("%f", ptrAggregate);
//
//    *ptrPercentage = (*ptrAggregate / *ptrTotal) * 100;
//
//    if (*ptrPercentage >= 75) {
//        printf("You are allowed to sit in the class.\n");
//    } else {
//        printf("You are not allowed to sit in the class.\n");
//    }
//
//    return 0;
//}



#include <stdio.h>
main(){
	int *p, sub[5], x, *px;
	for(x=0; x<5; x++){
		printf("ENTER %d SUBJECT ATTENDANCE: ",x+1);
		scanf("%d", &sub[x]);
	}
	p=sub;
	for(x=0; x<5; x++)
	printf("\nSUBJECT %d attendance is")
}


//write a program to display the balance amount of a customer after doing two transanction 
//one is credit and second is debit transaction by using pointer of three customers use pointer to array concept
