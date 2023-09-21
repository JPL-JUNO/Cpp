#include <iostream>
struct widget
{
    char brand[20];
    int type;
    union // anonymous union
    {
        long id_num;      // type 1 widgets
        char id_char[20]; // other widgets
    };
};
int main()
{
    using namespace std;
    widget prize;
    if (prize.type == 1)
        cin >> prize.id_num;
    else
        cin >> prize.id_char;
    /*
    Because the union is anonymous, id_num and id_char are treated as two members of prize that share the same address.
    The need for an intermediate identifier id_val is eliminated.
    It is up to the programmer to keep track of which choice is active.
    */
    return 0;
}