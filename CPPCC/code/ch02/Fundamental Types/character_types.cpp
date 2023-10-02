#include <cstdio>
int main()
{
    char x = 'M';     // The printf format specifier for char is %c.
    wchar_t y = L'Z'; // The wchar_t format specifier is %lc.
    printf("Windows binaries start with %c%lc.\n", x, y);
}