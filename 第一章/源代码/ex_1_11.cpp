// ex_1_11.cpp
#include <iostream>
int main()
{
    std::cout << "请输入两个整数：";
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;
    int max = val1 > val2 ? val1 : val2;
    int min = val1 < val2 ? val1 : val2;
    while (min <= max)
        std::cout << min++ << " ";
    std::cout << std::endl;
    return 0;
}
