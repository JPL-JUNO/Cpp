#include <iostream>
const int INCH_FT = 12;           // 1 ft = 12 inches
const double POUND_KG = 2.2;      // 1 kg = 2.2 pounds
const double METER_INCH = 0.0254; // 1 inch = 0.0254 meters
double bmi(int f, int i, int p);
int main()
{
    using namespace std;
    cout << "Enter your height in feet and inches.\n";
    cout << "feet: ";
    int ft, inch, pound;
    cin >> ft;
    cout << "inches: ";
    cin >> inch;
    cout << "Enter your weight in pounds.\n";
    cin >> pound;
    cout << "Your BMI: " << bmi(ft, inch, pound) << endl;
    return 0;
}
double bmi(int f, int i, int p)
{
    double mtr = (i + f * INCH_FT) * METER_INCH;
    double kg = p / POUND_KG;
    double bmi = kg / (mtr * mtr);
    return bmi;
}