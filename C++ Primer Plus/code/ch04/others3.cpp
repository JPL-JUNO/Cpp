#include <iostream>
#include <string>
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar"; // create an initialized array
    string str1;
    string str2 = "panther";
    // charr1 = charr2; // INVALID, no array assignment
    str1 = str2; // VALID, object assignment ok

    string str3;
    str3 = str1 + str2;
    str1 += str2;

    wchar_t title[] = L"Chief Astrogator";  // w_char string
    char16_t name[] = u"Felonia Ripova";    // char_16 string
    char32_t car[] = U"Humber Super Snipe"; // char_32 string

    cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';

    // So a raw string beginning with R"+* ( must terminate with )+*".
    cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;
    // R"+*[some raw string]+*"
}