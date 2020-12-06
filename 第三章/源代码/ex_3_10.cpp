// ex_3_10.cpp
#include <iostream>
#include <string>
#include <cctype>
int main()
{
    std::string str;
    std::cout << "输入一个包含标点符号的字符串：" ;
    std::cin >> str;
    std::string str2;
    for (decltype(str.size()) i = 0; i != str.size(); ++i) {
        if (!ispunct(str[i]))
            str2 += str[i];
    }
    std::cout << str2 << std::endl;
    return 0;
}
