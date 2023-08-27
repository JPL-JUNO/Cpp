#include <iostream>
int main()
{
    using namespace std;
    cout << "\aOperation \"HyperHtype\" is now activated!\n";
    cout << "Enter your agent code: ________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Pin Z3!\n";
    return 0;
}
// After printing the underscore characters,
// the program uses the backspace character to
// back up the cursor to the first underscore.