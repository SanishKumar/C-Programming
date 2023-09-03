/*declartion of a pointer
meathod 1 : int *p;              (recommended)
meathod 1 : int* p; 
meathod 1 : int * p;  
*/



/*#include <stdio.h>
main()
{
	int *p1;
	int* p2;             //these are wild(animals) pointers ie doesnt contain any actual location...just give some garbage value
	int * p3;
}*/




/*#include <stdio.h>
main()
{
	int *p, x=3;                 //x is not pointer
	printf("The address of pointr p : %p" , &p);               //%p is format specifier for hexadecimal
	printf("\nThe address of variable x : %p" , &x); 
	
    p = &x;        //initialization of pointer with address
    printf("\nAddress holded by p is : %p" , p);              //printing jusst value of p ie = address of x
	printf("\nValue at the address hold by p is: %d",x) ;          //address hold by p is of x and value at the address of x is value assigned to x    
	
}*/





/*Types of ponters::::::::::
               1 Wild pointer : these are wild(animals) pointers ie doesnt contain any actual location...just give some garbage value
               2 Null pointer : null pointer will give 0000000000000000
               3 void pointer : it can hold address of any type of data type variavle

*/
//#include <stdio.h>
//main()
//{
//	int *p;
//	printf("%p",p) ;
//	p =NULL ;                 //changing wild pointer into null pointer
//	printf("\n%p",p);         //null pointer will give 0000000000000000
//    void *p2;             //it can hold address of any type of data type variavle
//    int x=3;
//    float y=3.14;
//    char z='A';
//    p2 = &x;
//    printf("\nAddress holded by void pointer p2 of integer varialbe x is: %p",p2);
//    printf("\n The value of p2 at this address: %d", *(int *)p2);
//    p2 = &y;
//    printf("\nAddress holded by void pointer p2 of float varialbe y is: %p",p2);
//    printf("\n The value of p2 at this address: %f", *(float *)p2);
//    p2 = &z;
//    printf("\nAddress holded by void pointer p2 of character varialbe z is: %p",p2);
//    printf("\n The value of p2 at this address:  %c", *(char *)p2);
//    
//	
//}



//Pointer aritmetic
#include <stdio.h>
main(){
	int x=2,y=3, *px, *py, z, *pz;
	px=&x;
	py=&y;
	pz=&z;
	
	z=*px + *py;
	printf("Sum is: %d",z);
}
