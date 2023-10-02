/*
for(element-type element-name: array-name) {
--snip--
}
You can eliminate the iterator variable i by using a
range-based for loop. For certain objects like arrays,
for understands how to
iterate over the range of values within an object.
*/
#include <cstdio>
int main()
{
    unsigned long maximum = 0;
    unsigned long values[] = {10, 50, 20, 40, 0};
    for (unsigned long value : values)
    {
        if (value > maximum)
            maximum = value;
    }
    printf("The maximum value is %lu.", maximum);

    // Number of Elements in an Array
    short array[] = {104, 105, 32, 98, 105, 108, 108, 0};
    size_t n_elements = sizeof(array) / sizeof(short);
    return 0;
}