// ex_3_17.cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
int main()
{
    std::vector<std::string> v;
    for (std::string s; std::cin >> s; v.push_back(s));
    for (auto &i : v)
        for (auto &k : i)
            k = toupper(k);
    for (auto i : v)
        std::cout << i << std::endl;
    return 0;
}
