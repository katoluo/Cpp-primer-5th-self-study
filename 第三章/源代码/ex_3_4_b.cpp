// ex_3_4_b.cpp
#include <iostream>
#include <string>
int main()
{
    std::string str1, str2;
    std::cin >> str1 >> str2;
    if (str1.size() == str2.size())
        std::cout << "str1和str2的长度相等" << std::endl;
    else if (str1.size() > str2.size())
        std::cout << str1 << std::endl;
    else 
        std::cout << str2 << std::endl;
    return 0;
}
