#include <cstdio>


void ref_type(int &x)
{
    printf("Ivalue reference %d\n", x);
}

void ref_type(int &&x)
{
    printf("Rvalue reference %d\n", x);
}

int main()
{
    auto x{1};
    ref_type(x);
    ref_type(2);
    ref_type(x+2);
}