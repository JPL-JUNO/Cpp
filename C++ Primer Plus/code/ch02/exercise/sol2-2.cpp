#include <iostream>
int converts(int);
int main()
{
    std::cout << "Please inter furlongs: ";
    int dist;
    std::cin >>
        dist;
    std::cout << dist << " furlongs = " << converts(dist) << " yards" << std::endl;
    return 0;
}
int converts(int f)
{
    return f * 220;
}