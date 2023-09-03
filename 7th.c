#include <stdio.h>
int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("%d is Greatest Number.",a);
	}
	if(b>a && b>c){
		printf("%d is greatest number.",b);
	}else{
		printf("%d is greatest number.",c);
	}
}
