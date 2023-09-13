#include <cstdio>
int main()
{
    unsigned short a = 0b10101010;
    printf("%hu\n", a); // binary
    int b = 0123;
    printf("%d\n", b); // octal
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d); // hexadecimal
}