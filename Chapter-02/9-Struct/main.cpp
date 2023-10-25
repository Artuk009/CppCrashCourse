#include <cstdio>


struct Book
{
    char name[256];
    int year;
    int pages;
    bool hardcaover;
};

int main()
{
    Book neurmancer;
    neurmancer.pages = 271;
    printf("Neuromancer has %d pages.\n", neurmancer.pages);

    return 0;
}
