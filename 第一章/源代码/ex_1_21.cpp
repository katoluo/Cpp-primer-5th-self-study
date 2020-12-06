// ex_1_21.cpp
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item a, b;
    std::cin >> a >> b;
    if (a.isbn() == b.isbn())
        std::cout << a + b << std::endl;
    else
        std::cerr << "Different ISBN." << std::endl;
    return 0;
}
