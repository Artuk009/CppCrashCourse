#include <cstdio>

/* 
* Enable debugging in the console:
*   Add -g to the compile command:
*   g++ -std=c++20 -o <executable_name> <file_name>.cpp -g 
*
*   Open debugger:
*   gdb <executable_name>
*/
int step_function(int x)
{
    int result = 0;

    if (x < 0)
    {
        result -= 1;
    }
    else if (x > 0)
    {
        result = 1;
    }

    return result;
}

int main()
{
    // Side Note: Initialize objects with {} change value with =
    int num1{42};
    int num2{0};
    int num3{-32767};
    
    // Set result to returned value of the function
    int result1{step_function(num1)};
    int result2{step_function(num2)};
    int result3{step_function(num3)};

    // Output the function with formatting
    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);

    return 0;
}