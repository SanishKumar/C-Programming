//Write a program to find th area of circle
#include <stdio.h>
// # define pi 3.14 can also be used to define a constant
main(){
	float radius, Area;
	printf("Enter the radius:");
	scanf("%f",&radius);
	Area=3.14*radius*radius;
	printf("The Area of Circle is: %.2f",Area);
}

