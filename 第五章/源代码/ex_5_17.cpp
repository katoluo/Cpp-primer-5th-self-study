// ex_5_17.cpp
#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v1 = { 0, 1, 1, 2, 4 };
    std::vector<int> v2 = { 0, 1, 1, 2, 3, 5, 8 };
    std::vector<int>::size_type sz
        = v1.size() > v2.size() ? v2.size() : v1.size();
    for (decltype(v1.size()) i = 0; i != sz; ++i) {
        if (v1[i] != v2[i]) {
            std::cout << "假" << std::endl;
            return 0;
        }
    }
    std::cout << "真" << std::endl;
    return 0;
}
