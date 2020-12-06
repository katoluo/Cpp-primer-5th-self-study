// ex_3_23.cpp
#include <iostream>
#include <iterator>
#include <vector>
int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Before:";
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;
    for (auto it = v.begin(); it != v.end(); ++it)
        *it *= 2;
    std::cout << "After:";
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
