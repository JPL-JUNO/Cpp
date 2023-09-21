#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;
    /*
    You can use a declaration statement to initialize a pointer. In that case, the pointer,
    not the pointed-to value, is initialized.
    */
    cout << "Value  of higgens = " << higgens
         << "; Address of higgens  = " << &higgens << endl;

    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;
    // You can see that the program initializes pt, not *pt, to the address of higgens.
    return 0;
}