#include <iostream>

int doubleNumber(int x)
{
    return x*2;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    
    // Check if the input is valid
    if (std::cin.fail()) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        std::cin.clear(); // clear the error flag
        return 1; 
    }

    std::cout << "The double of " << x << " is: ";
    std::cout << doubleNumber(x) << "\n";

    return 0;
}