#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter distance in kilometers: ";
    float km, lt;
    cin >> km;
    cout << "Enter petrol in liters: ";
    cin >> lt;
    cout << "Gasoline consumption (liters per 100 kilometers): "
         << lt / km * 100 << " lt/100km" << endl;
}