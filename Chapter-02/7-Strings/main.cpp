#include <cstdio>


int main()
{
    // One way of concatenating two strings
    char house[]{"a house of gold."};
    printf("A book holds %s\n\n", house);

    char alphabet[27];
    for (int i = 0; i<26; i++)
    {
        // Set elements to lowercase letters using ascii
        alphabet[i] = i + 97;
    }

    // Make null terminated
    alphabet[26] = 0;
    printf("%s\n", alphabet);

    for (int i = 0; i < 26; i++)
    {
        // Sets elements to uppercase letters using ascii
        alphabet[i] = i + 65;
    }

    printf("%s\n", alphabet);
}