#include <iostream>

// for (zaehler_var; bedingung / vergleich ; step)
// for (int i = 0 ; i < 3 ; i+=1)

int main()
{
    for (int i = 0; i < 3; i += 1)
    {
        std::cout << i << std::endl;
    }

    // Increment i++ <=> i+=1
    // Decrement i-- <=> i-=1

    for (int i = 0; i < 3; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
