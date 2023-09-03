#include <iostream>
using namespace std;
int main()
{
    // Define the variables.
    int x, y, numAdultTickets, numChildrenTickets, numSeniorTickets;
    // Get the input from the user.
    cout << "Enter the number of adult tickets sold: ";
    cin >> x;
    cout << "Enter the number of children tickets sold: ";
    cin >> y;
    // Calculate the number of adult tickets, children tickets and senior tickets sold.
    numAdultTickets = x + y;
    numChildrenTickets = y;
    numSeniorTickets = 2 * y;
    // Calculate the total revenue from selling the tickets.
    int totalRevenue = numAdultTickets * 5 + numChildrenTickets * 2 + numSeniorTickets * 3;
    // Print the output.
    cout << "The NGO sold " << numAdultTickets << " adult tickets, " << numChildrenTickets << " children tickets and " << numSeniorTickets << " senior tickets." << endl;
    cout << "The NGO made a total revenue of $" << totalRevenue << " from selling the tickets." << endl;
    return 0;
}
