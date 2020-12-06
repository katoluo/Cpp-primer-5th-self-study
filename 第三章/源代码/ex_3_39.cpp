// ex_3_39.cpp
#include <iostream>
#include <string>
#include <cstring>
int main()
{
    std::string str1("Hello");
    std::string str2("HellO");
    if (str1 > str2) std::cout << str1 << " > " << str2 << std::endl;
    else if (str1 < str2) std::cout << str1 << " < " << str2 << std::endl;
    else std::cout << str1 << " == " << str2 << std::endl;
    
    const char ca1[] = "Hello";
    const char ca2[] = "HellO";
    auto res = strcmp(ca1, ca2);
    if (res > 0) std::cout << ca1 << " > " << ca2 << std::endl;
    else if (res < 0) std::cout << ca1 << " < " << ca2 << std::endl;
    else std::cout << ca1 << " == " << ca2 << std::endl;
    return 0;
}
