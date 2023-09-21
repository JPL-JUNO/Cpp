#include <iostream>
union one4all
// Union[int, float] in Python?
{
    int int_val;
    long long_val;
    double double_val;
};

/*
One use for a union is to save space when a data item can use two or more formats
but never simultaneously.
*/

struct widget
{
    char brand[20];
    int type;
    union id // format depends on widget type
    {
        long id_num;      // type 1 widgets
        char id_char[20]; // other widgets
    } id_val;
};
int main()
{
    using namespace std;
    one4all pail;
    /*
    pail can serve as an int variable on one occasion
    and as a double variable at another time.
    */
    pail.int_val = 15; // store an int
    cout << pail.int_val;
    pail.double_val = 1.38; // store a double, int value is lost
    cout << pail.double_val;

    widget prize;
    if (prize.type == 1) // use member name to indicate mode
        cin >> prize.id_val.id_num;
    else
        cin >> prize.id_val.id_char;
    return 0;
}