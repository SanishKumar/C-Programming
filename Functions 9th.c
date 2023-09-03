# include <stdio.h>
int sum();
main(){
	int z;
	z=sum();
	printf("Sum is: %d",z);
}
int sum(){
	int x=3,y=4;
	return x+y;
}

