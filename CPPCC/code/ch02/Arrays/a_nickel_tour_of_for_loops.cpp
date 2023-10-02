#include <cstddef>
#include <cstdio>

int main()
{
    unsigned long maximum = 0;
    unsigned long values[] = {10, 50, 20, 40, 0};

    for (size_t i = 0; i < 5; i++)
    {
        if (values[i] > maximum)
            maximum = values[i];
    }
    printf("The maximum value is %lu", maximum);
}
/*
for(init-statement; conditional; iteration-statement) {
--snip--
}

The init statement executes before the first iteration executes,
so you can initialize variables used in the for loop.
The conditional is an expression that is evaluated before each iteration.
If it evaluates to true, iteration proceeds.
If false, the for loop terminates. The iteration statement executes after each iteration,
which is useful in situations where you must increment a variable to cover a range of values.
*/