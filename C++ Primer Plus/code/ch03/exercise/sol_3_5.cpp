#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter the world's population: ";
    long long world, us;
    cin >> world;
    cout << "Enter the population of the US: ";
    cin >> us;
    cout << us / world;
    // double pct = us / world * 100;
    // 0
    double pct = us * 100.0 / world;
    cout << "The population of the US is " << pct << "% of the world population.";
}
