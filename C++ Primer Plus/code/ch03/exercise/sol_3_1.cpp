#include <iostream>
int main()
{
    using namespace std;
    const int INCH_FT = 12; // 1 ft = 12 inches
    cout << "Enter your height in integer inches: ___\b\b\b";
    int height;
    cin >> height;
    int feet = height / INCH_FT;
    int inch = height % INCH_FT;
    cout << "Your height is " << feet << " feet and " << inch << " inches\n";
    return 0;
}