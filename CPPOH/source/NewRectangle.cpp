#include <iostream>
int main()
{
    typedef unsigned short UNSHORT;
    UNSHORT width = 5;
    UNSHORT length = 10;
    // 将两个USHORT变量相
    // 乘时，结果可能超出unsigned short的取值范围。
    UNSHORT area = width * length;

    std::cout << "Width: " << width << "\n";
    std::cout << "Length: " << length << "\n";
    std::cout << "Area: " << area << "\n";
    std::cout return 0;
}
