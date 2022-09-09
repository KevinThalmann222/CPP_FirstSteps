#include <iostream>

int main()
{
    unsigned int max_value;
    unsigned int min_value;

    std::cout << "Enter min. Value: ";
    std::cin >> min_value;
    std::cout << "Enter max. Value: ";
    std::cin >> max_value;

    for (int number = min_value; number <= max_value; number++)
    {
        if (number <= 0)
        {
            continue;
        }
        bool prime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime == true)
        {
            std::cout << number << " is a primevalue" << std::endl;
        }
    }

    return 0;
}
