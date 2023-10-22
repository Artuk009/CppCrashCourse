#include <cstddef>
#include <cstdio>


int main()
{
    // Initialize an array with 4 elements
    int arr[]{1,2,3,4};
    printf("Third element in array is %d.\n", arr[2]);

    // Change the value of the element  at the third index
    arr[2] = 100;
    printf("Third element in array is %d.\n\n", arr[2]);

    unsigned long maximum{0};
    unsigned long values[]{10,50,20,40,0};
    
    // Loop to parse through array and update the max value
    // Use size_t to accomadate any value
    for (size_t i=0; i < 5; i++)
    {
        // If the value is more than the max then that value becomes the new max
        if (values[i] > maximum) maximum = values[i];
    }

    printf("The maximum value is %lu\n\n", maximum);

    maximum = 0;

    // C++ for each loop
    // For value in the list of values
    for (unsigned long value : values)
    {
        // If the current value is more than the max, that value becomes the new max
        if (value > maximum) maximum = value;
    }

    printf("The maximum value is %lu\n\n", maximum);
}