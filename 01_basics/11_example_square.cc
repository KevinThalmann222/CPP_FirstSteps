#include <iostream>

// --------- Aufgabe ---------
// 1.) User-Input: side lenth of a square.
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

int main()
{
    int side_lenth = 0;
    int area;
    int perimeter;

    std::cout << "Choose side lenth of a square : ";
    std::cin >> side_lenth;
    std::cout << "The side lenth : " << side_lenth << "mm" << std::endl;

    area = side_lenth * side_lenth;
    perimeter = 4 * side_lenth;

    std::cout << "The area is : " << area << "mm²" << std::endl;
    std::cout << "The perimeter is : " << perimeter << "mm" << std::endl;

    return 0;
}
