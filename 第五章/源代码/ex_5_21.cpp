// ex_5_21.cpp
#include <iostream>
#include <string>
#include <cstring>
int main()
{
    std::string curStr, preStr;
    while (std::cin >> curStr)
        if (preStr == curStr) {
          if (isupper(curStr[0])) break;
          else continue;
        } 
        else preStr = curStr;
    if (std::cin.eof()) std::cout << "没有任何单词是连续重复出现的" << std::endl;
    else std::cout << curStr << std::endl;
    return 0;
}
