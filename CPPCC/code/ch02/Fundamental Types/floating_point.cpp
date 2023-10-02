#include <cstdio>
int main()
{
    float a = 0.1F;      // If you need single precision, use an f or F suffix;
    double b = .2;       // Floating-point literals are double precision by default.
    long double c = .3L; // for extended precision, use l or L
    double plancks_constant = 6.62607004e-34;

    // Floating-Point Format Specifiers
    double an = 6.0221409e23;
    // The format specifier %f displays a float with decimal digits,
    // whereas %e displays the same number in scientific notation.
    // You can let printf decide which of these two to use with the %g format specifier
    printf("Avogadro's Number: %le %lf %lg \n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts'Platform: %e %f %g\n", hp, hp, hp);
}