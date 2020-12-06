// ex_4_21.cpp
#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v{ 1, 2, 3, 4, 5 };
    for (auto i : v) std::cout << i << " ";
    std::cout << std::endl;
    for (auto &i : v) i = i & 01 ? i * 2 : i;
    for (auto i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
