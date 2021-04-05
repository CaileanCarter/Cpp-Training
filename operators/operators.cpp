#include <iostream>

int main()
{
    // addition
    int x = 100 + 50;
    int sum2 = x + 250;
    int sum3 = sum2 + sum2;

    // subtract
    int y = 100 - 20;

    // multiplication
    int z = 100 * 10;

    // division
    int b = 10 / 5;

    // modulus (return remainder of)
    int c = 3 % 2;

    // increment value of a variable by 1
    int d = 5;
    std::cout << "Increment example" << std::endl;
    std::cout << "First value is: " << d << std::endl;
    int e = ++d;
    // This also chages variable d into increment... why?
    std::cout << "Second value: " << e << std::endl;

    // decrement (opposite of increment)
    std::cout << "Decrement example" << std::endl;
    std::cout << "First value is: " << d << std::endl;
    int f = --d;
    std::cout << "Second value: " << f << std::endl;

    // Operators can be used as would be in Python
    // +=
    // -=
    // *=
    // /=
    // etc...
    
    
}