// limits.cpp -- some integer limits
#include <iostream>
#include <climits>
int main()
{
    using namespace std;
    int n_int = INT_MAX;      // initialize n_int to max int value
    short n_short = SHRT_MAX; // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // When you
    // use the sizeof operator with a type name, such as int, you enclose the name in paren-
    // theses. But when you use the operator with the name of the variable, such as n_short,
    // parentheses are optional:
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}
// If your system doesn’t support the long long type, you should remove the lines using that type.