#include <iostream>
using namespace std;

int doubleNumber(int x)
{
    return x*2;
}

int main()
{
    cout << "Enter an integer: ";
    int x{};
    cin >> x;
    
    // Check if the input is valid
    if (cin.fail()) {
        cout << "Invalid input. Please enter an integer." << endl;
        cin.clear(); // clear the error flag
        return 1; 
    }

    cout << "The double of " << x << " is: ";
    cout << doubleNumber(x) << "\n";

    return 0;
}