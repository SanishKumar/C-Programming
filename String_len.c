
#include <stdio.h>
main(){
	char name[25], name2[25];
	int l, c;
	printf("Enter Name: ");
	scanf("%[^\n]s",&name);
	l=strlen(name);
	printf("The length of String Entered is: %d\n\n",l);
	
	
	strcpy(name2,name);
	printf("The Content in name2 is: %s\n\n",name2);
	
	
	c=strcmp(name,name2);
	if(c==0)
	printf("They are SIMILAR.");
	else
	printf("They are not SIMILAR");
	
	
	strcat(name,name2);
	printf("The Concatenated String is: %s\n\n",name);
	
	
	strupr(name);
	printf("Now name in upper case is: %s\n\n",name);
	
	
	strrev(name);
	printf("Now the reversed name is: %s\n\n",name);
	
	
	
}
