// ex_3_14.cpp
#include <iostream>
#include <vector>
int main()
{
    std::vector<int> iv;
    int val = 0;
    while (std::cin >> val)
        iv.push_back(val);
    for (auto i : iv)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
