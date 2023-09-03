//write  a program to enter the marks of 5 subjects and find the percentage
# include <stdio.h>
main(){
	float c101, c306, c320, c121, p130,Perc;
	printf("Enter The marks of the subjects:");
	scanf("%f",&c101);
	scanf("%f",&c306);
	scanf("%f",&c320);
	scanf("%f",&c121);
	scanf("%f",&p130);
	Perc=(c101+c306+c320+c121+p130)/5;
	printf("The Percentage is: %.2f%%",Perc);
}

