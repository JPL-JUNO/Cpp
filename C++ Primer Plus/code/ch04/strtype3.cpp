// strtype3.cpp -- more string class features
// For C-style strings, they used functions from the C library for these tasks.
// The cstring header file (formerly string.h) supports these functions. For example, you
// can use the strcpy() function to copy a string to a character array, and you can use the
// strcat() function to append a string to a character array

// strcpy(charr1, charr2); // copy charr2 to charr1
// strcat(charr1, charr2); // append contents of charr2 to char1

#include <iostream>
#include <string>  // make string class available
#include <cstring> // C-style string library

int main()
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";

    string str1;
    string str2 = "panther";

    // assignment for string objects and character arrays
    str1 = str2;            // copy str2 to str1
    strcpy(charr1, charr2); // copy charr2 to charr1

    // appending for string objects and character arrays
    str1 += " paste";         // add paste to end of str1
    strcat(charr1, " juice"); // add juice to end of charr1

    // finding the length of a string object and a C-style string
    int len1 = str1.size();    // obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1

    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
}
// The syntax for working with string objects tends to be simpler than using the C string functions.
// with arrays, there is always the danger of the destination array being too small to hold the information