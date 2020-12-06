// ex_1_9.cpp
#include <iostream>
int main()
{
    int sum = 0, val = 50;
    while (val <= 100)
        sum += val++;
    std::cout << "50到100的整数累加和为：" << sum << std::endl;
    return 0;
}
