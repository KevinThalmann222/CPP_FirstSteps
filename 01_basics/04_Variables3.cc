#include <iostream>
// ------------------------------------
// Integers
// ------------------------------------
// Ganze Zahlen      [-1000 ... +1000]
// Natürliche Zahlen [0 ... 1000]

// char
// short
// int
// long
// ------------------------------------
// Floats
// ------------------------------------
// Rationale Zahlen  [0.1, 0.11, 0.111]
// float
// double
// Unterschiedliche Genauigkeit
// ------------------------------------
// Boolean
// ------------------------------------
// ansigned -> Ohne Vorzeichen

int main()
{
    // 1 Byte = 8bit
    bool my_value0 = true; // false
    // 1 Byte = 8bit -> 2^8
    char my_value1 = 10;
    // 2 Byte = 16bit -> 2^16
    short my_value2 = 42;
    // 4 Byte = 32bit -> 2^32
    int my_value3 = 22;
    // 4 Byte = 32bit -> 2^32
    float my_value4 = 59.0f; // f macht aus double ein "echten" float
    // 8 Byte = 64bit -> 2^64
    double my_value5 = 13.0;

    return 0;
}
