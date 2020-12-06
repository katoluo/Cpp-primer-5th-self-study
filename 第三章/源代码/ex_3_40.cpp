// ex_3_40.cpp
#include <iostream>
#include <cstring>
#include <iterator>
int main()
{
    constexpr int size = 10;
    const char ca1[size] = "Hello";
    const char ca2[size] = "katoluo";
    char res[2 * size];
    strcpy(res, ca1);
    strcat(res, ca2);
    std::cout << res << std::endl;
    return 0;
}
