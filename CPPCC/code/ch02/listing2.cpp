#include <cstdio>
int main()
{
    unsigned int a = 3669732608;
    // the hexadecimal format specifier %x
    printf("Yabba %x!\n", a);
    unsigned int b = 69;
    // unsigned integer %u
    // octal integer %o
    printf("There are %u, %o leaves here.\n", b, b);
    return 0;
}

// this line doesn't compile because 9 is not an octal digit
// int mit_zip_code = 02139;
// be careful, when you're hardcoding ZIP codes
// eliminate leading zeros on decimal literals,
// otherwise, they'll cease to be decimal