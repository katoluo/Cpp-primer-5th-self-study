// ex_3_15.cpp
#include <iostream>
#include <vector>
#include <string>
int main()
{
    std::vector<std::string> sv;
    for (std::string str; std::cin >> str; sv.push_back(str));
    for (const auto &i : sv)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
