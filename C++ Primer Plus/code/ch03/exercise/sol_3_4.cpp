#include <iostream>
const int SEC_MIN = 60;
const int MIN_HOUR = 60;
const int HOUR_DAY = 24;
int main()
{
    using namespace std;
    cout << "Enter the number of seconds: ";
    long sec, temp;
    cin >> sec;
    temp = sec;
    int second = temp % SEC_MIN;
    temp /= SEC_MIN;
    int minutes = temp % MIN_HOUR;
    temp /= MIN_HOUR;
    int hour = temp % HOUR_DAY;
    int day = temp / HOUR_DAY;
    cout << sec << " seconds = " << day << " days, "
         << hour << " hours, " << minutes << " minutes, " << second << " seconds." << endl;
    return 0;
}