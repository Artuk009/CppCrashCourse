#include <cstddef>
#include <cstdio>


int main() 
{
    // Size of char: 1 byte
    size_t size_c = sizeof(char);
    printf("char: %zd\n", size_c);

    // Size of short: 2 bytes
    size_t size_s = sizeof(short);
    printf("short: %zd\n", size_s);

    // Size of int: 4 bytes
    size_t size_i = sizeof(int);
    printf("int: %zd\n", size_i);

    // Size of long: 4 bytes on 32-bit
    // Size of long: 8 bytes on 64-bit
    size_t size_l = sizeof(long);
    printf("long: %zd\n", size_l);

    // Size of long long: 8 bytes
    size_t size_ll = sizeof(long long);
    printf("long long: %zd\n", size_ll);
}