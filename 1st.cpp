//#include <iostream>
//using namespace std;
//
//int main(){
//	cout << "Hello World";
//	return 0;
//}


#include <iostream>
using namespace std;

//int main(){
//	char charvar1 = 'A';
//	char charvar2 = '\t';
//	
//	cout << charvar1;
//	cout << charvar2;
//	charvar1 = '\xB2';
//	cout << charvar1;
////	return 0;
//}


int main(){
	int ftemp;
	
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> ftemp;
	int ctemp = (ftemp-32) * 5/9;
	cout << "Equivalent temperature in celsius: " << ctemp;
	return 0;
}
