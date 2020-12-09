// ex_5_14.cpp
#include <iostream>
#include <string>
int main()
{
    std::string curStr; // 当前
    std::string preStr; // 上一个
    std::string maxStr;
    int max = 0;
    int count = 0;
    while (std::cin >> curStr) {
        if (curStr == preStr) {
          ++count;
          if (count > max) {
            max = count;
            maxStr = curStr;
          }
        }
        else {
          preStr = curStr;
          count = 1;
        }
    }
    if (max == 0) {
      std::cout << "没有连续复出现的词" << std::endl;
      return 0;
    }
    std::cout << maxStr << "连续出现了" << max << "次" << std::endl;
    return 0;
}
