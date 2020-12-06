// ex_3_8.cpp
#include <iostream>
#include <string>
int main()
{
    std::string str("This is a string");
    std::cout << "Initialization:" << str << std::endl;
    // while
    decltype(str.size()) count = 0;
    while (count != str.size())
        str[count++] = 'X';
    std::cout << "after while:" << str << std::endl;
    
    // for
    for (decltype(str.size()) i = 0; i != str.size(); ++i)
        str[i] = 'X';
    std::cout << "after for:" << str << std::endl;
    return 0;
}
