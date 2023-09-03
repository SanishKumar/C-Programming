// Finding tle highest/Lowest element in an ARRAY
#include <stdio.h>
main(){
	int arr[10],a,le;
	
	printf("Enter Elements: ");
	for (a=0;a<10;a++)
	scanf("%d",&arr[a]);
	
	le =arr[0];
	
	for (a=1;a<10;a++)
	if (le > arr[a])
	le = arr[a];
	
	printf("Lowest Element : %d",le);
}
