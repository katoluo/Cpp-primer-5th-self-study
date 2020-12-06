// ex_3_4_a.cpp
#include <iostream>
#include <string>
int main()
{
    std::string str1, str2;
    std::cin >> str1 >> str2;
    if (str1 == str2)
        std::cout << "str1等于str2" << std::endl;
    else if (str1 > str2)
        std::cout << str1 << std::endl;
    else
        std::cout << str2 << std::endl;
    return 0;
}
