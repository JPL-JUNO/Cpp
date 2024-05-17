#include <iostream>
int main()
{
    // 定义一个枚举
    enum Direction
    {
        North,
        Northeast,
        East,
        Southeast,
        South,
        Southwest,
        West,
        Northwest
    };
    // 创建一个可用于存储这 8 个枚举常量之一的变量
    Direction heading;

    heading = Southeast;
    std::cout << "Moving " << heading << std::endl;

    return 0;
}