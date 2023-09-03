//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//
//    cout << "Enter number: ";
//    cin >> num;
//
//    if (num % 2 == 0) {
//        cout << num << " is even." << endl;
//    } else {
//        cout << num << " is odd." << endl;
//    }
//
//    return 0;
//}


#include <iostream>

int main() {
    int rows, cols;

    // Ask for user input
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Print the pattern of natural numbers
    int currentNum = 1;
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            std::cout << currentNum << " ";
            currentNum++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }

    return 0;
}

