#include <stdio.h>
main(){
	int arr[10],a,se;
	printf("Enter Elements: ");
	for (a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("Enter Element to SEARCH: ");
	scanf("%d",&se);
	for (a=0;a<10;a++)
	if (se==arr[a]){
//	break;
	printf("%d Element is present at index %d\n",se,a);
	}
	else {
		printf("Element not Found!");
	}
	
}
