#include <iostream>


int main()
{
    int user_int;
    std::cout << "Number : ";
    std::cin >> user_int;

    if (user_int < 0)
    {
        user_int *= -1;
    }
    std::cout << "the absolute value is " << user_int << std::endl;
    return 0;
}
