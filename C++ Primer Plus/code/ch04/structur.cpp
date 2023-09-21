#include <iostream>
struct inflatable // structure declaration
{
    char name[20];
    float volume;
    double price;
};
// One important matter related to the program is where to place the
// structure declaration.

int main()
{
    using namespace std;
    inflatable guest = {
        "Glorious Gloria", // name value
        1.88,              // volume value
        29.99              // price value
    };                     // guest is a structure variable of type inflatable
    // inflatable duck{"Daphne", 0.12, 9.98}; // can omit the = in C++11
    // inflatable mayor{}; // empty braces result in the individual members being set to 0.
    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99}; // pal is a second variable of type inflatable
    // static inflatable guest =
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}
