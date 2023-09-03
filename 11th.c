# include <stdio.h>
void sum(int x,int y){
//	int x=3, y=4;
	printf("Sum is %d",x+y);
}
main(){
	int x,y ;
	printf("Enter the values of x & y: ");
	scanf("%d %d",&x,&y);
	sum(x,y);
}

