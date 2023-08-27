// hexoct2.cpp -- display values in hex and octal
// Recall that the iostream header file provides the endl
// manipulator to give cout the message to start a new line. Similarly, it provides the dec,
// hex, and oct manipulators to give cout the messages to display integers
// in decimal, hexadecimal, and octal formats, respectively.
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;  // decimal integer literal
    int waist = 42;  // hexadecimal integer literal
    int inseam = 42; // octal integer literal

    cout << "Monsieur cuts a striking figure\n";
    cout << "chest = " << chest << " (decimal for 42)\n";
    // changes the way cout displays integers.
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)\n";
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)\n";
    return 0;
}