#include <iostream>

int main()
{
    int number_attempts;
    std::cout << "Number of Games : ";
    std::cin >> number_attempts;

    for (int i = 0; i <= number_attempts - 1; i++)
    {
        unsigned int number;
        std::cout << "Please enter a number : ";
        std::cin >> number;
        std::cout << "Gameround: " << i + 1 << std::endl;


        if (number >= 0 && number <= 10)
        {
            if (i == number_attempts)
            {
                std::cout << "GAMEOVER" << std::endl;
                break;
            }
            else if (number == 4)
            {
                std::cout << "NICE" << std::endl;
                break;
            }
            else if (number % 2 == 0)
            {
                std::cout << "won Wooden spoon" << std::endl;
                break;
            }
            else
            {
                std::cout << number << " is the wrong number" << std::endl;
                std::cout << "you have only " << number_attempts - i << " tries left" << std::endl;
                std::cout << "---------------------------------------" << std::endl;
            }
        }
        else
        {
            std::cout << "You must enter a number between [0, 10]" << std::endl;
        }
    }
    return 0;
}
