#include <cstdio>
int main()
{
    char alphabet[27];
    // declare a char array of length 27 to hold the 26 English letters
    // plus a null terminator
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 97;
    }
    // To make alphabet a null-terminated string
    alphabet[26] = 0;
    // maybe can store other value, but where is the value NULL?
    printf("%s\n", alphabet);

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 65;
    }
    printf("%s\n", alphabet);
    return 0;
}