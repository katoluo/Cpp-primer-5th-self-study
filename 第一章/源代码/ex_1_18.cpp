// ex_1_18.cpp
#include <iostream>
int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << "出现了" << cnt << "次" << std::endl;
                currVal = val;
                cnt = 1;
            }
        } // while循环结束
        std::cout << currVal << "出现了" << cnt << "次" << std::endl;
    } // 最外层的if语句在这里结束
    return 0;
}
