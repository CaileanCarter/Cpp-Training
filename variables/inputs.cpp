#include <iostream>

int main()
{
    int x, y;
    int sum;
    std::cout << "This calculator adds two integers..." << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter a second number: ";
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum of two numbers is: " << sum;
}