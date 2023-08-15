#include <iostream>

using namespace std;

int main()
{
    /*
    These less-than signs just mean that the data that follows will be sent to cout
    for display on the console.
    */
    // Strings, the text in this example, must stay together on a single line between
    // double quotes as shown, unless you break it into two strings, each with its own
    // set of double quotes
    cout << "Hello, I am your computer talking." << endl;
    cout << 5 + 10 << endl;
    cout << 5 + 10 / 2 * 3 + 25 << endl;
    // count << 12345678 * 100 / 2 *3 * 3 << endl; // Òç³ö
    cout << 5 + 10 / 2 * ( 3+ 25) << endl; // Pairing the parentheses
    cout << "Hello \t CPP" << endl; // Tabbing your output
    cout << "\\t ac" << endl;
    return 0;
}
/*
1. The word cout means you want to write to the console.
2. The << symbols together (with no space between them!) mean the thing that
follows is what you want to write.
3. After the << symbol, you tell the computer what you want to write. It can
either be a string of letters, symbols, and other characters (all inside quotes),
or it can be the word endl.
4. You can put multiple items in a row and have them appear on the console
that way, provided you start the line with cout and precede each item with
the << symbols.
*/
