// ex_1_13.cpp
#include <iostream>
int main()
{
    int sum = 0;
    // 1.9
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << "50到100的累加总和为：" << sum << std::endl;
    // 1.10
    for (int i = 10; i >= 0; --i)
        std::cout << i << " ";
    std::cout << std::endl;
    // 1.11
    std::cout << "请输入两个整数a,b(a > b)：";
    int a = 0, b = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; ++i)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
