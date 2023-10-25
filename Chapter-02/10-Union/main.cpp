#include <cstdio>


union Variant
{
    char string[10];
    int integer;
    double floating_point;
};

int main()
{
    Variant v;
    v.integer = 42;
    printf("the ultimate answer: %d\n", v.integer);

    v.floating_point = 2.718281;
    printf("Euler's number e: %f\n", v.floating_point);

    // The floating point assignment will overwrite the integer value and return
    // an unexpexted integer value because the referenced memory address has changed
    printf("A dumpster fire: %d\n", v.integer);
}
