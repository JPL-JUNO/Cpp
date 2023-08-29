#include <iostream>
int main()
{
    using namespace std;
    const int MIN_DEG = 60; // 1 deg = 60 min
    const int SEC_MIN = 60; // 1 min = 60 deg
    cout << "Enter a latitude in degrees, minutes, and seconds:\nFirst, enter the degrees: ";
    int deg, min, sec;
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    double convert = deg + (min + double(sec) / SEC_MIN) / MIN_DEG;
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << convert << " degrees" << endl;
    return 0;
}