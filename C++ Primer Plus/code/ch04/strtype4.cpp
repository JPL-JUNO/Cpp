// strtype4.cpp -- line input

// As you’ve seen, you can use cin with the >> operator to read a string object and cout
// with the << operator to display a string object using the same syntax you use with a
// C-style string. But reading a line at a time instead of a word at time uses a different syntax.

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    // The first is
    // that the contents of an uninitialized array are undefined.The second is that the strlen()
    // function works by starting at the first element of the array and counting bytes until it
    // reaches a null character.

    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text: \n";
    cin.getline(charr, 20); // indicate maximum length
    cout << "Your entered: " << charr << endl;

    cout << "Enter another line of text: \n";
    getline(cin, str); // cin now an argument; no length specifier
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;
    return 0;
}