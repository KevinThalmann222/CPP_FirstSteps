#include <iostream>

// and: &&
// or: ||
// equal: ==
// not equal: !=
// <, >, >=, <=
// modulo
// 8 % 2 = 0 -> 8/2 = int 4; 4 * 2 == 8
// 9 % 2 = 1 -> 9/2 = int 4; 4 * 2 =! 9

int main()
{
    unsigned int number;
    std::cout << "Please enter a number : ";
    std::cin >> number;

    if (number >= 0 && number <= 10)
    {
        if (number == 4)
        {
            std::cout << "NICE" << std::endl;
        }
        else if (number % 2 == 0)
        {
            std::cout << "won Wooden spoon" << std::endl;
        }
        else
        {
            std::cout << number << " is the wrong number" << std::endl;
        }
    }
    else
    {
        std::cout << "You must enter a number between [0, 10]" << std::endl;
    }

    return 0;
}
