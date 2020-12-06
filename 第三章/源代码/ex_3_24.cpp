// ex_3_24.cpp
#include <iostream>
#include <iterator>
#include <vector>
int main()
{
    std::vector<int> v;
    for (int i = 0; std::cin >> i; v.push_back(i));
    std::cout << "相邻两数之和：";
    for (auto it = v.cbegin(); it != v.cend() - 1; ++it) {
        auto sum = *it + *(it + 1);
        std::cout << sum << " ";
    }
    std::cout << std::endl;
    //auto mid = v.size() & 01 ? (v.cbegin() + v.size()/2 + 1) : (v.cbegin() + v.size()/2);
    auto mid = v.cbegin() + v.size() / 2;
    std::cout << "头尾之和：";
    for (auto it = v.cbegin(); it <= mid; ++it) {
        if (it == mid) {
            if (v.size() & 01) {
                std::cout << *it * 2 << std::endl;
                break;
            }
        }
        auto sum = *it + *(v.cbegin() + (v.cend() - it -1));
        std::cout << sum << " ";
    }
    if ( !(v.size() & 01) )
      std::cout << std::endl;
    return 0;
}
