#include <iostream>

using namespace std;

int main()
{
    int myNum = 5;               // 4 bytes: Integer (whole numbers without decimals)
    float myFloatNum = 5.99;     // 4 bytes: Floating point number (sufficient for storing 7 decimal digits)
    double myDoubleNum = 9.98;   // 8 bytes: Floating point number (sufficient for storing 15 decimal digits)
    char myLetter = 'D';         // 1 byte: Character
    bool myBoolean = true;       // 1 byte: Boolean
    string myText = "Hello";     // String

    float f1 = 35e3; //scientific notations use e for power of 10
    float d1 = 12E3;

    // Boolean
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)

    // Character types
    char myGrade = 'B';
    cout << "My grade: " << myGrade << endl;

    // or use ASCII characters
    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c;
    
}