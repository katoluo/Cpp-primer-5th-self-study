// ex_3_35.cpp
#include <iostream>
int main()
{
    int ia[5] = { 1, 2, 3, 4, 5};
    std::cout << "Before:";
    for (auto i : ia)
        std::cout << i << " ";
    std::cout << std::endl;
    for (auto beg = std::begin(ia); beg != std::end(ia); ++beg)
        *beg = 0;
    std::cout << "After:";
    for (auto i : ia)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
