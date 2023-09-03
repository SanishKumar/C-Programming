# include <stdio.h>
main(){
	int x1,x2,x3,x4,x5;
	printf("Enter values of x1 and x2:");
	scanf("%d%d",&x1,&x2);
	x3=x1+x2;
	x4=x1*x2;
	x5=x2-x1;
	printf("The sum is %d",x3);
	printf("\nThe product is %d",x4);
	printf("\nThe difference is %d",x5);
	printf("\nThe Address of x1,x2,x3,x4,x5 are %p %p %p %p %p",&x1,&x2,&x3,&x4,&x5);
}
