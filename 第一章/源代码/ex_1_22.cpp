// ex_1_22.cpp
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item currVal, val;
    if (std::cin >> currVal) {
        while (std::cin >> val) {
            if (currVal.isbn() == val.isbn()) {
                currVal += val;
            }
            else {
                std::cout << currVal << std::endl;
                currVal =val;
            }
        } // while循环在此结束
        std::cout << currVal << std::endl;
    }
    else {
        std::cerr << "没有成功输入第一个数据。" << std::endl;
        return -1;
    }
    return 0;
}
