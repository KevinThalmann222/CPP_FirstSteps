#include <iostream>

int main()
{
    // bool check1 = false; // 0
    // bool check2 = true;  // 1
    int number;

    std::cout << "Number: ";
    std::cin >> number;

    bool check3 = (number >= 0 && number <= 10);
    std::cout << std::boolalpha << check3 << std::endl;

    bool check4 = !(number >= 0 && number <= 10);
    std::cout << std::boolalpha << check4 << std::endl;

    return 0;
}
