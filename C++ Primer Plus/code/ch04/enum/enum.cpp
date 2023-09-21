#include <iostream>
int main()
{
    using namespace std;
    enum spectrum
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet,
        indigo,
        ultraviolet
    };
    // You can use an enumeration name to declare a variable of the enumeration type:
    spectrum band; // band a variable of type spectrum

    band = blue; // valid, blue is an enumerator
    // band = 2000; // invalid, 2000 not an enumerator

    /*
    Only the assignment operator is defined for enumerations.
    In particular, arithmetic operations are not defined:
    */
    band = orange;
    // ++band;              // not valid
    // band = orange + red; // not valid

    int color = blue; // valid, spectrum type promoted to int
    // band = 3;         // invalid, int not converted to spectrum
    color = 3 + red; // valid, red converted to int

    band = spectrum(3);    // typecast 3 to type spectrum
    band = spectrum(4003); // undefined

    enum bits
    {
        one = 1,
        two = 2,
        four = 4,
        eight = 8
    };

    enum big_step
    {
        first,
        second = 100,
        third
    };

    enum bits
    {
        one = 1,
        two = 2,
        four = 4,
        eight = 8
    };
    bits my_flag;
    my_flag = bits(6); // valid, because 6 is in bits range
    return 0;
}