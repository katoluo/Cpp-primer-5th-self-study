// ex_5_19.cpp
#include <iostream>
#include <string>
int main()
{
    do {
        std::string str1, str2;
        std::cout << "输入两个string:";
        std::cin >> str1 >> str2;
        if (str1.size() > str2.size()) std::cout << "较短的：" << str2 << std::endl;
        else if (str1.size() < str2.size()) std::cout << "较短的：" << str1 << std::endl;
        else std::cout << "一样短-。-" << std::endl;
    } while (std::cin);
    return 0;
}
