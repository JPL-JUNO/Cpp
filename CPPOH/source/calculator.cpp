#include <iostream>
int add(int x, int y)
{
    // 一段行注释
    std::cout << "Running calculator ...\n"
              << "The sum is ";
    return x + y;
}
int main()
{
    /*一段
    巴拉巴拉的块注释*/
    std::cout << "What is 867 + 5309?\n";
    std::cout << add(867, 5309) << "\n\n";
    std::cout << "What is 777 + 9311?\n";
    std::cout << add(777, 9311) << "\n";
}