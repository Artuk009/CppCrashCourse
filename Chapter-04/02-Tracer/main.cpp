#include <cstdio>


// Prints messages when variable is created and destroyed
struct Tracer
{
    // Constructor
    Tracer(const char* name) : name{name}
    {
        printf("%s constructed.\n", name);
    }
    // Destructor
    ~Tracer()
    {
        printf("%s destructed.\n", name);
    }

private:
    // Name Variable
    const char* const name;
};

static Tracer t1{ "Static Variable" };
thread_local Tracer t2{ "Thread-local variable"};

int main()
{
    const auto t2_ptr = &t2;
    printf("A\n");

    Tracer t3{ "Automatic Variable"};
    printf("B\n");

    const auto* t4 = new Tracer{ "Dynamic Variable" };
    printf("C\n");

    return 0;
}