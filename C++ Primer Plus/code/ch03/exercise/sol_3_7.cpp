#include <iostream>
int main()
{
    using namespace std;
    const double LITER_GAL = 3.875;
    const double MIL_KM = 62.14;
    cout << "Enter gasoline consumption (liters/100 kilometers): ";
    double consume;
    cin >> consume;
    int consume_us = MIL_KM / (consume / LITER_GAL);
    cout << "Your consumption = " << consume_us << " miles/gallon\n";
    return 0;
}