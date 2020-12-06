// ex_1_16.cpp
#include <iostream>
int main()
{
    int val = 0, sum = 0;
    std::cout << "输入一组整数序列(q表示结束)：";
    while (std::cin >> val)
        sum += val;
    std::cout << "它们的总和为：" << sum << std::endl;
    return 0;
}
