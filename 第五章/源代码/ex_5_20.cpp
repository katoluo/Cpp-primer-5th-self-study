// ex_5_20.cpp
#include <iostream>
#include <string>
int main()
{
    std::string curStr, preStr;
    while (std::cin >> curStr)
      if (preStr == curStr) break; else preStr = curStr;
    if (std::cin.eof())
      std::cout << "没有任何单词是连续重复出现的" << std::endl;
    else
      std::cout << curStr << std::endl;
    return 0;
}
