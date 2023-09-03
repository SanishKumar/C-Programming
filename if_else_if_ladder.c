#4 include <stdio.h>
//int main(void){
//	int a;
//	printf("Enter a number:");
//	scanf("%d",&a);
//	if (a<10){
//		printf("Number less than 10");
//	}else if (a<100){
//		printf("Number less than 100");
//	}else{
//		printf("The number is greater than 100");
//	}
//}

// to print greatest number using ladder if else and nested if else
int main(void){
	int a,b,c;
	printf("Enter the numbers: ")
	scanf("%d %d %d",a,b,c);
	if(a>b && a>c){
		printf("%d is Greatest Number.",a);
	}
	else if(b>a && b>c){
		printf("%d is greatest number.",b);
	}else{
		printf("%d is greatest number.",c);
	}
	
	printf("By using nested if-else:");
}



